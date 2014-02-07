// noofoccurences.c.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{

	int *a,b[100],i,n,maximum,location;
	printf("enter the no of elements");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("enter the elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<100;i++)
		b[i]=0;
	for(i=0;i<n;i++)
		b[a[i]] +=1;
	maximum=b[a[0]];
    for(i=1;i<n;i++) 
    {
       if(b[a[i]]>=maximum) 
           {
			   maximum=b[a[i]];
			   location=a[i];
	   }

    }

 
 
  printf(" number which occured maximum number of times is %d", location);

  getch();
}


