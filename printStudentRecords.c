void printStudentRecords(Node *head) {
    // Print column headers
    printHeader("Quizzes                         Midterms                        Homework                        Final                   Current Final");
    // Initialize variables for average calculation
    float cat1Total = 0, cat2Total = 0, cat3Total = 0, cat4Total = 0, finalTotal = 0,currentTotal=0;
    int numStudents = 0;
    
    // Iterate through the linked list and print each student's record
    Node *current = head;
    while (current != NULL) {
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
    	cat1Total+=current->Student.Cat1.Cumulative;
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
    	cat2Total+=current->Student.Cat2.Cumulative;
        
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
    	cat3Total+=current->Student.Cat3.Cumulative;
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
    	cat4Total+=current->Student.Cat4.Cumulative;
        
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
    	currentTotal+=current->Student.Current_Grade;
        //finalTotal += current->Student.Final_Grade;
        
        // Move on to the next student
        current = current->next;
        numStudents++;
    }
    
    // Print the averages
    printf("\nClass Averages for Quizzes:  %.2f,", cat1Total / numStudents);
    printf("Midterms: %.2f,", cat2Total / numStudents);
    printf("Homework: %.2f,", cat3Total / numStudents);
    printf("Final: %.2f,", cat4Total / numStudents);
    printf("Current Grade: %.2f\n", currentTotal / numStudents);
}



