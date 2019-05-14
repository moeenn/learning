/*
	instructions for pre-processor:
	All the # statements are not really c++ code, they are really meant for the c++ pre-processor.
	What the pre-processor does is gather all the required resources before the compilation actually begins
	Let's see each one in detail:

	#include			Including system or user libraries or headers
	#ifndef				In a c++ program a single header file may be included multiple times
						This statement tells the pre-processor that if the said header file is not
						defined, then proceed to read the contents of this file
	#define 			This tells the pre-processor to define the header name
	FUNCTIONS_H_		This can be anything you want. Because the name of the file is "functions.h" 
						it is convention to define the header as FUNCTIONS_H_
	#endif				This marks the end of the header file													
*/


#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

float areaTriangle(int length, int height) {
	float area;
	area = 0.5 * length * height;
	return area;
}

int areaRectangle(int length, int width) {
	float area;
	area = length * width;
	return area;
}

#endif