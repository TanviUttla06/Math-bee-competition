#include "math_bee_header.h"

// DIFFICULT FUNCTIONS USED

// riddles_3
// selectRandomQuestion
// Quadratic
// GP
// AP
void riddles_3(int *score)
{
    srand(time(NULL));
    char *riddles[] = {"A merchant can place 8 large boxes or 10 small boxes into a carton for shipping. In one shipment, he sent a total of 96 boxes. How many cartons did he ship if there are more large boxes than small boxes?", "If there are four apples and you take away three of them, how many apples do you have?", "How many times can you subtract five from twenty-five?", "If 7 is transformed into 13 and 11 into 21, what does 16 become?", "The head of a bird is 9 cm long. Its tail is equal to the size of its head plus half the size of its body. Also, its body is equal to the size of its head plus its tail. The length of the bird will be?", "Find the next number in the series 7645, 5764, 4576,………", "Suppose 1+9+8=1, then what can be 2+8+9?", "Ram has 5 sons. Each of his sons has a sister. If so, how many children does Mr.Ram have?", "What is half of two plus two?", "What is 7 + 7 ÷ 7 + 7 x 7 – 7?"};
    int riddleindex = rand() % 10;
    int actualanswer[] = {11, 3, 1, 31, 72, 6457, 10, 6, 3, 50};
    printf("%s\n", riddles[riddleindex]);
    timer(80);
    printf("Enter your answer:");
    scanf("%d", &user_answer);
    if (user_answer == actualanswer[riddleindex])
    {
        printf("Correct!!\n");
        *score = *score + 65;
    }
    else
    {
        printf("Wrong answer better luck next time\n");
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
        printf("The correct answer is %d\n", actualanswer[riddleindex]);
    }
}

void Quadratic(int *score)
{
    srand(time(NULL));
    int u1, u2, ac1, ac2;
    int a1, a2, b1, b2, c1, c2;
    int root1, root2;
    int min = 1;
    int max = 10;
    a1 = 1;
    root1 = rand() % (max - min + 1) + min;
    root2 = rand() % (max - min + 1) + min;
    b1 = -(root1 + root2);
    c1 = (root1 * root2);
    int k = rand() % (max - min + 1) + min;
    a2 = k * a1;
    b2 = k * b1;
    c2 = k * c1;
    int dis = sqrt(b2 * b2 - 4 * a2 * c2);
    ac1 = (-b2 + (dis)) / (2 * a2);
    ac2 = (-b2 - (dis)) / (2 * a2);
    printf("Solve the quadratic equation %dx^2+%dx+%d=0\n", a2, b2, c2);
    timer(80);
    printf("Enter the two roots x1 and x2 (x1>=x2)\n");
    printf("Enter  x1:");
    scanf("%d", &u1);
    printf("Enter x2:");
    scanf("%d", &u2);
    if (u1 == ac1 && u2 == ac2)
    {
        printf("Correct!!\n");
        *score = *score + 65;
    }
    else
    {
        printf("Wrong answer better luck next time\n");
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
        printf("x1=%d\n", ac1);
        printf("x2=%d\n", ac2);
    }
}
void GP(int *score)
{
    srand(time(NULL));
    int a, r, n;
    int min = 1;
    int max = 10;
    int nmin = 4;
    a = rand() % (max - min + 1) + min;
    r = rand() % (max - min + 1) + min;
    n = rand() % (max - nmin + 1) + nmin;
    printf("What is the value of term %d when first term is %d and common ratio is %d\n", n, a, r);
    timer(80);
    printf("Enter your answer:");
    scanf("%d", &user_answer);
    actual_answer = a * pow(r, n - 1);
    if (actual_answer == user_answer)
    {
        printf("correct!!\n");
        *score = *score + 65;
    }
    else
    {
        printf("wrong better luck next time\n");
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
        printf("The correct answer is %d\n", actual_answer);
    }
    return;
}
void AP(int *score)
{
    srand(time(NULL));
    int a, d;
    int n;
    int min = 4;
    int max = 100;
    int dmin = 1;
    a = rand() % (max - min + 1) + min;
    n = rand() % (max - min + 1) + min;
    d = rand() % (max - dmin + 1) + dmin;
    printf("what is the %dth term when first term is %d and common difference is %d\n", n, a, d);
    timer(80);
    printf("Enter your answer:");
    scanf("%d", &user_answer);
    actual_answer = a + (n - 1) * d;
    if (actual_answer == user_answer)
    {
        printf("correct!!\n");
        *score = *score + 65;
    }
    else
    {
        printf("wrong better luck next time\n");
        Beep(500, 1000);
        Beep(500, 1000);
        Beep(500, 1000);
        printf("The correct answer is %d\n", actual_answer);
    }
}