// 2DArraySmoothing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <vector>

#define IDX(x, y, w) ((x) + (y) * (w)) 

float getMean(float* arr, int width, int height, int field_x, int field_y);
void printVector(std::vector<float> vec, int width, int height);

void printVector(std::vector<float> vec, int width, int height){
	std::cout.precision(2);
	std::cout << std::fixed;
	for (int i = 0; i < height; i++){
		for (int j = 0; j < width; j++)
		{
			std::cout << vec[IDX(j, i, width)] << " ";
		}
	std::cout << std::endl;

	}
}
void printArray2D(float* arr, int width, int height){
	std::cout.precision(2);
	std::cout << std::fixed;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << arr[IDX(j, i, width)] << " "; 
		}
		std::cout << std::endl;
	}
};

void smoothArray2D(float* arr, int width, int height){
	// create new vector
	std::vector<float> vec;
	float mean;
	// loop through the whole array arr
	for (int y = 0; y < height; y++){
		for (int x = 0; x < width; x++)
		{
			mean = getMean(arr, width, height, x, y);
			vec.push_back(mean);
		}
		
	} 
	printVector(vec, width, height);
	

}

float getMean(float* arr, int width, int height, int field_x, int field_y){
	float mean = 0.0f;
	int counter = 0;
	for (int i = -1; i < 2; i++)
	{
		for (int j = -1; j < 2; j++){
			// check if row is in the array
			if	((field_y + i) >= 0 && 
				((field_y + i) < height)){

				// check if x-field is in the array
				if ((field_x + j) >= 0 &&
					(field_x + j) < width) {
					mean += arr[IDX(field_x + j, field_y + i, width)];
					counter++;
				}
			}
		}
	}	
	return mean / counter;	
}

int _tmain(int argc, _TCHAR* argv[])
{

	const int width = 10;
	const int height = 5;
	float arr[width * height];
	srand(7);
	for (size_t i = 0; i < height; i++)
	{
		for (size_t j = 0; j < width; j++)
		{
			
			float f =  (rand() * 1.0f /  (RAND_MAX));
			arr[IDX(j, i, width)] = f;
		}
	}

	printArray2D(arr, width, height);
	std::cout << std::endl << "smooth arr:" << std::endl;
	
	smoothArray2D(arr, width, height);
	

	system("pause");
	return 0;
};