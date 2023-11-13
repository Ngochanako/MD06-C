#include<stdio.h>

int main()
{
	int n,sum=0;
	printf("Nhap vao so nguyen bat ky\n");
	while(n!=0)
	{
		scanf("%d",&n);
		if(n%2==1)
		{
			sum+=n;
		}
	}
	printf("Tong la: %d",sum);
	return 0;
}
