// TO find teh total distance travelled 
// // A truck has two fuel tanks. You are given two integers, mainTank representing the fuel present in the main tank in liters and additionalTank representing the fuel present in the additional tank in liters.

// The truck has a mileage of 10 km per liter. Whenever 5 liters of fuel get used up in the main tank, if the additional tank has at least 1 liters of fuel, 1 liters of fuel will be transferred from the additional tank to the main tank.


#include <stdio.h>

int distanceTraveled(int mainTank, int additionalTank) {
    int a = mainTank;
    int b = additionalTank;
    int minVal;

    if ((a - 1) / 4 < b) {
        minVal = (a - 1) / 4;
    } else {
        minVal = b;
    }

    return (a + minVal) * 10;
}

int main() {
    int mainTank = 5, additionalTank = 10;
    printf("Distance Traveled: %d\n", distanceTraveled(mainTank, additionalTank));
    return 0;
}
