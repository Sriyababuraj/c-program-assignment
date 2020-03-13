#include <stdio.h>
void main()
   {
     int a,b,i,hcf;
     printf("%d%d",%a,&b);
     scanf("%d%d",&a,&b);
     for(i=1;i<=a||i<=b;i++)
      {
        if(a%i==0 && b%i==0)
        hcf=i;
      }
     printf("hcf=%d",hcf);
   }
