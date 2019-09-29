#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	double arr[n], num = 0;
	for (i=0;i<n;i++){
		scanf("%lf",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]>num){
			num = arr[i];
		}
	}
	printf("%lf \n",num);
	return 0;
}
