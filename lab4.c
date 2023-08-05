#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include "lab4.h"
#include "insert_node.c"
#include "populate.c"
#include "delete_node.c"
#include "printStudentRecords.c"
#include "print_lname.c"
#include "write_file.c"
#include "printGrade.c"
#include "printAllGrade.c"
#include "ID_isduplicate.c"
#include "printLine.c"
#include "insertScore.c"
#include "addStudent.c"
#include "updateFinalGrade.c"
#include "printHeader.c"
#define filename1 "class_records"
#define filename "filename2"
#define Category_Names "Quizzes                         Midterms                        Homework                        Final                   Current Final"
int main() {
    struct Node *head = NULL; // initialize linked list
    populate(&head, filename1); // read data from file and insert into linked list
    // traverse linked list and print student names and IDs
    while(1){
    int n;
	printf("\nPlease enter an option between 1 and 10:\n");
	printf("1)  Print Student Scores by Student ID\n2)  Print Student Scores by Last Name\n3)  Print Student Scores for All Students\n4)  Recalculate Student Scores for a Single Student ID\n5)  Recalculate All Student Scores\n6)  Insert a score for a specific Student ID\n7)  Calculate Final Grades\n8)  Add a new student\n9)  Delete a student\n10) Exit Program\n\nOption:");
	scanf("%d",&n);
	switch(n){
		case 1:  
				printLine(head,Category_Names);
				break;
		case 2:
				print_lname(head);
				break;		
		case 3: printStudentRecords(head);
				break;
		case 4: printGrade(head,Category_Names);
				break;
		case 5: printAllGrade(head);
				break;	
		case 6: insertScore(head,Category_Names);
				break;
		case 7: updateFinalGrade(head);
				printStudentRecords(head);
				break;
		case 8: addStudent(&head);
				break;
		case 9: delete_node(&head);
				break;
		case 10:write_file(head,filename); 
				exit(0);
		 
	      }
    }
    return 0;
}
