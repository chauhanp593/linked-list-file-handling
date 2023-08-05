/* This is the program for option 1
 * print student scores for a specific student ID#
 */
void insertScore(Node *head, char *Category_Names)
{
	Node *current;
	int StudentID;

#ifdef DEBUG
	printf("Student Data. Head List is %x\n", head);
#endif
	/* get studentID to use from user	*/
	printf("Enter the Student ID #: ");
	scanf("%i", &StudentID);
	printf("Hunting for %d\n", StudentID);

	/* look for the correct student Node	*/
	current = head;
    while (current != NULL) {
        if (current->Student.student_ID == StudentID) {
        	printf("Insert a score for %s  Enter 1, if yes, Enter 2, if no:",current->Student.student_name);
        	int n;
        	scanf("%d",&n);
        	if(n!=1)
        	{
        		return;
			}
			printf("Which Cateogry?\n1)Quizzes\n2)Midterms\n3)Homework\n4)Final\n");
			scanf("%d",&n);
			int n1;
			printf("Which score?\nEnter 1,2, or 3\n");
			scanf("%d",&n1);
			printf("Enter New Score:");
			float score;
			scanf("%f",&score);
			if(n==1){
				if(n1==1)
				current->Student.Cat1.score1=score;
				if(n1==2)
				current->Student.Cat1.score2=score;
				if(n1==3)
				current->Student.Cat1.score3=score;
			}
			if(n==2){
				if(n1==1)
				current->Student.Cat2.score1=score;
				if(n1==2)
				current->Student.Cat2.score2=score;
				if(n1==3)
				current->Student.Cat2.score3=score;
			}
			if(n==3){
				if(n1==1)
				current->Student.Cat3.score1=score;
				if(n1==2)
				current->Student.Cat3.score2=score;
				if(n1==3)
				current->Student.Cat3.score3=score;
			}
			if(n==4){
				if(n1==1)
				current->Student.Cat4.score1=score;
				if(n1==2)
				current->Student.Cat4.score2=score;
				if(n1==3)
				current->Student.Cat4.score3=score;
			}
        	printHeader(Category_Names);
        	printf("%-22s%d\t ", current->Student.student_name, current->Student.student_ID);
        
        // Print Cat1 score or "n/a" if -1
        if (current->Student.Cat1.score1 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", current->Student.Cat1.score1);
        }
        if (current->Student.Cat1.score2 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", current->Student.Cat1.score2);        
        }
                if (current->Student.Cat1.score3 == -1) {
            printf("-8%s", "n/a");
        } else {
            printf("%-8.2f", current->Student.Cat1.score3);        
        }
        if (current->Student.Cat1.Cumulative == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", current->Student.Cat1.Cumulative);        
        }

        if (current->Student.Cat2.score1 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", current->Student.Cat2.score1);
        }
        if (current->Student.Cat2.score2 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", current->Student.Cat2.score2);        
        }
                if (current->Student.Cat2.score3 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", current->Student.Cat2.score3);        
        }
                if (current->Student.Cat2.Cumulative == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", current->Student.Cat2.Cumulative);        
        }
    	
        
        if (current->Student.Cat3.score1 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", current->Student.Cat3.score1);
        }
        if (current->Student.Cat3.score2 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", current->Student.Cat3.score2);        
        }
                if (current->Student.Cat3.score3 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", current->Student.Cat3.score3);        
        }
                if (current->Student.Cat3.Cumulative == -1) {
            printf("-8%s", "n/a");
        } else {
            printf("%-8.2f", current->Student.Cat3.Cumulative);        
        }
    	
        if (current->Student.Cat4.score1 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", current->Student.Cat4.score1);
        }
        if (current->Student.Cat4.score2 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", current->Student.Cat4.score2);        
        }
                if (current->Student.Cat4.score3 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", current->Student.Cat4.score3);        
        }
                if (current->Student.Cat4.Cumulative == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", current->Student.Cat4.Cumulative);        
        }
    	
        
        // Print Current Grade and Final Grade
                if (current->Student.Current_Grade == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", current->Student.Current_Grade);        
        }
        if (current->Student.Final_Grade == -1) {
            printf("%-8s\n", "n/a");
        } else {
            printf("%-8.2f\n", current->Student.Final_Grade);        
        }
    	printf("Note:  Category Cums, Current Grade and Final Grade have not been recalculated based on the new value entered.\n");	
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

