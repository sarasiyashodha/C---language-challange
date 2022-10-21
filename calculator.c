// Write a simple menu driven calculator to perform (+ - / *) operations. (The program must display a menu to select the desired operator.) 

#include <stdio.h>
#include <stdlib.h>



int main()
    {
        int num1,num2;
        char op;
        printf("Enter the number 01:");
        scanf("%d",&num1);
        printf("Enter the number 02:");
        scanf("%d",&num2);



printf("****************\n + for addition \n - for substraction \n / for division \n* for multiplication \n\n *****************");



printf("\nEnter the operator");
scanf(" %c",&op);



switch(op)
{



case '+':
printf("The sum is:%d",(num1+num2));
break;
case '-':
printf("The difference is %d",(num1-num2));
break;



case '*':
printf("The product is %d",(num1*num2));
break;



case '/':
printf("The division is %d",(num1/num2));
break;
default:
printf("Enter a valid operator");



}



return 0;
}

