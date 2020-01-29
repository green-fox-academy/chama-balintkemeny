#include <stdio.h>

//ENUM
typedef enum {
    OFF,
    IDLE,
    RUNNING
} state_t;

//STRUCT
typedef struct {
    char name[128];
    float height;
    float weight;
    int age;
} person_t;

int main() {
    state_t state = IDLE;
    //SWITCH CASE
    switch (state) {
    case OFF :
        printf("OFF\n");
        break;
    case IDLE :
        printf("IDLE\n");
        break;
    case RUNNING :
        printf("RUNNING\n");
        break;
    default:
        printf("Here's nothing\n");
        break;
    }
    return 0;
}