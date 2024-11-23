//loop control statements
//(---for loop---)
#include<stdio.h>
int main() {
for (int i = 1;i<=5;i=i+1) {
    printf("Hello world\n");
}
return 0;

}

// //(---for reverse---)
#include<stdio.h>
int main() {
for (int i = 10;i>=1;i=i-1) {
    printf("%d\n",i);
}
return 0;

}

//(---using float & char---)
#include<stdio.h>
int main() {
for (float i = 1.0;i<=5.0;i++) {
    printf("%f\n",i);
}
return 0;

}

#include<stdio.h>
int main() {
    char ch;
for (ch ='A';ch <='Z';ch++) {
    printf("%c\n",ch);
}
return 0;

}