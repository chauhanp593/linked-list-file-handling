void delete_node(Node **head) {
    Node *prev = NULL;
    Node *current = *head;
    int student_ID;
    printf("Please enter the student ID  number you wish to delete, followed by enter.\n");
    scanf("%i",&student_ID);
    // traverse the list to find the node with the given student ID
    while (current != NULL && current->Student.student_ID != student_ID) {
        prev = current;
        current = current->next;
    }
    
    if (current == NULL) { // if node not found, return
        printf("No Student found.\n");
		return;
    }
        	printf("Do you really want to delete student ID number %d, %s?\n",current->Student.student_ID,current->Student.student_name);
    	printf("If yes, enter 1.  If no, enter 2:");
    	int n;
    	scanf("%d",&n);
    	if(n!=1)
    	return;
    	printf("student ID number %d, %s  has been deleted.\n",current->Student.student_ID,current->Student.student_name);
    if (prev == NULL) { // if node to be deleted is the head
        *head = current->next;
    } else { // otherwise, set the previous node's next pointer to the current node's next
        prev->next = current->next;
    }
    
    free(current); // free memory allocated for deleted node
    
}






