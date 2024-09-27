#include <stdio.h>
#include "screen.h"
#include "grid.h"


// Function to display the result of a turn
void display_turn(char action_list[], char player_stats[], char network_stats[])
{
    fputs("---- Turn Summary ----\n", stdout);
    fputs("Actions:\n", stdout);
    fputs(action_list, stdout);
    fputs("\n\nPlayer Stats:\n", stdout);
    fputs(player_stats, stdout);
    fputs("\nEnemy stats:\n", stdout);
    fputs(network_stats, stdout);
    fputs("\n----------------------\n", stdout);
}

// Function to display the player's current inventory
void display_inventory(char inventory[])
{
    fputs("---- Inventory ----\n", stdout);
    fputs(inventory, stdout);
    fputs("\n-------------------\n", stdout);
}

// Function to display the starting menu
void start_menu(void)
{
    fputs("==== Welcome to the TROG ====\n", stdout);
    fputs("1. Start New Game\n", stdout);
    fputs("2. Load Game\n", stdout);
    fputs("3. Quit\n", stdout);
    fputs("=======================================\n", stdout);
}

// Function to display the in-game pause menu
void pause_menu(void)
{
    fputs("==== Game Paused ====\n", stdout);
    fputs("1. Resume Game\n", stdout);
    fputs("2. Save Game\n", stdout);
    fputs("3. Quit to Main Menu\n", stdout);
    fputs("=====================\n", stdout);
}

// Function to display map (grid) and the locations of all visible items, enemies in the grid.
void show_map(char locations[], char grid[], int grid_size)
{
    fputs("---- Game Map ----\n", stdout);
    for (int i = 0; i < grid_size; i++)
    {
        for (int j = 0; j < grid_size; j++)
        {
            // Display the map chunk by chunk.
            // If there's something in the location array (like an enemy or item), display it
            if (locations[i * grid_size + j] != '\0')  // Checking if there's an item or enemy
            {
                fputc(locations[i * grid_size + j], stdout);  // Display the item or enemy symbol
            }
            else
            {
                fputc(grid[i * grid_size + j], stdout);  // Display the grid tile (like '.' for empty space)
            }
        }
        fputs("\n", stdout);  // New line for each row of the grid
    }
    fputs("------------------\n", stdout);
}
