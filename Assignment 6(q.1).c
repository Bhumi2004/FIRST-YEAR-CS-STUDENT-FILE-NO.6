#include<stdio.h>
int main()
{
	Rectangle();
	Square();
	Circle();
	Triangle();
	return 0;
}
void Rectangle()
{
	int l,b,Rarea,Rperimeter;
	printf("enter length and breadth of rectangle\n");
	scanf("%d%d",&l,&b);
	Rarea=l*b;
	Rperimeter=2*(l+b);
	printf("area of rectangle is %d and perimeter of rectngle is %d",Rarea,Rperimeter);
}
	
void Square()
{
	int s,Sarea,Sperimeter;
	printf("enter the side of square\n");
	scanf("%d",&s);
	Sarea=s*s;
	Sperimeter=4*s;
	printf("area of square is %d and perimeter of square is %d",Sarea,Sperimeter);
	
}
void Circle()
{
	int r,circumference;
	printf("enter the radius of the circle\n");
	scanf("%d",&r);
	circumference=2*3.14*r;
	printf("circumference of circle is %d",circumference);
	
}
void Triangle()
{
	int a,b,c,Tsum;
	printf("enter the sides of triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	Tsum=a+b+c;
	printf("sum of the sides of all triangle is %d",Tsum);
}


	

