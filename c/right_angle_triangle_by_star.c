#include<stdio.h>
int main(){
	int i,j,line;
	i = 1;
	printf("Enter the number of line : ");
	scanf("%d",&line);
	while(i <= line){
		for(j=0; j<i; j++){
		printf("*");
		};
		i++;
		printf("\n");
	};
	
return 0;
}
