// upc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include <conio.h>
#include <math.h>


int _tmain(int argc, _TCHAR* argv[])
{
int *upc[1][12];
int x,sum1=0,sum2=0,check;
int i,j;
	
	printf("Enter the UPC code\n>");
for (i=0;i<12;i++)
{
	scanf("%s", upc);
}


for (x=0; x<=12;x++)
{
	printf(upc[x]);
}
	//x=0;
//while (x<12)
	//{
	//sum1 = sum1+(int)upc[x];
	//x=x+2;
	//printf("%d\n",sum1);
	//}
	//x=1;
//while (x<12)
	//{
	//sum2 = sum2+(int)upc[x];
	//x=x+2;
	//printf("%d\n",sum2);
	//}

//sum2 = sum2+(sum1*3);
//printf("%d\n",sum2);
getch();
	return 0;
}
