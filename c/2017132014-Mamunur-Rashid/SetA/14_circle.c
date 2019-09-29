#include<stdio.h>
void main(){
    int count = -1;
    while (count > 1000 || count < 0)
    {
        scanf("%d",&count);
    }
    float r[count];
    for (int i = 0; i < count; i++)
    {
        r[i] = -1;
        while (r[i] > 1000 || r[i] < 0)
        {
            scanf("%f",&r[i]);
        }
        
    }
    for (int i = 0; i < count; i++)
    {
        double result;
        result = (2 * r[i] * 2 * r[i]) - (3.14159265359 * r[i] * r[i]);
        printf("Case %d: %.2lf \n",(i+1),(int)(result * 100 + 0.5) / 100.0);
    }
    
}