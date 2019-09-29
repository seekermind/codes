#include<stdio.h>
void main(){
	long long n;
	int count = 1;
	int i=3;
	while (count < 1500){
		int test = 0;
		for (int j=2; j<i; j++){
			if ((i%j) == 0 ){
				test = 1;
				break;	
			}
		}
		if (test == 0)
			count++;
		i += 2;
	}
	printf("%d",i-2);

}
