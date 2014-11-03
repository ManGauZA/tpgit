#include "PointersManipulation.h"

void Increment1(int m){
	m++;
}

void Increment2(int* m){
	(*m)++;
}

void Increment3(int& m){
	m++;
}