#include <stdio.h>
#include <stdlib.h>

//In the file you can find the best grossing movies in the format: [Title] [Profit] [Release date]
//Make a function that reads the data and returns a pointer to the data and the size. The function should not use more memory than necessary.
//Print the summed profit grouped by year
//Which was the most successful year in the movie industry?

typedef struct {
    char title[128];
    int profit;
    int release_date;
} movie_t;

int main()
{
    //OPEN FILE
    FILE* f_ptr;
    f_ptr = fopen("../input.txt", "r");


    return 0;
}