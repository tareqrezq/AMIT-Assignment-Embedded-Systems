#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,len,i;
    int flag=0;
    printf("plz enter your number \n");
    scanf("%d",&num);
    printf("plz enter the length \n");
    scanf("%d",&len);
    int arr[len];
    int *ptr=arr;//first one
    int *z=(arr+(len-1));//last element in array
    int *ptr1=arr+(len/2);//middle one
    printf("enter arr numbers \n");
    for(i=0;i<len;i++){//scan the arr elements

        scanf("%d",&arr[i]);
    }
    for(i=0;i<len-1;i++){
           for(int j=0;j<len-1-i;j++){
        if(arr[j]>arr[j+1]){
            int z=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=z;
        }
        else{}
    }}



   while(1){
        if(num==*ptr1){
            flag+=1;
            break;
        }

        else if(num>*ptr1){

            if(num<*(ptr1+((z-ptr1)/2))){//to ensure if the number was between half and the second half
                ptr1+=1;
                continue;
            }
           else if((z-ptr1)==1){//this case if the pointer point to the element directly before the last element so may the last element is the required one
            ptr1=ptr1+1;
            continue;
           }
           else if((z-ptr1)==0){//in case the number wasnot in the arry
            break;
           }
           else{
           ptr1=ptr1+((z-ptr1)/2);
           continue;

            }}
         else if(num<*ptr1){

            if(num>*(ptr1-((ptr1-ptr)/2))){
                ptr1-=1;
                continue;
            }
           else if((ptr1-ptr)==1){
            ptr1=ptr1-1;
            continue;
           }
            else if((ptr1-ptr)==0){
            break;
           }
           else{
           ptr1=ptr1-((ptr1-ptr)/2);
           continue;

            }}

            }
            if(flag==1){
                printf("number exist \n");

            }
            else{
                printf("number not exist \n");
            }



    return 0;
}
