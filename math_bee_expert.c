#include "math_bee_header.h"

// EXPERT FUNCTIONS USED

// generate_random_parameters
// evaluate_expression
// calculate_integral
// diff_question
// calculate_derivative_coefficients
// evaluate_polynomial
// generate_question
// probabilty

void generate_random_parameters(double parameters[])
{
    for (int i = 0; i <= 5; i++)
    {
        parameters[i] = rand() % 10;
    }
}

double evaluate_expression(double parameters[], int value)
{
    double result = 0;
    for (int i = 5; i >= 0; i--)
    {
        result += parameters[i] * pow(value, i);
    }
    return result;
}

double calculate_integral(double parameters[], int value)
{
    double integral = 0;
    for (int i = 5; i >= 0; i--)
    {
        integral += parameters[i] / (i + 1) * pow(value, i + 1);
    }
    return integral;
}

void diff_question(int coefficients[])
{
    printf("Differentiate ");
    for (int i = 5; i >= 0; i--)
    {
        if (coefficients[i] != 0)
        {
            if (i == 0)
            {
                printf("%d", coefficients[i]);
            }
            else
            {
                printf("%dx^%d ", coefficients[i], i);
            }
            if (i > 0 && coefficients[i - 1] > 0)
            {
                printf("+ ");
            }
        }
    }
    printf("\n");
}
void calculate_derivative_coefficients(int coefficients[], int derivative[])
{
    for (int i = 5; i >= 1; i--)
    {
        derivative[i - 1] = i * coefficients[i];
    }
    derivative[5] = 0;
}
double evaluate_polynomial(int coefficients[], int x)
{
    double result = 0;
    for (int i = 5; i >= 0; i--)
    {
        result += coefficients[i] * pow(x, i);
    }
    return result;
}
void generate_question(int *score)
{
    int base = rand() % 9 + 1;
    int exponent = rand() % 20 + 1;
    long long result = 1; // Initialize result
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
        result %= 10; // Keep only the last digit to prevent overflow
    }
    int last_digit = result;

    printf("What is the last digit of %d^%d?\n", base, exponent);
    int user_answer;
    timer(150);
    printf("Enter your answer: ");
    scanf("%d", &user_answer);
    if (user_answer == last_digit)
    {
        printf("Correct!! \n");
        *score += 85;
    }
    else
    {
        printf("Wrong answer. Better luck next time.\n");
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
        printf("The correct answer is %d\n", last_digit);
    }
}

void probabilty(int *score)
{
    srand(time(NULL));
    char *probability_questions[10] = {
        "Probability of drawing one red ball and one blue ball from a bagwith 5 red, 3 blue, and 2 green balls:",                       // Q1
        "Probability of forming a committee with 3 men and 2 women from a group of 8 men and 6 women:",                                 // Q2
        "Probability of drawing exactly 2 blue marbles from a jar with 4 red, 3 blue, and 3 green marbles:",                            // Q3
        "Probability of choosing at least 2 dark chocolates from a box with 5 dark and 7 milk chocolates when 3 chocolates are chosen", // Q4
        "Probability of the sum of three dice being greater than 10:",                                                                  // Q5
        "Probability of drawing two socks of different colors from a box with 6 red, 4 blue, and 2 black socks:",                       // Q6
        "A standard six-sided die is rolled once. What is the probability of rolling a number greater than 4?",                         // Q7
        "Probability of the sum of two dice being a prime number:",                                                                     // Q8
        "Probability of drawing two balls of different colors from a bag with 8 red, 5 blue, and 3 green balls:",                       // Q9
        "Probability of the sum of two spins of a spinner being 6, where each spin results in a number from 1 to 5:"                    // Q10
    };

    int probabilty_index = rand() % 10;
    float probabilty_answers[10] = {0.26, 0.03, 0.22, 0.318, 0.421, 0.72, 0.33, 0.41, 0.53, 0.28};
    printf("%s\n", probability_questions[probabilty_index]);
    timer(150);
    printf("Enter your answer:");

    float user_answer;
    scanf("%f", &user_answer);

    if (fabs(user_answer - probabilty_answers[probabilty_index]) < EPSILON)
    {
        printf("Correct!! \n");
        *score = *score + 85;
    }
    else if (user_answer != probabilty_answers[probabilty_index])
    {
        printf("Wrong answer better luck next time\n");
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
        printf("The correct answer is %f\n", probabilty_answers[probabilty_index]);
        switch (probabilty_index)
        {
        case 0:
            printf("Out of all possible pairs of balls drawn, there are 15 pairs that consist of one red and one blue ball.");
            break;
        case 1:
            printf("Out of all possible combinations of 5 people in the committee, 112 combinations include 3 men and 2 women.\n");
            break;
        case 2:
            printf("Out of all possible combinations of 3 marbles drawn, there are 9 combinations that include exactly 2 blue marbles.\n");
            break;
        case 3:
            printf("Out of all possible combinations of 3 chocolates chosen, there are 7 combinations that include at least 2 dark chocolates.\n");
            break;
        case 4:
            printf("Out of all possible outcomes when three dice are rolled, there are 91 outcomes where the sum is greater than 10.\n");
            break;
        case 5:
            printf("Out of all possible pairs of socks drawn, there are 48 pairs that consist of socks of different colors.\n");
            break;
        case 6:
            printf("Out of all possible combinations of 4 cards drawn, there are 4 combinations that consist of cards of the same suit.\n");
            break;
        case 7:
            printf("Out of all possible outcomes when two dice are rolled, there are 15 outcomes where the sum is a prime number\n");
            break;
        case 8:
            printf(" Out of all possible pairs of balls drawn, there are 75 pairs that consist of balls of different colors..\n");
            break;
        case 9:
            printf(" Out of all possible pairs of spins, there are 7 pairs that result in a sum of 6.\n");
            break;
        }
    }
}