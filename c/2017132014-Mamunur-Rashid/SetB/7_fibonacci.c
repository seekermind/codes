#include<stdio.h>
void main(){
	int fib0 = 1, fib1 = 1, temp, n;
	scanf("%d", &n);
	while (n <= 0 || n > 40){
		printf("Input number such that n>0 and n<= 40 \n");
		scanf("%d",&n);
	}
	for(int i=1; i<=n; i++){
		if(i == 1 || i == 2){
			continue;
		}
		else{
			temp = fib1;
			fib1 = fib1 + fib0;
			fib0 = temp;
		}
	}

	printf("%d \n",fib1);
}
