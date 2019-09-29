#include<stdio.h>
void main(){
    int a,b,tmp, grt,sml;
    scanf("%d %d",&a,&b);
    grt = a>b ? a:b;
    sml = a<b ? a:b;
    while (grt%sml != 0)
    {
        tmp = grt;
        grt = sml;
        sml = tmp % sml;
    }
    printf("%d",sml);
}
