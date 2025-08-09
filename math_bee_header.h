#ifndef MATH_BEE_HEADER_H
#define MATH_BEE_HEADER_H

// Header files
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>
#include<windows.h>
#include <unistd.h> 

// Macro
#define EPSILON 0.0001

// Global variables
extern char p1[50];
extern int score1;
extern int user_answer;
extern int actual_answer;

// Function Defintion

// HELPER
void timer(int seconds);
int selectRandomQuestion(char *questions[], char *solutions[], int numQuestions); 
void write_to_file(const char* name, const char* difficulty, int score, const char* filename);
int get_max_score(const char* filename);

// EASY
void round1(int *score); 
void division(int *score);
void equation(int *score);

//MEDIUM
void generate_random_parameters(double parameters[]);
int calculateResult(int a, int b, int c, int d, int e, int f, int g, int h);
void riddles_2(int *score); 
void equations(int *score); 
void hoursToSeconds(int *score);
void hoursToMinutes(int *score); 
void daysToHours(int *score); 
void yearsToDays(int *score); 
void yearsToHours(int *score); 
void decadesToMonths(int *score);
void decadesToWeeks(int *score); 
void kilometersToMeters(int *score);
void metersToMillimeters(int *score);
void decimetersToCentimeters(int *score); 
void kilogramsToMilligrams(int *score); 
void rupeesToPaise(int *score);
void litresToMillilitres(int *score); 
void millimetersToNanometers(int *score); 
void centuaryToYears(int *score);
void centuaryToDecades(int *score);
void print_square(int n); 
void print_rectangle(int n, int m); 
void print_triangle(int n); 
void print_parallelogram(int rows); 
void print_rhombus(int n);
void print_hexagon(int n); 
int calculate_square_area(int side); 
int calculate_rectangle_area(int length, int width) ;
float calculate_triangle_area(int base, int height); 
int calculate_parallelogram_area(int base, int height); 
float calculate_rhombus_area(int diagonal1, int diagonal2);
float calculate_hexagon_area(int side) ;
int random_int(int min, int max);

//DIFFICULT
void riddles_3(int *score); 
void Quadratic(int *score);
void GP(int *score);  
void AP(int *score);

//EXPERT
double evaluate_expression(double parameters[], int value); 
double calculate_integral(double parameters[], int value); 
void diff_question(int coefficients[]);
void calculate_derivative_coefficients(int coefficients[], int derivative[]);
double evaluate_polynomial(int coefficients[], int x); 
void generate_question(int *score) ;
void probabilty(int *score);  
int generateRandomNumberDivisible(int min, int max, int divisor);
#endif