#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],i,j,k,r,c,sum;
	printf("enter number of rows:");
	scanf("%d",&r);
	printf("enter number of coloumn:");
	scanf("%d",&c);
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter the elements a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter the elements b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n the matrix mul is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=0;
			for(k=0;k<r;k++)
			{
				sum+=a[i][k]*b[k][j];
			}
			mul [i][j]=sum;
				
			printf("%d \t",sum);
				}
		printf("\n");
	}
	
	return 0;
}
