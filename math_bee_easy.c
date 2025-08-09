#include "math_bee_header.h"

// EASY FUNCTIONS USED

// round1
// division
// equation
void round1(int *score)
{
    srand(time(NULL));
    char operators[] = {'+', '-', '*'};
    int num1 = rand() % 100;
    int num2 = rand() % 100;
    int index = rand() % 3;
    if (index == 0)
    {
        actual_answer = num1 + num2;
    }
    if (index == 1)
    {
        actual_answer = num1 - num2;
    }
    if (index == 2)
    {
        actual_answer = num1 * num2;
    }
    printf("what is the value of %d%c%d=?\n", num1, operators[index], num2);
    timer(10);
    printf("Enter your answer:");
    scanf("%d", &user_answer);
    if (user_answer == actual_answer)
    {
        printf("correct!! \u263A\n");
        *score += 30;
    }
    else
    {
        printf("wrong answer better luck next time\n");
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
        printf("The correct answer is %d\n", actual_answer);
        *score = *score + 0;
    }
}
void division(int *score)
{
    srand(time(NULL));
    int min = 1;
    int max = 100;
    int a, b;
    b = rand() % (max - min + 1) + min;
    a = b * (rand() % 100);
    printf("what is %d/%d?\n", a, b);
    timer(10);
    printf("Enter your answer:");
    scanf("%d", &user_answer);
    actual_answer = a / b;
    if (user_answer == actual_answer)
    {
        printf("correct!! \n");
        *score = *score + 30;
    }
    else
    {
        printf("wrong answer better luck next time\n");
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
        printf("The correct answer is %d\n", actual_answer);
        *score = *score + 0;
    }
}
void equation(int *score)
{
    srand(time(NULL));
    int a, b, c;
    int min = 1;
    int max = 50;
    a = rand() % (max - min + 1) + min;
    b = rand() % 100;
    c = a * (rand() % 50) - b;
    printf("what is the value of y in the equation %dy-%d=%d??\n", a, b, c);
    timer(10);
    printf("enter your answer:");
    scanf("%d", &user_answer);
    actual_answer = (b + c) / a;
    if (user_answer == actual_answer)
    {
        printf("correct!! \n");
        *score = *score + 30;
    }
    else
    {
        printf("wrong answer better luck next time\n");
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
        printf("The correct answer is %d\n", actual_answer);
        *score = *score + 0;
    }
}