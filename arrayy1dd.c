#include<stdio.h>

main()
{
	int a[5],b[5],sum[5];
	int i;
	printf("enter array elements of a =\n");
	for(i=0;i<=5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("enter array elements of b =\n");
	for(i=0;i<=5;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
    for(i=0;i<=5;i++)
    {
    	sum[i]= a[i]+b[i];
    }
    printf("\nsum array =");
    for(i=0;i<=5;i++)
	{
		printf("\nsum[%d]=%d",i,sum[i]);
	}
}

