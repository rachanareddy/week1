// medians.c.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void main()
{
	int *a,*b,*c,i=0,j=0,k=0,n,m;
	float f;
	printf("enter the number of elements in the first array");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("enter the number of elements in the second array");
	scanf("%d",&m);
	b=(int *)malloc(m*sizeof(int));
	c=(int *)malloc((m+n)*sizeof(int));
	printf("enter the elements of the first array in ascending order");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the elements of the second array in ascending order");
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);

   k=0;
   i=0;j=0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
		{
            c[k] = a[i++];
			k++;
		}
        else        
		{
			c[k] = b[j++];
			k++;
    }
	}
    while (i < n)  
	{
		c[k]=a[i++];
		k++;
	}


    while (j < m)    
     {
		 c[k] = b[j++];
		 k++;
	}
	
    //median is the middle value of the sorted list
	//if we get two numbers as the middle elements(in case of even number of  elements)we find the number between these two numbers
	k=m+n;
	if(k%2==0)
	{k=k/2;
		f=(float)(c[k]+c[k-1])/2;
		
		printf("median is %f",f);
	}
	else
	{
	
	printf("median is %f",(float)c[k/2]);
	}
	getch();
}

