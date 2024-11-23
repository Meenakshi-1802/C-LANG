//Conditional statements
    //(---If---)
#include<stdio.h>
int main() {
    int age;
    printf("Enter age:");
    scanf("%d",&age);

if(age>18) {
    printf("You are an Adult\n");
}
    return 0;
}

   //(---If Else---)
   #include<stdio.h>
   int main() {
   int age;
   printf("Enter your age:");
   scanf("%d",&age);
   if(age>18) {
    printf("Adult\n");
   }
   else{
    printf("not adult\n");
   }
    return 0;
   }

   //(---Else If---)
    #include<stdio.h>
   int main() {
   int age;
   printf("Enter your age:");
   scanf("%d",&age);
   if(age>=18) {
    printf("Adult\n");
   }
   else if (age>13 && age<18) {
    printf("Teenager\n");
   }
   else {
    printf("Child");
   }
    return 0;
   }