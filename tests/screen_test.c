#include "screen.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CHAR 20

int main(void)
{
    char input[MAX_CHAR + 1];
    for (int i = 0; i < MAX_CHAR + 1; i++)
    {
        input[i] = '\0';
    }

    while (1)
    {
        printf("Enter input: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        for (int i = 0; input[i] != '\0'; i++)
        {
            input[i] = toupper((unsigned char) input[i]);
        }

        if (strcmp(input, "TURN"))
        {
            display_turn(action_list, player_stats, network_stats);
        }
        else if (strcmp(input, "INVENTORY"))
        {
            display_inventory(inventory);
        }
        else if (strcmp(input, "START"))
        {
            start_menu();
        }
        else if (strcmp(input, "PAUSE"))
        {
            pause_menu();
        }
        else if (strcmp(input, "MAP"))
        {
            show_map(locations, grid);
        }
        else if (strcmp(input, "QUIT"))
        {
            return 1;
        }
        
    }

    return 0;
}