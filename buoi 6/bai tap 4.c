#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n,choice,sum,count=0;
	do
	{
		printf("Nhap so n:");
		scanf("%d",&n);
	}
	while(n<2);
	
	do
	{
		
		printf("\nPRACTICE\n1.In day so chia het cho 2 va giam dan\n2.In cac so nho hon n va tinh tong\n3.In ra cac uoc chan cua n\n4.In ra cac uoc so le va so luong cac uoc le cua n\n5.In ra cac uoc so le lon nhat cua n\n6.Thoat\nSu lua chon cua ban la: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				for(i=((int)(n/2))*2;i>=2;i-=2)
				{
					printf("%d\t",i);
				}
				break;
			case 2:
				for(i=0;i<=n;i++)
				{
					sum+=i;
					printf("%d\t",i);
				}
				printf("\nTong cac so la: %d ",sum);
				break;
			case 3:
				for(i=1;i<=n;i++)
				{
					if(i%2==0) printf("%d",i);
				}
				break;
			case 4:
				for(i=1;i<=n;i++)
				{
					if(i%2==1) 
					{
						count+=1;
						printf("%d",i);
					}
				}
				printf("So luong uoc le cua n la: %d",count);
				break;
			case 5:
				for(i=n;i>=1;i--)
				{
					if(i%2==1) 
					{
						printf("%d",i);
						break;
					}
					
				}
				break;
			case 6:
				exit(0);
			default:
				printf("Vui long chon tu 1 den 6");
				
				
		}
	}
	while(n>=2);
}
