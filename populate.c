
float calculate_cumulative(struct Cat_Grade cat) {
    float sum = 0;
    int count = 0;

    // loop through the scores and calculate the sum and count
    if (cat.score1 != -1) {
        sum += cat.score1;
        count++;
    }
    if (cat.score2 != -1) {
        sum += cat.score2;
        count++;
    }
    if (cat.score3 != -1) {
        sum += cat.score3;
        count++;
    }

    // calculate the average or set the score to -1 if no valid scores were found
    if (count > 0) {
        return sum / count;
    } else {
        return -1;
    }
}
void populate(Node **head, char *filename) {
    FILE *fp = fopen(filename, "r"); // open file for reading
    int count=0;
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }
    struct Data student_data;
    char C[50];
    fscanf(fp,"%[^\n]\n", C);
    while (fscanf(fp, "%[^\n]\n %d\n%f\t%f\t%f\n%f\t%f\t%f\n%f\t%f\t%f\n%f\t%f\t%f\n", student_data.student_name, &student_data.student_ID, 
            &student_data.Cat1.score1, &student_data.Cat1.score2, &student_data.Cat1.score3, 
            &student_data.Cat2.score1, &student_data.Cat2.score2, &student_data.Cat2.score3, 
			&student_data.Cat3.score1, &student_data.Cat3.score2, &student_data.Cat3.score3,
			&student_data.Cat4.score1, &student_data.Cat4.score2, &student_data.Cat4.score3  ) != EOF) {
        // insert student data into linked list
    student_data.Cat1.Cumulative=calculate_cumulative(student_data.Cat1);
    student_data.Cat2.Cumulative=calculate_cumulative(student_data.Cat2);
    student_data.Cat3.Cumulative=calculate_cumulative(student_data.Cat3);
    student_data.Cat4.Cumulative=calculate_cumulative(student_data.Cat4);
    float d1=student_data.Cat1.Cumulative;
    float d2=student_data.Cat2.Cumulative;
    float d3=student_data.Cat3.Cumulative;
    float d4=student_data.Cat4.Cumulative;
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
    student_data.Current_Grade = d1* cat1_weight + d2 * cat2_weight + d3 * cat3_weight +d4 * cat4_weight;
    student_data.Final_Grade=-1;

        insert_node(head, student_data);
        count++;
    }
   // write_file(filename,head);
    printf("Reading student information from file \"class_records\"\n");
    printf("A total of %d student records were read from the file class_records\n",count);
    fclose(fp); // close file
}

