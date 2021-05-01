#include <stdio.h>
void Counting(char *str,int arr[])
{
int i;
for(i=0;i<strlen(str);i++)
{
if(str[i]>64&&str[i]<91)
str[i]=str[i]+32;
}
for(i=0;i<strlen(str);i++)
{
if(str[i]>96&&str[i]<123)
arr[str[i]-97]++;
}
}
int main()
{
int i,arr[26]={0},index,Max;
char str[1000];

printf("Enter string: ");
gets(str);
Counting(str,arr);
Max=arr[0];
for(i=1;i<26;i++)
{
if(arr[i]>Max)
{
Max=arr[i];
index=i;
}
}
printf("The Most frequent letter is %c. It appeared %d times.",(char)index+97,arr[index]);
}

