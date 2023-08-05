void print_lname(Node* head) {
    Node* current;
    char last[20];
    printf("\nEnter the Student's Last Name:");
	scanf("%s",last);
    int found = 0;
    Node *arr[40];
	printf("Hunting for %s\n",last);
    // print column headers
    //printf("Name\t\tID\tCat1\tCat2\tCat3\tCat4\tCurrent\tFinal\n");
	
    // loop through the linked list and print each node that matches the last name
    current = head;
    int i=0;
    while (current != NULL) {
        // check if the current node's last name matches the search string
        
        if (strstr(current->Student.student_name,last) != NULL) {
            printf("%d) %s\n",++i, current->Student.student_name);
            arr[i]=current;
            // print each category score, or "n/a" if the score is -1
            //printf("%s\t", (current->Student.Cat1.score1 == -1) ? "n/a" : "%.2f", current->Student.Cat1.Cumulative);
            //printf("%s\t", (current->Student.Cat2.score1 == -1) ? "n/a" : "%.2f", current->Student.Cat2.Cumulative);
            //printf("%s\t", (current->Student.Cat3.score1 == -1) ? "n/a" : "%.2f", current->Student.Cat3.Cumulative);
            //printf("%s\t", (current->Student.Cat4.score1 == -1) ? "n/a" : "%.2f", current->Student.Cat4.Cumulative);
            //printf("%.2f\t%.2f\n", current->Student.Current_Grade, current->Student.Final_Grade);
            found = 1;
        }
        current = current->next;
    }
    
    // if no records were found, print a message indicating so
    if (!found) {
        printf("No records found for last name \"%s\"\n", last);
        return;
    }
    else{
    	int n;
    printf("Please indicate which student you want:");
    scanf("%d",&n);
    current=arr[n];
	printHeader("Quizzes                         Midterms                        Homework                        Final                   Current Final");
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
    	
            
            return;
	}
}
