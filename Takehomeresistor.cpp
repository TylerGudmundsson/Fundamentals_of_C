// Takehomeresistor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
int compare (char array2[][7],char array1[][7], int size);


int _tmain(void)
{
	char color_codes[10][7] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "gray", "white"};
char band_one[1][7];
char band_two[1][7];
char multiplier[1][7];
double resistance;
char again = 'y';
int x,y,z;
 while (again = 'y')
{printf("Enter the colors of the three bands in all lower case");
printf("band one>");
scanf("%s", band_one);
printf("band two>");
scanf("%s", band_two);
printf("band one>");
scanf("%s", multiplier);
  x = strcmp(color_codes[0][7],band_one, 10);
	     if (x==-1)
	     {printf("Invalid Color %s", band_one);							//will tell you if you entered an invalid color
		 }
		 else 
			 y = compare(color_codes,band_two, 10);
	     if (y==-1)
	     printf("Invalid Color %s", band_one);							//will tell you if you entered an invalid color
	     else                
		z = compare(color_codes,multiplier, 10);
	     if (z==-1)
	     printf("Invalid Color %s", band_one);							//will tell you if you entered an invalid color
	     else   
			 resistance= (10*x+y)*(pow(10.0,z));
		 printf("The resistors value is %lf", resistance);
			 printf("press y to continue or press n to quit");
				 scanf("%c", again);
 }

	}