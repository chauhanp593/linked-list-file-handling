void insert_node(Node **head, struct Data data) {
    Node *new_node = (Node *) malloc(sizeof(Node));
    new_node->Student = data;
    new_node->next = NULL;
    
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    
    Node *prev = NULL;
    Node *current = *head;
    
    while (current != NULL && current->Student.student_ID < data.student_ID) {
        prev = current;
        current = current->next;
    }
    
    if (prev == NULL) {
        new_node->next = *head;
        *head = new_node;
    } else {
        prev->next = new_node;
        new_node->next = current;
    }
}
