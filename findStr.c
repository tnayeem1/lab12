#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

char input[21],smallest_word[21],largest_word[21];

printf("Enter Word : ");
scanf("%s",input);
strcpy(smallest_word,input);
strcpy(largest_word,input);

while(strlen(input)!=4)
{

if(strcmp(input,smallest_word)<0)
strcpy(smallest_word,input);

else if (strcmp(input,largest_word)>0)
strcpy(largest_word,input);

printf("Enter Word : ");
scanf("%s",input);
}

printf("Smallest word : %s\n",smallest_word);
printf("Largest word : %s\n",largest_word);

return 0;
}

