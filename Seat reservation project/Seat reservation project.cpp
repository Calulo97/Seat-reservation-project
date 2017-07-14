//Raúl Ureña
//CIS-054
//7-24-17

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char **array_of_seats;
	int rows; //rows and columns will be define by user
	int columns; //i.e. seats per row
	char reservation; //Seat wanted by customer
	char answer; //do-while loop  operator
	
	cout << "Enter the number of rows: " << endl;
	cin >> rows;
	cout << "Enter the number of columns: " << endl;
	cin >> columns;

	do
	{
	

	cout << "Would you like to make another reservation (Y/N)?";
	cin >> answer;
	answer = toupper(answer);
	} while (answer != 'N');

	char **create_array (int rows, int columns) //Pointers **
		{
			char **array_of_seats;
			array_of_seats = new char*[rows]; //Row is an array varaible and pointer
			for (int r = 0; r < rows; r++)
				array_of_seats[r] = new char[columns];  //array is built per row, creating a number of columns per row
			return array_of_seats;
		}

	void initialize seats (char **array_of_seats, int rows, int columns) //i.e. assign characters to seats
		{
		for (int r = o; r < rows; r++)
		{
			for (int c = 0; c < columns; c++) //Is this kind of pun legal??
				array_of_seats[r][c] = 'A' + c; //Increment character by one letter for every column. Above for repeats for all rows
		}
		}


    return 0;
}

