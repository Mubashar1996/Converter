//
// Created by Steven J. Harradine
// Monday Febuary 4, 2002
// Last modifided Sunday March 3, 2002
//
//
// This program will convert different types of measurements including a set to enter your
// own coversion codes.
// The program is also is a CGI form.
//
#include <iostream>
#include <stdio.h>
using namespace std;
void main ()
{
	// Varibles
	char commands [32]; // will hold the users commands in prompt
	char commandToQuitSubMenus = 'n'; //will hold the command to quite submenus
	char cmmORmcm [32]; // CM-M or M-CM
	char inchesOrFeet [32]; // Inches or Feet

	float feet;
	float cm;
	float meter;
	float inch;
	float yard;


	// Main Program
	cout << "                              Converter v1.0\n"<< endl;
	for (;;)
	{
		cout << "Converter V1 > ";
		cin >> commands ;
		if (commands [0] == '?' || commands [0] == 'h' && commands [1] == 'e' // Help Command starts 
			&& commands [2] == 'l' && commands [3] == 'p') // Help Command starts 
		{
			cout << "\n\n                              Converter Help\n" << endl;
			cout << "   Commands  |    Action" << endl;
			cout << "   *********************\n" << endl;
			cout << "   cm-m      |  ( Centimeters-Meters )" << endl;
			cout << "   inc-feet  |  ( Inches-Feet )" << endl;
			cout << "   feet-yard |  ( Feet-Yard )" << endl;
			cout << "   inc-yard  |  ( Inches-Yards )" << endl;
			cout << "   ?         |  Help" << endl;
			cout << "   help      |  Help" << endl;
			cout << "   <<        |  Go down one directory" << endl;
			cout << "   bye       |  Quit ( Must be in lowest level )" << endl;
		} // Help command ends
		if (commands [0] == 'c' && commands [1] == 'm' && commands [2] == '-' // CM-M starts
			&& commands [3] == 'm') // CM-M starts
		{
			cout << "\n                      Centimeters to Meters Converter" << endl ;
			for (;;)
			{
				cout << "\n 1) CM-M \n    or \n 2) M-CM" << endl;
				cout << "Converter V1\\cm-m > ";
				cin >> cmmORmcm;
				if (cmmORmcm == "1")
				{
					cout << "How many centimeters to convert to meters?" << endl;
					cout << "Converter V1\\cm-m\\CM-M > ";
					cin >> cm;
					meter = cm*100;
					cout << "\n" << cm << "cm = " << meter << "m" << endl;
				}
				if (cmmORmcm == "2")
				{
					cout << "How many meters to convert to centimeters?" << endl;
					cout << "Converter V1\\cm-m\\M-CM > ";
					cin >> meter;
					cm = meter/100;
					cout << "\n" << meter << "m = " << cm << "cm" << endl;
				}
				if (cmmORmcm [0] == '<' && cmmORmcm [1] == '<')
				{
					break;
				} // CM-M ends
			}
		}
		if (commands [0] == 'i' && commands [1] == 'n' && commands [2] == 'c' && // Inches-Feet begins
			commands [3] == '-' && commands [4] == 'f' && commands [5] == 'e' &&
			commands [6] == 'e' && commands [7] == 't')
		{
			cout << "\n                      Inches to Feet Converter" << endl ;
			for (;;)
			{
				cout << "\n 1) Inches-Feet \n    or \n 2) Feet-Inches" << endl;
				cout << "Converter V1\\inc-feet > ";
				cin >> inchesOrFeet;
				if (inchesOrFeet [0] = '1');
				{
					cout << "\nHow many inches to convert to feet?\n" << endl;
					cout << "Converter V1\\inc-feet\\Inches-Feet > ";
					cin >> inch;
					feet = 12*inch;
					cout << "\n" << inch << "\" = " << feet << "'" << endl;
				}
				if (inchesOrFeet [0]  = '2')
				{
					cout << "\nHow many feet to convert to inches?\n" << endl;
					cout << "Converter V1\\inc-feet\\Feet-Inches > ";
					cin >> feet;
					inch = feet/12;
					cout << "\n" << inch << "' = " << cm << "\"" << endl;
				}
				if (inchesOrFeet [0] == '<' && inchesOrFeet [1] == '<')
				{
					break;
				} // Inches-Feet ends
			}
		}

		if (commands [0] == 'b' && commands [1] == 'y' && commands [2] == 'e') // Quit command
		{
			break; // Exit command (program termanation)
		}
	}
	cout << "\n\nCreated by Steven J. Harradine" << endl;
	cout << "Monday Febuary 4, 2002" << endl;
	cout << "Last compiled on Sunday March 3, 2002\n" << endl;
}
