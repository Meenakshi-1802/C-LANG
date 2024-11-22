//practice set
//Q-1-print sum of two numbers
#include<stdio.h>
int main() {
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Sum of two numbers are:%d",a + b);
    return 0;
}

//Q-2-calculate area of a square
#include<stdio.h>
int main() {
    int side;
    printf("Enter side:");
    scanf("%d",&side);
    printf("Area is:%d",side * side);
    return 0;
}

//Q-3-calculate area of a circle
#include<stdio.h>
int main() {
    float radius;
    printf("Enter side:");
    scanf("%f",&radius);
    printf("Area is:%f",3.14 * radius * radius);
    return 0;
}

//Q-4-calculate perimeter of rectangle
#include<stdio.h>
int main() {
    int length,width;
    printf("Enter length:");
    scanf("%d",&length);
    printf("Enter width:");
    scanf("%d",&width);
    printf("Perimeter of rectangle is:%d",2 * (length + width));
    return 0;
}

//Q-5-calculate perimeter of a rectangle
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("the Cube of %d is:%d\n",n,n*n*n);
    return 0;
}