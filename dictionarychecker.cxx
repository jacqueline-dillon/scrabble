#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void Check_if_Word(char *filename, char *str);

int main(void)
{
        char str[] = ""; // this will be whatever word the player places        
        char filename[] =  "Dictionary.txt";
        
        Check_if_Word(filename, str);
}

void Check_if_Word(char *filename, char *str)
{
	FILE *dictionary = fopen(filename, "r"); //opens dictionary file
	int result = 0;
	char temp[512]; //the length of a line
	
	while(fgets(temp, 512, dictionary) != NULL)
	{
		if((strstr(temp,str)) != NULL) //compares str (word placed) to temp (word at line)
		{
			result = 1; //if they match result = 1;
		}
	}
	
	if(result == 1)
	{
		printf("This is a word"); //obviously when we incorporate it into the program we can omit this part this is just for sake of testing if it worked
	}
	else
	{
		printf("n");
	}
	
}
