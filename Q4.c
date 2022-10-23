#include <stdio.h>
#include <stdlib.h>



int max(int num1, int num2, int num3)
{
    int high;

    if (num1 >= num2 && num1 >= num3)
    {
        high = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        high = num2;
    }
    else
    {
        high = num3;
    }

    return high;
}

int pos_neg_zero(int num)
{
    int positive = 0;
    int zero = 0;
    int negative = 0;

    if (num > 0)
    {
        printf("%d is a Positive number", num);
    }
    else if (num == 0)
    {
        printf("%d is a Zero number", num);
    }
    else
    {
        printf("%d is a Negative number", num);
    }
}

int main()
{
    int NUMBER1;
    int NUMBER2;
    int NUMBER3;

    printf("Index No: 23136\n\n");

    printf("Enter the first number: ");
    scanf("%d", &NUMBER1);
    printf("Enter the second number: ");
    scanf("%d", &NUMBER2);
    printf("Enter the third number: ");
    scanf("%d", &NUMBER3);

    printf("\nThe Highest number is: %d", max(NUMBER1, NUMBER2, NUMBER3));

    printf("\n\nIndex No: 23136\n"); 

    // ------------------------------------------------------------

    int NUMBER;
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("\nEnter a number: ");
        scanf("%d", &NUMBER);

        pos_neg_zero(NUMBER);
    }

    return 0;


        int array[10];
    int i;
    int sum = 0;
    int avg;

    for (i = 0; i < 10; i++)
    {
        printf("Enter a Price: ");
        scanf("%d", &array[i]);
    }

    printf("\n----------------------------------------\n");

    printf("\nNumbers in the array: ");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    int temp;

    temp = array[0];

    for (i = 0; i < 10; i++)
    {
        if (array[0] <= array[i])
        {
            array[0] = array[i];
        }
    }

    printf("\nThe Highest Price is: %d", array[0]);

    array[0] = temp;

    for (i = 0; i < 10; i++)
    {
        if (array[0] >= array[i])
        {
            array[0] = array[i];
        }
    }

    printf("\nThe Lowest Price is: %d", array[0]); 

    // ------------------------------------------------------

    // Declare Variables and array
    int array[4][4];
    int i;
    int j;

    // Getting the user inputs to the 2D array
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter a number: ");
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nValues in the array:\n");

    // Display the values inside the array
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", array[i][j]);
        }
        // Break line
        printf("\n");
    }

    printf("\nDiagonal Values in the array:\n");

    // Display the values in the diagonal
    for (i = 0; i < 4; i++)
    {
        for (j = i; j <= i; j++)
        {
            printf("%d\t", array[i][j]);
        }
    }

    return 0;
}