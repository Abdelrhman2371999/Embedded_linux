/**
 * CapsLock Toggle Utility
 * Interactive tool to control CapsLock LED state
 * Compile: gcc capslock_toggle.c -o capslock_toggle
 * Usage: sudo ./capslock_toggle
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Try different possible paths for CapsLock control
const char* CAPSLOCK_PATHS[] = {
    "/sys/class/leds/input1::capslock/brightness",
    "/sys/class/leds/capslock/brightness",
    "/sys/class/leds/*::capslock/brightness",
    NULL
};

/**
 * Controls the CapsLock LED
 * 
 * @param state 0 for OFF, 1 for ON
 * @return 0 on success, -1 on failure
 */
int control_capslock(int state) {
    FILE *file = NULL;
    char command[256];
    int success = 0;
    
    // First try the specific paths
    for (int i = 0; CAPSLOCK_PATHS[i] != NULL && CAPSLOCK_PATHS[i][0] != '*'; i++) {
        file = fopen(CAPSLOCK_PATHS[i], "w");
        if (file != NULL) {
            fprintf(file, "%d", state);
            fclose(file);
            printf("Set CapsLock to %d using %s\n", state, CAPSLOCK_PATHS[i]);
            success = 1;
            break;
        }
    }
    
    // If specific paths fail, try wildcard
    if (!success) {
        snprintf(command, sizeof(command), 
                 "echo %d | sudo tee /sys/class/leds/*::capslock/brightness > /dev/null 2>&1", 
                 state);
        
        if (system(command) == 0) {
            success = 1;
            printf("Set CapsLock to %d using wildcard path\n", state);
        }
    }
    
    if (!success) {
        fprintf(stderr, "Error: Could not access CapsLock control file\n");
        fprintf(stderr, "Possible reasons:\n");
        fprintf(stderr, "1. Run with sudo privileges\n");
        fprintf(stderr, "2. CapsLock LED path may be different on your system\n");
        return -1;
    }
    
    return 0;
}

/**
 * Displays the current state
 */
void display_state() {
    FILE *file;
    char state[10];
    
    for (int i = 0; CAPSLOCK_PATHS[i] != NULL && CAPSLOCK_PATHS[i][0] != '*'; i++) {
        file = fopen(CAPSLOCK_PATHS[i], "r");
        if (file != NULL) {
            if (fgets(state, sizeof(state), file)) {
                printf("Current CapsLock state: %s", state);
            }
            fclose(file);
            return;
        }
    }
    
    printf("Could not read current CapsLock state\n");
}

/**
 * Main function
 */
int main() {
    int input;
    
    printf("=== CapsLock LED Control ===\n\n");
    display_state();
    
    printf("\nOptions:\n");
    printf("  0 - Turn OFF CapsLock LED\n");
    printf("  1 - Turn ON CapsLock LED\n");
    printf("  9 - Exit\n");
    printf("\nEnter your choice: ");
    
    if (scanf("%d", &input) != 1) {
        fprintf(stderr, "Error: Invalid input\n");
        return EXIT_FAILURE;
    }
    
    switch (input) {
        case 0:
        case 1:
            if (control_capslock(input) == 0) {
                printf("Operation completed successfully\n");
                display_state();
            }
            break;
        case 9:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Please enter 0, 1, or 9\n");
            return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
