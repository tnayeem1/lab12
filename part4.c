#include <stdio.h> 
#include <string.h> 
#include <time.h> 

//structure to hold data related user
struct user 
{ 
char fname[30]; 
char lname[30]; 
int dd,mm,yy; 
char sex[6]; 
int pdd,pmm,pyy; 
int dnumber; 
char vaccinetype[30]; 
char zip[6]; 
}; 

//function to get age between two dates 
int getage(int pdate, int pmonth, int pyear, int bdate, int bmonth, int byear) { 
int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 
if (bdate > pdate) { 
pdate = pdate + month[bmonth - 1]; 
pmonth = pmonth - 1; 
} 
if (bmonth > pmonth) { 
pyear = pyear - 1; 
pmonth = pmonth + 12; 
} 
int final_date = pdate - bdate; 
int final_month = pmonth - bmonth; 
int final_year = pyear - byear;

return final_year; 
} 
int main(void) { 
struct user u1[10]; 
int choice; 
char id[8]; 
char age[2]; 
int i; 

for(i = 0;i<10;i++){ 
printf("Enter detail for %d person : \n",i+1); 
//prompt the user to enter first name 
printf("Enter First Name : ");
scanf("%s", u1[i].fname);
//prompt the user to enter last name
printf("Enter Last Name : ");
scanf("%s", u1[i].lname); 
//prompt the user to enter birthdate
printf("Enter Birth Date(mm/dd/yyyy) : "); 
scanf("%d/%d/%d",&u1[i].dd,&u1[i].mm,&u1[i].yy); 
//prompt the user to choose sex
printf("Choose sex : \n"); 
printf("\t1. Male\n"); 
printf("\t2. Female\n\tEnter choice : "); 
scanf("%d", &choice); 

//check choice is valid or not
if(choice == 1) 
strcpy(u1[i].sex, "Male"); 
else if(choice == 2) 
strcpy(u1[i].sex, "Female"); 
else{ 
printf("Please choose valid sex.\n");
return 1;
 } 

//prompt the user to enter dose number 
 printf("Enter Dose Number : ");
 scanf("%d", &u1[i].dnumber);
 if(!(u1[i].dnumber == 1 || u1[i].dnumber == 2)){ 
 printf("Please enter valid dose number.\n"); 
 return 1; 
 } 

 //check if second dose then prompt the user for previous dose date
 if(u1[i].dnumber == 2){ 
 printf("Enter Previous Dose Date(mm/dd/yyyy) : ");
 scanf("%d/%d/%d",&u1[i].dd,&u1[i].mm,&u1[i].yy); 
 } 

 //prompt the user to choose vaccine type 
 printf("Choose type of vaccine : \n");
 printf("\t1. Pfizer\n"); 
 printf("\t2. Moderna\n"); 
 printf("\t3. Johnson&Johnson\n\tEnter choice : "); 
 scanf("%d", &choice); 

 //check that choossen type is valid or not 
 if(choice == 1)
 strcpy(u1[i].vaccinetype, "Pfizer");
 else if(choice == 2)
 strcpy(u1[i].vaccinetype, "Moderna"); 
 else if(choice == 3)
 strcpy(u1[i].vaccinetype, "Johnson&Johnson"); 
 else{ 
 printf("Please choose valid type of vaccine.\n"); 
 return 1; 
 } 

 //prompt the user to enter zip
 printf("Enter Zip : "); 
 scanf("%s", u1[i].zip); 

//copy first letter of first name and last name 
 id[0] = u1[i].fname[0]; 
 id[1] = u1[i].lname[0]; 

 //get current date 
 time_t t = time(NULL); 
 struct tm tm = *localtime(&t); 

 //calculate age by calling function getage() 
 int ageTemp = getage( tm.tm_mday,tm.tm_mon + 1,tm.tm_year + 1900,u1[i].dd,u1[i].mm,u1[i].yy); 

 //copy age 
 id[2] = (char)(ageTemp/10+ '0'); 
 id[3] = (char)(ageTemp%10+ '0'); 

 //copy first letter of vaccinetype 
 id[4] = u1[i].vaccinetype[0]; 

 //copy last 3 digit or zip 
 id[5] = u1[i].zip[3]; 
 id[6] = u1[i].zip[4]; 
 id[7] = u1[i].zip[5]; 

 //display details 
 printf("\nFirst Name : %s\n",u1[i].fname); 
 printf("Last Name : %s\n",u1[i].lname); 
 printf("Birthdate : %d/%d/%d\n",u1[i].mm,u1[i].dd,u1[i].yy); 
 printf("Sex : %s\n",u1[i].sex);
 printf("Dose Number : %d\n",u1[i].dnumber);
 if(u1[i].dnumber == 2){
 printf("Previous Dose Date : %d/%d/%d\n",u1[i].pmm,u1[i].pdd,u1[i].pyy); 
 } 
 printf("Vaccine type : %s\n",u1[i].vaccinetype); 
 printf("Zip : %s\n",u1[i].zip);
 printf("Code : %s\n\n",id); 
 } 
 return 0; 
 }

