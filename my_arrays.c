#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];
    int count1=1,count2=1;
    int sign;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter integer value %d for array 1 : ",count1);
            scanf("%d",&arr1[i][j]);
            count1++;
        }
    }

    printf("\n");

    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            printf("Enter integer %d for array 2 : ",count2);
            scanf("%d",&arr2[x][y]);
            count2++;
        }
    }

    //printing action signs
    printf("\nSummation: + \n");
    printf("Subtraction: - \n");
    printf("Multiplication: * \n");
    printf("Division: / \n");
    //getting arithmetic sign
    printf("\nEnter the arithmetic action sign: ");
    scanf(" %c",&sign);
    printf("\n");

    //action and output
    switch(sign)
    {

    case '+':

        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
        break;

    case '-':

           for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr3[i][j]=arr1[i][j]-arr2[i][j];
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }

        break;

    case '*':

           for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr3[i][j]=arr1[i][j]*arr2[i][j];
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }

        break;

    case '/':

           for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr3[i][j]=arr1[i][j]/arr2[i][j];
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
        break;


    default:
        printf("Invalid Arithmetic Sign \n");
        break;

    }
    return 0;

}
