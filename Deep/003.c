/*
Problem - Convert an infix expression into its equivalent postfix notation.
Author - Abhinav Deep
Date - June 23, 2021
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stack.c"

int isOperator(char);
int isOperand(char);
int isValidInfix(char[]);

int main(){
	
	char Q[100];
	printf("\n----------------------------------------------------------------------\n");
	printf("A valid infix expression must have\n\t 1. All its brackets balanced.\n\t 2. An operator is in between two operands.\n\t 3. Use only simple parenthesis '(' ')' for bracket representation.\n\t 4. Don't use spaces between operators/operands.\n");
	printf("For example: A+(B*C-(D/E^F)*G)*H is a valid infix expression.\n");
	printf("\n----------------------------------------------------------------------\n");
	printf("Enter infix expression : ");
	scanf("%s",Q);
	printf("\n----------------------------------------------------------------------\n");
	/*
	if(!isValidInfix(Q)){
		printf("Invalid infix expresssion!\n");
		return 0;
	}
	*/
	int l = strlen(Q);
	Q[l] = ')';
	Q[l+1] = '\0';

	Stack stk;
	initialise(&stk);
	push(&stk,'(');
	char P[100];
	int k=0;

	printf("\nSymbol scanned\t\t\tStack\n");
	for(int i=0;i<=l;i++){
		char symbolScanned = Q[i];
		if(isOperand(symbolScanned)){
			P[k++] = symbolScanned;
		}
		else if( isOperator(symbolScanned)){
            if(symbolScanned == '+' || symbolScanned == '-'){
                while(stk.top && peek(&stk) != '('){
                    char temp = peek(&stk);
					P[k++] = temp;
					pop(&stk);
                }
            }
			else if(symbolScanned == '/' || symbolScanned == '*' || symbolScanned == '%'){
				while(stk.top && peek(&stk) != '(' && peek(&stk) != '+' && peek(&stk) != '-'){
					char temp = peek(&stk);
					P[k++] = temp;
					pop(&stk);
				}
			}
			else{
				;
			}
			push(&stk, symbolScanned);
		}
		else if(symbolScanned == '('){
			push(&stk, symbolScanned);
		}
		else{
			while(peek(&stk) != '('){
				char temp = peek(&stk);
				P[k++] = temp;
				pop(&stk);
			}
			pop(&stk);
		}
		printf("%c\t\t\t\t",symbolScanned);
		displayReverse(&stk);
		printf("\n");
	}
	P[k] = '\0';
	printf("\nPostfix = %s\n\n",P);
	return 0;
}

int isOperator(char c){
	if(c == '+' || c == '-' ||  c == '*' || c == '/' || c == '%' || c == '^'){
		return 1;
	}
	return 0;
}

int isOperand(char c){
	if((c >= 65 && c <= 90) || (c >= 97 && c<= 122) || (c >=48 && c<= 57)){
		return 1;
	}
	return 0;
}
