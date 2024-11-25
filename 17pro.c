//do while loop
#include<stdio.h>
int main() {
int i = 1;
do{
  printf("%d\n",i);
  i++;
}while(i<=5);
    return 0;
}

//table of a num input by the user
#include<stdio.h>
int main() {
int n;
printf("Enter number:");
scanf("%d",&n);
for(int i = 1;i<=10;i++){
    printf("%d\n",n*i);
}
    return 0;
}