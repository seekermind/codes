#include<stdio.h>
void main(){
	int n,sum = 0;
	scanf("%d",&n);
	int num[n];
	for(int i=0; i<n; i++){
		scanf("%d",&num[i]);
	}
	for(int j=0; j<n; j++)
		sum += num[j];
	printf("%d",sum);

}
