#include <stdio.h>
#include <stdint.h>

    /*
     * 1. Write out myInt to myInt.txt as a text!
     * 2. Write out myInt to myInt.bin as a binary file!
     *    Check the size of myInt.txt and myInt.bin! Why it is different?
     * 3. Write out myInt to myInt.bin, myFloat to myFloat.bin and myChar to myChar.bin!
     * 4. Read them back to myIntRead, myFloatRead and myCharRead and compare these variables to myInt, myFloat, myChar,
     *    they should be the same.
     */

int main() {
    int myInt = 123456789;
    float myFloat = 3.14159265359F;
    char myChar = 'c';

    FILE* fptr;
    fptr = fopen("../myInt.txt", "w");
    fprintf(fptr, "%d", myInt);
    fclose(fptr);

    fptr = fopen("../myInt.bin", "wb");
    fwrite(&myInt, sizeof(int), 1, fptr);
    fclose(fptr);

    fptr = fopen("../myFloat.bin", "wb");
    fwrite(&myFloat, sizeof(float), 1, fptr);
    fclose(fptr);

    fptr = fopen("../myChar.bin", "wb");
    fwrite(&myChar, sizeof(char), 1, fptr);
    fclose(fptr);

    int myIntRead;
    float myFloatRead;
    char myCharRead;

    fptr = fopen("../myInt.bin", "rb");
    fread(&myIntRead, sizeof(int), 1, fptr);
    fclose(fptr);

    fptr = fopen("../myFloat.bin", "rb");
    fread(&myFloatRead, sizeof(float), 1, fptr);
    fclose(fptr);

    fptr = fopen("../myChar.bin", "rb");
    fread(&myCharRead, sizeof(char), 1, fptr);
    fclose(fptr);

    printf("%d\n%f\n%c\n", myIntRead, myFloatRead, myCharRead);
    return 0;
}