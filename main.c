/******************************************************************
Name: main.c
Author: Frank Sup
Date: 1/28/2011
Comments: Walk through for writing a 'C' Program

INCLUDE FILES: p33FJ64MC202.h, p33FJ64MC202.gld (Linker Script),
functions.c, support.h
******************************************************************/
#include "p33FJ64MC202.h" 	//Include p33FJ64MC202 header file
#include "math.h" 			//Include math libary
#include "support.h" 		//Include Defitions and function prototypes
	
// global variable declartions
long int run_time = 0;	// 1 msec increments, resets at 2^16 msec
int wait_flag = 0;	// signal for end of sample time

/////////////////////////////////////////////////////////////////
// Start Main Function
int main()
{

//main local variables
int i;					//general counter
int button = 0;			//digital I/O Button

//Initialization Routines
init_clock();			// initialize Clock 80 MHz/40 MIPS
init_pins();			// initialize pins
init_samptime();		// initialize sample time (1ms)

// INSERT SETUP CODE HERE (NEEDS TO RUN JUST ON SETUP)
// INSERT SETUP CODE HERE (NEEDS TO RUN JUST ON SETUP)


// Start of main loop (1 msec sample period)
while(1)
{
    i=0;
	// YOUR MAIN LOOP CODE HERE
	// YOUR MAIN LOOP CODE HERE
GRN_LED=1;
	// wait for end of sample time
	while(i<5000)
	{while(wait_flag == 0) {
		SAMPLE_TIME != SAMPLE_TIME;};		// wait for end of sample time
	wait_flag = 0;					// reset wait flag
    i++;
    }
GRN_LED=0;
WAIT;	
YEL_LED=1;
	// wait for end of sample time
	while(i<2000)
	{while(wait_flag == 0) {
		SAMPLE_TIME != SAMPLE_TIME;};		// wait for end of sample time
	wait_flag = 0;					// reset wait flag
    i++;
    }
YEL_LED=0;
WAIT;	
RED_LED=1;
	// wait for end of sample time
	while(i<5000)
	{while(wait_flag == 0) {
		SAMPLE_TIME != SAMPLE_TIME;};		// wait for end of sample time
	wait_flag = 0;					// reset wait flag
    i++;
    }
RED_LED=0;

}
return 0;
} // end main
