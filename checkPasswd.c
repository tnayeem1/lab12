#include<stdio.h>
#include<string.h>

int main(){//main
  
   char pass[20];//declare variables
   printf("Enter password :");//function call
   scanf("%s", pass);
   int deduction = 0;
   int i, found;

   found = 0;//function
   for (i = 0; pass[i] != '\0'; i++){
       if (pass[i] >= 'a' && pass[i] <= 'z'){
          found = 1;
       }
   }
   if (found == 0)//function
      deduction = deduction + 20;
   found = 0;
   for (i = 0; pass[i] != '\0'; i++){
       if (pass[i] >= 'A' && pass[i] <= 'Z'){
          found = 1;
       }
   }
   if (found == 0)//function
      deduction = deduction + 20;
   found = 0;
   for (i = 0; pass[i] != '\0'; i++){
       if (pass[i] >= '0' && pass[i] <= '9'){
          found = 1;
       }

   }
   if (found == 0)
      deduction = deduction + 20;
   if (deduction > 30)
      printf("It is unsafe\n");
   else
     printf("It is unsafe\n");


   for (i = 0; pass[i+2] != '\0'; i++){
       if ((pass[i+2] - pass[i+1] == 1) && (pass[i+1] - pass[i] == 1)){
          found = 1;
       }
   }
   if (found == 1)
      printf(" deduction : %d\n",20);

}

