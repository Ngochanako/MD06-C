#include<stdio.h>

/*int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<10;i++)
	{
		printf("%d\t",i*n);
	}
}*/
// in ra bang cuu chuong tu 1-9
int main()
{
	int i,n;
	//scanf("%d",&n);
	for(n=1;n<10;n++)
	{
		for(i=1;i<10;i++)
	    {
		printf("%d\t",i*n);
	    }
	    printf("\n");
	}
	
}
