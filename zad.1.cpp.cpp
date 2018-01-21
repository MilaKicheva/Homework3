#include<iostream>
using namespace std;
#include<string>


char toUpper(char letter)
{
    if ( (letter >='a') && (letter <='z'))
        return letter - 'a' + 'A' ;
    else
        return letter;
}

int main () {
    char letter=0;
    cin>>letter;
    toUpper(letter);
    cout<<toUpper(letter)<<endl;

return 0;
}
