#include<stdio.h>
void main(){
    int count;
    scanf("%d",&count);
    float num[count][2][3];
    float point[count][2];
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                scanf("%f",&num[i][j][k]);
            }
            
        }
        
    }

    for (int i = 0; i < count; i++)
    {
        float x,y;
        point[i][0] = ((num[i][0][1]*num[i][1][2]) - (num[i][1][1]*num[i][0][2]))/((num[i][0][0]*num[i][1][1]) - (num[i][1][0]*num[i][0][1]));
        point[i][1] = ((num[i][1][0]*num[i][0][2]) - (num[i][0][0]*num[i][1][2]))/((num[i][0][0]*num[i][1][1]) - (num[i][1][0]*num[i][0][1]));

    }

    for (int i = 0; i < count; i++)
    {
        printf("Case %d: x = %f, y = %f \n",(i+1),point[i][0],point[i][1]);
    }
    
    
    
}