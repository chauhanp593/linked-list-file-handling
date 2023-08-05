/* This is the program for option 1
 * print student scores for a specific student ID#
 */
void printGrade(Node *head, char *Category_Names)
{
	Node *current;
	int StudentID;

#ifdef DEBUG
	printf("Student Data. Head List is %x\n", head);
#endif
	/* get studentID to use from user	*/
	printf("What is the Student ID for the scores you want to recalculate?\nStudent ID:");
	scanf("%i", &StudentID);

	/* look for the correct student Node	*/
	current = head;
    while (current != NULL) {
        if (current->Student.student_ID == StudentID) {
        	printf("Recalculating grades for %s , Student ID Number: %d\n",current->Student.student_name ,StudentID);
        	printf("Quizzes Cumlative: %-8.2f\n",current->Student.Cat1.Cumulative);
        	printf("Midterms Cumulative: %-8.2f\n",current->Student.Cat2.Cumulative);
        	printf("Homework Cumulative: %-8.2f\n",current->Student.Cat3.Cumulative);
        	printf("Final Cumulative: %-8.2f\n",current->Student.Cat4.Cumulative);
        	printf("Current Grade is: %-8.2f\n",current->Student.Current_Grade);
            return;
        }
        current = current->next;
    }

	/* we found it or not	*/
	if(current == NULL){
		printf("\nERROR: Student ID number %i was not found in the list\n",StudentID);
	}
	else {
		printHeader(Category_Names);
	}
}

