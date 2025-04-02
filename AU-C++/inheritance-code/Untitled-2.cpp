#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000

// Function to reverse the string
void reverseString(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        // Swap characters from both ends of the string
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

// Function to convert the string to uppercase
void convertToUpperCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]); // Convert each character to uppercase
    }
}

// Function to convert the string to lowercase
void convertToLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]); // Convert each character to lowercase
    }
}

int main() {
    char sentence[MAX_LENGTH];
    char longestWord[MAX_LENGTH];
    int wordCount = 0, maxWordLength = 0;

    // Prompting the user to enter a sentence
    printf("Please enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);  // Read the entire sentence

    // Remove trailing newline character from the input (if exists)
    sentence[strcspn(sentence, "\n")] = '\0';

    // Split the sentence into words and count them, also find the longest word
    char *word = strtok(sentence, " ");  // Start splitting by space
    while (word != NULL) {
        wordCount++;  // Count the word
        if (strlen(word) > maxWordLength) { // Check if this is the longest word
            maxWordLength = strlen(word);
            strcpy(longestWord, word);  // Store the longest word
        }
        word = strtok(NULL, " ");  // Continue to the next word
    }

    // Prepare the sentence for uppercase and lowercase conversion
    char upperCaseSentence[MAX_LENGTH], lowerCaseSentence[MAX_LENGTH];
    strcpy(upperCaseSentence, sentence);  // Copy the sentence
    strcpy(lowerCaseSentence, sentence);  // Copy the sentence

    // Convert the sentence to uppercase and lowercase
    convertToUpperCase(upperCaseSentence);
    convertToLowerCase(lowerCaseSentence);

    // Reverse the original sentence
    char reversedSentence[MAX_LENGTH];
    strcpy(reversedSentence, sentence);
    reverseString(reversedSentence);

    // Display the results
    printf("\nResults:\n");
    printf("Total number of words: %d\n", wordCount);
    printf("The longest word: %s\n", longestWord);
    printf("Sentence in uppercase: %s\n", upperCaseSentence);
    printf("Sentence in lowercase: %s\n", lowerCaseSentence);
    printf("Reversed sentence: %s\n", reversedSentence);

    return 0;
}
