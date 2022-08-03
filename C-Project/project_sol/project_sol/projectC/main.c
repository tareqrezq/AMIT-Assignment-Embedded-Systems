/*FileName: DataBase_Module
Author: Tareq Rezq Abd-elahmied
Nick Name: Lord Of Mystery */
#include"SimpleDb.h"
int main(){//L
SimpleDb_1 students[MAX]={0}; //creating an array of structs to save data in it
while(1){ //using while to keep displaying the interface to the user
printf("Do You want to use AMIT DataBase?\n\n"); //asking the user if he wants to use the data base or not
printf("1 for yes  \n");
printf("anything else for no :(\n");
scanf("%d",&decide); //scanning the user answer
if(decide==1){ // if the user choose to use the database (1) go to choosing interface 
printf("\n\n\n_______________________Welcome to database of AMIT_______________________\n\n\n");
printf("1-) ADD Student \n");
printf("2-) How many students in database \n");
printf("3-) Get list of id to each student \n");
printf("4-) Get information about a student \n");
printf("5-) checking If a student is exist or not \n");
printf("6-) Delete a student \n\n\n\n");
scanf("%d",&choosing);
//O
switch(choosing){ //switch statment to switch trought the multi shoices
case 1: //if the user choose 1(adding a student)
    if(full<MAX){ // checking if there is a free space in the database to add the new student/s

            printf("How many student you want to add  \n");//asking the user for how many students he wants to add
            scanf("%d",&numberStudent);//scanning the nuber of students
            SDB_AddEntry(students,full+numberStudent);
    }
    else{//if the database if full 
        printf("The database is full plz remove some...\n\n");
    }
    break;
case 2://if the user choose 2(displaying the numbers of students in the data base)
    if(full<MAX){//checking if there is a student in the database
        printf("There is %d students in AMIT database \n\n",SDB_GetUsedSize());//printing the nuber of students in the data base 
    }
    else{ //if the database empty print the msg
        printf("The database is empty \n");
    }
    break;
case 3://if the user choose 3(Get list of id to each student)
    if(full<MAX){
        SDB_GetIdList(students);
    }
    else{
        printf("The database is empty \n");
    }
    break;
case 4://if the user choose 4(Get information about any student)
    if(full<MAX){ //asking the user for the student id 
            printf("enter the ID \n");
            scanf("%d",&id);//scanning the student id
            SDB_ReadEntry(students,id);// printing the student id 
    }
    else{
        printf("The database is empty \n");
    }
    break;
case 5://if the user choose 5(If any student is exist or not)
    if(full<MAX){

    printf("Enter the ID to know if the student is exist or not \n");
    scanf("%d",&id);
    if(SDB_IsIdExist(students,id)==1){
        printf("Yes %d is exist \n",id);
    }
    else{
        printf("%d is not exist in AMIT database");
    }
    }
    else{
        printf("The database is empty \n");
    }
    break; 
case 6://if the user choose 6(Delete a student)
    if(full<MAX){
        printf("Enter the id to delete the student \n");
        scanf("%d",&id); // scanning the id from the user
        SDB_DeleteEntry(students,id);
    }
    else{
        printf("The database is empty \n");
    }
    break;


default:// default action if there is no choice taken
    printf("Wrong number  \n");
    break;

}

}
else{
        printf("\n\n\n Thx for using AMIT services  \n\n");
    break;
}
}
    return 0;
}//M
