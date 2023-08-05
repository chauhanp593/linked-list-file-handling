struct Cat_Grade{
float score1;
float score2;
float score3;
float Cumulative;
};
struct Data {
char student_name[40]; 
 			int student_ID;
struct Cat_Grade Cat1;
struct Cat_Grade Cat2;
struct Cat_Grade Cat3;
struct Cat_Grade Cat4;
float Current_Grade; 
float Final_Grade;
};

typedef struct Node { 
struct Data Student; 
struct Node *next;
} Node;
void printStudentRecords(Node *head);
void updateFinalGrade(Node *head);
void addStudent(Node **head);
void insert_node(Node **head,struct Data student_data);
void populate(Node **head,char *filename);
void printLine(Node *head, char *Category_Names);
void printHeader(char *Category_Names);
void delete_node(Node **head);
void free_memory(Node *head);
void printStudent();
void insertScore(Node *head,char *Category_Names);
void printGrade(Node *head, char *Category_Names);
void printAllGrade(Node *head);
void print_lname(Node* head);
void write_file(struct Node* Head,const char *filename);
