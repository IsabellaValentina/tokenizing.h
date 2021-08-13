#include "tokenizing.h" // includes information from header file tokenizing
#define _CRT_SECURE_NO_WARNINGS   //defines that all CRT Warnings will not end in errors. 


void tokenizing() {

	/* Version 1 */
	printf("*** Start of Tokenizing Words Demo ***\n"); //output's Start of Tokenizing Words Demo
	char words[200];  // defines charater string variable words will have 200 charater limit
	char* word;      // defines pointer charater word. 
	int w_counter;   // defines int variable w_counter

	while (TRUE) //while variable true is equal to 1 
	{
		printf("Type a few words seperated by space(q - to quit):\n"); // output "Type a few words seperated by space(q - to quit): " print new line after. 
		fgets(words, 200, stdin); // reads a line from standard input  and stores as a string
		if (strcmp(words, "q") == 0) break; // if statment. if string comparison find that words variable  is equal to charater q end while statment
		word = strtok(words, " "); // word equals string tokenizing. when a charater reads 
		w_counter = 1;  // variable word counter equals 1. 
		while (word)   // while word is not equal to Null
		{
			printf("Word #%d is \'%s\'\n", w_counter++, word);  // output "Word %d is ' ' " the first variable is word counter++ second variable is the word.
			word = strtok(NULL, " "); // word equals string tokenizing. if the last space is null exit while loop
		}
	}
	printf("*** End of Tokenizing Words Demo ***\n\n"); // output *** End of Tokenizing Words Demo *** with two new lines.


/* Version 2 */

	printf("*** Start of Tokenizing Phrases Demo ***\n"); //output with one new line at the end 
	char phrases[200];  // defines charater string variable phrases will have 200 charater limit
	char* phrase;  // defines pointer charater phrase
	int p_counter;  // defines int variable p_counter 

	while (TRUE) //while variable true is equal to 1
	{
		printf(" Type a few phrases seperated by comma (q - to quit):\n");  // output "Type a few phrases seperated by space(q - to quit): " print new line after. 
		gets(phrases);  // gets string for variable phrases
		if (strcmp(phrases, "q") == 0) break;  // if string comparison does not find phrases equal to q continue
		phrase = strtok(phrases, ","); //phrase equals string tokeninizing  phrases until it hits a comma
		p_counter = 1; // p counter = 1
		while (phrase) // while phrase is not q or \n
		{
			printf("Phrase #%d is \'%s\'\n", p_counter++, phrase);  // output "Phrase %d is ' ' " the first variable is word counter++ second variable is the word. 
			phrase = strtok(NULL, ","); // phrase equals string tokenizing. if Null End while loop. 
		}
	}
	printf("*** End of Tokenizing Phrases Demo ***\n\n"); // output *** End of Tokenizing Phrases Demo *** with two new lines.



/* Version 3 */

	printf("*** Start of Tokenizing Sentences Demo ***\n");  // output with one new line at the end 
	char sentences[200];  // defines charater string variable sentences will have 200 charater limit
	char* sentence;  // defines pointer charater sentence. 
	int s_counter;  // defines int variable s_counter

	while (TRUE) //while variable true is equal to 1
	{
		printf("Type a few senteces seperated by dot(q - to quit):\n");  // output "Type a few sentences seperated by space(q - to quit): " print new line after. 
		gets(sentences); // gets string for variable sentences 
		if (strcmp(sentences, "q") == 0) break;  // if string comparison does not find sentences equal to q continue
		sentence = strtok(sentences, "."); //phrase equals string tokeninizing  phrases until it hits a period 
		s_counter = 1; // s counter starts at 1 
		while (sentence) // while phrase is not q or \n
		{
			printf("Sentence #%d is \'%s\'\n", s_counter++, sentence);  // output "Sentence %d is ' ' " the first variable is word counter++ second variable is the word.
			sentence = strtok(NULL, "."); // phrase equals string tokenizing. if Null End while loop. 
		}
	}
	printf("*** End of Tokenizing Sentences Demo ***\n\n"); // output *** End of Tokenizing Sentences Demo *** with two new lines.


}