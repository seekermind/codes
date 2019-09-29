#include<stdio.h>
int main(){
	int i = 0;
	float n, result, sum = 0;
	while ( i < 10 ){
		scanf(" %f ", &n);
		sum += n;
		i++;
	};
	result = (sum / 10);
	printf(" Average value: %f ", result);
	return 0;
}
