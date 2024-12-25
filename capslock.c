#include <stdio.h>
#include <stdlib.h>

int main() {
    // Open the file to write the value "0" for the Caps Lock
    FILE *file = fopen("/sys/class/leds/capslock/brightness", "w");
    if (file == NULL) {
        perror("Error opening the file");
        return 1;
    }

    // Write the value "0" to the file
    fprintf(file, "0");
    fclose(file);

    // Execute the cat command to display the file contents
    system("cat /sys/class/leds/capslock/brightness");

    return 0;
}




