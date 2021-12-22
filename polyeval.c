#include<stdio.h>
#include<math.h>
#define MAX_TERMS 100
typedef struct
{
	float coeff;
	int expo;
}polynomial;
polynomial terms[MAX_TERMS];
int avail=0;
void attach(float coefficient,int exponent)
{
	
	terms[avail].coeff=coefficient;
	terms[avail++].expo=exponent;
}
int main()
{
	int i,n,e;
	float c,x,ans=0.0;
	printf("enter no of terms");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter term %d(coeff,expo)",(i+1));
		scanf("%f%d",&c,&e);
		attach(c,e);
	}
	printf("enter value for x");
	scanf("%f",&x);
	for(i=0;i<n;i++)
		ans=ans+(terms[i].coeff*pow(x,terms[i].expo));
	printf("ans=%f",ans);
	return 0;
}

