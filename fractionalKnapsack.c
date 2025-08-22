// Code for fractional knapsack

#include <stdio.h>

void fractional_Knapsack(int n, float w[], float v[], float W) {
    int i, j;
    float ratio[20], temp;
    float x[20];
    float total_value = 0.0, weight = 0.0;
    int index[20], temp_idx;

    for (i = 0; i < n; i++) {
        ratio[i] = v[i] / w[i];
        index[i] = i;
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                temp = ratio[i]; ratio[i] = ratio[j]; ratio[j] = temp;
                temp = w[i]; w[i] = w[j]; w[j] = temp;
                temp = v[i]; v[i] = v[j]; v[j] = temp;
                temp_idx = index[i]; index[i] = index[j]; index[j] = temp_idx;
            }
        }
    }

    for (i = 0; i < n; i++) {
        x[i] = 0.0;
    }

    weight = 0.0;
    for (i = 0; i < n; i++) {
        if (weight + w[i] <= W) {
            x[i] = 1.0;
            weight += w[i];
            total_value += v[i];
        } else {
            x[i] = (W - weight) / w[i];
            total_value += x[i] * v[i];
            weight = W;
            break;
        }
    }

    float result[20] = {0};
    for (i = 0; i < n; i++) {
        result[index[i]] = x[i];
    }

    printf("\nFractions of items taken (in original order):\n");
    for (i = 0; i < n; i++) {
        printf("Item %d: %.2f\n", i + 1, result[i]);
    }
    printf("Maximum Optimal value in knapsack = %.2f\n", total_value);
}

int main() {
    int n, i;
    float w[20], v[20], W;

    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter weights of items:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &w[i]);
    }

    printf("Enter values of items:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &v[i]);
    }
    printf("Enter capacity of knapsack: ");
    scanf("%f", &W);
    fractional_Knapsack(n, w, v, W);
    return 0;
}
