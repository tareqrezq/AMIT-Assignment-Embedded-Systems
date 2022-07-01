/*FileName: Asignment 1 soilution
Date: 28/6/2022
Author: Tareq Rezq Abd-elahmied
Nick Name: Lord Of Mystery */
#include <stdio.h>
#include <conio.h>

int main(){//L//
  int n, first = 0, second = 1, result,i; //declarate the varabels
  printf("Please give an input upto you want to print series : \n");
  scanf("%d", &n);                        //scanning the number from the user
  printf("Fibonacci Series is:\n");
  //O//
  for (i = 0; i < n; i++){ //starting a for loop to count and starting the Fibonacci Series
    if (i <= 1){
      result = i;
    }else{
      result = first + second;
      first = second;
      second = result;
    }
    printf("%d\n", result);    //printing out the result
  }
  return 0;
}//M//
