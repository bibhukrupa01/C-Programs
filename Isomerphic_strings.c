#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isIsomorphic(char* s, char* t) {
    int map1[256] = {0};  // ASCII mapping from s to t
    int map2[256] = {0};  // ASCII mapping from t to s

    int len_s = strlen(s);
    int len_t = strlen(t);

    if (len_s != len_t)
        return false;

    for (int i = 0; i < len_s; i++) {
        char c1 = s[i];
        char c2 = t[i];

        // Check if both characters have been mapped before
        if (map1[(int)c1] != map2[(int)c2])
            return false;

        // Assign a unique value (i + 1) for mapping
        map1[(int)c1] = i + 1;
        map2[(int)c2] = i + 1;
    }

    return true;
}

// Sample usage
int main() {
    char s[] = "egg";
    char t[] = "add";

    if (isIsomorphic(s, t)) {
        printf("Strings are isomorphic\n");
    } else {
        printf("Strings are not isomorphic\n");
    }

    return 0;
}
