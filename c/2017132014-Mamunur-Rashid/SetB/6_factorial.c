#include<stdio.h>
int main(){
    int n;
    long result = 1;
    scanf("%d",&n);
    for (n;n>0;n--){
        result *= n;
    }
    printf("%d",result);
    return 0;
}