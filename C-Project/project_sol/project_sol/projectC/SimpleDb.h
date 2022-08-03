/*FileName: DataBase_Module
Author: Tareq Rezq Abd-elahmied
Nick Name: Lord Of Mystery */
//L
#ifndef SIMPLEDB_H_
#define SIMPLEDB_H_
#include <stdio.h> //including the io liberary
#include <stdlib.h> 
#include <string.h> 
#include <stdbool.h> 
#define MAXSIZE 10 // define the maximumm size to be 10
#define MAX 10
// exten number_student,choosing,decide,full,current
extern int full;
extern char current;
extern choosing;
extern decide;
extern numberStudent;
extern id;
//O
typedef unsigned int uint8;
typedef struct SimpleDb{ // define a stuct to hold the data relative to student , student_id,student_year,course_id,course_grade
//define the struct parameters 
int Student_ID;
int Student_Year;
int Course_1_ID;
int Course_1_Grade;
int Course_2_ID;
int Course_2_Grade;
int Course_3_ID;
int Course_3_Grade;
}SimpleDb_1;// creating the struct 
//prototype of functions will be used 
bool SDB_IsFull(void); //declarate function to 
uint8 SDB_GetUsedSize(void);
void SDB_AddEntry(SimpleDb_1 *s,int number);
void SDB_DeleteEntry(SimpleDb_1 *s,char id);
void SDB_GetIdList(SimpleDb_1* s);
void SDB_ReadEntry(SimpleDb_1* s,int id);
bool SDB_IsIdExist(SimpleDb_1* s,int id);
#endif 
//M
// SIMPLEDB_H_
