//TO CHECK CHECK WHETHER AN ARRAY IS BOOMERANG OR NOT

#include <stdio.h>
#include <stdbool.h>

bool isBoomerang(int points[3][2]) {
    // Check if any two points are the same
    if ((points[0][0] == points[1][0] && points[0][1] == points[1][1]) ||
        (points[1][0] == points[2][0] && points[1][1] == points[2][1]) ||
        (points[0][0] == points[2][0] && points[0][1] == points[2][1])) {
        return false;
    }

    int x1 = points[0][0], y1 = points[0][1];
    int x2 = points[1][0], y2 = points[1][1];
    int x3 = points[2][0], y3 = points[2][1];

    // Check if they are not collinear
    if ((x2 - x1) * (y3 - y1) != (x3 - x1) * (y2 - y1)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int points[3][2] = {{1, 1}, {2, 3}, {3, 2}};

    if (isBoomerang(points)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
