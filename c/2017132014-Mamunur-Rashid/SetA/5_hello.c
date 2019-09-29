#include<stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	char str[n][20];
	for (int i = 0; i < n; i++)
	{
		scanf("%s",&str[i]);
	}
	for (int j = 0; j < n; j++)
	{
		printf("Case %d: Hello %s \n",(j+1),str[j]);
	}	
}
