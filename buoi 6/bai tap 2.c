#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1,num2,choice,product;
	printf("Nhap 2 so nguyen bat ky:\n");
	scanf("%d %d",&num1,&num2);
	product=num1*num2;
    do
	{
		
		printf("\nCACULATOR\n1. Tong 2 so\n2. Hieu 2 so\n3. tich 2 so\n4. Thuong 2 so\n5. So du trong phep chia 2 so\n6. Uoc chung lon nhat\n7. Boi chung nho nhat\n8. Thoat\nLua chon cua nguoi dung:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("%d",num1+num2);
				break;
			case 2:
				printf("%d",num1-num2);
				break;
			case 3:
				printf("%d",num1*num2);
				break;
			case 4:
				printf("%.2f",(float)num1/num2);
				break;
			case 5:
				printf("%d",num1%num2);
				break;
			case 6:
				while(num1!=num2)
				{
					if(num1>num2)
					{
						num1=num1-num2;
					}
					else
					{
						num2=num2-num1;
					}
				}
				printf("%d",num1);
				break;
			case 7:
				while(num1!=num2)
				{
					if(num1>num2)
					{
						num1=num1-num2;
					}
					else
					{
						num2=num2-num1;
					}
				}
				printf("%d",product/num1);
				break;
			case 8:
				exit(0);
			default:
				printf("vui long chon tu 1 den 8");
		}
	}
	while("1==1");
    
}

