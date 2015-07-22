#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    void clean_buffer(void)  {
        int cleaner;
        do  {
            cleaner = getchar();
        } while (cleaner != '\n' && cleaner != EOF);
    }
    int play;
    play = 1;
    int best;
    best = 0;
    while (play == 1) {
    int alive;
    srand (time(NULL));
    int life;
    char name[11];
    life = 0;
    alive = 1;
    while (alive != 2){
        printf("\nWelcome to the room, Infront of you stand 5 doors. Behind one there is a ghost which will cause you death. ");
        printf("You have passed the ghost %d times \n", life);
        printf("It is time for your next turn, Please choose a door by entering a number from 1 to 5: ");
        int door;
        door = rand() % 5;
        door = door + 1;
        printf("\n The ghosted door is: %d", door);
        printf("\n Pick a door (1-5):");
        int chosen;
        clean_buffer();
        chosen = getchar();
        printf("\n You have chosen door number %d \n", chosen);
        if (door == chosen) {
            printf("You have found the ghost, you loose :(\n");
            alive = 2;
        }
        else if (door > 1){
            printf("You have not chosen a door and all the doors have now became locked\n");
            alive = 2;
        }
        else if (door < 5){
            printf("You have not chosen a door and all the doors have now became locked\n");
            alive = 2;
        }
        else {
            printf("You have survived the doors, this time! \n");
        }
    }
    printf("\n Nice Try my friend, Try harder next time");
    printf("\nYour score was %d \n", life);
    if (life > best){
        printf("You have beaten your previous high score!");
        printf("\n Your old high score was %d, held by %s, but your new score of %d beat it!", best, name, life);
        best = life;
        printf("Please enter your name: ");
        scanf("%s", name);
    }
    printf("The Current high score is: %d by %s \n\n\n\n\n", best, name);
    }
}