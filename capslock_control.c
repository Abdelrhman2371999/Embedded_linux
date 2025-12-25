/**
 * CapsLock LED Control Utility
 * Controls the CapsLock LED brightness on Linux systems
 * Compile: gcc capslock_control.c -o capslock_ctl
 * Usage: sudo ./capslock_ctl [0|1]
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define CAPSLOCK_PATH "/sys/class/leds/input1::capslock/brightness"
#define BACKUP_PATH "/sys/class/leds/capslock/brightness"

/**
 * Sets the CapsLock LED state
 * 
 * @param state 0 for off, 1 for on
 * @return 0 on success, -1 on error
 */
int set_capslock_led(int state) {
    FILE *file;
    const char *paths[] = {CAPSLOCK_PATH, BACKUP_PATH, NULL};
    int success = 0;
    
    // Try multiple possible paths
    for (int i = 0; paths[i] != NULL; i++) {
        file = fopen(paths[i], "w");
        if (file != NULL) {
            fprintf(file, "%d", state);
            fclose(file);
            success = 1;
            printf("CapsLock LED set to: %d (using %s)\n", state, paths[i]);
            break;
        }
    }
    
    if (!success) {
        fprintf(stderr, "Error: Could not access CapsLock LED control\n");
        fprintf(stderr, "Make sure you have root privileges\n");
        return -1;
    }
    
    return 0;
}

/**
 * Displays current CapsLock LED state
 */
void display_current_state() {
    FILE *file;
    char buffer[10];
    
    file = fopen(CAPSLOCK_PATH, "r");
    if (file == NULL) {
        file = fopen(BACKUP_PATH, "r");
    }
    
    if (file != NULL) {
        if (fgets(buffer, sizeof(buffer), file)) {
            printf("Current CapsLock LED state: %s", buffer);
        }
        fclose(file);
    }
}

/**
 * Main function
 */
int main(int argc, char *argv[]) {
    int state;
    
    printf("=== CapsLock LED Control ===\n");
    
    if (argc == 2) {
        // Command line argument mode
        state = atoi(argv[1]);
    } else {
        // Interactive mode
        display_current_state();
        printf("\nEnter 0 to turn OFF CapsLock LED\n");
        printf("Enter 1 to turn ON CapsLock LED\n");
        printf("Choice: ");
        
        if (scanf("%d", &state) != 1) {
            fprintf(stderr, "Error: Invalid input\n");
            return EXIT_FAILURE;
        }
    }
    
    if (state != 0 && state != 1) {
        fprintf(stderr, "Error: State must be 0 (OFF) or 1 (ON)\n");
        return EXIT_FAILURE;
    }
    
    if (set_capslock_led(state) == 0) {
        display_current_state();
        return EXIT_SUCCESS;
    }
    
    return EXIT_FAILURE;
}
