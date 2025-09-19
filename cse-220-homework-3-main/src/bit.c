#include <stdio.h>
#include <stdlib.h>
#include <bit.h>

// Students should fill in bodies of the functions below.

int ToggleBit(int num, int pos)
{
	// Students should implement here!

	if (num&(1<<pos) == 1)
	{
		num = num^(1<<pos);
	}
	else
	{
		num = num|(1<<pos);
	}

	return num; 
}

int GetMSB(int num)
{
	if (num == 0)
	{
		return -1;
	}
	else
	{
		int pos = 0;
		while(num!=0)
		{
			pos++;
			num<<1;
		}
		return pos;
	}
}

int ClearBitRange(int num, int start, int end)
{
	
	return 0;
}

int RotateLeft(int num, int d)
{
	int temp = num >> (32-d);
	num <<= d;
	num|=temp;
	return num;
}

int SwapOddEvenBits(int num)
{
	int evenBits = num & 0xAAAAAAAA;
	int oddBits = num & 0x55555555;
	evenBits>>=1;
	oddBits<<=1;
	
	return evenBits|oddBits;
}

/**
 * Create all test cases inside of the main function below.
 * Run the test cases by first compiling with "make" and then 
 * running "./build/bit"
 * 
 * Before submmiting your assignment, please comment out your 
 * test cases for the TAs.
 */
int main(int argc, char* argv[]){
	(void)argc;
	(void)argv;
	/** CREATE TEST CASES HERE **/

	int num = input("Enter a num");
	int pos = input("Enter a pos");
	ToggleBit(num, pos);
	
	/** ---------------------- **/
	return 0;
}