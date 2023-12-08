#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"

// fundamentals function declaration: string indexing demonstration 
void fundamentals(void) {
	/* Version 1 */
	//printf("*** Start of Indexing Strings Demo ***\n");
	//char buffer1[BUFFER_SIZE]; // String storage buffer
	//char numInput[NUM_INPUT_SIZE]; //receiving location information
	//size_t position; //storing character locations

	////getting strings until input 'q'
	//do {       
	//	printf("Type not empty string (q - to quit):\n"); 
	//	fgets(buffer1, BUFFER_SIZE, stdin);  // Enter a string from the user
	//	buffer1[strlen(buffer1) - 1] = '\0'; // removing NULL
	//	
	//	//If the input is not 'q',convert the location information entered as a string to an integer.
	//	if (strcmp(buffer1, "q") != 0){
	//		printf("Type the character position within the string:\n");
	//			fgets(numInput, NUM_INPUT_SIZE, stdin); // Receiving location information from users

	//			//To indicate the end of a string
	//			numInput[strlen(numInput) - 1] = '\0'; // removing NULL
	//			position = atoi(numInput); // Converting a string to an integer

	//			//for adjust to the maximum possible location
	//			if (position >= strlen(buffer1)) {
	//				position = strlen(buffer1) - 1;
	//				printf("Too big... Position reduced to max. availbale\n");
	//			}
	//		printf("The character found at %d position is \'%c\'\n",
	//			(int)position, buffer1[position]);

	//	}
	//} while (strcmp(buffer1, "q") != 0);
	//printf("*** End of Indexing Strings Demo ***\n\n");


/* Version 2 */
// V2
	printf("*** Start of Measuring Strings Demo ***\n");
	char buffer2[BUFFER_SIZE];
	do {
		printf("Type a string (q - to quit):\n");
		fgets(buffer2, BUFFER_SIZE, stdin);
		buffer2[strlen(buffer2) - 1] = '\0';
		if (strcmp(buffer2, "q") != 0) {
			printf("The length of '%s' is %d characters\n", buffer2, (int)strlen(buffer2));
		}
	} while (strcmp(buffer2, "q") != 0);
	printf("*** End of Measuring Strings Demo ***\n\n");


/* Version 3 */

// V3
	//printf("*** Start of Copying Strings Demo ***\n");
	//char destination[BUFFER_SIZE];
	//char source[BUFFER_SIZE];
	//do {
	//	destination[0] = '\0';
	//	printf("Destination string is reset to empty\n");
	//	printf("Type the source string (q - to quit):\n");
	//	fgets(source, BUFFER_SIZE, stdin);
	//	source[strlen(source) - 1] = '\0';
	//	if (strcmp(source, "q") != 0) {
	//		strcpy(destination, source);
	//		printf("New destination string is '%s'\n", destination);
	//	}
	//} while (strcmp(source, "q") != 0);
	//printf("*** End of Copying Strings Demo ***\n\n");

}
