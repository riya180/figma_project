#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#define EPS      0.00000005
#define f(x)  (x)*log10(x)-1.2
void bisect();
int count=1, n;
float root=1;
void main()
{
	printf("\n solution by BISECTION method \n");
	printf("\n Equation is");
	printf("\n\t\t\t x*log(x)-1.2 = 0\n\n");
	printf(" Enter the nuber of iteration:");
	scanf("%d",&n);
	bisect();
	getch();
}

void Bisect()
{
	float x0, x1, x2;
	float f0, f1, f2;
	int i=0;
	
	for(x2=1;;x2++)
	{
		f2= f(x2);
		if(f2>0)
		{
			break;
			
		}
	}
	for(x1=x2-1;; x2--)
	{
		f1=f(x1);
		if(f1<0)
		{
			break;
		}
	}
	printf("\t \t---------------------");
	printf("\n\t\t   ITERATIONS \t\t     ROOTS\n");
	printf("\t\t-------------------------");
	for(; count<=n; count++)
	{
		x0= (x1+x2)/2.0;
		f0= f(x0);
		if(f0==0)
		{
			root=x0;
		}
		if(f0*f1<0)
		{
			x2=x0;
			
		}
		else
		{
			x1=x0;
			f1=f0;
			
		}
		printf("\n \t\t ITERATION %d",count);
		printf("\t :\t %f",x0);
		if(fabc(x1-x2)/x1<EPS)
		{
			printf("\n \t \t----------------");
			printf("\n\t\t      root=%f",x0);
			printf("\n \t\t  iterations= %d\n", count);
			printf("\t\t------------------");
			getch();
			exit(0);
			
		}
		
			}
			printf("\n\t\t-------------");
			printf("\n\t\t\t\t Root= %7.4f",x0);
			printf("\t\t\t  iteration =%d\n",count-1);
			printf("\t\t------------");
			getch();
}



