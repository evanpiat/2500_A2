/*
 Student Name: Evan Piatkowski
 Student ID: 1136319
 Due Date: Mar 6, 2022
 Course: CIS*2500
 I have exclusive control over this submission via my password.
 By including this header comment, I certify that:
 1) I have read and understood the policy on academic integrity.
 2) I have completed Moodle's module on academic integrity.
 3) I have achieved at least 80% on the academic integrity quiz
 I assert that this work is my own. I have appropriate acknowledged
 any and all material that I have used, be it directly quoted or
 paraphrased. Furthermore, I certify that this assignment was written
 by me in its entirety.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_LENGTH 20
#define MAX_WORDS 50

char * readFile(char * filename); // function 1
char *stretchMe(char *aStringToStretch); // funtion 2
int splitMe(char *aStringToSplit, char static2D[MAX_WORDS][MAX_LENGTH]); // function 3
int shrinkMe(char *aStringToShrink); // function 4
bool isItAPalindrome(char *aString); // function 5
void printSuffixes (char *aString, int whichWord, char *desiredSuffix); // function 6 000000000



