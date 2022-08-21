/*
                            Assignment - 01
 4. WAP to find the area of the circle. Take radius of circle from user as input and print the 
result in below given format.
*/

#include<stdio.h>

int main()
{
    float pi = 3.14,radius,area;   

    printf("Enter the radius of circle: ",radius);
    scanf("%f",&radius);
    area = pi * radius * radius;
    printf( "Area of circle is %f having the radius %f",area,radius);
    return 0;

}