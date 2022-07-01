/*FileName: Asignment 1 soilution
Date: 28/6/2022
Author: Tareq Rezq Abd-elahmied
Nick Name: Lord Of Mystery */
#include<stdio.h>

int main(){//L//
int n,r,sum=0,temp;
printf("enter the number=");
scanf("%d",&n);   //scanning the nuber from the user
temp=n;
//O//
while(n>0){    // while statment to separate the number's digits
r=n%10;
sum=sum+(r*r*r);    // summing the cubes of the number's digits
n=n/10;
}

if(temp==sum){    //printing out the result(armstrong  number or not) after comparing the sum with the number
printf("armstrong  number ");
}else{
printf("not armstrong number");}

return 0;
}//M//
