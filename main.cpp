#include <stdlib.h>
#include <iostream>
#include <Windows.h>
#include <string>
#include "PRIME.h"
#include <chrono>
#include <ctime>



using namespace std;

#define commC 9

#define mainColor 14
#define hColor 192
#define pColor 15
#define iColor 13
#define eColor 4
#define oColor 3
#define xColor 6



string ccommand = "";
string inp = "";
int element_ = 0;
int element = 0;
string comm[commC] = {"r@","pr@","pc@","pv@","help","sys","pf@","ct@"};
int commN = 0;
string screenTitle = "|";

int systime = 0; //show elapsed timer


int main() {
	auto start = std::chrono::system_clock::now();
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - start;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	cout << "-------------------------MATH PRIME - v0.7-------------------------" << endl;

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

			if (systime) start = std::chrono::system_clock::now();

			cout << prim(element) << endl;

			if (systime) end = std::chrono::system_clock::now();
			elapsed_seconds = end - start;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), hColor);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), xColor);
			if (systime) cout << "elapsed: " << elapsed_seconds.count() << "s" << endl;

			commN = 0;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), mainColor);
			break;
		
		case 3:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pColor);
			cout << "> ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), iColor);
			cin >> element;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), oColor);

			start = std::chrono::system_clock::now();

			cout << primC(element) << endl;

			end = std::chrono::system_clock::now();
			elapsed_seconds = end - start;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), xColor);
			if (systime) cout << "elapsed: " << elapsed_seconds.count() << "s" << endl;
			commN = 0;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), mainColor);
			break;

		case 4:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pColor);
			cout << "> ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), iColor);
			cin >> element;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), oColor);
			
			if (systime) start = std::chrono::system_clock::now();

			cout << primV(element) << endl;

			if (systime) end = std::chrono::system_clock::now();
			elapsed_seconds = end - start;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), xColor);
			if (systime) cout << "elapsed: " << elapsed_seconds.count() << "s" << endl;
			
			commN = 0;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), mainColor);
			break;

		case 5:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), hColor);
			cout << "x = user input number \n r@ - return 0 \n pr@ - return 1 or 0 if a number is prime \n pc@ - return the number of prime numbers up to the x \n pv@ - return the x number prime\
			\n sys - insert system command \n ct@ - Choose 0 or 1 to disable or enable each function's elapsed time display\
			\n pf@ - returns the prime number x (the inverse of pv@) " << endl;
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
			if (ccommand == "cls")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << "-------------------------MATH PRIME - v0.7-------------------------" << endl;
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), mainColor);
			break;

		
		case 7:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pColor);
			cout << "> ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), iColor);
			cin >> element;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), oColor);
			if (systime) start = std::chrono::system_clock::now();

			cout << primF(element) << endl;

			if (systime) end = std::chrono::system_clock::now();
			elapsed_seconds = end - start;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), xColor);
			if (systime) cout << "elapsed: " << elapsed_seconds.count() << "s" << endl;

			commN = 0;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), mainColor);
			break;

		case 8:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pColor);
			cout << "> ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), iColor);
			cin >> element;
			if (element == 1) systime = 1;
			else systime = 0;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), oColor);
			if (element == 1) cout << "ELAPSED TIME ON" << endl;
			if (element == 0) cout << "ELAPSED TIME OFF" << endl;
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

