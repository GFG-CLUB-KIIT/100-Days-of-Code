#include <bits/stdc++.h>
using namespace std;

int compare (const void *a, const void * b)
{ return ( *(char *)a - *(char *)b ); }

void swap (char* a, char* b)
{
	char t = *a;
	*a = *b;
	*b = t;
}


int head (char str[], char first, int l, int h)
{
	
	int headIndex = l;

	
	for (int i = l+1; i <= h; i++)
	if (str[i] > first && str[i] < str[headIndex])
			headIndex = i;

	return headIndex;
}


void Permutation ( char str[] )
{
	
	int size = strlen(str);

	
	qsort( str, size, sizeof( str[0] ), compare );

	
	bool isFinished = false;
	while ( ! isFinished )
	{
		
		cout << str << endl;

		
		int i;
		for ( i = size - 2; i >= 0; --i )
		if (str[i] < str[i+1])
			break;

		
		if ( i == -1 )
			isFinished = true;
		else
		{
			
			int headIndex = head( str, str[i], i + 1, size - 1 );

			
			swap( &str[i], &str[headIndex] );

			
			qsort( str + i + 1, size - i - 1, sizeof(str[0]), compare );
		}
	}
}


int main()
{
	char str[] = "ABC";
	Permutation( str );
	return 0;
}


