//Question-1
//print hello world
// #include<stdio.h>
// int main() {
// printf("Hello World!");
//     return 0;
// }

//Question-2
//print the value of X
// #include<stdio.h>
// int main() {
//     int x = 10;
// printf("%d\n",x);
//     return 0;
// }

//Question-3
//calculate & print the sum
// #include<stdio.h>
// int main() {
// int x = 7;
// int y = 5;
// int sum = x + y;
// printf("sum is %d\n",sum);
//     return 0;
// }

//Question-4
//find the remainder of division
// #include<stdio.h>
// int main() {
//     int remainder = 17%3;
//     printf("remainder is %d\n",remainder);
//     return 0;
// }

//Question-5
//convert celsius to fahrenheit
#include<stdio.h>
int main() {
    float celsius,fahrenheit;
    printf("Enter temp in celsius:");
    scanf("%f",&celsius);
    fahrenheit = (celsius*9/5)+32;
    printf("Celsius to fahrenheit is% 2f\n",fahrenheit);
    return 0;
}
