#include<stdio.h>
void main(){
    int n,fib0 = 1,fib1 = 1,temp;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d \n", fib0); 
        temp = fib1;
        fib1 = fib1 + fib0;
        fib0 = temp;
               
    }
    
}