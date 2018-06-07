// Project Includes
#include "cmpsc311-f17-assign1-support.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Problem 1
// function to recursively print an array
void printArray(int array[], unsigned int low, unsigned int high)
{
    //Hint Print one element at time and be recursive
   // for (unsigned int i = low; i < high; ++i){
//	printf("%d  ", array[i]);
  //  }
	if (low < high){
		printf("%d  ", array[low]);
		printArray(array, low + 1, high);
	}

}


//Problem 2
// function to reverse a string
void stringReverse(char strArray[])
{
    //Hint Check for special conditions and be recursive
  //  for (int i = strlen(strArray); i > 0; --i){
//	printf("%c", strArray[i]);
    //}

	if (strlen(strArray) != 0) {
		printf("%c", strArray[strlen(strArray) - 1]);
		strArray[strlen(strArray) - 1] = NULL;
		stringReverse(strArray);
	}



}


//Problem 3
// function to recursively find minimum array element
int recursiveMinimum(int array[], unsigned int low, unsigned int high)
{
  /*  //Hint Check for special conditions and be recursive
    int smallest = array[0];
    for (unsigned int i = 0; i < high; ++i){
	if (smallest > array[i])
		smallest = array[i];
    }

    return smallest;
*/

	int smallest;
	if (high == 1)	smallest = array[low];
	else{
		smallest = recursiveMinimum(array, low, high - 1);
		if (smallest >= array[high - 1])	smallest = array[high - 1];
	}
	return smallest;
}

//Problem 4
// calculate average of all response values
double mean(int answer[], int SIZE)
{
    double total = 0.0;
    for (int i = 0; i < SIZE; ++i){
	total = total + answer[i];
    }
    double mean = total/SIZE;
    return mean;
}

// sort an array and determine median element's value
double median(int answer[], int SIZE)	 // the median function
{
   int temp,median;	//temp int and median
   for (int i = 0; i < SIZE; ++i){
	for (int j = i + 1; j < SIZE; ++j){
		if(answer[i] > answer[j]){
			temp = answer[i];
			answer[i] = answer[j];
			answer[j] = temp;
		}
	}
   }		// for loop to sort the array

   if (SIZE % 2 == 1)	//discuss the case that the size number is odd
	median = answer[(SIZE + 1)/2];
   else		//discuss the case that the size number is even
	median = (answer[SIZE/2] + answer[SIZE/2 + 1]) / 2;

   return median;		// return the median

}


