#include<iostream>
#include<cstdlib>
#include <string>
using namespace std;




//Glowna funkcja wywolujaca funckje qsort
extern "C" __declspec(dllexport) void mainOfCpp(double matrix1[], double matrix2[],int size)
{


	for (int i = 0; i < size; i++)
	{
		matrix1[i] = matrix1[i] - matrix2[i];
	}



}


