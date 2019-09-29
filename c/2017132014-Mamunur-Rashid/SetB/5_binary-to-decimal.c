#include<stdio.h>
int main(){
    int n,x,i=1,d, result=0;
    scanf("%d",&n);
    x = n;
    while ((x/10) != 0){
        x /= 10;
        i++;
    }
    for(i;i>0;i--){
        int y=1,z=1;
        for (int j = 0; j < i; j++){
            y *= 10;
            z *= 2;
        };
        d = (n%y)/(y/10);
        result += d*(z/2);
    }
    printf("%d",result);
    return 0;
}