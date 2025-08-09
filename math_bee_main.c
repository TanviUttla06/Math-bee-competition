// ICS MAJOR PROJECT- "MATH BEE CHAMPIONSHIP"

// Header has the files-
// helper
// easy
// medium
// difficult
// expert

#include "math_bee_header.h"

// Global variables
char p1[50];
int score1;
int user_answer;
int actual_answer;

int main()
{

    printf("\n------------------------WELCOME TO----------------------------");
    printf("\n");
    printf("\n------------------MATH-BEE CHAMPIONSHIP-----------------------");
    printf("\n\n");

    printf("\n");
    printf("\"INSTRUCTIONS TO BE NOTED\"\n\n");
    printf("1. For Easy Level Enter \"EASY\"\n");
    printf("2. For Medium Level Enter \"MEDIUM\"\n");
    printf("3. For Difficult Level Enter \"DIFFICULT\"\n");
    printf("4. For Expert Level Enter \"EXPERT\"\n\n");
    printf("Enter the Name of the player:");
    scanf(" %[^\n]", p1);
    char level[10];
    printf("Enter your desired level:");
    scanf("%s", level);

    if (strcmp(level, "EASY") == 0)
    {
        printf("\n");
        printf(" \n-----------------EASY LEVEL------------------\n");
        printf("\n");
        round1(&score1);
        printf("\n");
        round1(&score1);
        printf("\n");
        round1(&score1);
        printf("\n");
        division(&score1);
        printf("\n");
        equation(&score1);
        printf("\n");
        printf("%s score in easy level is:%d\n\n", p1, score1);
        printf(" \n------------------EASY LEVEL ENDED ------------------ \n");
    }
    if (strcmp(level, "MEDIUM") == 0)
    {
        printf(" \n------------------MEDIUM LEVEL------------------ \n");
        srand(time(NULL));
        int b = generateRandomNumberDivisible(1, 20, 1);
        int a = generateRandomNumberDivisible(b, 20, b);
        int f = generateRandomNumberDivisible(1, 20, 1);
        int e = generateRandomNumberDivisible(1, 20, f);
        int c = generateRandomNumberDivisible(1, 20, 1);
        int d = generateRandomNumberDivisible(1, 20, 1);
        int g = generateRandomNumberDivisible(1, 20, 1);
        int h = generateRandomNumberDivisible(1, 20, 1);
        int actual_answer = calculateResult(a, b, c, d, e, f, g, h);
        printf("\n");
        printf("Problem: i = (%d / %d * %d) + %d - (%d / %d) + %d * %d\n", a, b, c, d, e, f, g, h);
        timer(30);
        printf("Your answer: ");
        int user_answer;
        scanf("%d", &user_answer);
        if (user_answer == actual_answer)
        {
            printf("Correct! \n");
            score1 = score1 + 50;
        }
        else
        {
            printf("wrong answer better luck next time\n");
            Beep(500, 1000);
            Beep(500, 1000);
            Beep(500, 1000);
            printf("The correct answer is %d.\n", actual_answer);
        }
        printf("\n");
        equations(&score1);
        printf("\n");
        riddles_2(&score1);
        printf("\n");
        srand(time(NULL));
        int n = 4; // fixed value of n
        int choice = rand() % 6 + 1;
        int side, length, width, base, height, diagonal1, diagonal2;
        float correct_area;
        switch (choice)
        {
        case 1:
            side = random_int(2, 100);
            correct_area = calculate_square_area(side);
            printf("Find the area of a square with side length %d?\n", side);
            print_square(n);
            break;
        case 2:
            length = random_int(2, 100);
            width = random_int(2, 100);
            correct_area = calculate_rectangle_area(length, width);
            printf("Find the area of a rectangle with length %d and width %d?\n", length, width);
            print_rectangle(n, 2 * n - 1);
            break;
        case 3:
            base = random_int(2, 100);
            height = random_int(2, 100);
            correct_area = calculate_triangle_area(base, height);
            printf("Find the area of a triangle with base length %d and height %d?\n", base, height);
            print_triangle(n);
            break;
        case 4:
            base = random_int(2, 100);
            height = random_int(2, 100);
            correct_area = calculate_parallelogram_area(base, height);
            printf("Find the area of a parallelogram with base length %d and height %d?\n", base, height);
            print_parallelogram(n);
            break;
        case 5:
            diagonal1 = random_int(2, 100);
            diagonal2 = random_int(2, 100);
            correct_area = calculate_rhombus_area(diagonal1, diagonal2);
            printf("Find the area of a rhombus with diagonal lengths %d and %d?\n", diagonal1, diagonal2);
            print_rhombus(n);
            break;
        case 6:
            side = random_int(2, 100);
            correct_area = calculate_hexagon_area(side);
            printf("Find the area of a hexagon with side length %d?\n", side);
            print_hexagon(n);
            break;
        }
        float uanswer;
        printf("Answer(upto 2 decimals): ");
        scanf("%f", &uanswer);
        if (roundf(uanswer * 100) == roundf(correct_area * 100))
        {
            printf("Correct! \u263A \n");
            score1 = score1 + 50;
        }
        else
        {
            printf("Oops! The correct answer is %.2f.\n", correct_area);
            Beep(500, 1000);
            Beep(500, 1000);
            Beep(500, 1000);
        }
        choice = rand() % 16 + 1;
        printf("\n");
        switch (choice)
        {
        case 1:
            hoursToMinutes(&score1);
            printf("\n");
            printf("%s score in medium level is %d\n", p1, score1);
            break;
        case 2:
            hoursToSeconds(&score1);
            printf("\n");
            printf("%s score in medium level is %d\n", p1, score1);
            break;
        case 3:
            daysToHours(&score1);
            printf("\n");
            printf("%s score in medium level is %d\n", p1, score1);
            break;
        case 4:
            yearsToDays(&score1);
            printf("\n");
            printf("%s score in medium level is %d\n", p1, score1);
            break;
        case 5:
            yearsToHours(&score1);
            printf("\n");
            printf("%s score in medium level is %d\n", p1, score1);
            break;
        case 6:
            decadesToMonths(&score1);
            printf("\n");
            printf("%s score in medium level is %d\n", p1, score1);
            break;
        case 7:
            decadesToWeeks(&score1);
            printf("\n");
            printf("%s score in medium level is %d\n", p1, score1);
            break;
        case 8:
            kilometersToMeters(&score1);
            printf("\n");
            printf("%s score in medium level is %d\n", p1, score1);
            break;
        case 9:
            metersToMillimeters(&score1);
            printf("\n");
            printf("%s score in medium level is %d\n", p1, score1);
            break;
        case 10:
            decimetersToCentimeters(&score1);
            printf("\n");
            printf("%s score in medium level is %d\n", p1, score1);
            break;
        case 11:
            kilogramsToMilligrams(&score1);
            printf("\n");
            printf("%s score in medium level is %d\n", p1, score1);
            break;
        case 12:
            rupeesToPaise(&score1);
            printf("\n");
            printf("%s score in medium level is %d\n", p1, score1);
            break;
        case 13:
            litresToMillilitres(&score1);
            printf("\n");
            printf("%s score in medium level is %d\n", p1, score1);
            break;
        case 14:
            millimetersToNanometers(&score1);
            printf("\n");
            printf("%s score in medium level is %d\n", p1, score1);
            break;
        case 15:
            centuaryToYears(&score1);
            printf("\n");
            printf("%s score in medium level is %d\n", p1, score1);
            break;
        case 16:
            centuaryToDecades(&score1);
            printf("\n");
            printf("%s score in medium level is %d\n", p1, score1);
            break;
        }
        printf("\n");
        printf(" ---------------MEDIUM LEVEL ENDED------------------\n");
    }
    if (strcmp(level, "DIFFICULT") == 0)
    {
        printf(" \u263A ------------------DIFFICULT LEVEL------------------ \u263A\n");
        printf("\n");
        AP(&score1);
        printf("\n");
        GP(&score1);
        printf("\n");
        Quadratic(&score1);
        printf("\n");
        riddles_3(&score1);
        printf("\n");
        printf("%s score in difficult level is %d\n", p1, score1);
        printf("\n");
        printf(" \u263A ------------------DIFFICULT LEVEL ENDED------------------ \u263A\n");
    }
    if (strcmp(level, "EXPERT") == 0)
    {
        printf(" \u263A ------------------EXPERT LEVEL------------------ \u263A\n");
        printf("\n");
        probabilty(&score1);
        printf("\n");
        generate_question(&score1);
        printf("\n");
        srand(time(NULL));
        int coefficients[6], derivative[6];
        int x, user_answer, correct_answer;
        for (int i = 0; i < 6; i++)
        {
            coefficients[i] = rand() % 10 + 1;
        }
        calculate_derivative_coefficients(coefficients, derivative);
        x = (int)(rand() % 10) / 2.0;
        diff_question(coefficients);
        printf("Evaluate the derivative at x = %d\n", x);
        correct_answer = evaluate_polynomial(derivative, x);
        printf("Enter your answer: ");
        scanf("%ld", &user_answer);
        if (fabs(user_answer - correct_answer) < 0.001)
        {
            printf("Correct! \u263A\n");
            score1 = score1 + 85;
        }
        else
        {
            printf("Incorrect. The correct answer is %d\n", correct_answer);
            Beep(500, 1000);
            Beep(500, 1000);
            Beep(500, 1000);
        }
        printf("\n");
        srand(time(NULL));
        double parameters[6];
        generate_random_parameters(parameters);
        int value = (int)(rand() % 100) / 10;

        printf("Expression: ");
        for (int i = 5; i >= 0; i--)
        {
            printf("%.0fx^%d ", parameters[i], i);
            if (i > 0)
            {
                printf("+ ");
            }
        }
        printf("\n");

        printf("Value of variable: %d\n", value);

        double integral = calculate_integral(parameters, value);

        printf("Enter your answer for the integral: ");
        double user_result;
        scanf("%lf", &user_result);

        if (fabs(user_result - integral) < EPSILON)
        {
            printf("Correct! \n");
            score1 = score1 + 85;
        }
        else
        {
            printf("Wrong! The correct answer is approximately: %.2lf\n", integral);
            Beep(500, 1000);
            Beep(500, 1000);
            Beep(500, 1000);
        }
        printf("\n");
        printf("%s score in expert level is %d\n", p1, score1);
        printf("\n");
        printf(" -------------EXPERT LEVEL ENDED-------------------\n");
    }

    write_to_file(p1, level, score1, "math_bee_scores.txt");  // Write to file
    printf("Max score so far: %d\n", get_max_score("math_bee_scores.txt"));  //display max score

    return 0;
}