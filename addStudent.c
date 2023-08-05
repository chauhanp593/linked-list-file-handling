void addStudent(Node **head) {
    // Allocate memory for a new node and the data of the new student
    struct Data newStudent;

    // Prompt for the data of the new student
    printf("Enter the student's name: ");
    scanf("%s", newStudent.student_name);
//	fgets(newStudent.student_name, 40, stdin);
    printf("Enter the student's ID Number: ");
    scanf("%d", &newStudent.student_ID);
	while(ID_isduplicate(*head,newStudent.student_ID)){
	printf("Student ID Number entered was a duplicate.\n");
	printf("Enter the student's ID Number: ");
    scanf("%d", &newStudent.student_ID);
	}
    printf("Enter first Quizzes score (use -1 if there is no score):");
    scanf("%f", &newStudent.Cat1.score1);


    printf("Enter Second Quizzes score (use -1 if there is no score):");
    scanf("%f", &newStudent.Cat1.score2);

    printf("Enter Third Quizzes score (use -1 if there is no score):");
    scanf("%f", &newStudent.Cat1.score3);

    printf("Enter first Midterms score (use -1 if there is no score):");
    scanf("%f", &newStudent.Cat2.score1);

    printf("Enter second Midterms score (use -1 if there is no score):");
    scanf("%f", &newStudent.Cat2.score2);

    printf("Enter third Midterms score (use -1 if there is no score):");
    scanf("%f", &newStudent.Cat2.score3);

    printf("Enter first Homework score (use -1 if there is no score):");
    scanf("%f", &newStudent.Cat3.score1);

    printf("Enter second Homework score (use -1 if there is no score):");
    scanf("%f", &newStudent.Cat3.score2);

    printf("Enter third Homework score (use -1 if there is no score):");
    scanf("%f", &newStudent.Cat3.score3);

    printf("Enter first Final score (use -1 if there is no score):");
    scanf("%f", &newStudent.Cat4.score1);

    printf("Enter second Final score (use -1 if there is no score):");
    scanf("%f", &newStudent.Cat4.score2);

    printf("Enter third Final score (use -1 if there is no score):");
    scanf("%f", &newStudent.Cat4.score3);

    // Calculate the current cumulative grade and final grade
    
    newStudent.Cat1.Cumulative=calculate_cumulative(newStudent.Cat1);
    newStudent.Cat2.Cumulative=calculate_cumulative(newStudent.Cat2);
    newStudent.Cat3.Cumulative=calculate_cumulative(newStudent.Cat3);
    newStudent.Cat4.Cumulative=calculate_cumulative(newStudent.Cat4);
    float d1=newStudent.Cat1.Cumulative;
    float d2=newStudent.Cat2.Cumulative;
    float d3=newStudent.Cat3.Cumulative;
    float d4=newStudent.Cat4.Cumulative;
    float cat1_weight = 0.15;
    float cat2_weight = 0.30;
    float cat3_weight = 0.20;
    float cat4_weight = 0.35;
    if (d1 == -1) {
        d4= 100; // use a score of 100 if no valid scores were found
    }
    if (d2 == -1) {
        d2 = 100; // use a score of 100 if no valid scores were found
    }
    if (d3 == -1) {
        d3 = 100; // use a score of 100 if no valid scores were found
    }
    if (d4 == -1) {
        d4 = 100; // use a score of 100 if no valid scores were found
    }
    newStudent.Current_Grade = d1* cat1_weight + d2 * cat2_weight + d3 * cat3_weight +d4 * cat4_weight;
    newStudent.Final_Grade=-1;


    // Assign the new student data to the new node

    // Insert the new node at the beginning of the list
    insert_node(head,newStudent);

    printf("%s, Student ID# %d has been added with the following information:\n",newStudent.student_name,newStudent.student_ID);
    printHeader("Quizzes                         Midterms                        Homework                        Final                   Current Final");
		 printf("%-22s%d\t ", newStudent.student_name, newStudent.student_ID);
        // Print Cat1 score or "n/a" if -1
        if (newStudent.Cat1.score1 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", newStudent.Cat1.score1);
        }
        if (newStudent.Cat1.score2 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", newStudent.Cat1.score2);        
        }
                if (newStudent.Cat1.score3 == -1) {
            printf("-8%s", "n/a");
        } else {
            printf("%-8.2f", newStudent.Cat1.score3);        
        }
        if (newStudent.Cat1.Cumulative == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", newStudent.Cat1.Cumulative);        
        }

        if (newStudent.Cat2.score1 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", newStudent.Cat2.score1);
        }
        if (newStudent.Cat2.score2 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", newStudent.Cat2.score2);        
        }
                if (newStudent.Cat2.score3 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", newStudent.Cat2.score3);        
        }
                if (newStudent.Cat2.Cumulative == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", newStudent.Cat2.Cumulative);        
        }
    	
        
        if (newStudent.Cat3.score1 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", newStudent.Cat3.score1);
        }
        if (newStudent.Cat3.score2 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", newStudent.Cat3.score2);        
        }
                if (newStudent.Cat3.score3 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", newStudent.Cat3.score3);        
        }
                if (newStudent.Cat3.Cumulative == -1) {
            printf("-8%s", "n/a");
        } else {
            printf("%-8.2f", newStudent.Cat3.Cumulative);        
        }
    	
        if (newStudent.Cat4.score1 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", newStudent.Cat4.score1);
        }
        if (newStudent.Cat4.score2 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", newStudent.Cat4.score2);        
        }
                if (newStudent.Cat4.score3 == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", newStudent.Cat4.score3);        
        }
                if (newStudent.Cat4.Cumulative == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", newStudent.Cat4.Cumulative);        
        }
    	
        
        // Print Current Grade and Final Grade
                if (newStudent.Current_Grade == -1) {
            printf("%-8s", "n/a");
        } else {
            printf("%-8.2f", newStudent.Current_Grade);        
        }
        if (newStudent.Final_Grade == -1) {
            printf("%-8s\n", "n/a");
        } else {
            printf("%-8.2f\n", newStudent.Final_Grade);        
        }
    
}
