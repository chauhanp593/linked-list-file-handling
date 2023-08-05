
void updateFinalGrade(Node *head)
{
	Node *current;
#ifdef DEBUG
	printf("Student Data. Head List is %x\n", head);
#endif
	

	/* look for the correct student Node	*/
	current = head;
    while (current != NULL) {
        float cat1_score = (current->Student.Cat1.Cumulative >= 0) ? current->Student.Cat1.Cumulative : 0;
        float cat2_score = (current->Student.Cat2.Cumulative >= 0) ? current->Student.Cat2.Cumulative : 0;
        float cat3_score = (current->Student.Cat3.Cumulative >= 0) ? current->Student.Cat3.Cumulative : 0;
        float cat4_score = (current->Student.Cat4.Cumulative >= 0) ? current->Student.Cat4.Cumulative : 0;
        float final_grade = (0.15 * cat1_score) + (0.3 * cat2_score) + (0.2 * cat3_score) + (0.35 * cat4_score);
        current->Student.Final_Grade = final_grade;
        current = current->next;
    }
	return;
}


