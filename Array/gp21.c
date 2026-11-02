#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: \n");
   
    scanf("%d %d", &a, &b);

    char ch;
    printf("Enter operand : \n");
    scanf(" %c", &ch);

    switch(ch) {
        case '+': 
            printf("result is %d\n", a + b); 
            break;
        case '-': 
            printf("result is %d\n", a - b); 
            break;
        case '*': 
            printf("result is %d\n", a * b); 
            break;
        case '/': 
            printf("result is %d\n", a/b); 
            break;
        case '%': 
            printf("result is %d\n", a % b); 
            break;
        default: 
            printf("Invalid operand\n");
    }

    return 0;
}