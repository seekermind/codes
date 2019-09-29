#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    while (n != 0)
    {
        printf("Divisors of %d: ",n);
        for (int i = 1; i <= n; i++)
        {
            if (n%i == 0)
            {
                printf(" %d,",i);
            }
                        
        }
        printf("\n");
        scanf("%d",&n);
        
    }
    
}
