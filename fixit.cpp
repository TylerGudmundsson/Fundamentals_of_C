// fixit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	printf("Enter the first few numbers for which you need the multipication table>\a");
	scanf("%d",&n);
		for(int j = 1;j<=n;j=j+3)
		{
			printf("\n");

		for(int i = 0; i<10;i++)
			{
				printf("%4d*%4d = %4d\t",j,i,j*i);
				printf("%4d*%4d = %4d\t",j,i,(j+1)*i);
				printf("%4d*%4d = %4d\t",j,i,(j+2)*i);
			}
		}
	return 0;
}

