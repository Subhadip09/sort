#include <stdio.h>
int main()
{

    int number[30];

    int i, j, a;

    printf("Enter the numbers to sort:\n");
    for (i = 0; i < 5; ++i)
        scanf("%d", &number[i]);

    for (i = 0; i < 5; ++i)
    {
        for (j = i + 1; j < 5; ++j)
        {
            if (number[i] < number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    printf("The numbers arranged in descending order are: ");

    for (i = 0; i < 5; ++i)
    {
        printf("%d ", number[i]);
    }
}