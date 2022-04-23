#include <stdio.h>

int main()
{
    int user_quit = 0;
    char operation;
    int num_1, num_2;
    int result;
    while(!user_quit){
        printf("Enter the opertation you want to perform: ");
        scanf("%c", &operation);
        printf("\n");
        printf("Enter the first number: ");
        scanf("%d", &num_1);
        printf("\n");
        printf("Enter the second number: ");
        scanf("%d", &num_2);
        printf("\n");
        switch (operation)
        {
        case '+':
            result = num_1 + num_2;
            break;
        case '-':
            result = num_1 - num_2;
            break;
        case '*':
        case 'x':
            result = num_1 * num_2;
            break;
        case '/':
            result = num_1 / num_2;
            break;
        case '^':
            result = (int)pow(num_1, num_2);
            break;
        case '%':
            result = num_1 % num_2;
            break;
        default:
            user_quit = 1;
        }
        printf("The result of '%d %c %d' is %d", num_1, operation, num_2, result);
        printf("\n");
    }
    return 0;
}
