#include "fundamentals.h"  //include the header file named fundamentals.h

void fundamentals() {
    /* Version 1 */

    
    printf("*** Start of Indexing Strings Demo ***\n");  // prints the given string followed by one newline character

   
    char buffer1[81];  // declares an array of character type that can hold a maximum of 81 characters only

   
    char num_input[11];  // declares an array of character type that can hold a maximum of 11 characters only

    
    int position; // declares an integer variable

   
    while (TRUE) {  // loops forever until q is entered (this is the outer loop)

        
        printf(" q=quit) Enter a string:\n01234567890123456789012345678901234567890123456789012345678901234567890123456789\n"); // prints "q=quit) Enter a string:" followed by one newline character
        // then prints "01234567890123456789012345678901234567890123456789012345678901234567890123456789" followed by one newline character

       
        gets(buffer1);  // waits for the user to enter a string followed by enter key

       
        if (strcmp(buffer1, "q") == 0) break;  // if the user enters the letter 'q' and pressed enter key, this will terminate the outer loop

       
        while (TRUE) {  // loops forever until q is entered (this is the inner loop)
          
            printf("(q=quit) Char at index (0-%d): ", strlen(buffer1) - 1);  //prints "(q=quit) Char at index (0-XX)" where XX is the length of the buffer1 string minus one

           
            gets(num_input);  // waits for the user to enter any character followed by enter key

            
            if (strcmp(num_input, "q") == 0) break; // if the user enters "q" and pressed enter key, this will terminate the innerloop only

         
            position = atoi(num_input);    // converts the nputted string to integer
            // if the user inputted non-numeric character, this will crash the program

           
            printf(" is \'%c\'\n", buffer1[position]); //prints " is X "  where X is the character in you buffer1 with the inputted index

        }

    }

    printf("*** End of Indexing Strings Demo ***\n\n");  // prints the given string followed by two newline characters


    /* Version 2 */

    printf("Start of Measuring Strings Demo \n"); //output
   
    char buffer2[80];  //Initialize char array of size 80
     //Char array to store input of characters

   
    while (1)  //loop with true condition always(Infinite)
    {
       
        printf("Type a String(q- quit):\n");  //Prompts user for string input to measure

        
        gets(buffer2); //gets() to store string in the char array buffer2

        
        if (strcmp(buffer2, "q") == 0) //inbuilt strcmp() to compare two strings.
        //if string entered is q, then loop breaks and code exits
        {
           
            break;  //Break Statement
        }
        else   //Else prints length of string using inbuilt strlen()
        {
          
            printf("The length is %lu\n", strlen(buffer2));
        }
    }


    /* Version 3 */

    printf("***Start of copying Strings Demo***\n"); //output

    //Initialize two char arrays with same sizes
    char destination[80];
    char source[80];

  
    while (1)   //Run the loop infinitely because of condition always true
    {
       
        destination[0] = '\0';  //Empty the destination array always before a new input
        printf("Destination string is reset to empty \n"); //output

       
       
        printf("Type a source string (q- to quit) \n");  //Input the source string and store it to source array
        gets(source); //using inbuilt gets()

        
        if (strcmp(source, "q") == 0) //Compare the strings using strcmp()
        //if user enters q, then the loop exists
        {
            break; //break
        }
        else
        {
           
            strcpy(destination, source);  //Inbuilt strcpy() to copy string from source to target array.
           
            printf("New destination string is '%s': \n", destination);  //Print the destination string.
        }
    }
    printf("***End of Copying String Demo***\n\n"); //output

}


}