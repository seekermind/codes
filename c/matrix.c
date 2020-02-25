#include<stdio.h>
void printMat(double *p,int n, int m){
    int i,j;
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%.1lf  ",*p++);
        }
        printf("\n"); 
    }

    
}
void scanMat(double *p,int n, int m){
    int i,j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%lf",p++);
        }
        
    }
    
}
void transMat(double *p,double *q,int n, int m){
    int i,j;
    double mat[m][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            mat[j][i] = *p;
            p++;           
        }
        
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            *q = mat[i][j];
            q++;
        }
        
    }
    
}
void main(){
    int n,m;
    scanf("%d %d",&n,&m);
    double mat[n][m];

    scanMat(&mat[0][0],n,m);
    printMat(&mat[0][0],n,m);

    double trMat[m][n];
    transMat(&mat[0][0],&trMat[0][0],n,m);
    printMat(&trMat[0][0],m,n);
}