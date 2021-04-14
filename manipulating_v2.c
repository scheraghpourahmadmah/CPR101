
#include "manipulating_v2.h"

#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
#pragma  warning //_CRT_SECURE_NO_WARNINGS
// This function prompts the user to input two strings and then concatenate them together.
//as long as user don't enter q program is work. When user enter q , while loop is not true any more and program stop.
void manipulating() {
	printf("*** Start of Comparing Starting Demo ***\n");
	char compare1[80]; // declaration of array of char with size of 80
	char compare2[80];
	int result;
	while (TRUE) {//while it is TRUE is keeps prompting to the user

		printf("Type the 1st string to compare (q - to quit) :\n");
		gets(compare1);
		if (strcmp(compare1, "q") == 0) break;
		printf("Type the 2nd string to compare:\n");
		gets(compare2);
		result = strcmp(compare1, compare2);
		if (result < 0) // check is result less than zero then 
			printf("1st string is less than 2nd\n");// print this line 
		else if (result == 0) // if the if statment is false then check else if 
			printf("1st string is equal to 2nd\n");
		else// and then else
			printf("1st string is greater than 2nd\n");
	}

	printf("*** End of Comparing Strings Demo ***\n\n");
}
