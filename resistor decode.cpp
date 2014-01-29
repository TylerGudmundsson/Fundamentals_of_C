// shit.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
int compare (char array2[][7],char array1[][7], int size);

int _tmain(void)
{
char *color_codes[] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "gray", "white",""}; //sets colors in a the string with respect to their value i.e black = 0 white = 9
char band_one[16];
char band_two[16];
char multiplier[16];
double resistance;
char again[] = {"y"};
char check[16];
char loop = 'y';
int x,y,z,a,b,c;

while ('y' == loop)  //loops as long as the user wants to continue to decode more resistors
{
	printf("Enter the colors of the three bands in all lower case");
	printf("band one>");
	scanf("%s", band_one);
	printf("band two>");
	scanf("%s", band_two);
	printf("band one>");
	scanf("%s", multiplier);// collects feed back from user in strings to later be compared to the color codes
for( x=0; strcmp( color_codes[x], "" )  != 0 ; x++ )  //  This will loop through all the colors in your array once. even if they enter black, black, black you look at all 7 but you only loop once so its a trade off
{
    if ( strcmp( band_one, color_codes[x] ) == 0 )
    {
        a= x;
    }
	else
	{
		a=-1;
	}
    if ( strcmp( band_two, color_codes[x] ) == 0 )
    {
        b=x;
    }
	else
	{
		a=-1;
	}
    if ( strcmp( multiplier, color_codes[x] ) == 0 )
    {
        c=x;
    }
	else
	{
		a=-1;
	}
}
if ( a< 0 || b < 0 || c <0 ) 
{
    printf("Error one of the colors you entered is bad"); // You can also  check a b and c seperately for cleaner error message
}
else
{
	resistance= (10*a+b)*(pow(10.0,c))/1000; //calculates the value a is in the tens place so multiplied by ten b is ones and c is how many zeros follow the two digit number, then divided by 1000 to set in kilo ohms
	printf("The resistors value is %.2lf k ohms", resistance);
}
	printf("\nPress y to continue or press n to quit\n>");
	scanf("%s", check);
if (strcmp(again,check)==0)
{
	loop='y';
}
else
{
	loop='n';
}
}
return(0);
	}