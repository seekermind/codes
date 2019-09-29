#include<stdio.h>
int main(){
	int line ,i=0 ,j,k=0, l=97;
	scanf("%d", &line);
	while(i<=(2*line)){
		if(i<line){
			k++;
			for(j=0;j<(line - k);j++){
				printf(" ");
			};
			for (j=0;j<((2*k)-1);j++){
				printf("%c",l);
				l += 1;
				if (l>122){
				l = 97;
				};
			};

		}
		else {
			k--;
			for(j=0;j<(line - k);j++){
				printf(" ");
			};
			for (j=0;j<((2*k)-1);j++){
				printf("%c", l);
				l +=1;
				if (l>122){
				l = 97;
				};
			};
		}
		printf("\n");
		
		i++;
	};
	return 0;
}
