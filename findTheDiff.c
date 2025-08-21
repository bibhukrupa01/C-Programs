// In this code we find the difference between two strings and return the extra string

#include <stdio.h>
#include <string.h>

char findTheDifference(char* s, char* t) {
    int lenT = strlen(t);

    for (int i = 0; i < lenT; i++) {
        char ch = t[i];
        int countS = 0, countT = 0;

        // Count occurrences of ch in s
        for (int j = 0; s[j] != '\0'; j++) {
            if (s[j] == ch) countS++;
        }

        // Count occurrences of ch in t
        for (int j = 0; t[j] != '\0'; j++) {
            if (t[j] == ch) countT++;
        }

        // If counts differ, return this character
        if (countS != countT) {
            return ch;
        }
    }

    return '\0'; // should not happen if input is valid
}

int main() {
    char s[] = "abcd";
    char t[] = "abcde";
    printf("The extra character is: %c\n", findTheDifference(s, t));
    return 0;
}
