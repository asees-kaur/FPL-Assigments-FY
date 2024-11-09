#include <stdio.h>
int main(){
    int a,b,add,sub,mult,div,mod;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    add = a+b;
    printf("a+b = %d \n",a,b,add);
    sub = a-b;
    printf("a-b = %d \n",a,b,sub);
    mult = a*b;
    printf("a*b = %d \n",a,b,mult);
    div = a/b;
    printf("a/b = %d \n",a,b,div);
    mod = a%b;
    printf("a%b =d \n",a,b,mod);
    
    return 0;
}