#include<stdio.h>
int main()
{
   int jw,w=1,x,a[5000],i,j,k;  
   a[0] = 1;
   for(i=1; i<=40; i++)
   {
     for(j=1,jw=0; j<=w; j++)
	 {
      x = a[j-1] * i + jw; 
      a[j-1] = x % 10;  
      jw = x / 10;     
     } 
     while( jw )
	{
     a[++w-1] = jw % 10;
     jw /= 10; 
    }
     for(k = w; k>=1; k--)
	{
     printf("%d",a[k-1]);
    }
    printf("\n"); 
    
  }
   return 0;
    
} 