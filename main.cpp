#include <stdlib.h>
#include <iostream>
#include <Windows.h>
#include <string>
#include "PRIME.h"

using namespace std;

#define commC 7

#define mainColor 14
#define hColor 5
#define pColor 15
#define iColor 3
#define eColor 4
#define oColor 2
#define xColor 6

string ccommand = "";
string inp = "";
int element = 0;
string comm[commC] = {"r@","pr@","pc@","pv@","help","sys"};
int commN = 0;
string screenTitle = "|";


int main() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	cout << "-------------------------MATH PRIME - v0.2-------------------------" << endl;



	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), mainColor);
	while (true)
	{
		SetConsoleTitleA("MP - ");
		switch (commN)
		{
		case 0:
			cout << "" << endl;
			cin >> inp;
			
			for (int i = 0; i < commC; i++)
			{
				if (comm[i] == inp)
				{
					
					
					commN = i+1;
					i = commC + 1;
				}
				
			}
			if (commN == 0) commN = commC + 1;
			break;
		
		case 1:
			return 0;
			commN = 0;
			break;
		
		case 2:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pColor);
			cout << "> ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), iColor);
			cin >> element;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), oColor);
			cout << prim(element) << endl;
			commN = 0;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), mainColor);
			break;
		
		case 3:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pColor);
			cout << "> ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), iColor);
			cin >> element;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), oColor);
			cout << primC(element) << endl;
			commN = 0;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), mainColor);
			break;
		case 4:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pColor);
			cout << "> ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), iColor);
			cin >> element;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), oColor);
			cout << primV(element) << endl;
			commN = 0;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), mainColor);
			break;
		case 5:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), hColor);
			cout << "x = user input number \n r@ - return 0 \n pr@ - return 1 or 0 if a number is prime \n pc@ - return the number of prime numbers up to the x \n pv@ - return the x number prime\
			\n sys - insert system command" << endl;
			commN = 0;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), mainColor);
			break;

		case 6:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pColor);
			cout << "> ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), xColor);
			cin >> ccommand;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pColor);
			system(ccommand.data());
			commN = 0;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), mainColor);
			break;
		default:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), eColor);
			cout << "error - '" + inp + "' not found in command array" << endl;
			commN = 0;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), mainColor);
			break;
		}
	}

	
	return 0;
}

