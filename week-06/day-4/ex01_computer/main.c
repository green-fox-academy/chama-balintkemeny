#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer test_computer;
    test_computer.bits = 64;
    test_computer.ram_size_GB = 32;
    test_computer.cpu_speed_GHz = 5.0f;

    Notebook test_notebook;
    test_notebook.bits = 64;
    test_notebook.ram_size_GB = 16;
    test_notebook.cpu_speed_GHz = 3.6f;

    printf("Computer struct - CPU speed: %.2f GHz, RAM size: %d GB, Architecture: %d bits\n",
            test_computer.cpu_speed_GHz, test_computer.ram_size_GB, test_computer.bits);

    printf("Notebook struct - CPU speed: %.2f GHz, RAM size: %d GB, Architecture: %d bits\n",
           test_notebook.cpu_speed_GHz, test_notebook.ram_size_GB, test_notebook.bits);
    return 0;
}