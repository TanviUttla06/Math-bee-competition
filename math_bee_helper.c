#include "math_bee_header.h"

// Timer in Each Question

// EASY-10
// MEDIUM-30
// DIFFICULT-80
// EXPERT-150

void timer(int seconds)
{

    printf("\nCountdown starts now:\n");
    for (int i = seconds; i >= 0; i--)
    {
        printf("\r%d seconds remaining          ", i);
        sleep(1); // Pause for 1 second
    }

    printf("\nTime's up!\n\n");
    return;
}

// Used in Riddle in Medium and Difficult
int selectRandomQuestion(char *questions[], char *solutions[], int numQuestions)
{
    srand(time(NULL));
    int index = rand() % numQuestions;
    printf("Question: %s\n", questions[index]);
    return index;
}

void write_to_file(const char *name, const char *difficulty, int score, const char *filename)
{
    FILE *file = fopen(filename, "a"); // Open file in append mode
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }
    fprintf(file, "%s,%s,%d\n", name, difficulty, score); // Write name, difficulty, and score
    fclose(file);
}

int get_max_score(const char *filename)
{
    FILE *file = fopen(filename, "r"); // Open file in read mode
    if (file == NULL)
    {
        printf("File not found. No scores yet.\n");
        return -1; // Return -1 if the file doesn't exist
    }

    int max_score = -1, score;
    char name[100], difficulty[100];

    while (fscanf(file, "%99[^,],%99[^,],%d\n", name, difficulty, &score) != EOF)
    {
        if (score > max_score)
        {
            max_score = score; // Update max score
        }
    }
    fclose(file);
    return max_score;
}
