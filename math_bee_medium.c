#include "math_bee_header.h"

// MEDIUM FUNCTIONS USED

// generateRandomNumberDivisible
// calculateResult
// riddles_2
// equations
// hoursToSeconds
// daysToHours
// yearsToDays
// yearsToHours
// decadesToMonths
// decadesToWeeks
// kilometersToMeters
// metersToMillimeters
// decimetersToCentimeters
// kilogramsToMilligrams
// rupeesToPaise
// litresToMillilitres
// hoursToMinutes
// millimetersToNanometers
// centuaryToYears
// centuaryToDecades
// print_square
// print_rectangle
// print_triangle
// print_parallelogram
// print_rhombus
// print_hexagon
// calculate_square_area
// calculate_rectangle_area
// calculate_triangle_area
// calculate_parallelogram_area
// calculate_rhombus_area
// calculate_hexagon_area
// random_int

int generateRandomNumberDivisible(int min, int max, int divisor)
{
    int num;
    do
    {
        num = min + rand() % (max - min + 1);
    } while (num % divisor != 0);
    return num;
}
int calculateResult(int a, int b, int c, int d, int e, int f, int g, int h)
{
    return (a / b) * c + d - (e / f) + g * h;
}
void riddles_2(int *score)
{
    char *questions[] = {
        "How many lockers are open after 100 people toggle every locker, starting from the first locker?",
        "What is the missing number in the sequence: 2, 5, 11, 23, ___?",
        "How old is a man who has celebrated only 4 birthdays but is 20 years old?",
        "How many triangles are there in a triangle with vertices at each point where the lines of a 4x4 grid intersect?",
        "What is the product of all the numbers on a standard telephone keypad (0-9)?",
        "The letter to add which makes it 72 from 98.(write in small case)",
        "Three times what number is not larger than two times the same number?",
        "I am a number, but when you add \"G\" to me, I go away. What number am I?",
        "I am a three-digit number. My second digit is four times bigger than the third digit. My first digit is three less than my second digit. Who am I?",
        "If seven people meet each other and each shake hands only once with each of the others, how many handshakes happened?"};
    char *solutions[] = {"10", "47", "5", "20", "0", "x", "0", "1", "141", "21"};
    int numQuestions = sizeof(questions) / sizeof(questions[0]);

    int randomIndex = selectRandomQuestion(questions, solutions, numQuestions);

    char userAnswer[100];
    timer(30);
    printf("Your Answer: ");
    scanf("%s", userAnswer);
    if (strcmp(userAnswer, solutions[randomIndex]) == 0)
    {
        printf("Correct!!  \n");
        *score = *score + 50;
    }
    else
    {
        printf("Wrong answer better luck next time\n");
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
        printf("The correct answer is %s\n", *solutions);
        return;
    }
}
void equations(int *score)
{
    srand(time(0));
    int a1 = rand() % 21 - 10;
    int b1 = rand() % 21 - 10;
    int a2 = rand() % 21 - 10;
    int b2 = rand() % 21 - 10;
    int x = rand() % 21 - 10;
    int y = rand() % 21 - 10;
    int c1 = a1 * x + b1 * y;
    int c2 = a2 * x + b2 * y;
    printf("Equation 1: %dx + %dy = %d\n", a1, b1, c1);
    printf("Equation 2: %dx + %dy = %d\n", a2, b2, c2);
    int userX, userY;
    timer(30);
    printf("Enter your solution as two integers (x y): ");
    scanf("%d %d", &userX, &userY);
    if ((a1 * userX + b1 * userY == c1) || (a2 * userX + b2 * userY == c2))
    {
        printf("Correct! The solution is x = %d, y = %d\n", x, y);
        *score = *score + 50;
    }
    else
    {
        printf("Incorrect. The correct solution is x = %d, y = %d\n", x, y);
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
    }
    return;
}
void hoursToSeconds(int *score)
{
    int hours = rand() % 24;
    int seconds = hours * 3600;
    printf("Convert %d hours to seconds: ", hours);
    timer(30);
    int answer;
    scanf("%d", &answer);
    if (answer == hours * 3600)
    {
        printf("Correct!! \n");
        *score = *score + 50;
    }
    else
    {
        printf("Incorrect. The correct answer is %d seconds.\n", hours * 3600);
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
    }
}
void daysToHours(int *score)
{
    int days = rand() % 30 + 1;
    int hours = days * 24;
    printf("Convert %d days to hours: ", days);
    timer(30);
    int answer;
    scanf("%d", &answer);
    if (answer == days * 24)
    {
        printf("Correct!!\n");
        *score = *score + 50;
    }
    else
    {
        printf("Incorrect. The correct answer is %d hours.\n", days * 24);
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
    }
}
void yearsToDays(int *score)
{
    int years = rand() % 100 + 1;
    int days = years * 365;
    printf("Convert %d years to days: ", years);
    timer(30);
    int answer;
    scanf("%d", &answer);
    if (answer == years * 365)
    {
        printf("Correct!!\n");
        *score = *score + 50;
    }
    else
    {
        printf("Incorrect. The correct answer is %d days.\n", years * 365);
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
    }
}
void yearsToHours(int *score)
{
    int years = rand() % 100 + 1;
    int hours = years * 8760;
    printf("Convert %d years to hours: ", years);
    timer(30);
    int answer;
    scanf("%d", &answer);
    if (answer == years * 8760)
    {
        printf("Correct!!\n");
        *score = *score + 50;
    }
    else
    {
        printf("Incorrect. The correct answer is %d hours.\n", years * 8760);
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
    }
}
void decadesToMonths(int *score)
{
    int decades = rand() % 10 + 1;
    int months = decades * 120;
    printf("Convert %d decades to months: ", decades);
    timer(30);
    int answer;
    scanf("%d", &answer);
    if (answer == decades * 120)
    {
        printf("Correct!!\n");
        *score = *score + 50;
    }
    else
    {
        printf("Incorrect. The correct answer is %d months.\n", decades * 120);
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
    }
}
void decadesToWeeks(int *score)
{
    int decades = rand() % 10 + 1;
    int weeks = decades * 520;
    printf("Convert %d decades to weeks: ", decades);
    timer(30);
    int answer;
    scanf("%d", &answer);
    if (answer == decades * 520)
    {
        printf("Correct!!\n");
        *score = *score + 50;
    }
    else
    {
        printf("Incorrect. The correct answer is %d weeks.\n", decades * 520);
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
    }
}
void kilometersToMeters(int *score)
{
    int kilometers = rand() % 100 + 1;
    int meters = kilometers * 1000;
    printf("Convert %d kilometers to meters: ", kilometers);
    timer(30);
    int answer;
    scanf("%d", &answer);
    if (answer == kilometers * 1000)
    {
        printf("Correct!!\n");
        *score = *score + 50;
    }
    else
    {
        printf("Incorrect. The correct answer is %d meters.\n", kilometers * 1000);
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
    }
}
void metersToMillimeters(int *score)
{
    int meters = rand() % 1000 + 1;
    int millimeters = meters * 1000;
    printf("Convert %d meters to millimeters: ", meters);
    timer(30);
    int answer;
    scanf("%d", &answer);
    if (answer == meters * 1000)
    {
        printf("Correct!!\n");
        *score = *score + 50;
    }
    else
    {
        printf("Incorrect. The correct answer is %d millimeters.\n", meters * 1000);
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
    }
}
void decimetersToCentimeters(int *score)
{
    int decimeters = rand() % 100 + 1;
    int centimeters = decimeters * 10;
    printf("Convert %d decimeters to centimeters: ", decimeters);
    int answer;
    timer(30);
    scanf("%d", &answer);
    if (answer == decimeters * 10)
    {
        printf("Correct!!\n");
        *score = *score + 50;
    }
    else
    {
        printf("Incorrect. The correct answer is %d centimeters.\n", decimeters * 10);
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
    }
}
void kilogramsToMilligrams(int *score)
{
    int kilograms = rand() % 100 + 1;
    int milligrams = kilograms * 1000000;
    printf("Convert %d kilograms to milligrams: ", kilograms);
    timer(30);
    int answer;
    scanf("%d", &answer);
    if (answer == kilograms * 1000000)
    {
        printf("Correct!!\n");
        *score = *score + 50;
    }
    else
    {
        printf("Incorrect. The correct answer is %d milligrams.\n", kilograms * 1000000);
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
    }
}
void rupeesToPaise(int *score)
{
    int rupees = rand() % 1000 + 1;
    int paise = rupees * 100;
    printf("Convert %d rupees to paise: ", rupees);
    timer(30);
    int answer;
    scanf("%d", &answer);
    if (answer == rupees * 100)
    {
        printf("Correct!!\n");
        *score = *score + 50;
    }
    else
    {
        printf("Incorrect. The correct answer is %d paise.\n", rupees * 100);
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
    }
}
void litresToMillilitres(int *score)
{
    int litres = rand() % 100 + 1;
    int millilitres = litres * 1000;
    printf("Convert %d litres to millilitres: ", litres);
    timer(30);
    int answer;
    scanf("%d", &answer);
    if (answer == litres * 1000)
    {
        printf("Correct!!\n");
        *score = *score + 50;
    }
    else
    {
        printf("Incorrect. The correct answer is %d millilitres.\n", litres * 1000);
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
    }
}
void hoursToMinutes(int *score)
{
    int hours = rand() % 24;
    int minutes = hours * 60;
    printf("Convert %d hours to minutes: ", hours);
    timer(30);
    int answer;
    scanf("%d", &answer);
    if (answer == hours * 60)
    {
        printf("Correct!!\n");
        *score = *score + 50;
    }
    else
    {
        printf("Incorrect. The correct answer is %d minutes.\n", hours * 60);
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
    }
}
void millimetersToNanometers(int *score)
{
    int millimeters = rand() % 1000 + 1;
    long long nanometers = millimeters * 1000000;
    printf("Convert %d millimeters to nanometers: ", millimeters);
    timer(30);
    int answer;
    scanf("%d", &answer);
    if (answer == millimeters * 1000000)
    {
        printf("Correct!!\n");
        *score = *score + 50;
    }
    else
    {
        printf("Incorrect. The correct answer is %lld nanometers.\n", millimeters * 1000000);
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
    }
}
void centuaryToYears(int *score)
{
    int centuary = rand() % 100 + 1;
    int years = centuary * 100;
    printf("Convert %d centuries to years: ", centuary);
    timer(30);
    int answer;
    scanf("%d", &answer);
    if (answer == centuary * 100)
    {
        printf("Correct!!\n");
        *score = *score + 50;
    }
    else
    {
        printf("Incorrect. The correct answer is %d years.\n", centuary * 100);
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
    }
}
void centuaryToDecades(int *score)
{
    int centuary = rand() % 100 + 1;
    int decades = centuary * 10;
    printf("Convert %d centuries to decades: ", centuary);
    timer(30);
    int answer;
    scanf("%d", &answer);
    if (answer == centuary * 10)
    {
        printf("Correct!!\n");
        *score = *score + 50;
    }
    else
    {
        printf("Incorrect. The correct answer is %d decades.\n", centuary * 10);
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
    }
}
void print_square(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void print_rectangle(int n, int m)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == 1 || j == m)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void print_triangle(int n)
{
    int i, space, j;
    for (i = 0; i < n - 1; i++)
    {
        for (space = 1; space < n - i; space++)
        {
            printf(" ");
        }
        for (j = 0; j <= 2 * i; j++)
        {
            if (j == 0 || j == 2 * i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (i = 0; i < 2 * n - 1; i++)
    {
        printf("*");
    }
    printf("\n");
}
void print_parallelogram(int rows)
{
    int i, j;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
            printf(" ");
        if (i == 1 || i == rows)
            for (j = 1; j <= rows; j++)
                printf("*");
        else
            for (j = 1; j <= rows; j++)
                if (j == 1 || j == rows)
                    printf("*");
                else
                    printf(" ");
        printf("\n");
    }
}
void print_rhombus(int n)
{
    int rows, columns;
    for (rows = 1; rows <= n; rows++)
    {
        for (columns = n; columns > rows; columns--)
        {
            printf(" ");
        }
        printf("*");
        for (columns = 1; columns < (rows - 1) * 2; columns++)
        {
            printf(" ");
        }
        if (rows != 1)
        {
            printf("*");
        }
        printf("\n");
    }
    for (rows = n - 1; rows >= 1; rows--)
    {
        for (columns = n; columns > rows; columns--)
        {
            printf(" ");
        }
        printf("*");
        for (columns = 1; columns < (rows - 1) * 2; columns++)
        {
            printf(" ");
        }
        if (rows != 1)
        {
            printf("*");
        }
        printf("\n");
    }
}
void print_hexagon(int n)
{
    int l = 2 * n - 1;
    for (int i = 0; i < n; i++)
    {
        int elem = i + n;
        for (int k = 0; k < elem; k++)
        {
            if ((k == n + i - 1) || (k == n - i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int m = 0; m < n - 2; m++)
    {
        for (int j = 0; j < l; j++)
        {
            if (j == 0 || j == l - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    int r = n - 1;
    for (int h = r; h >= 0; h--)
    {
        int elem = h + n;
        for (int k = 0; k < elem; k++)
        {
            if ((k == n + h - 1) || (k == n - h - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
int calculate_square_area(int side)
{
    return side * side;
}
int calculate_rectangle_area(int length, int width)
{
    return length * width;
}
float calculate_triangle_area(int base, int height)
{
    return 0.5 * base * height;
}
int calculate_parallelogram_area(int base, int height)
{
    return base * height;
}
float calculate_rhombus_area(int diagonal1, int diagonal2)
{
    return 0.5 * diagonal1 * diagonal2;
}
float calculate_hexagon_area(int side)
{
    return 3 * sqrt(3) * pow(side, 2) / 2;
}
int random_int(int min, int max)
{
    return rand() % (max - min + 1) + min;
}