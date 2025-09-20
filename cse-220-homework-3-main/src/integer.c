#include <stdio.h>
#include <stdlib.h>
#include <integer.h>

// FILL IN THE BODY OF THIS FUNCTION.
// Feel free to create any other functions you like; just include them in this file.



void repr_convert(char source_repr, char target_repr, unsigned int repr) 
{
	if(source_repr!= '2' && source_repr!='S')
	{
		printf("error\n");
		return;
	}
	if(target_repr!='2' && target_repr!='S')
	{
		printf("error\n");
		return;
	}

	if(source_repr == target_repr)
	{
		printf("%08x\n", repr);
	}
	
	if(source_repr =='2' && target_repr == 'S')
	{
		if (repr == 0x80000000)
		{
			printf("undefined\n");
			return;
		}
		else if(repr & 0x80000000)
		{
			int temp = ~repr;
			temp+=1;
			temp|=0x80000000;
			printf("%08x\n", temp);
		}
		else
		{
			printf("%08x\n", repr);
		}
	}
	
	if(source_repr =='S' && target_repr =='2')
	{
		if (repr == 0x80000000)
		{
			printf("%08x\n", 0);
		}
		else if(repr & 0x80000000)
		{
			int temp = repr;
			temp<<=1;
			temp>>=1;
			temp = ~temp;
			temp++;
			printf("%08x\n", temp);
		}
		else
		{
			printf("%08x\n", repr);
		}
	}

}


/**
 * Create all test cases inside of the main function below.
 * Run the test cases by first compiling with "make" and then 
 * running "./build/integer"
 * 
 * Before submmiting your assignment, please comment out your 
 * test cases for the TAs.
 */
int main(int argc, char* argv[]){
	(void)argc;
	(void)argv;
	/** CREATE TEST CASES HERE **/

	//repr_convert('S', '2', 0x80000001);  // expect ffffffff
	//repr_convert('S', '2', 0x80000000);  // expect 00000000
	//repr_convert('2', '2', 0x59f2ca50);  // expect 59f2ca50
	//repr_convert('F', '2', 0x00394812);  // expect error
	//repr_convert('2', 'S', 0x80000000);  // expect undefined

	
	/** ---------------------- **/
	return 0;
}
