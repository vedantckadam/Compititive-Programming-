#include<iostream>
using namespace std;

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if((cValue == 'a') || (cValue == 'e') ||
       (cValue == 'i') || (cValue == 'o') ||
       (cValue == 'u') || (cValue == 'A') ||
       (cValue == 'E') || (cValue == 'I') ||
       (cValue == 'O') || (cValue == 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    cout << "Enter character : ";
    cin >> cValue;

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }

    return 0;
}