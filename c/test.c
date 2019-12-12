#include<stdio.h>
#include<unistd.h>
void main(){
    int n;
    scanf("%d",&n);
    char str[n][30];
    char strx[n][30];
    for (int i = 0; i < n; i++)
    {
        gets(str[i]);
    }

    for (int j = 0; j < n; j++)
    {
        int i=0;
        while (str[j][i] != '\0'){
            i++;
        }
        i--;
        for (int l = 0; l <= i; l++)
        {
            strx[j][l] = str[j][i-l];
            printf("%c",strx[j][l]);
        }
        
    }
}