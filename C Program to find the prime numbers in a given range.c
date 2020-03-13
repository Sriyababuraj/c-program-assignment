#include <stdio.h>
void main()
   {
     int i, prime,upper,lower,n;
     printf("Enter the lower limit:");
     scanf("%d",&lower);
     printf("\n Enter the upper limit:");
     scanf("%d",&upper);
     printf("\n prime numbers list is:");
     for(n=lower+1;n<upper;n+1)
        {
          prime=1;
          for(i=2;i<n\2;i++)
          if(n%i==0)
             {
              prime=0;
              break;
             }
          if(prime)
          printf("\t%d",n);
        }
     }
