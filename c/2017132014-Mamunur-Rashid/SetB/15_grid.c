#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d",&a,&b);
    char grid[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%s",&grid[i][j]);
        }     
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = b - 1; j >= 0; j--)
        {
            printf("%c",grid[j][i]);
        }
        printf("\n");
         
    }
    
}