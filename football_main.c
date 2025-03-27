#include <stdio.h>
#include "football.h"

int main(void) {
    int score;
    while (1) {
        printf("Enter the NFL score (Enter 0 or 1 to STOP): ");
        if (scanf("%d", &score) != 1) {
            printf("Invalid input.\n");
            break;
        }

        if (score <= 1) {
            break;
        }

        print_combinations(score);
        printf("Total combinations: %d\n\n", count_combinations(score));
    }

    printf("Program terminated.\n");

    return 0;
}