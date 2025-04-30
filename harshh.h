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
// palindrome code--
// int main() {
//     int num, reversed = 0, remainder, original;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     original = num;

//     while (num != 0) {
//         remainder = num % 10;
//         reversed = reversed * 10 + remainder;
//         num /= 10;
//     }

//     if (original == reversed) {
//         printf("%d is a palindrome.\n", original);
//     } else {
//         printf("%d is not a palindrome.\n", original);
//     }

//     return 0;
// }
#include <stdio.h>
#include <string.h>

int isPalindrome(char *str) {
    char *left = str;
    char *right = str + strlen(str) - 1;

    while (left < right) {
        if (*left != *right) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Palindrome
}
int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}


///-----factorial code
// #include <stdio.h>

// int main() {
//     int num, factorial = 1;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (num < 0) {
//         printf("Factorial does not exist for negative numbers.\n");
//     } else {
//         for (int i = 1; i <= num; i++) {
//             factorial *= i;
//         }
//         printf("The factorial of %d is %d.\n", num, factorial);
//     }

//     return 0;
// }

#include <stdio.h>

void factorial(int *num, long long *result) {
    *result = 1;
    for (int i = 1; i <= *num; i++) {
        *result *= i;
    }
}

int main() {
    int n;
    long long fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    factorial(&n, &fact);

    printf("Factorial of %d is %lld\n", n, fact);

    return 0;
}

// strong number
#include <stdio.h>

int factorial(int *num) {
    int fact = 1;
    for (int i = 1; i <= *num; i++) {
        fact *= i;
    }
    return fact;
}

int isStrongNumber(int *num) {
    int sum = 0, temp = *num;
    
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(&digit);
        temp /= 10;
    }

    return (sum == *num);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isStrongNumber(&num)) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is not a Strong Number.\n", num);
    }

    return 0;
}
