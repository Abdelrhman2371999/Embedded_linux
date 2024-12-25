#include <stdio.h>
#include <stdlib.h>

void control_capslock(int state) {
    
    const char *file_path = "/sys/class/leds/input1::capslock/brightness";
    
    
    FILE *file = fopen(file_path, "w");
    if (file == NULL) {
        perror("Error opening the file");
        return;
    }

    
    fprintf(file, "%d", state);
    fclose(file);

    
    system("cat /sys/class/leds/input1::capslock/brightness");
}

int main() {
    int input;

    
    printf("Enter 0 to turn ON Caps Lock, or 1 to turn OFF Caps Lock: ");
    scanf("%d", &input);

    if (input == 0 || input == 1) {
        control_capslock(input);
    } else {
        printf("Invalid input! Please enter 0 or 1.\n");
    }

    return 0;
}




