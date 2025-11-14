// Q1. Create a C program to check if a character entered by the user is a vowel or consonant using a switch statement.

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter any single Alphebet :");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'a': case 'A':
    case 'e': case 'E':
    case 'i': case 'I':
    case 'o': case 'O':
    case 'u': case 'U':
        printf("This is a Vowel\n");
        break;
    default:
        if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
        {
            printf("This is a Consonant\n");
        }
        else{
            printf("invalid");
        }
        break;
    }

    return 0;
}