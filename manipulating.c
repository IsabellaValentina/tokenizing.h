/* Nishant, n54@myseneca.ca, 145717203, 8/7/2021, CPR101
	String Manipulation Module
	This proagram is used for comparing strings by using strcmp function and manipulates string by using strcat function
	*/


#include <stdio.h>	// it contains basic function such as for standard input and output functions
#include <string.h> // contains string manipulating functions
#include "manipulating.h" /* including this user defined header file which contains functions prototype,
								all the function prototype of that file are included in this code)*/


/* defining a function named manipulating which doesn't take any parameter and
 returns value void(corresponding to Null or nothing)*/
void manipulating() {



	/*version 1*/


	printf("*** Start of Concatenating Strings Demo ***\n");// displaying heading 
	char string1[80]; // creating a string named string1 which can store 79 char + 1 null char(which marks ending of string)
	char string2[80]; // creating a string named string2 which can store 79 char + 1 null char(which marks ending of string)

	// while TRUE depicts an ifinite loop until there is a break(line number 19)
	while (TRUE) { 
		printf("Type the 1st string (q - to quit) :\n");/* prompting user to type the 1st string or option to quit
															from demo by pressing q*/


		gets(string1); 	/* this functions helps is getting input from user which can contain spaces followed by enter key 
						 and stores it in an array named string1*/

		if (strcmp(string1, "q") == 0) break; /* this function is searching for character q in string1 and if this function
		 								founds then strcmp() function returns a value of 0 and exits the if conditional loop*/
												 
			
		printf("Type the 2nd string:\n"); // prompting user to type the second string

		gets(string2);	/* this functions helps is getting input from user which can contain spaces followed by enter key 
						 and stores it in an array named string2*/
		strcat(string1, string2); /* this function concatenates the string2 to the end of string1 
									without altering the string2, string1 is altered*/
									
		printf("Concatenated string is \'%s\'\n", string1 ); /* this function displays the new concatenated string named
		 														string1(altered) which contains string 2 at the end of it*/
															 
	}
	printf("*** End of Concatenating Strings Demo ***\n\n"); // displaying the end of concatenating string demo.





		/*version 2*/

	printf("*** Start of Comparing Strings Demo ***\n"); // displaying the string 
	char compare1[80]; // declared a char array named compare1 of size 80(79 characters + 1 null character(corresponds to '\0'))
	char compare2[80]; // declared a char array named compare1 of size 80(79 characters + 1 null character(corresponds to '\0'))
						// Null character marks the end of string

	int result; // Declared a variable named result of type int(integer)

	// while TRUE depicts an ifinite loop until there is a break
	while (TRUE) {
		printf("Type the 1st string to compare (q - to exit):\n"); // prompting user to enter the 1st string you want to compare or enter q to exit
		gets(compare1); /* this functions helps is getting input from user which can contain spaces followed by enter key 
						 and stores it in an array named compare1*/

		if (strcmp(compare1, "q") == 0) break;/* this function is searching for character q in compare1 and if this function
		 							founds then strcmp() function returns a value of 0 and exits the while loop*/

		printf("Type the 2nd string to compare:\n"); // prompting user to enter 2nd string which you want to compare with 1st string

		gets(compare2);/* this functions helps is getting input from user which can contain spaces followed by enter key 
						 and stores it in an array named compare2*/

		result = strcmp (compare1, compare2); /* strcmp() function compare compare2 with compare1 and value returned by function
		 										is assigned to result*/
		/*
		if result < 0, compare1 < compare2
		if result = 0, compare1 == compare2
		if result > 0, compare1 > compare2
		in terms of length */

		if (result < 0) // if result is less than zero execute the next given code(next printf() statement)
			printf("1st string is less than 2nd\n"); // diplaying the given string
		else if (result == 0) // if result is equal to zero then execute the next given code(next printf() statement)
			printf("1st string is equal to 2nd\n"); // diplaying the given string
		else // if all mentioned condition above are false then execute the next given code(next printf() statement)
			printf("1st string is greater than 2nd\n"); // diplaying the given string
	}

printf("*** End of Comparing Strings Demo ***\n\n"); /* displaying the end of comparing string demo 
													after pressing q (exiting from while loop) */



/*version 3*/


	printf("*** Start of Searching Strings Demo ***\n"); // displaying the given string(heading)
	char big_string[80]; //declared a char array named big_string of size 80(79 characters + 1 null character(corresponds to '\0'))
	char sub_string[80]; //declared a char array named sub_string of size 80(79 characters + 1 null character(corresponds to '\0'))
						 // Null character marks the end of string

	char* address; // declared a pointer named address to char(character) type

	// while TRUE depicts an ifinite loop until there is a break
	while (TRUE) {
		printf("Type the big string (q - to quit\n"); // prompting user to enter big string or enter q to quit
		gets(big_string); /* this functions helps is getting input from user which can contain spaces followed by enter key 
						 and stores it in an array named big_string*/

		if (strcmp(big_string, "q") == 0) break; /* this function is searching for character q in big_string and if this function
		 							founds then strcmp() function returns a value of 0 and exits the while loop*/

		printf("Type the substring:\n"); // prompting user to enter substring
		gets(sub_string);/* this functions helps is getting input from user which can contain spaces followed by enter key 
						 and stores it in an array named sub_string*/

/*strstr() function searches for first occurence of sub_string in the big_string and if it found sub_string in big string 
then, returns a pointer to the position in big_string where sub_string is found moreover for no matches return NULL*/
		address = strstr(big_string, sub_string); // The value returned by strstr() is assigned to address 
		
		// if else loop started
		if (address != NULL) /* if address contains value other than NULL then execute the below statement 
							otherwise execute the else statement*/
			printf("Found at %1d position\n", (long)address - (long)big_string);/* Displaying the value of position where 
										sub_string was found by subtracting the add. of big_string from the address*/ 
			
		else
			printf("Not found\n"); // displaying the string if address is equal to NULL(above if statement is false)
	}
	printf("*** End of Searching Strings Demo ***\n\n"); /* displaying the end of searching string demo 
													after pressing q(exiting from while loop) */

	
}