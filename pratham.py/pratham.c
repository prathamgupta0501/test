#include<stdio.h>
int main() {
    int a;
    printf("enter the number:");
    scanf("%d", &a);
    (a>90) ? printf("grade A\n") : (a>80) ? printf("grade B\n") : (a>70) ? printf("grade C\n") : (a>70) ? printf("grade D\n");
    return 0;

}