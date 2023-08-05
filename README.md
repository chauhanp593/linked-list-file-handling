# Student Record Management System

This program implements a simple Student Record Management System using a linked list data structure. It allows users to perform various operations on student records, including printing, updating, adding, and deleting student information. The program provides a user-friendly command-line interface for interacting with the system.

## Features

1. **Print Student Scores by Student ID:** This option displays the scores of a specific student based on their Student ID. It provides a clear breakdown of scores for different categories such as quizzes, midterms, homework, final, and current final.

2. **Print Student Scores by Last Name:** Users can print student scores sorted by last name. This option provides a convenient way to view the scores of all students in alphabetical order.

3. **Print Student Scores for All Students:** This feature prints the scores for all students, showing the detailed breakdown of scores for each category.

4. **Recalculate Student Scores for a Single Student ID:** Users can recalculate and update the scores for a specific student based on their Student ID. This is useful for making corrections or adjustments to individual student records.

5. **Recalculate All Student Scores:** This option triggers a recalculation of scores for all students in the system, ensuring that the data remains accurate and up-to-date.

6. **Insert a Score for a Specific Student ID:** Users can insert a new score for a particular student based on their Student ID. This allows for easy addition of new score entries.

7. **Calculate Final Grades:** The program calculates and updates the final grades for all students based on their scores in different categories. It ensures that the final grades reflect the most recent score changes.

8. **Add a New Student:** Users can add a new student to the system by providing their information, including Student ID, first name, last name, and scores for different categories.

9. **Delete a Student:** This feature allows users to delete a student from the system using their Student ID. It ensures that the student's information is removed from the records.

10. **Exit Program:** Users can exit the program gracefully, and before doing so, they have the option to save the current student records to a file.

## Usage

1. Compile the program using a C compiler, ensuring that all required source files are included.

2. Run the compiled executable.

3. The program will display a menu with numbered options. Enter a number to choose an operation.

4. Follow the on-screen instructions for each selected operation. The program will guide you through the necessary steps.

5. After completing an operation, the menu will be displayed again, allowing you to choose another operation or exit the program.

6. When you choose to exit the program, it will save the student records to a specified file (`filename2`) before terminating.

## Note

- Run lab4.c file to directly use the program.
  
- The program reads initial student data from the file `class_records` during startup, populating the linked list with this data.

- It is important to ensure that the required header files (`lab4.h`) and source files (`insert_node.c`, `populate.c`, etc.) are present in the same directory as the main program file.

- This program provides a basic implementation of a Student Record Management System. It can be extended and enhanced with additional features as needed.

## Author

This program was developed by Anurag Chauhan. For questions or inquiries, please contact chauhanp593@gmail.com.
