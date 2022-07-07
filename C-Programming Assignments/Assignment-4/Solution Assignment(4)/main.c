/*FileName: Asignment 1 soilution
Date: 4/7/2022
Author: Tareq Rezq Abd-elahmied
Nick Name: Lord Of Mystery */

#include <stdio.h>
#include <stdlib.h>
int edit(int* x); // declare the edit function
int main(){//L//
    int x[4]={0,5,20,80}; // declare the X array
    printf("Enter a value of a variable int x\n");
    scanf("%d",&x[0]);  // scanning the input from user by assuming that th input will be stored in x[0] value of x[0] 
    printf("befor calling edit x = %d\n",x[0]); //printing the value of x before the edit
    printf("After calling edit x = %d\n",edit(x)); ////printing the value of x after the edit
    printf("Other numbers stored in x = ");
//O//
for(int i=1;i<4;i++){
    printf("%d ,",x[i]);}
    return 0;
}
int edit(int* x){
    return (++*(x)); }//M//
