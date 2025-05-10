#include<stdio.h>
int main()
{
    int base,hight;
    float area;
    printf("Enter the base of the triangle: \n");
    scanf("%d",&base);
    printf("Enter the hight of the triangle: \n");

    scanf("%d",&hight);

    area= base*hight/2;

    printf("%2f",area);
return 1;

}


void()
{
    float b,h,a;
    printf("Enter the base of a triangle: \n");
    scanf("%2f",&b);
    printf("Enter the hight of a triangle: \n");
    scanf("%2f",&h);
    a= b*h/2;
    printf("Area is: %2f",a);
    return 0;
}
