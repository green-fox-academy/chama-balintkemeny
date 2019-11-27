#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    RUNNING,
    OVER
} game_state_t;

typedef struct {
    char name[256];
    int score;
} player_t;

game_state_t g_game_state = RUNNING;

int read_score()
{
    char score_text[4];
    long score_real = 0;
    scanf("%s", score_text);

    if (score_text[0] == 'T' || score_text[0] == 'D') {
        score_real = strtol(score_text + 1, NULL, 10);
        if (score_text[0] == 'T') {
            score_real *= 3;
        } else {
            score_real *= 2;
        }
    } else {
        score_real = strtol(score_text, NULL, 10);
    }
    return (int)score_real;
};

int main() {
    int num_players = 0;
    int starting_score = 0;
    int winner_index = 0;
    printf("Please enter starting score:\n");
    scanf("%d", &starting_score);
    printf("Please enter the number of players:\n");
    scanf("%d", &num_players);

    player_t* player_array;
    player_array = (player_t*)malloc(num_players * sizeof(player_t));

    for (int i = 0; i < num_players; ++i) {
        printf("Please enter the name of Player %d\n", i + 1);
        scanf("%s", (player_array + i)->name);
        (player_array + i)->score = starting_score;
    }

    while (g_game_state == RUNNING) {
        for (int i = 0; i < num_players; ++i) {
            if (g_game_state == OVER) {
                break;
            }
            printf("%s's turn, score: %d\n", (player_array + i)->name, (player_array + i)->score);
            for (int j = 0; j < 3; ++j) {
                int tmp_score = 0;
                printf("%d. throw:\n", j + 1);
                tmp_score = read_score();
                if ((player_array + i)->score - tmp_score > 0) {
                    (player_array + i)->score -= tmp_score;
                    printf("%s's remaining score: %d\n", (player_array + i)->name, (player_array + i)->score);
                } else if ((player_array + i)->score - tmp_score == 0) {
                    winner_index = i;
                    g_game_state = OVER;
                    break;
                } else {
                    printf("Overshot!\n");
                }
            }
        }
    }

    printf("Congratulations %s, you won!\n", (player_array + winner_index)->name);
    free(player_array);
    printf("Game Finished!\n");
    return 0;
}