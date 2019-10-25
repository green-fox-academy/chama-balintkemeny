#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// create a program which asks for full name and age
// and stores it in a char array
// parse that array to first_name, last_name, age (use tokenizing)
// print out the the stored variables
// example:
//   printf("Your name is: %s %s and you are %d years old", first_name, last_name, age);

int main ()
{
    char personal_data[256];
    printf("Please enter your first name, your last name and your age (separated by spaces):\n");
    scanf("%[^\n]s", personal_data);

    int index = 0;
    char* token;
    char data[3][255];
    token = strtok(personal_data, " ");
    while (token) {
        strcpy(data[index], token);
        token = strtok(NULL, " ");
        ++index;
    }
    char* first_name = data[0];
    char* last_name = data[1];
    int age = atoi(data[2]);

    printf("Your name is: %s %s and you are %d years old", first_name, last_name, age);
    return 0;
}