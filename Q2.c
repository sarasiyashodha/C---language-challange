#include <stdio.h>
#include <stdlib.h>



int main()
{

 //1. Declare integer variables x, y, z and assign the value 10 in the y and 20 in the z.
    int x;
    int y;
    int z;

    y = 10;
    z = 20;

    //2. Increment the variables x, y by one and assign the sum in z.
    z = ++x + ++y;

    //3. Assign the difference of x, y in z and increment the variables x, y by one.
    z = x++ - y++;

    //4. Increment the value x by one and assign the value in z.
    z = ++x;

    //5. Display the values of x, y, and z.
    printf("x = %d, y = %d, z = %d", x, y, z); 

    // -----------------------------------------------------------------------

    // Declare varibles
    int sum = 0;
    int marks;
    float avg;
    int count = 1;
    int positive = 0;
    int negative = 0;
    int zero = 0;

    // Print the index number top of the program
    printf("Index No: 23136\n\n");

    // Create a while loop
    while (count <= 20)
    {
        // Getting the marks from the user
        printf("Enter a number: ");
        // Assign the marks to the marks variable
        scanf("%d", &marks);

        // Check the given number is positive
        if (marks > 0)
        {
            // If the given number is greate than 0, increment the positive variable by one
            positive++;
        }
        else if (marks == 0)
        {
            // If the given number is equal to 0 increment the zero variable by one
            zero++;
        }
        else
        {
            // If the given number is less than 0 increment the negative variable by one
            negative++;
        }

        // Calculate the sum
        sum = sum + marks;

        // Increment the value by one
        count++;
    }


    // Calculate the average
    // Casting the sum to float
    avg = (float)sum / 20;

    // Display the average and positive, negative, zero counts by one
    printf("\nThe average value is: %.2f", avg);
    printf("\n\nPositive Count: %d", positive);
    printf("\nNegative Count: %d", negative);
    printf("\nPositive Count: %d", zero);

    // Display the Index No at the end of the program
    printf("\n\nIndex No: 23136\n"); 

    // -----------------------------------------------------------------------

    // Declare variable
    int i = 1;

    // Use while condition
    while (i <= 5)
    {
        // Declare new variable
        int j = 1;
        // Use nested loop
        while (j <= i)
        {
            // Print *
            printf("*");

            // Increment j by one
            j++;
        }

        // Break line
        printf("\n");
        // Increment i by one
        i++;
    } 

    // -----------------------------------------------------------------------

    // Declare variable
    int i = 1;

    // Use do-while condition
    do
    {
        // Declare new variable
        int j = 1;
        // Use nested loop
        do
        {
            // Print *
            printf("*");

            // Increment j by one
            j++;
        } while (j <= i);

        // Break line
        printf("\n");

        // Increment i by one
        i++;

    } while (i <= 5);

    // -----------------------------------------------------------------------

    int num1;
    int num2;
    int operator;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");

    printf("Enter the arithmetic operation (1-4) and 5 to exit: ");
    scanf("%d", &operator);

    switch (operator)
    {
    case 1:
        printf("The Total is: %d", (num1 + num2));
        break;
    case 2:
        printf("The Substraction is: %d", (num1 - num2));
        break;
    case 3:
        printf("The Multiplication is: %d", (num1 * num2));
        break;
    case 4:
        printf("The Division is: %d", (num1 / num2));
        break;
    case 5:
        break;
    } 

    return 0;
}