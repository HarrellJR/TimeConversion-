// TimeConversion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void showchoice();
void intEarlyHoursAmtointLateHoursPM(int intEarlyHours, int AM, int intLateHours, int PM);
void intLateHoursPMtointEarlyHoursAm(int intLateHours, int PM, int intEarlyHours, int AM);



int main()
{
	int intTime;
	int intEarlyHours, AM;
	int intLateHours, PM;
	int choice;

	do
	{
		showchoice();
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 1:
			cout << "Enter Hours and Time: ";
			cin >> intEarlyHours >> AM;
			cout << endl;
			intEarlyHoursAmtointLateHoursPM(intEarlyHours, AM, intLateHours, PM);

			cout << intEarlyHours << " Early hours, "
				<< AM << " AM, "
				<< intLateHours << " Late hours, "
				<< PM << " PM. " << endl;
			break;

		case 2:
			cout << "Enter Hours and Time: ";
			cin >> intLateHours >> PM;
			cout << endl;
			intLateHoursPMtointEarlyHoursAm(intLateHours, PM, intEarlyHours, AM);

			cout << intLateHours << "Late Hours, "
				<< PM << " PM, "
				<< intEarlyHours << "Early Hours, "
				<< AM << "PM. " << endl;
			break;
		
		case 90:
			break;

		default:
			cout << "Invalid input." << endl;
		}
	}
	while (choice != 99);

	return 0;


	}


    return 0;
}

