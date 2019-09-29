#include<stdio.h>
int main(){
	int arr[5],i,j,k,l,x=0,y=0;
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<(5-i);j++){
			if(arr[j]>x){
				x = arr[j];
				
			};
			printf("%d ",x);
		};
		//printf("%d ",x);
		//printf("%d \n",j);
	};

	return 0;
}
