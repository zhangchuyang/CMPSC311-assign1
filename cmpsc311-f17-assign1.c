////////////////////////////////////////////////////////////////////////////////
//
//  File           : cmpsc311-f17-assign1.c
//  Description    : This is the main source code for for the first assignment
//                   of CMPSC311 at Penn State University.  See the related
//                   assignment page for details.
//
//   Author        : Chuyang Zhang
//   Last Modified : 2017/08/25
//

// Include Files
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// Project Includes
#include "cmpsc311-f17-assign1-support.h"



#define SIZE_PROBLEM1 10
#define SIZE_PROBLEM2 30
#define SIZE_PROBLEM3  10
#define MAXRANGE_PROBLEM3 1000

#define SIZE_PROBLEM4 100

// Functions

////////////////////////////////////////////////////////////////////////////////
//
// Function     : main
// Description  : The main function for the CMPSC311 assignment #1
//
// Inputs       : argc - the number of command line parameters
//                argv - the parameters
// Outputs      : 0 if successful test, -1 if failure


int main(int argc, char *argv[]) {

    /////// Problem 1 Start //////////////////////////////////////
    printf("\n-------------------------------------------------------");
    printf("\nProblem 1 Start");

    srand(time(NULL));

    int array[SIZE_PROBLEM1]; // array to be printed

    // initialize array elements to random numbers
    for (unsigned int loop = 0; loop < SIZE_PROBLEM1; ++loop) {
        array[loop] = 1 + rand() % 500;
    }


    puts("Array values printed in main:");

    // print array elements
    for (unsigned int loop = 0; loop < SIZE_PROBLEM1; ++loop) {
        printf("%d  ", array[loop]);
    }
   
    puts("\n\nArray values printed in printArray:");
    printArray(array,0,SIZE_PROBLEM1);	// get the printArray function
    puts("");
    printf("\nProblem 1 End");


    /////// Problem 1 End //////////////////////////////////////

    /////// Problem 2 Start //////////////////////////////////////
    printf("\n-------------------------------------------------------");
    printf("\nProblem 2 Start\n");

       // initialize string strArray
    char strArray[SIZE_PROBLEM2] = "Print this string backward.";

    // display original string
    for (unsigned int i = 0; i < SIZE_PROBLEM2; ++i) {
        printf("%c", strArray[i]);
    }

    puts("");
    stringReverse(strArray); // reverse the string
    puts("");
    printf("\nProblem 2 End");

    /////// Problem 2 End //////////////////////////////////////

    /////// Problem 3 Start //////////////////////////////////////
    printf("\n-------------------------------------------------------");
    printf("\nProblem 3 Start");

    srand(time(NULL));

    int array_p3[SIZE_PROBLEM3]; // array to be searched

    // initialize elements of array to random numbers
    for (unsigned int loop = 0; loop < MAXRANGE_PROBLEM3; ++loop) {
        array_p3[loop] = 1 + rand() % 500;
    }

    printf("Array members are:\n");

    // display array
    for (unsigned int i = 0; i < MAXRANGE_PROBLEM3; ++i ) {
        printf("%d  ", array_p3[i]);
    }

    // find and display smallest array element
    puts("");
    int smallest = recursiveMinimum(array_p3, 0, MAXRANGE_PROBLEM3); // the smallest number
    printf("\nSmallest element is: %d\n", smallest);
    printf("\nProblem 3 End");

    /////// Problem 3 End //////////////////////////////////////

    /////// Problem 4 Start //////////////////////////////////////
    // array of responses
    printf("\n-------------------------------------------------------");
    printf("\nProblem 4 Start");

    //Method 1
    int response_method1[SIZE_PROBLEM4] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
                             7, 8, 9, 5, 9, 8, 7, 8, 7, 1,
                             6, 7, 8, 9, 3, 9, 8, 7, 1, 7,
                             7, 8, 9, 8, 9, 8, 9, 7, 1, 9,
                             6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
                             7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
                             5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
                             7, 8, 9, 6, 8, 7, 8, 9, 7, 1,
                             7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
                            4, 5, 6, 1, 6, 5, 7, 8, 7, 9};

    double mean_result = mean(response_method1, SIZE_PROBLEM4); // process mean
    double median_result = median(response_method1, SIZE_PROBLEM4); // process median

    if (mean_result == 6.6200)
    {
        if (median_result == 7.0)
        {
            printf("\nMethod1 Results for Problem 4 Correct\n\n");
        }
        else
        {
            printf("\nMethod1 Check your median result for Problem 4\n\n");
        }
    }
    else
    {
        printf("\nMethod1 Check your mean result for Problem 4\n\n");
    }


    //Method 2 Must be completed by Honors Option. Bonus points for everyone else
    if (1) //Change to 1 to complete this section
    {
        //Load problem4_data.txt
        FILE *file; int c; int response_method2[100];	// initialize the file and integer c
	file =  fopen("problem4_data.txt", "r"); // open file and read-only

	for (c = 0; c < 100; ++c)	fscanf(file, "%d,", &response_method2[c]);
		fclose(file);	// close the file
   

        double mean_result = mean(response_method2, SIZE_PROBLEM4); // process mean
        double median_result = median(response_method2, SIZE_PROBLEM4 ); // process median

        if (mean_result == 6.6200)
        {
            if (median_result == 7.0)
            {
                printf("\nMethod2 Results for Problem 4 Correct\n\n");
                return(0);
            }
            else
            {
                printf("\nMethod2 Check your median result for Problem 4\n\n");
                return(1);
            }
        }
        else
        {
            printf("\nMethod2 Check your mean result for Problem 4\n\n");
            return(1);
        }
    }

    printf("\nProblem 4 End");
    printf("\n-------------------------------------------------------");

 /////// Problem 4 End //////////////////////////////////////

     // Return successfully
    return(0);


}




