#include<stdio.h>
#include<math.h>

int main()
{
int n,i,x[50],y[50],sum_x=0,sum_y=0,sum_xy=0,sum_x2=0;
float a,b;
 printf("\nC program for Linear Curve Fitting \n ");
printf("Enter the numbers of x and y:");//entering the data's
scanf("%d",&n);
printf("Data's of x and y are ");
printf("\n Enter the values of x:");
//reading the data's
for(i=0;i<=n-1;i++)
    {
        scanf(" %d",&x[i]);

    }
    printf("\n Enter the values of y:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&y[i]);
    }//calculating the samations
for(i=0;i<=n-1;i++)
   {
   sum_x=sum_x+x[i];
   sum_y=sum_y+y[i];
   sum_x2=sum_x2+x[i]*x[i];
   sum_xy=sum_xy+x[i]*y[i];
   }
   //solving the equations to get coefficient of a and b 
   b=((sum_x2*sum_y-sum_x*sum_xy)*1.0/(n*sum_x2-sum_x*sum_x)*1.0);
   a=((n*sum_xy-sum_x*sum_y)*1.0/(n*sum_x2-sum_x*sum_x)*1.0);
   printf("Values of a=%3.3f",a);
   printf("\nValues of b=%3.3f",b);
 printf("\n\nThe values of Y=%3.3f X+%3.3f \n",a,b);
 
return 0;
}
