#include<stdio.h>
#include<string.h>
void main(){
    int count;
    scanf("%d",&count);
    char str[count][30];
    for (int i = 0; i < count; i++)
    {
        scanf("%s",&str[i]);
    }
    for (int i = 0; i < count; i++)
    {
        int temp = 0,slen;
        slen = strlen(str[i]) - 1;
        for (int j = 0; j < strlen(str[i]); j++)
        {
            if (str[i][slen - j] != str[i][j])
            {
                temp = 1;
                break;
            }
            
        }
        if (temp == 0)
        {
            printf("Case %d: Yes \n",(i+1));
        }
        else
        {
            printf("Case %d: No \n",(i+1));
        }
        
    }
    
}
