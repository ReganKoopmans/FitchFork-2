#include <iostream>
#include "series.h"
using namespace std;

int main()
{
	double ans = 0.0;
	int choice = 0;
	
	double arr2[5][2] = 
	{
		{4.44, 3.15},
		{6.5457, 1.0},
		{899.1143,5.67843},
		{6.2333, 5.67833},
		{948, 2.8943}
	};	
	double arr1[3][2] = 
	{
		{2.8943, 0.217}, 
		{4.3498,6.5457}, 
		{1.0, 899.1143}
	}; 
	
	cin >> choice;
	
	switch(choice)
	{
		case 1:{
			printSeries(arr2, 5);
			
			break;
		}
		
		case 2:{
			printSeries(arr1, 3);
			
			break;
		}
		
		case 3:{
			printSeries(arr2, 3);
			
			break;
		}
		
		case 4:{
			printSeries(arr1, 2);
			
			break;
		}
	}
	
	return 0;
}