/*FileName: Asignment 1 soilution
Date: 28/6/2022
Author: Tareq Rezq Abd-elahmied
Nick Name: Lord Of Mystery */
#include <stdio.h>
#include <stdlib.h>

int main(){ //L//
    signed long int d_num;     // d_num >>> means decimal number
    printf("Enter the number you wnat to convert\n");   //printing a sentens to make the user enter the number
    scanf("%d",&d_num);                                //scanning the number that user entered
//O//
    if((((d_num/2)*2)==d_num) || (((d_num/2)*2)==0)){          // if statment to make condetion to figure out the number is even or odd
        printf("The number is odd = 0 \nThe number is even = 1"); // print out the result 1
    }
    else{
        printf("The number is odd = 1 \nThe number is even = 0"); // print out the result 2
    }

    return 0; // end the program
}//M//

