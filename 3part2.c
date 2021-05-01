#include <stdio.h>
#include <ctype.h>
#include <string.h>
int isLinePalindrome(char *line)
{
    int length = strlen(line);

    int i = 0, j = length-1;
    while(i <= j)//whole logic inside the while loop
    {
    printf("%c\t%c\n", *(line + i), *(line + j));
    if(!isalpha(*(line + i)))
    i++;                            
    else if(!isalpha(*(line + j)))
    j--;
    else if(tolower(*(line + i)) != tolower(*(line + j)))
    return 0;
    else
    {
    i++;
    j--;  
    }  
    }
    return 1;
    }
    int main()//main
    {
    char line[50];
    printf("Enter a message: ");//printf function
    scanf("%[^\n]s", line);
    printf("You entered %s\n", line);
    if(isLinePalindrome(line))
    printf("Palindrome\n");//if condition meets then it's a palindrome
    else //else it's not a palindrome
    printf("Not a palindrome\n");
}

