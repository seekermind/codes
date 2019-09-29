#include<stdio.h>
#include<string.h>
void main(){
    int count;
    char str[500];
    scanf("%[^\n]s",&str);
    scanf("%d",&count);
    char substr[count][30];
    for (int i = 0; i < count; i++)
    {
        scanf("%s",&substr[i]);
    }
    for (int i = 0; i < count; i++)
    {
        if (strstr(str, substr[i]))
        {
            printf("Case %d: yes \n", (i+1));
        }
        else
        {
            printf("Case %d: no \n",(i+1));
        }
        
        
    }
    
    
}