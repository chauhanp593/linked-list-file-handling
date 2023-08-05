void option_1(Node* head) {
	int ID;
	scanf("%d",&ID);
    Node* current = head;
    while (current != NULL) {
        if (current->Student.student_ID == ID) {
            printf("%s %d %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f\n",
                current->Student.student_name, current->Student.student_ID,
                current->Student.Cat1.score1, current->Student.Cat1.score2, current->Student.Cat1.score3, current->Student.Cat1.Cumulative,
                current->Student.Cat2.score1, current->Student.Cat2.score2, current->Student.Cat2.score3, current->Student.Cat2.Cumulative,
                current->Student.Cat3.score1, current->Student.Cat3.score2, current->Student.Cat3.score3, current->Student.Cat3.Cumulative,
                current->Student.Cat4.score1, current->Student.Cat4.score2, current->Student.Cat4.score3, current->Student.Cat4.Cumulative);
            return;
        }
        current = current->next;
    }
    printf("Data not found for ID %d.\n", ID);
    return;
}
