#include <stdio.h>
#include <string.h>

/* Digimon database!
 * You should store the following data in a structure
 *  - the name of the digimon (which is shorter than 128 characters)
 *  - the age of the digimon (in years)
 *  - the health of the digimon (between 0-100)
 *  - the name of the tamer (which is shorter than 256 characters)
 *  - the digivolution level of the digimon (as a custom type, see below)
 *
 * You should store the digivolution level in an enumeration
 * the valid digivolution levels are:
 *  - baby
 *  - in-training
 *  - rookie
 *  - champion
 *  - ultimate
 *  - mega
 *
 * The digimons are stored in an array.
 *
 * Write the following functions:
 * 1) Get minimum health index
 *      - parameters:
 *          - array
 *          - array length
 *      - it returns the index of the minimal health digimon in the "array"
 * 2) Get same digivolution level count
 *      - parameters:
 *          - array
 *          - array length
 *          - digivolution level
 *      - it returns the count of digimons which are at "digivolution level"
 * 3) Get same tamer count
 *      - parameters:
 *          - array
 *          - array length
 *          - tamer name
 *      - it returns the count of the digimons which have the same tamer as "tamer name"
 * 4) Get average health of the same tamer
 *      - parameters:
 *          - array
 *          - array length
 *          - tamer name
 *      - it returns the average health of the digimons which have the same tamer as "tamer name"
 *
 * Don't forget to handle invalid inputs (NULL pointers, invalid values etc.)
 */

typedef enum digivolution {
    BABY,
    IN_TRAINING,
    ROOKIE,
    CHAMPION,
    ULTIMATE,
    MEGA
} digivolution_t;

typedef struct {
    char* name;
    int age;
    int health;
    char* tamer;
    digivolution_t digivolution;
} digimon_t;

digimon_t create_digimon(char name[128], int age, int health, char tamer[256], digivolution_t digivolution)
{
    digimon_t new;
    new.name = name == NULL ? "Default" : name;
    new.age = age;
    new.health = health > 100 ? 100 : (health < 0 ? 0 : health);
    new.tamer = tamer == NULL ? "Default" : tamer;
    new.digivolution = digivolution;
    return new;
}

int get_minimum_health_index(digimon_t* digimon_array, int len)
{
    int index = 0;
    int min_health = 101;
    for (int i = 0; i < len; ++i) {
        if ((digimon_array + i)->health < min_health) {
            index = i;
            min_health = (digimon_array + i)->health;
        }
    }
    return index;
}

int get_digivol_lvl_count(digimon_t* digimon_array, int len, digivolution_t in_digivolution)
{
    int counter = 0;
    for (int i = 0; i < len; ++i) {
        if ((digimon_array + i)->digivolution == in_digivolution)
            counter++;
    }
    return counter;
}

int get_same_tamer_count(digimon_t* digimon_array, int len, char* tamer)
{
    int counter = 0;
    for (int i = 0; i < len; ++i) {
        if (!strcmp(tamer, (digimon_array + i)->tamer))
            counter++;
    }
    return counter;
}

float get_average_health(digimon_t* digimon_array, int len)
{
    int total_health = 0;
    for (int i = 0; i < len; ++i) {
        total_health += (digimon_array + i)->health;
    }
    return (float)total_health / (float)len;
}

int main()
{
    digimon_t digimon1 = create_digimon(NULL, 10, 25, "Tamer", ROOKIE);
    digimon_t digimon2 = create_digimon("Digi2", 10, 15, "Tamer", ULTIMATE);
    digimon_t digimons[2] = {digimon1, digimon2};

    printf("%s\n", digimon1.name);
    printf("%d\n", get_minimum_health_index(digimons,2));
    printf("%d\n", get_digivol_lvl_count(digimons,2, ROOKIE));
    printf("%d\n", get_same_tamer_count(digimons,2, "Tamer"));
    printf("%.1f\n", get_average_health(digimons,2));

    return 0;
}