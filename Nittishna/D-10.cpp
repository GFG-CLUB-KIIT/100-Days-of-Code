#include<bits/stdc++.h>
using namespace std;

string NUMBERS = "1234567890";
string LETTERS = "abcdefghjiklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
string SPECIAL = "!@#$%^&*?/";

bool checkContains(string password, string collection){
     for (char c : password){
         for (char n : collection){
             if ( c== n){
                 return true;
             }
         }
     }
     return false;
}

bool hasNumbers(string password){
    return checkContains(password, NUMBERS);
}

bool hasLetters(string password){
    return checkContains(password, LETTERS);
}

bool hasSpecialCharacters(string password){
    return checkContains(password,SPECIAL);
}

bool isLongEnough(string password){
    int MIN_PASSWORD_LENGTH = 8;
    return password.size() >= MIN_PASSWORD_LENGTH;
}

bool isVeryStrong(string password){
    return hasNumbers (password) && hasLetters(password) 
                       && hasSpecialCharacters(password) && isLongEnough( password);
}

int getCount( string password, string collection){
    int count = 0;
    for( char c : password){
        for ( char u : collection){
            if ( c== u){
                count++;
            }
        }
    }
    return count;
}

bool isStrong(string password){
    int numberCount = getCount(password, "1234567890");
    int letterCount = getCount(password, "");
    return hasNumbers (password) && hasLetters(password) && isLongEnough( password);
}

bool isWeak(string password){
    int letterCount = getCount(password, LETTERS);
    return ( letterCount == password.size()) && (!isLongEnough(password));
}

bool isVeryWeak( string password){
    int numberCount = getCount( password, NUMBERS);
    return (numberCount == password.size()) && (!isLongEnough(password));
}

string getPasswordStrength(string password){
        if( isVeryStrong (password)){
            return "very strong";
        }
    
        else if (isStrong(password)){
            return "strong";

        }
        else if( isWeak(password)){
            return "weak";
        }

        else if ( isVeryWeak(password)){
            return "very weak";
        }

        else {
            return "idk pwd";
        }
}

int main(int argc, char * argv[] ){
    
    if(argc < 2){
        cout << "invalid input" << endl;
        return 0;
    }

    cout << "The password " << argv[1] << "is a " << getPasswordStrength(argv[1]) << "." << endl;
    return 0;
}