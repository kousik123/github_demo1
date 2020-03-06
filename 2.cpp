#include<stdio.h>
#include<stdlib.h>
#define N 50
int main()
{
	int array[N],n,i,j,temp,max;
	printf("Enter number of elements :\n");
	scanf("%d",&n);
	printf("Enter elements of array :\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	for(i=0;i<n-1;i++)
	{
		max=0;
		for(j=i+1;j<n;j++)
		{
			if(array[j]>max)
				max = array[j];
		}
		array[i]=max;
	}
	array[n-1]= -1;
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	return 0;
}
