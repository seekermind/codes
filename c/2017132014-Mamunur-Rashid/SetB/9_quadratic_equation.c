#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,D,r1,r2;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	D = (b*b) - (4*a*c);
	r1 = ((-1 * b) + sqrt(D))/(2 * a);
	r2 = ((-1 * b) - sqrt(D))/(2 * a);
	printf("%f %f \n",r1,r2);
	
	return 0;
}
