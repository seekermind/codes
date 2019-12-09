#include<stdio.h>
#include<string.h>
void main(){
    char str[30];
    gets(str);
    int temp = 0,slen;
    slen = strlen(str)-1;
    for (int j = 0; j < strlen(str); j++)
        {
            if (str[slen - j] != str[j])
            {
                temp = 1;
                break;
            }
            
        }
        if (temp == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No \n");
        }
    
}
