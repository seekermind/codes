#include<stdio.h>
int main(){
	int n,i,num;
	printf("Enter the length of array : ");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	};
	for(i=0;i<n;i++){
		if(arr[i]<num){
			num = arr[i];
		};
	};
	printf("Minimum number : %d \n",num);
	return 0;
}
