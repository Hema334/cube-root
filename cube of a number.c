/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int number, cube;
 
  printf(" \n Please Enter any integer Value : ");
  scanf("%d", &number);
  
  cube = number * number * number;
  
  printf("\n Cube of a given number %d is  =  %d", number, cube);
 
  return 0;
}