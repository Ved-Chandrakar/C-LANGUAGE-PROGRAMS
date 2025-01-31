#include<stdio.h>
int main()
{
	int matrix1[3][3],matrix2[3][3],matrix3[3][3],sum=0,i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter element of matrix1 at position [%d][%d]:",i+1,j+1);
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("\n");
	printf("matrix1 ==> \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matrix1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter element of matrix2 at position [%d][%d]:",i+1,j+1);
			scanf("%d",&matrix2[i][j]);
		}
	}
	printf("\n");
	printf("matrix2 ==> \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matrix2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
			{
				sum = sum + matrix1[i][k]*matrix2[k][j];
				matrix3[i][j]=sum;
			}
		}
	}
	printf("\n");
	printf("result of multipication of two matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matrix3[i][j]);
		}
		printf("\n");
	}
	return(0);
}
