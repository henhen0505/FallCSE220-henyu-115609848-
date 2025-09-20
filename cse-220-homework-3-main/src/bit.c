#include <stdio.h>
#include <stdlib.h>
#include <bit.h>

// Students should fill in bodies of the functions below.

int ToggleBit(int num, int pos)
{
	// Students should implement here!

	if ((num&(1<<pos)) == (1<<pos))
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
			num>>=1;
		}
		return pos-1;
	}
}

int ClearBitRange(int num, int start, int end)
{
	if(start<0 || end>31 || start>end)
	{
		return num;
	}
	int mask = ~0;
	
	for(int i = start; i<=end; i++)
	{
		mask = mask & ~(1<<i);
	}

	return num & mask;
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
	//togglebit
	//printf("%d\n", ToggleBit(9, 0));   // expect 8    // 1001 -> 1000
	//printf("%d\n", ToggleBit(9, 3));   // expect 1    // 1001 -> 0001
	//printf("%d\n", ToggleBit(0, 0));   // expect 1    // 0000 -> 0001
	//printf("%d\n", ToggleBit(0, 31));  // expect -2147483648  // Toggle MSB
	//printf("%d\n", ToggleBit(-1, 0));  // expect -2   // All 1s -> clear bit 0

	//getmsb
	//printf("%d\n", GetMSB(18));        // expect 4    
	//printf("%d\n", GetMSB(0));         // expect -1
	//printf("%d\n", GetMSB(255));       // expect 7    
	//printf("%d\n", GetMSB(1024));      // expect 10   
	//printf("%d\n", GetMSB(2147483647)); // expect 30  

	//clear range
	//printf("%d\n", ClearBitRange(73, 1, 3)); // expect 65   
	//printf("%d\n", ClearBitRange(255, -1, 3)); // expect 255 
	//printf("%d\n", ClearBitRange(255, 1, 32)); // expect 255 
	//printf("%d\n", ClearBitRange(255, 5, 3));  // expect 255 
	//printf("%d\n", ClearBitRange(255, 0, 0));  // expect 254 
	//printf("%d\n", ClearBitRange(255, 7, 7));  // expect 127 
	//printf("%d\n", ClearBitRange(0, 1, 3));    // expect 0  

	//rotateleft
	//printf("%d\n", RotateLeft(5, 1));  // expect 10   
	//printf("%d\n", RotateLeft(5, 2));  // expect 20   
	//printf("%d\n", RotateLeft(5, 0));  // expect 5    
	//printf("%d\n", RotateLeft(5, 32)); // expect 5    
	//printf("%d\n", RotateLeft(-2147483648, 1)); // expect 1 

	//swap even odd bits
	//printf("%d\n", SwapOddEvenBits(23)); // expect 43 
	//printf("%d\n", SwapOddEvenBits(3));   // expect 3   
	//printf("%d\n", SwapOddEvenBits(15));  // expect 15  
	//printf("%d\n", SwapOddEvenBits(51));  // expect 102 
	
	/** ---------------------- **/
	return 0;
}