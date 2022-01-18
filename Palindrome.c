#include <stdio.h>
#include <string.h>
int isPalindrome(char num[])
{
    char numCopy[4];
    int value;
    strcpy(numCopy, num);
    strrev(numCopy);
    value = strcmp(numCopy, num);
    if (value == 0)
    {
        printf("This number is Palindrome\n");
    }
    else
    {
        printf("This number is not a Palindrome\n");
    }
}

int main()
{

    char number[4];
    printf("\t\tPalindrome Checker\n\t\t------------------\n");
    printf("Enter the number to check if it is Palindrome or not:\n");
    scanf("%s", &number);
    isPalindrome(number);

    return 0;
}