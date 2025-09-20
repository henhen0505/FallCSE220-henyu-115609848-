#include <stdio.h>
#include <float.h>


float construct_float_sf(char sign_bit, char exponent, unsigned int fraction) {
    /* DO NOT CHANGE THE DECLARATION OF "f" (This will be converted to float later) */
    unsigned int f = 0; // DO NOT CHANGE
    /*------------------------------------------------------------------------------*/
    int realSign = 0;
    int realExp = 0;
    int realFrac = 0;
    if(sign_bit > 0)
    {
        realSign |=0x80000000;
    }
   
    realExp = exponent <<23;
    realFrac = fraction & 0x7FFFFF;

    f = realSign | realExp | realFrac;
    
    /* DO NOT CHANGE THE RETURN VALUE (This returns the binary representation of "f" as float) */
    return *((float*)&f); // DO NOT CHANGE
    /* ----------------------------------------------------------------------------------------*/
}

/**
 * Create all test cases inside of the main function below.
 * 
 * Run the test cases by running:
 * > make
 * > ./build/float
 * 
 * Before submmiting your assignment, please comment out your 
 * test cases for the TAs.
 */
int main(int argc, char* argv[]){
	(void)argc;
	(void)argv;
	/** CREATE TEST CASES HERE **/

    //printf("%.6f\n", construct_float_sf(0x00, 0x81, 0x300000));  // expect 5.500000
	//printf("%.6f\n", construct_float_sf(0x01, 0x81, 0x300000));  // expect -5.500000
	//printf("%.6f\n", construct_float_sf(0x00, 0x7F, 0x200000));  // expect 1.250000
	//printf("%.6f\n", construct_float_sf(0x01, 0x7F, 0x200000));  // expect -1.250000
	//printf("%.6f\n", construct_float_sf(0x00, 0x76, 0x299B6F));  // expect 0.002588
	//printf("%.6f\n", construct_float_sf(0x01, 0x76, 0x299B6F));  // expect -0.002588
	//printf("%.2f\n", construct_float_sf(0x00, 0x89, 0xABCDEF));  // expect 1374.44
	//printf("%.2f\n", construct_float_sf(0x01, 0x89, 0xABCDEF));  // expect -1374.44
	//printf("%.0f\n", construct_float_sf(0x00, 0x90, 0x7973C0));  // expect 255439
	//printf("%.0f\n", construct_float_sf(0x01, 0x90, 0x7973C0));  // expect -255439

	
	/** ---------------------- **/
	return 0;
}

