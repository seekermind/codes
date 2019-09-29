#include<stdio.h>
#include<string.h>
void main(){
    int count;
    scanf("%d",&count);
    for (int i = 0; i < count; i++)
    {
        char str[120];
        scanf("%[^\n]s",&str);
        printf("%d \n",strlen(str));
    }
    
}