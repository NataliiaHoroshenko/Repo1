#include<iostream>
#include<conio.h>
using namespace std;

void Triangle(int height = 12);

void main()
{
	enum MENU_CASES { ENTER_HEIGHT = '1', DEFAULT = '2' };
	char choice;
	cout << "\t MENU\n";
	cout << "1 - Print custom triangle\n";
	cout << "2 - Print default triangle (height 12)\n";
	cin >> choice;

	switch (choice)
	{
	case MENU_CASES::ENTER_HEIGHT:
	{
		int height;
		cout << "Enter height of triangle:\n";
		cin >> height;
		Triangle(height);
		break;

	}

	case MENU_CASES::DEFAULT:
	{
		Triangle();
		break;
	}

	}

}

void Triangle(int height)
{
	for (int i = 0; i<height - 1; i++)
	{

		for (int j = 0; j < (height - i - 1); j++)
		{

			cout << " ";

		}
		cout << "*";


		for (int j = height - i; j < (height + i - 1); j++)
		{

			cout << " ";

		}
		if (i > 0)
		{
			cout << "*";
		}
		cout << endl;



	}
	for (int j = 0; j < (2 * height - 1); j++)
	{
		cout << "*";
	}

	cout << endl << endl;
	

}