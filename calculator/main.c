#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

main()
{

    /* Setup the variables */

    char num1[100];
    char operation[100];
    char num2[100];

    float num1_int;
    float num2_int;

    float answer;

    /* Get the input for the first number as a string */

    printf("Please enter your first number\a: ");
    scanf("%s", num1);

    /* Then, get the operation */

    printf("\nPlease enter your operation (For example: Add, Subtract, Times, Divide)\a: ");
    scanf("%s", operation);

    /* Finally, enter you last number */

    printf("\nPlease enter you second number\a: ");
    scanf("%s", num2);

    /* Convert them into the correct datatype */

    num1_int = atoi(num1);
    num2_int = atoi(num2);

    /* If the operation the user entered was 'Add' */

    if (strcmp(operation, "Add") == 0)

    {

        /* Update the variable answer to the first interger plus the second interger */

        answer = num1_int + num2_int;

    }

    /* If the operation the user entered was 'Subtract' */

    if (strcmp(operation, "Subtract") == 0)

    {

        /* Update the variable answer to the first interger minus the second interger */

        answer = num1_int - num2_int;

    }

    /* If the operation the user entered was 'times' */

    if (strcmp(operation, "Times") == 0)

    {

        /* Update the variable answer to the first interger times the second interger */

        answer = num1_int * num2_int;

    }

    /* If the operation the user entered was 'divide' */

    if (strcmp(operation, "Divide") == 0)

    {

        /* Update the variable answer to the first interger divided by the second interger */

        answer = num1_int / num2_int;

    }

    if (strcmp(operation, "Modulus") == 0)

    {

        /* Update the variable answer to the first interger modulus by the second interger */

        answer = (int)num1_int % (int)num2_int;

    }

        if (strcmp(operation, "Powered") == 0)

    {

        /* Update the variable answer to the first interger modulus by the second interger */

        answer = powf((float)num1_int, (float)num2_int);

    }

    /* Display to the screen the variable answer */

    printf("\nYour answer is %.10f\n", answer);

}
