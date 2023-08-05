void write_file(struct Node* head, const char* filename) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        fprintf(stderr, "Failed to open file for writing\n");
        return;
    }
	int c=0;
    struct Node* current = head;
    while (current != NULL) {
        fprintf(file, "%s,%d,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f\n",
                current->Student.student_name, current->Student.student_ID,
                current->Student.Cat1.score1, current->Student.Cat1.score2, current->Student.Cat1.score3, current->Student.Cat1.Cumulative,
                current->Student.Cat2.score1, current->Student.Cat2.score2, current->Student.Cat2.score3, current->Student.Cat2.Cumulative,
                current->Student.Cat3.score1, current->Student.Cat3.score2, current->Student.Cat3.score3, current->Student.Cat3.Cumulative,
                current->Student.Cat4.score1, current->Student.Cat4.score2, current->Student.Cat4.score3, current->Student.Cat4.Cumulative,
                current->Student.Current_Grade, current->Student.Final_Grade);
        current = current->next;
        c++;
    }
	printf("A total of %d student records were read from the file class_records\n",c);
    fclose(file);
}
