#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int arr[a],arr1[b];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<b;i++)
	{
		scanf("%d",&arr1[i]);
	}
	int sum1=0,sum2=0;
	for(int i=0;i<a;i++)
	{
		sum1=sum1*10+arr[i];
	}
	for(int i=0;i<b;i++)
	{
		sum2=sum2*10+arr1[i];
	}
	printf("%d",sum1+sum2);
}
