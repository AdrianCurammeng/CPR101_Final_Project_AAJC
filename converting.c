/*
 * Adrian Curammeng
 * Email- acurammeng@myseneca.ca
 * ID- #173513227
 *
 * CPR101 - Final Project
 * 11/28/2023
 * converting.c - Converting Module
 * Converts C Strings to Integers
*/

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80            // Maximum Accepted String Size

#include "converting.h"

/* Version 1 */

// Converts C Strings to Integers
void converting(void)
{
	char intString[BUFFER_SIZE];  // User Input string
	int intNumber;                // Integer to be Printed

	printf("*** Start of Converting Strings to int Demo ***\n");

	// Takes User Input Int Numeric String and Converts to Integers
	do
	{
		printf("Type an int numeric string (q - to quit): \n");

		// Stores User Input as C String
		fgets(intString, BUFFER_SIZE, stdin);
		intString[ strlen(intString) - 1 ] = '\0';

		// Converts String Input to Integer and Displays
		if (strcmp(intString, "q") != 0) {
			intNumber = atoi(intString);
			printf("Converted number is %d\n", intNumber);
		}

	} while (strcmp(intString, "q") != 0);  // Continues Until User enters 'q'

	printf("***End of Converting Strings to int Demo ***\n\n");
}

/* Version 2 */
//>> insert here


/* Version 3 */
//>> insert here

/*
 * Adrian Curammeng
 * Email- acurammeng@myseneca.ca
 * ID- #173513227
 * 
 * CPR101 - Final Project
 * 11/28/2023
 * converting.h - Converting Module Header
 * Converts C Strings to Integers
*/

#ifndef _CONVERTING_H_
#define _CONVERTING_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Converting Module V1
// Converts C Strings to Integers
void converting(void);

#endif
PK     ! �X��  �   [Content_Types].xml �(�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 ���n�0E�����1tQU�Ei�-�L<I,������<TU<�`�(��;3���N��8��^�	��ic�L�L?;�"ARV��Y��P����&m1���
Conversions Testing
converting.c
Adrian Curammeng
--
*** Start of Converting Strings to int Demo ***
Type an int numeric string (q - to quit):
2023
Converted number is 2023
Type an int numeric string (q - to quit):
-4876
Converted number is -4876
Type an int numeric string (q - to quit):
386909146789
Converted number is 2147483647
Type an int numeric string (q - to quit):
-6780145678213
Converted number is -2147483648
Type an int numeric string (q - to quit):
0
Converted number is 0
Type an int numeric string (q - to quit):
3.14
Converted number is 3
Type an int numeric string (q - to quit):
1456abcd
Converted number is 1456
Type an int numeric string (q - to quit):
@&<?/21
Converted number is 0
Type an int numeric string (q - to quit):
!HH::,*&&&uuupqqqq
Converted number is 0
Type an int numeric string (q - to quit):
q
***End of Converting Strings to int Demo ***
/*
 * CPR101 - Final Project
 * 11/28/2023
 * main.c - Main Module File
 * Runs All Module Functions
*/

/*
 * Team Members:
 * --
 * Team Leader/Conversions/Main - Adrian Curammeng (acurammeng@myseneca.ca)
 * 
 * Fundamentals - Jieweon Ham (jham10@myseneca.ca)
 * 
 * Tokenizing - Armaan Singh Kooner (askooner@myseneca.ca)
 *
 * Manipulations - Caleb Giammarresi (cgiammarresi@myseneca.ca)
*/

#define _CRT_SECURE_NO_WARNINGS

#include "fundamentals.h"
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"

// Main Function- Runs String Module Programs
int main(void)
{
	char buff[10];  // User Selection Input

	// Runs Programs Based on User Input
	do
	{
		printf("1 - Fundamentals\n");
		printf("2 - Manipulation\n");
		printf("3 - Converting\n");
		printf("4 - Tokenizing\n");
		printf("0 - Exit\n");

		// Prompts User Selection
		printf("Which module to run? \n");
		fgets(buff, 10, stdin);

		switch (buff[0])
		{
			case '1': fundamentals();  // Version 1 - Fundamentals: Finds Character Index in String Input
				break;
			case '2': manipulating();  // Version 1 - Manipulating: Concatenates Two Input C Strings
				break;
			case '3': converting();    // Version 1 - Conversions: Converts C String Input to Integer
				break;
			case '4': tokenizing();    // Version 1 - Tokenizing: Counts Number of Words in C String Input
				break;
		}
	} while (buff[0] != '0');  // Continues Until User enters '0'

	return 0;
}
/*
 * Adrian Curammeng
 * Email- acurammeng@myseneca.ca
 * ID- #173513227
 * 
 * CPR101 - Final Project
 * 11/28/2023
 * converting.h - Converting Module Header
 * Converts C Strings to Integers
*/

#ifndef _CONVERTING_H_
#define _CONVERTING_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Converting Module V1
// Converts C Strings to Integers
void converting(void);

#endif
PK     ! �X��  �   [Content_Types].xml �(�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 ���n�0E�����1tQU�Ei�-�L<I,������<TU<�`�(��;3���N��8��^�	��ic�L�L?;�"ARV��Y��P����&m1���
Conversions Testing
converting.c
Adrian Curammeng
--
*** Start of Converting Strings to int Demo ***
Type an int numeric string (q - to quit):
2023
Converted number is 2023
Type an int numeric string (q - to quit):
-4876
Converted number is -4876
Type an int numeric string (q - to quit):
386909146789
Converted number is 2147483647
Type an int numeric string (q - to quit):
-6780145678213
Converted number is -2147483648
Type an int numeric string (q - to quit):
0
Converted number is 0
Type an int numeric string (q - to quit):
3.14
Converted number is 3
Type an int numeric string (q - to quit):
1456abcd
Converted number is 1456
Type an int numeric string (q - to quit):
@&<?/21
Converted number is 0
Type an int numeric string (q - to quit):
!HH::,*&&&uuupqqqq
Converted number is 0
Type an int numeric string (q - to quit):
q
***End of Converting Strings to int Demo ***
/*
 * CPR101 - Final Project
 * 11/28/2023
 * main.c - Main Module File
 * Runs All Module Functions
*/

/*
 * Team Members:
 * --
 * Team Leader/Conversions/Main - Adrian Curammeng (acurammeng@myseneca.ca)
 * 
 * Fundamentals - Jieweon Ham (jham10@myseneca.ca)
 * 
 * Tokenizing - Armaan Singh Kooner (askooner@myseneca.ca)
 *
 * Manipulations - Caleb Giammarresi (cgiammarresi@myseneca.ca)
*/

#define _CRT_SECURE_NO_WARNINGS

#include "fundamentals.h"
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"

// Main Function- Runs String Module Programs
int main(void)
{
	char buff[10];  // User Selection Input

	// Runs Programs Based on User Input
	do
	{
		printf("1 - Fundamentals\n");
		printf("2 - Manipulation\n");
		printf("3 - Converting\n");
		printf("4 - Tokenizing\n");
		printf("0 - Exit\n");

		// Prompts User Selection
		printf("Which module to run? \n");
		fgets(buff, 10, stdin);

		switch (buff[0])
		{
			case '1': fundamentals();  // Version 1 - Fundamentals: Finds Character Index in String Input
				break;
			case '2': manipulating();  // Version 1 - Manipulating: Concatenates Two Input C Strings
				break;
			case '3': converting();    // Version 1 - Conversions: Converts C String Input to Integer
				break;
			case '4': tokenizing();    // Version 1 - Tokenizing: Counts Number of Words in C String Input
				break;
		}
	} while (buff[0] != '0');  // Continues Until User enters '0'

	return 0;
}
