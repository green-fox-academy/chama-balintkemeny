#include <stdio.h>
#include <stdlib.h>

// You will write a program that keeps track of exam results.
// First, your program should ask the user how many classes took the exam. Let's say this number is N.
// Then you need to ask how many students took the exam in the first class. Let's say this number is M.
// You need to ask for the name of the class, the the exam results in percentage M times and store them.
// The number of students might be different for each class.
// You need to repeat this N times.
// Make sure you have a separate function that reads the data and returns it.

// Once you have the data write functions for the following questions:
// Which class has the biggest difference between the worst and best exam and how much is the difference?
// Which class has the best exam?
// What is the average of all the exams?

typedef struct {
    char name[12];
    int cnt_students;
    float* res_exam;
} class_t;

void print_class_data(const class_t* class_data, int cnt_classes)
{
    for (int i = 0; i < cnt_classes; ++i) {
        printf("%d. class:\n", i);
        printf("    name:     %s\n", (class_data + i)->name);
        printf("    students: %d\n", (class_data + i)->cnt_students);
        printf("    exam results: \n        ");
        for (int j = 0; j < (class_data + i)->cnt_students; ++j) {
            printf("%.2f", *((class_data + i)->res_exam + j));
            if (j != (class_data + i)->cnt_students - 1)
                printf(", ");
        }
        printf("\n\n");
    }
}

void print_biggest_diff(class_t* class_data, int cnt_classes)
{
    int index_max_diff = 0;
    float max_diff = 0;

    for (int i = 0; i < cnt_classes; ++i) {
        float class_max = 0.0f;
        for (int j = 0; j < (class_data + i)->cnt_students; ++j) {
            if (*((class_data + i)->res_exam + j) > class_max) {
                class_max = *((class_data + i)->res_exam + j);
            }
        }
        float class_min = class_max;
        for (int j = 0; j < (class_data + i)->cnt_students; ++j) {
            if (*((class_data + i)->res_exam + j) < class_min) {
                class_min = *((class_data + i)->res_exam + j);
            }
        }
        float class_diff = class_max - class_min;
        if (class_diff > max_diff) {
            max_diff = class_diff;
            index_max_diff = i;
        }
    }

    printf("The class with the biggest difference in its grades is: %s\n", (class_data + index_max_diff)->name);
    printf("The biggest difference among the grades is: %.2f\n", max_diff);
}

void print_class_best_exam(class_t* class_data, int cnt_classes)
{
    int index_class = 0;
    float best_grade = 0.0f;
    for (int i = 0; i < cnt_classes; ++i) {
        for (int j = 0; j < (class_data + i)->cnt_students; ++j) {
            if (*((class_data + i)->res_exam + j) > best_grade) {
                best_grade = *((class_data + i)->res_exam + j);
                index_class = i;
            }
        }
    }
    printf("The class that has the student with the best result is: %s\n", (class_data + index_class)->name);
}

float average(class_t* class_data, int cnt_classes)
{
    float sum_grades = 0;
    int counter = 0;
    for (int i = 0; i < cnt_classes; ++i) {
        for (int j = 0; j < (class_data + i)->cnt_students; ++j) {
            sum_grades += *((class_data + i)->res_exam + j);
            counter++;
        }
    }

    if (!counter)
        return -1.0f;
    return sum_grades / (float)counter;
}

int main()
{
    int cnt_classes;
    printf("How many classes took the exam?\n");
    scanf("%d", &cnt_classes);

    class_t* class_data = (class_t*)malloc(cnt_classes * sizeof(class_t));
    for (int i = 0; i < cnt_classes; ++i) {
        printf("What is the name of the %d. class?\n", i);
        scanf("%s", (class_data + i)->name);

        printf("How many students took the exam in the %d. class?\n", i);
        scanf("%d", &((class_data + i)->cnt_students));

        (class_data + i)->res_exam = (float*)malloc((class_data + i)->cnt_students * sizeof(int));
        for (int j = 0; j < (class_data + i)->cnt_students; ++j) {
            printf("What are the results of the %d. student?\n", j);
            scanf("%f", ((class_data + i)->res_exam) + j);
        }
    }

    print_class_data(class_data, cnt_classes);
    print_biggest_diff(class_data, cnt_classes);
    print_class_best_exam(class_data, cnt_classes);
    printf("Average results: %.2f\n", average(class_data, cnt_classes));

    //Free dynamically allocated memory
    for (int i = 0; i < cnt_classes; ++i) {
        free((class_data + i)->res_exam);
    }
    free(class_data);
    return 0;
}