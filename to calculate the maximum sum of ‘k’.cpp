#include<stdio.h>
int main()
{
	int n, max=0,k;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("subarray size:");
	scanf("%d",&k);
	int a[n];
	printf("Enter the elements of array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<=n-k;i++)
	{
		int current_sum=0;
		for(int j=i;j<i+k;j++)
		{
			current_sum+=a[j];
			if(current_sum>max)
			{
				max=current_sum;
			}
		}
	}
	printf("Maximum sum generated by %d consecutive elements is %d",k,max);
}
