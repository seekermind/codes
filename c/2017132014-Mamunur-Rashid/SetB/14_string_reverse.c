#include<stdio.h>
void main(){
    char str[1000];
    int i=0, j=0;
    scanf("%[^\n]s",&str);
    while (str[i] != '\0'){
        i++;
    }
    char reversedStr[i];
    for(i; i>0; i--){
        if (str[i-1] != ' ')
        {
            reversedStr[j] = str[i-1];
            j++;
        }
        
        
    }
    printf("%s \n",reversedStr);
}