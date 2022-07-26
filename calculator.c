#include <stdio.h>

int main()
{
    int num1, num2;
    int res;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    printf("choose your desired operation : \n");

    int choice;
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        res = num1 + num2;
        break;
    case 2:
        res = num1 - num2;
        break;
    case 3:
        res = num1 * num2;
        break;
    case 4:
        res = num1 / num2;
        break;
    default:
        res = printf("dkfj");
    }
    printf("The result of operation is : %d", res);
    return 0;
}