// to determine if a number is happy number

#include<stdio.h>

int isHappy(int n){
    int sum = 0;
    int temp;

    if (n == 1 || n == 7) {
        printf("%d is happy number", n);
    }
    else if(n<10){
        printf("%d is not a happy number", n);
    }
    else{
        while(n > 0){
            temp = n % 10;
            sum = sum + (temp * temp);
            n = n / 10;
        }
        return isHappy(sum);
    }
}

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    isHappy(number);
    return 0;
}
