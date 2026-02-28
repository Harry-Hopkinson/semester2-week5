// Week 5, Session 2

/* Task 2.2
 * Write a C program that continuosly prompts the user to enter
 * a message and then prints it back to them. The loop should terminate
 * if the user types "quit".
 * - use fgets() + newline removal
 * - use strcmp for string comparison
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
  char message[100]; // 100 characters buffer

  do {
    printf("Enter a message (type 'quit' to exit): ");
    fgets(message, sizeof(message), stdin); // read input from user

    if (message[strlen(message) - 1] == '\n') // check if the last character is a newline
    {
      message[strlen(message) - 1] = '\0'; // replace newline with null terminator
    }

    printf("You entered: %s\n", message);

  } while (strcmp(message, "quit") != 0); // 0 means successful match

  return 0;
}