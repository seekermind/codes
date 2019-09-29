#include<stdio.h>
int main(){
    int n,i=1,x;
    printf("Enter the decimal number : ");
    scanf("%d",&n);
    while ( (n>>i) != 0){
        i++;  
    }
    for (i; i > 0; i--){
        x = n >> (i-1);
        printf("%d",x%2);
    }
    return 0;
}
// note: I spent a plenthora of time figuring this algorithm. And it feels so good. Thank you, Sir.
