/*FileName: Asignment 2 soilution
Date: 28/6/2022
Author: Tareq Rezq Abd-elahmied
Nick Name: Lord Of Mystery */

#include<stdio.h>
int main() {//L//
	long int decimalNumber;
	int c, k;                           // declaration a variables

  printf("Enter an integer in decimal number system\n"); // printing msg to user to enter the number
  scanf("%d", &decimalNumber);                             // scan the number from the user
  printf("%d in binary number system is:\n", decimalNumber);
            //O//
  for (c = 31; c >= 0; c--){   // for statment to convert the decimal numer to binary number
    k = decimalNumber >> c;
    if (k & 1){
      printf("1");
    }else{
      printf("0");
  }
  }
  printf("\n");
  printf("%d in hexadecimal number system is: %X\n", decimalNumber,decimalNumber); // % operator to print out the hex decimal number
  return 0;
}           //M//
