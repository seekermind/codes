#include<stdio.h>
void main(){
    int a,b;
    int result = 1;
    scanf("%d %d",&a,&b);
    while (a != 0 || b != 0)
    {
        for (int i = 0; i < b; i++)
        {
            result *= a;
            result %= 100007;
        }
        printf("%d \n",result);
        result = 1;
        scanf("%d %d",&a,&b);
    }
}