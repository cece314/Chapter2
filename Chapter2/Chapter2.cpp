// Chapter2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	float hwdistance, tdistance;
	int gallons, hwmiles, tmiles;
	gallons = 20;
	hwmiles = 28.9;
	tmiles = 23.5;
	hwdistance = gallons * hwmiles;
	tdistance = gallons * tmiles;
	cout << "The vehicle can travel" " " << tdistance << " " "miles in a town and" " " << hwdistance << " " "miles on the highway on one tank of gas";
}
