#include<stdio.h>
int main(){
	int line ,i=0 ,j,k=0, l=97;
	printf("Enter line : ");
	scanf("%d", &line);
	while(i<=(2*line)){					// loop for total line in the shape,which is 2*line.
		if(i<line){
			k++;					// character number increases for first half lines.
			for(j=0;j<(line - k);j++){
				printf(" ");
			};
			for (j=0;j<((2*k)-1);j++){
				printf("%c",l);
				l += 1;
				if (l>122){
					l = 65;
				}
				else if(l>90 && l<97) {
					l = 97;
				};
			};

		}
		else {
			k--;					// character number decreases for next half lines.
			for(j=0;j<(line - k);j++){
				printf(" ");
			};
			for (j=0;j<((2*k)-1);j++){
				printf("%c", l);
				l += 1;
				if (l>122){
					l = 65;
				}
				else if(l>90 && l<97) {
					l = 97;
				};
			};
		}
		printf("\n");
		
		i++;
	};
	return 0;
}
