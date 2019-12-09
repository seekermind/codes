#include<stdio.h>
#include<stdlib.h>

//this function read the file and store all integer into an array and return the number of total integer..

int readIntFile(char* fileName, int arr[]){
    FILE *fp;
    fp = fopen(fileName, "r");
    int i=0;
    while (!feof(fp))
    {
        fscanf(fp,"%d",&arr[i]);
        i++;
    }
    fclose(fp);
    return i;
}

//this function take an array of integer as input and return the second max number among them.

int secMaxNum(int arr[], int sizeOfArr){
    int max = arr[0],j;
    for (j = 0; j < sizeOfArr; j++){
        if (arr[j]>max){
            max = arr[j];
        }   
    }
    
    int secMax = arr[0], i=0;
    
    //secMax can't be set equal to max number.
    //while first numbers of the array are max number, secMax is set to the next number.

    while (arr[i] == max)
    {
        secMax = arr[i+1];
        i++;
    }
    
    
    for (i = 0; i < sizeOfArr; i++)
    {
        if (arr[i]<max && arr[i]>secMax)
        {
            secMax = arr[i];
        }
        
    }
    
    return secMax;
}

void writeFile(char* fileName, int number){
    FILE *of;
    of = fopen(fileName,"w");
    fprintf(of,"%d",number);
    fclose(of);
}

int main(){
    int num[100];
    int size = readIntFile("x.txt",num);
    int secondMax = secMaxNum(num,size);
    writeFile("output.txt", secondMax);
    return 0;
}