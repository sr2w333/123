#include <stdio.h> 
int main() 
{ 
    int a[40][40]= {0}; 
    int i,j,k;
    printf("请输入杨辉三角行数:");
    scanf("%d",&k);
    for(i=1; i<=k;i++)  
    { 
        a[i][1]=1;    
        a[i][i]=1;   
        if(i>=2) 
        { 
            for(j=1; j<=i; j++)   
            { 
                a[i][j]=a[i-1][j-1]+a[i-1][j];   
            } 
        } 
    } 
    printf("输出如下:\n");
    for(i=1; i<=k;i++)     
    { 
        for(j=1; j<=i; j++)   
        { 
            printf("%d ",a[i][j]); 
        } 
        printf("\n");
    } 
    return 0; 
}
