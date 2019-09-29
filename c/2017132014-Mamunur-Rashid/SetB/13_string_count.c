#include<stdio.h>
void main(){
	char str[100],test[] = "aeiouAEIOU0123456789";
	int i = 0,vowelCount = 0, consoCount = 0, digitCount = 0, totalCount;
	float vowelPercent, consoPercent, digitPercent;
	scanf("%s",&str);
	while(str[i] != '\0'){
		for(int j=0; j<20;j++){
			if (j<=9 && str[i] == test[j])
				vowelCount++;
			else if(str[i] == test[j])
				digitCount++;
		}
		i++;
	}
	consoCount = i - (vowelCount + digitCount);
	vowelPercent = (float)vowelCount / i;
	consoPercent = (float)consoCount / i;
	digitPercent = (float)digitCount / i;
	printf("Vowels = %.2f \% \nConsonants = %.2f \% \nDigits = %.2f \% \n",vowelPercent * 100,consoPercent*100,digitPercent*100);
}
