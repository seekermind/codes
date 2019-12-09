#include<stdio.h>
void addToFile(char* fileName, int number){
    FILE *af;
    af = fopen(fileName,"a");
    fprintf(af,"%d ",number);
    fclose(af);
}

void readFile(char* fileName){
    FILE *rf;
    rf = fopen(fileName,"r");
    while (!feof(rf)){
        int n;
        fscanf(rf,"%d",&n);
        printf("%d ",n);
    }
    fclose(rf);
    
}

void main(){
    int i;
    for (i = 1; i <= 100; i++){
        addToFile("1-100.txt",i);
    }
    readFile("1-100.txt");
}