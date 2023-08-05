
void printAllGrade(Node *head)
{
	Node *current;
#ifdef DEBUG
	printf("Student Data. Head List is %x\n", head);
#endif
	

	/* look for the correct student Node	*/
	current = head;
    while (current != NULL) {
        	printf("Student Name: %-24s ",current->Student.student_name);
        	printf("Quizzes Cumlative: %-8.2f ",current->Student.Cat1.Cumulative);
        	printf("Midterms Cumulative: %-8.2f ",current->Student.Cat2.Cumulative);
        	printf("Homework Cumulative: %-8.2f ",current->Student.Cat3.Cumulative);
        	printf("Final Cumulative: %-8.2f ",current->Student.Cat4.Cumulative);
        	printf("Current Grade is: %-8.2f\n",current->Student.Current_Grade);
        current = current->next;
    }
	return;
}

