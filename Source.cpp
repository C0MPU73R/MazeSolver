#include <iostream>
#include <fstream>
#include <string>
#include "mazeSolver.h"
using namespace std;
int main()
{
	vector<string> linesFromFile;
	ifstream infile;
	string line;
	//cout << "Enter file name: ";
	//cin >> fileName;
	infile.open("maze1.txt");
	if (infile.is_open())
	{
		while (!infile.eof())
		{
			getline(infile, line);
			linesFromFile.push_back(line);
		}
	infile.close();
	}
	
	else
	{
		cout << "Cannot open file";
	}
	//test






	//mazeSolver a(mazeFromFile);
	//int startXLoc = a.findStartX();
	//int startYLoc = a.findStartY();
	//int min = a.shortestPath(startXLoc, startYLoc);
	//cout << min << endl;
	//a.printMaze();



	system("pause");
	return 0;
}