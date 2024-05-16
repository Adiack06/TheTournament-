#include <stdio.h>
#include <string.h>

//todo
//make menu work

int EntityCount = 0;

struct Entity
{
    char name[100];
    int hp;
    int def;
    int atk;
};

void CreateBarbarian()
{
    EntityCount += 1;
    struct Entity Barbarian;
    strcpy(Barbarian.name, "Barbarian");
    Barbarian.hp = 3;
    Barbarian.def = 3;
    Barbarian.atk = 1;
}

void CreateSlave()
{
    EntityCount += 1;
    struct Entity Slave;
    strcpy(Slave.name, "Slave");
    Slave.hp = 2;
    Slave.def = 2;
    Slave.atk = 2;
}

void CreateZombie()
{
    EntityCount += 1;
    struct Entity Zombie;
    strcpy(Zombie.name, "Zombie");
    Zombie.hp = 5;
    Zombie.def = 1;
    Zombie.atk = 3;
}

void CreateWolf()
{
    EntityCount += 1;
    struct Entity Wolf;
    strcpy(Wolf.name, "Wolf");
    Wolf.hp = 4;
    Wolf.def = 2;
    Wolf.atk = 4;
}

int MainMenu()
{
    printf("\033[0;0H\033[2J");



    printf("       _______ _                                                   \n");
    printf("      |__   __| |                                                  \n");
    printf("         | |  | |__   ___                                          \n");
    printf("         | |  | '_ \\ / _ \\                                         \n");
    printf("         | |  | | | |  __/                                         \n");
    printf("       __|_|__|_| |_|\\___|                                    _    \n");
    printf("      |__   __|                                              | |   \n");
    printf("         | | ___  _   _ _ __ _ __   __ _ _ __ ___   ___ _ __ | |_  \n");
    printf("         | |/ _ \\| | | | '__| '_ \\ / _` | '_ ` _ \\ / _ \\ '_ \\| __| \n");
    printf("         | | (_) | |_| | |  | | | | (_| | | | | | |  __/ | | | |_  \n");
    printf("         |_|\\___/ \\__,_|_|  |_| |_|\\__,_|_| |_| |_|\\___|_| |_|\\__| \n");
    printf("                                                                   \n");
    printf("                                                                   \n");

    int Choice = 0;
    printf("-------------------------------------");
    printf("\nMAIN MENU\n");
    printf("\n\t1. Start Game\n");
    printf("\t2. Exit program\n");
    printf("Choice: ");
    scanf("%d", &Choice);
    printf("\033[0;0H\033[2J");
    return(Choice);
}

void Introduction(struct Entity *Player)
{
    char name[100];
    printf("\nAs you slowly awaken, you find yourself in a dimly lit room, the air heavy with the smell of sweat and rust. Your head throbs with a dull ache, the last memories fading in like fragments of a shattered mirror.\n");
    printf("\n\nPress Enter To Continue");
    getchar();
    printf("\033[0;0H\033[2J");
    printf("\nYou recall the warmth of a crowded tavern, the clinking of tankards, and the laughter that filled the air. But now, all that remains is a haze of confusion and pain.\n");
    printf("\n\nPress Enter To Continue");
    getchar();
    printf("\033[0;0H\033[2J");
    printf("\nBefore you can piece together the events that led you here, a figure emerges from the shadows. Clad in worn armor, his face obscured by shadows, he approaches with cautious steps.\n");
    printf("\n\nPress Enter To Continue");
    getchar();
    printf("\033[0;0H\033[2J");
    printf("A voice, gruff and weathered, breaks the silence, 'He's awake.'\n\n");

    printf("The figure turns to you, eyes studying you with a mix of curiosity and calculation. 'What's your name elf?' he asks, his voice cutting through the silence like a blade.\n");
    printf("\n\nPress Enter To Continue");
    getchar();
    printf("\033[0;0H\033[2J");
    printf("You hesitate for a moment, the weight of uncertainty heavy on your tongue. 'My name...' you begin, the words coming out in a hoarse whisper, 'it's...'\n");
    printf("Name: ");
    scanf("%s", name);
    strcpy(Player->name, name); // Using -> operator to access struct member through pointer
    printf("\n\nPress Enter To Continue");
    getchar();
    printf("\033[0;0H\033[2J");
    printf("With a sense of resolve, you finally speak your name, each syllable a step closer to reclaiming your identity.\n");
    printf("\n'Welcome, %s,' the figure acknowledges, his tone softened by familiarity. 'Now, tell me, what class do you hail from?' he inquires, his gaze lingering with expectation.\n", Player->name);

    printf("\nYou have %d points to spend on %s\n", EntityCount, Player->name);
    printf("Allocate your points wisely, for they shall determine your fate in the arena.'\n");
    printf("Enter HP, DEF, ATK separated by spaces: ");
    scanf("%d %d %d", &Player->hp, &Player->def, &Player->atk);
    EntityCount += 1;

    printf("\n");
}

int main(void)
{
    int Choice;
    Choice = MainMenu();
    if (Choice == 2)
    {
        return 0;
    }

    struct Entity Player;

    Introduction(&Player); // Pass Player struct by reference
    int loopIndex = 1;

    while (loopIndex == 1)
    {

    }

    return 0;
}
