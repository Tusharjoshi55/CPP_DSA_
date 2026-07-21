#include <stdio.h>
#include <time.h>      // Required for time functions
#include <stdlib.h>    // Required for system() functions

#ifdef _WIN32
#include <windows.h>   // Required for Sleep() on Windows
#else
#include <unistd.h>    // Required for sleep() on Linux/Mac
#endif

int main() {
    // Set the console window title
    system("title Live Local Clock");

    printf("Press Ctrl + C inside the window to exit the clock.\n");
    printf("--------------------------------------------------\n\n");

    // Continuous loop to update the time every second
    while (1) {
        time_t rawTime;
        struct tm *localTime;

        // 1. Get the current raw time from the system
        time(&rawTime);

        // 2. Convert raw time into local time structure (hours, mins, secs)
        localTime = localtime(&rawTime);

        // 3. Print the time format (\r returns the cursor to the start of the line)
        // %02d ensures numbers under 10 look like "05" instead of "5"
        printf("\rCurrent Time: %02d:%02d:%02d", 
               localTime->tm_hour, 
               localTime->tm_min, 
               localTime->tm_sec);
        
        // Force the console to update the text immediately
        fflush(stdout);

        // 4. Pause the program for 1 second (1000 milliseconds) before looping
        #ifdef _WIN32
        Sleep(1000); 
        #else
        sleep(1);
        #endif
    }

    return 0;
}
