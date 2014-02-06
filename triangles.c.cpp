// triangles.c.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float ax,ay,bx,by,cx,cy,slopeca,slopeab,slopebc,distab,distbc,distca;
	printf("enter the cooridnates ");
	scanf("%f",&ax);
	scanf("%f",&ay);
	scanf("%f",&bx);
	scanf("%f",&by);
	scanf("%f",&cx);
	scanf("%f",&cy);
	slopeab=(by-ay)/(bx-ax);
	slopebc=(cy-by)/(cx-bx);
	slopeca=(ay-cy)/(ax-cx);
	distab=sqrt(pow((ax-bx),2)+pow((ay-by),2));
	distbc=sqrt(pow((bx-cx),2)+pow((by-cy),2));
	distca=sqrt(pow((cx-ax),2)+pow((cy-ay),2));
	
	if(slopeab==slopebc)
		printf("cannot form a triangle");
	else
		if(distab==distbc==distca)
			printf("equilateral traingle");
		else
			if(distab==distbc||distbc==distca||distca==distab)
				printf("isosceles triangle");
			else 
				if((slopeab*slopeca)||(slopeab*slopebc)||(slopeca*slopebc)==-1)
					printf("right angled triangle");
			
			else
				{
					printf("scalene triangle");
				}

				getch();
}

