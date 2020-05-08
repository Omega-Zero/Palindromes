#include <stdio.h>

/***************
* Jeffrey Marple
* Lab 5: Palindromes
****************/


int main(){

	unsigned char inString[1024];

	int messageSize = 0;
	int c;
	

	int boolean = 1;

	printf("Enter a string:");

	//finds length of message; adds input to array
	while( (c = getchar()) != '\n' && c != EOF){
				
		inString[messageSize] = c;
		messageSize++;
	}
	


	//runs through array begining and compares it to the end
	//if not equal, flip the boolean
	printf("The string \"");
	for(int j = 0; j<messageSize; j++){
		
		printf("%c", inString[j]);
		//printf("%c", inString[j]);
		if ( (inString[j] != inString[messageSize-j-1]) )
			boolean = 0;
		}


	//starts printing the input	
	
	


	//if boolean true: is palindrome
	if(boolean){	
		printf("\" is a palindrome \n");
	}else{
		printf(" is not a palindrome \n");
	}

return 0;

}
