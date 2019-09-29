#include<stdio.h>
int main(){
	int n,i,max = 0,min;
	printf("Enter the length of array : ");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	};
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max = arr[i];
		};
	};
    for(i=0;i<n;i++){
		if(arr[i]<min){
			min = arr[i];
		};
	};
	printf("Maximum number : %d \n",(max-min));
	return 0;
}
