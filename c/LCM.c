#include<stdio.h>
void main(){
	int a, b;
	scanf("%d",&a);
	scanf("%d",&b);
	int sml, grt, tmp, lcm;
	if(a>b){
		grt = a;
		sml = b;
	}
	else {
		sml = a;
		grt = b;
	}
	while((grt % sml) != 0){
		tmp = grt;
		grt = sml;
		sml = grt % sml;
	}
	lcm = (a*b) / sml;
	printf("%d",lcm);
}
