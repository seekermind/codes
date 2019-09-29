#include<stdio.h>
void main(){
	float x;
	scanf("%f",&x);
	if ((x - (int)x) >= 0.5)
		printf("%d",(int)x+1);
	else
		printf("%d",(int)x);
}
