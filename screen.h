#ifndef SCREEN_H
#define SCREEN_H

// Function to display the result of a turn.
// The action_list shows what happened, player_stats show the player's current stats, and network_stats show enemy(s) data.
void display_turn(char action_list[], char player_stats[], char network_stats[]);

// Function to display the player's current inventory.
void display_inventory(char inventory[]);

// Function to display the starting menu of the game.
void start_menu(void);

// Function to display the in-game pause menu.
void pause_menu(void);

// Function to display map (grid) and the locations of all visible items, enemies in the grid.
void show_map(char locations[], char grid[], int grid_size);

#endif // SCREEN_H
