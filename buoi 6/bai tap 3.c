#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1,num2,num3,choice;
	scanf("%d %d %d",&num1,&num2,&num3);
	do
	{
		printf("\nCACULATOR\n1.Tong 3 so nguyen\n2.Trung binh cong cua 3 so nguyen\n3.So lon nhat, nho nhat trong 3 so\n4.Thoat\nLua chon cua ban la:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("%d",num1+num2+num3);
				break;
			case 2:
				printf("%d",(num1+num2+num3)/3);
				break;
			case 3:
				if(num1>num2)
				{
					num1=num2+num1;
					num2=num1-num2;
					num1=num1-num2;
				}
				if(num2>num3)
				{
					num2=num2+num3;
					num3=num2-num3;
					num2=num2-num3;
				}
				printf("So lon nhat la %d,so nho nhat la %d",num3,num1);
				break;
			case 4:
			    exit(0);
			default:
				printf("Vui long chon tu 1 den 4");
		}
	}
	while(1==1);
}
