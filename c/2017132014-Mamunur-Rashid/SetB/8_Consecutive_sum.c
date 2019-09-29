#include<stdio.h>
void main(){
	int a, b, result = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a<b){
		for (int i=a; i<=b;i++)
			result += i;
	}
	else {
		for (int i=a; i>=b; i--)
			result += i;
	}
	printf("%d", result);
}
