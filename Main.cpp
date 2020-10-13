/*
Anthony Thompson
C++ Fall 2020
Due Oct 12 23:59
Lab 4: Temperature Output
Description: Design and write a C++ program that inputs a series of hourly temperature from a file, and outputs a bar chart (using stars) of the temperatures. The temperature should be printed to the left of the corresponding bar,
and there should be a heading that gives the scale of the chart. The range of temperatures should be from  -30 to 120. Because it is hard to display 150 characters on the screen, you should have each star represent a range of 3 degrees.
That way, the bars will be at most 50 characters wide. Use meaningful variable names, proper indentation, and appropriate comments. Thoroughly test the program using your own data sets. Make sure to vet the values from the input file.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string inputfile = "inTemp.dat";
	ifstream inFile;
	int temp;
	int count = -30;
	// Opening files for use
	inFile.open(inputfile);

	// Priming Data Read
	inFile >> temp;

	while(inFile)
	{
		
		cout << temp << "	";
		while (count <= temp)
		{
			cout << "*";
			if (count == 0)
				cout << "|";
			count = count + 3;

		}
		cout << endl;
		count = -30;
		inFile >> temp;
	}
	return 0;
}