// hello.h
#ifndef HELLO_H
#define HELLO_H

#include <stdio.h>

void Hello(int n) {
    if (n == 1) {
        printf("Hello\n");

    }
    else if{
        printf("harsh");
    } else {
        printf("bye\n");
    }
}


#endif
int main() {
    int num, reversed = 0, remainder, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}


#include <stdio.h>

int main() {
    int num, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial does not exist for negative numbers.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("The factorial of %d is %d.\n", num, factorial);
    }

    return 0;
}