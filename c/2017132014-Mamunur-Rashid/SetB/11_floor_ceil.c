#include<stdio.h>
void main(){
	float x;
	scanf("%f", &x);
	if (x - (int)x == 0)
	{
		printf("%d %d",(int)x, (int)x);
	}
	else
	{
		printf("%d %d",(int)x, (int)x+1);
	}
	
	
	
}
