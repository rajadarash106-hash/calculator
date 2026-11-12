#include <stdio.h>

/* Function declarations */
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main()
{
    float num1, num2, result;
    int choice;
    char again;

    do
    {
        printf("\n===== SIMPLE CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch(choice)
        {
            case 1:
                result = add(num1, num2);
                printf("Result = %.2f\n", result);
                break;

            case 2:
                result = subtract(num1, num2);
                printf("Result = %.2f\n", result);
                break;

            case 3:
                result = multiply(num1, num2);
                printf("Result = %.2f\n", result);
                break;

            case 4:
                if(num2 != 0)
                {
                    result = divide(num1, num2);
                    printf("Result = %.2f\n", result);
                }
                else
                {
                    printf("Error: Division by zero is not possible.\n");
                }
                break;

            default:
                printf("Invalid choice. Please select 1 to 4.\n");
        }

        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &again);

    } while(again == 'y' || again == 'Y');

    printf("\nThank you for using the calculator!\n");
    return 0;
}

/* Function definitions */
float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}
