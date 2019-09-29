#include<stdio.h>
int main()
{
	int i, j, k,x,y, line;
	printf("Enter number of line : ");
	scanf("%d",&line);
	x = (2*line)-1;
	for(i = 1; i<= line; i++){
		for(j=1;j<=x;j++){
			y = (x - ((2*i)-1))/2;
			if (j<=y || j>(y+((2*i)-1)) ){
			printf(" ");
			}
			else {
			printf("*");
			};
		};
		printf("\n");
	};
	return 0;
}
