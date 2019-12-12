#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    float matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f",&matrix[i][j]);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.1f ",matrix[i][j]);
        }
        printf("\n");
        
    }

    for (int i = 0; i < n; i++)
    {
        float temp;
        temp = matrix[n/2][i];
        matrix[n/2][i] = matrix[i][n/2];
        matrix[i][n/2] = temp;
        
    }
    
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.1f ",matrix[i][j]);
        }
        printf("\n");
        
    }
    
    
}