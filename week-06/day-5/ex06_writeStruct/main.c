#include <stdio.h>
#include <stdint.h>

/*
 * 1. Create a struct which represents a person:
 * - name (max 64 characters)
 * - age (integer)
 * - height in meters (floating point)
 */

typedef struct {
    char name[64];
    int age;
    float height;
} person_t;

int main() {

    /*
     * 2. Create a person struct, fill it with some data and write it out to a binary file.
     *    Read it back to another struct variable and compare them. Are they equal?
     */

    person_t testPerson = {"Adam", 20, 1.8f};
    FILE* fptr;
    fptr = fopen("../person.bin", "wb");
    fwrite(&testPerson, sizeof(person_t), 1, fptr);
    fclose(fptr);

    person_t testPerson2;
    fptr = fopen("../person.bin", "rb");
    fread(&testPerson2, sizeof(person_t), 1, fptr);
    fclose(fptr);

    printf("Name: %s, Age: %d, Height: %.2f\n", testPerson2.name, testPerson2.age, testPerson2.height);

    /*
     * 3. Create an array which holds 10 person struct.
     *    Fill them with some data and write out the array to a binary file.
     *    Read it back to another array and compare the array content to the first one. Are they equal?
     */

    person_t testPeople[5] = {{"John",      50, 1.65f},
                              {"Mary",      45, 1.60f},
                              {"Paul",      30, 1.90f},
                              {"Susan",     12, 1.45f},
                              {"Stephanie", 24, 1.80f}};

    fptr = fopen("../people.bin", "wb");
    fwrite(testPeople, sizeof(person_t), 5, fptr);
    fclose(fptr);

    person_t testPeople2[5];
    fptr = fopen("../people.bin", "rb");
    fread(testPeople2, sizeof(person_t), 5, fptr);
    fclose(fptr);

    for (int i = 0; i < 5; ++i) {
        printf("Name: %s, Age: %d, Height: %.2f\n",
               testPeople2[i].name, testPeople2[i].age, testPeople[i].height);
    }

    return 0;
}