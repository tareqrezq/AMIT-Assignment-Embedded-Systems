/*FileName: Asignment 1 soilution
Date: 28/6/2022
Author: Tareq Rezq Abd-elahmied
Nick Name: Lord Of Mystery */
#include <stdio.h>
#include <stdlib.h>

void swap(int x,int y);

int main(){//L//
    int x,y;   //declarate the variable of 2 numbers
    printf("Enter first number\n");
    scanf("%d",&x);      // scanning the x number
    printf("Enter second number\n");
    scanf("%d",&y);      // scanning the y number
    //O//
    printf("befor swapping\n");
    printf("x = %d  y = %d\n",x,y);
    printf("After swapping\n");
    swap(x,y);   //sending the x,y numbers to swapping finction
    return 0;
}
void swap(int x,int y){ //swaping function
printf("x = %d  y = %d",y,x);
}
//M//
