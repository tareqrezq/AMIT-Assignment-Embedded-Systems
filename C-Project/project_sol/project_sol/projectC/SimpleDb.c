/*FileName: DataBase_Module
Author: Tareq Rezq Abd-elahmied
Nick Name: Lord Of Mystery */
#include"SimpleDb.h"
int choosing;
int decide;
int numberStudent;
int id;
int full=0;
char current=0;
//L
//check if  the database  is full or not
bool SDB_IsFull(void){
if(full<MAX){
    return 1;
}else{
    return 0;
}
}

// Know How Many students in database
uint8 SDB_GetUsedSize(void){
return full;
}

// ADD students
void SDB_AddEntry(SimpleDb_1 *s,int number)  // justifying: i (used SimpleDb_1 *s,int number) instead of (uint8 id, uint8 year, uint8* subjects, uint8* grades) cuz my code dosnt need it and my code is running well
{

if(SDB_IsFull){
    for (full ; full< number; full++) {
        printf("Student %d\n\n",full+1);
        printf("Student_ID\t: ");
        scanf("%d", &s[full].Student_ID);
        printf("Student_Year\t: ");
        scanf("%d", &s[full].Student_Year);
        printf("Course_1_ID\t: ");
        scanf("%d", &s[full].Course_1_ID);
        printf("Course_1_Grade\t: ");
        scanf("%d", &s[full].Course_1_Grade);
        printf("Course_2_ID\t: ");
        scanf("%d", &s[full].Course_2_ID);
        printf("Course_2_Grade\t: ");
        scanf("%d", &s[full].Course_2_Grade);
        printf("Course_3_ID\t: ");
        scanf("%d", &s[full].Course_3_ID);
        printf("Course_3_Grade\t: ");
        scanf("%d", &s[full].Course_3_Grade);
        printf("\n\n\n");
    }
    }else{
    printf("The DB is full");
}
}

// to delete Student

void SDB_DeleteEntry(SimpleDb_1 *s,char id){   // justifying: i used (SimpleDb_1 *s,char id) instead of (uint8 id) cuz my code need this addition to run well
int pos;
for(int i=0;i<full;i++){
    if(s[i].Student_ID==id){
        pos=i;
        for(int k=pos;k<full;k++){
            s[k].Student_ID=s[k+1].Student_ID;
            s[k].Student_Year=s[k+1].Student_Year;
            s[k].Course_1_ID=s[k+1].Course_1_ID;
            s[k].Course_1_Grade=s[k+1].Course_1_Grade;
            s[k].Course_2_ID=s[k+1].Course_2_ID;
            s[k].Course_2_Grade=s[k+1].Course_2_Grade;
            s[k].Course_3_ID=s[k+1].Course_3_ID;
            s[k].Course_3_Grade=s[k+1].Course_3_Grade;
        }
        full--;
    }
}
}
//O
// Get list of all ids in database

void SDB_GetIdList(SimpleDb_1* s){        // justifying: i used (SimpleDb_1* s) instead of (uint8* count, uint8* list) cuz i dont need more than this
for(int i=0;i<full;i++){

    printf("Student %d\n\n",i+1);
    printf("Student_ID\t: %d\n",s[i].Student_ID);
    printf("\n\n\n");


}
}

// Read The information of any student by given id

void SDB_ReadEntry(SimpleDb_1* s,int id){            // justifying: i used (SimpleDb_1* s,int id) instead of (uint8* count, uint8* list) cuz my algorithm dosnt need more than this
    for(int i=0;i<MAX;i++){
        if(s[i].Student_ID==id){
            printf("Student %d\n\n",i+1);
            printf("Student_ID\t: %d\n",s[i].Student_ID);
            printf("Student_Year\t: %d\n",s[i].Student_Year);
            printf("Course_1_ID\t: %d\n",s[i].Course_1_ID);
            printf("Course_1_Grade\t: %d\n",s[i].Course_1_Grade);
            printf("Course_2_ID\t: %d\n",s[i].Course_2_ID);
            printf("Course_2_Grade\t: %d\n",s[i].Course_2_Grade);
            printf("Course_3_ID\t: %d\n",s[i].Course_3_ID);
            printf("Course_3_Grade\t: %d\n",s[i].Course_3_Grade);

    }else{}

}
printf("\n\n\n\n");
}

// To see if any student IS EXIST  or not
bool SDB_IsIdExist(SimpleDb_1* s,int id){                   // justifying: i used (SimpleDb_1 *s,char id) instead of (uint8 id) cuz my code need this addition to run well
    for(int i=0;i<MAX;i++){
     if(s[i].Student_ID==id){
       return 1;
    }
}
return 0;
}//M
