#include<stdio.h>

int main()
{
	int n;
	do
	{
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		if(n%3!=0)
		{
			continue;
		}
		printf("%d",n);
	}
	while(1==1);
	return 0;
}
