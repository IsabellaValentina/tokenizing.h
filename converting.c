// CONVERTING 

#include "converting.h" /*Includes the header file Converting.h */
void converting() /* Starts the function definition of 'converting' */
{
    /* Version 1 */

    printf("*** Start of Converting Strings to int Demo ***\n"); /* Prints the following message " *** Start of Concatenating Strings Demo ***\n" '\n'which means adds a new line.*/
    char int_string[80]; /* Declares the character array 'int_string'which allocates the memory of up to 80 characters */

    int int_number; /* Declares the character array ' int_number' */

    while (TRUE)
    { /* Starts of with infinite loop until user inputs a character to stop the program */

        printf("Type the int numeric string {q - to quit):\n"); /* Prints the following output message "Type the int numeric string (q - to quit):\n" '\n' meaning adding a new line */

        gets(int_string); /* Inputs value of'int_string' */

        if (strcmp(int_string, "q") == 0) break; /* Strcmp compares int_stringe and value of q. Meaning if the user types 'q' into the system of int_string, the function is == to 0 it ends the program with the break code */
        int_number = atoi(int_string); /* It takes the string which represents an integer as an argument and it returns the value of type int_string */
        printf("Converted number is %d\n", int_number); /* Prints the following message for int_number "Converting number is %d/n"'\n' meaning adding a new line */
    }
    printf("*** End of Converting Strings to int Demo ***\n\n"); /* Displayes the following message "*** End of Converting Strings to int Demo ***\n\n" '\n\n'meaning adding two new lines at the end */



    /* Version 2 */


    printf("*** Start of Converting Strings to double Demo ***\n");// print a welcoming message which marks the beginning of the code to convert strings to double
    char double_string[80]; // this variable stores the user inputted string of upto 79 characters representing the double number
    double double_number; // this variable stores the double number obtained by converting the user inputted string to double

    while (TRUE)// run the loop until the user wants to quit
    {
        printf("Type the double numberic string (q - quit): \n");// prompt the user to enter a string representing a double number and "q" to quit

        gets(double_string);// get the user input and store it in the variable "double_string"

        if (strcmp(double_string, "q") == 0) break;// compare the user inputted string with "q". If the user has entered "q", then break the loop.

        double_number = atof(double_string);// convert the double_string to double value using C's in-built method: atof(str) which takes a string and returns the equivalent double number.

        printf("Converted number is %f\n", double_number);// print the equivalent double number
    }
    printf("*** End of Converting Strings to double Demo ***\n\n");// print a message which marks the end of the code to convert strings to double




    /* Version 3 */


    printf("*** Start of Converting Strings to long Demo ***\n");// print a welcoming message which marks the beginning of the code to convert strings to long
    char long_string[80]; // this variable stores the user inputted string of upto 79 characters representing the long number
    long long_number; // this variable stores the long number obtained by converting the user inputted string to long 

    while (TRUE)// run the loop until the user wants to quit
    {
        printf("Type the long numberic string (q - quit): \n");// prompt the user to enter a string representing a long number and "q" to quit

        gets(long_string);// get the user input and store it in the variable "long_string"

        if (strcmp(long_string, "q") == 0) break;// compare the user inputted string with "q". If the user has entered "q", then break the loop.

        long_number = atol(long_string);// convert the long_string to long value using C's in-built method: atol(str) which takes a string and returns the equivalent long number.

        printf("Converted number is %ld\n", long_number);// print the equivalent long number
    }
    printf("*** End of Converting Strings to long Demo ***\n\n");// print a message which marks the end of the code to convert strings to long
}
