#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Welcome to the Typing Speed Test!\n");
    printf("Type the following text:\n");

    // Replace this text with your desired test text
    const char *testText = "The quick brown fox jumps over the lazy dog.";

    printf("%s\n", testText);

    // Record the start time
    time_t startTime = time(NULL);

    char userTyped[100]; // Assuming the user won't type more than 100 characters
    fgets(userTyped, sizeof(userTyped), stdin);

    // Record the end time
    time_t endTime = time(NULL);

    // Calculate the time taken in seconds
    double timeTaken = difftime(endTime, startTime);

    // Calculate the typing speed in words per minute (WPM)
    int wordsTyped = 1; // Initialize with 1 to account for the first word
    for (int i = 0; userTyped[i] != '\0'; i++) {
        if (userTyped[i] == ' ') {
            wordsTyped++;
        }
    }

    double typingSpeed = (wordsTyped / timeTaken) * 60;

    printf("\nTyping Speed: %.2f words per minute (WPM)\n", typingSpeed);

    return 0;
}
