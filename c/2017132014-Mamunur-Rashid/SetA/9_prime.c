#include<stdio.h>
void main(){
    int count;
    scanf("%d",&count);
    int num[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d",&num[i]);
    }
    for (int i = 0; i < count; i++)
    {
        int temp = 0;
        if (num[i]==1 || num[i] == 0)
        {
            printf("Case %d: No \n",i+1);
        }
        else
        {
            for (int j = 2; j < num[i]; j++)
            {
                if ((num[i]%j) == 0)
                {
                    temp = 1;
                    break;
                }
                
            }
            
            if (temp == 0)
            {
                printf("Case %d: Yes \n",i+1);
            }
            else
            {
                printf("Case %d: No \n",i+1);
            }
        }
        
    }
    
}