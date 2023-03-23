#include <iostream>
#include <iomanip>
#include <cmath>
#include <Windows.h>
//insert a GNU Multiple-Precision Library

using namespace std;

long double pi(int num, int prec, int porce, int percC, int outC) {
    SetConsoleTitleA("MP - loading");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), percC);
    long double pi = 0.0;
    cout << setprecision(7);
    for (int i = 0; i < prec; i++) {
        if (porce) cout << (float)i *100 / (float)prec << "%" << endl;
        pi += pow(-1.0, i) / (2.0 * i + 1.0);
    }
    cout << endl;
    pi *= 4.0;
    cout << setprecision(num + 1);
    cout << fixed;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), outC);
    return pi;
}