// To return true if the word is capitalized 

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool detectCapitalUse(char word[]) {
    int len = strlen(word);
    int upperCount = 0, lowerCount = 0;

    // Count uppercase letters
    for (int i = 0; i < len; i++) {
        if (isupper(word[i]))
            upperCount++;
        else if (islower(word[i]))
            lowerCount++;
    }

    // Case 1: All uppercase
    if (upperCount == len)
        return true;

    // Case 2: All lowercase
    if (lowerCount == len)
        return true;

    // Case 3: Only the first letter is uppercase, rest are lowercase
    if (isupper(word[0]) && lowerCount == len - 1)
        return true;

    return false;
}

int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);

    if (detectCapitalUse(word)) {
        printf("Correct capital usage.\n");
    } else {
        printf("Incorrect capital usage.\n");
    }

    return 0;
}
