#ifndef CMPSC311_A1SUPPORT_INCLUDED
#define CMPSC311_A1SUPPORT_INCLUDED

////////////////////////////////////////////////////////////////////////////////
//
//  File          : cmpsc311-f17-assign1-support.h
//  Description   : This is a set of general-purpose utility functions we use
//                  for the 311 homework assignment #1.
//
//  Author   : Chuyang Zhang
//  Created  : 2017/08/23

//
// Functional Prototypes

//Problem 1
void printArray(int array[], unsigned int low, unsigned int high);

//Problem 2
void stringReverse(char strArray[]);

//Problem 3
int recursiveMinimum(int array[], unsigned int low, unsigned int high);

//Problem 4
double mean(int answer[], int SIZE); 
double median(int answer[], int SIZE);


#endif // CMPSC311_A1SUPPORT_INCLUDED
