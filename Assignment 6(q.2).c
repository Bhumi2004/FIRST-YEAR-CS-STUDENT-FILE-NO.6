#include<stdio.h>
int main()
{
	int a,b,c,d,e,total,per,avg,marks;
	printf("enter your marks of all five subject\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	printf("marks obtained is %d",a+b+c+d+e);
	total=500;
	marks=a+b+c+d+e;
	per=marks/5;
	avg=marks/5;

	
	printf("the percentage of all five subject is %d\n",per);
	printf("the average of all five subject is %d\n",avg);
	return 0;
}
