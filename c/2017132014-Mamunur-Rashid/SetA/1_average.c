#include<stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	double numbers[n],sum = 0;
	for(int i=0; i<n; i++){
		scanf("%lf",&numbers[i]);
	}
	for(int j=0; j<n; j++)
		sum += numbers[j];
	printf("%lf \n",(double)sum/n);
}
