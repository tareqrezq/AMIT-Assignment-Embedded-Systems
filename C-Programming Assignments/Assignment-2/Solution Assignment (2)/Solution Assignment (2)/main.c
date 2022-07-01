/*FileName: Asignment 1 soilution
Date: 28/6/2022
Author: Tareq Rezq Abd-elahmied
Nick Name: Lord Of Mystery */
#include <stdio.h>
#include <stdlib.h>

int main(){//L//
signed long int number_1,number_2; //declarate the 2 numbers that the user will enter.
char operaion;                     //declarate the operation that the user with choose.
//scanning the 2 numbers and the operation from the user from line 12 to 18
printf("Enter Number_1\n");
scanf("%d",&number_1);
fflush(stdin);
printf("Enter the operator\n");
scanf("%c",&operaion);
printf("Enter Number_2\n");
scanf("%d",&number_2);
//O//
//useing switch statment to porced the operation and print out the result
switch (operaion){
 case '+':
     printf("The result = %d",number_1+number_2);
     break;
 case '-':
     printf("The result = %d",number_1-number_2);
     break;
 case '*':
     printf("The result = %d",number_1*number_2);
     break;
 case '/':
         if(0==number_2){
            printf("Its not allawed");
         }else{
            scanf("The result = %i",number_1/number_2);
         }
     break;
 default:
        printf("Wrong operator");
 }
    return 0;
}//M//
