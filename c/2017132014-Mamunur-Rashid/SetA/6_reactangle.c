#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    double react[n][3];
    double result;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%lf",&react[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        result = (react[i][0]*react[i][1]) + (react[i][0]*react[i][2]) + (react[i][1]*react[i][2]);
        printf("Case %d: %lf \n",(i+1), result);
    }
}