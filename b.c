#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, heads_count = 0, tails_count = 0;
    char user_name[100];  

    printf("Who are you？\n> ");
    scanf("%s", user_name);
    
    printf("Hello, %s!\n", user_name);
    printf("Tossing a coin...\n");
    for (i = 1; i <= 3; i++) {
        int result = rand() % 2;
        if (result == 0) {
            printf("Round %d: Heads\n", i);
            heads_count++;
        } else {
            printf("Round %d: Tails\n", i);
            tails_count++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads_count, tails_count);

}