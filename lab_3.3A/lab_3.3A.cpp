#include "LongLong_Open.h"
#include "LongLong_Closed.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

int main()
{
    LongLong_Open lo;

    cin >> lo;
    cout << lo;

    cout << "Addition : " << lo.getOlder() + lo.getYounger() << endl;
    cout << "Multiplication : " << lo.getOlder() * lo.getYounger() << endl;
    cout << "Comparing : ";
    lo.Compare();

    LongLong_Closed lc;

    cin >> lc;
    cout << lc;

    cout << "Addition : " << lc.getOlder() + lc.getYounger() << endl;
    cout << "Multiplication : " << lc.getOlder() * lc.getYounger() << endl;
    cout << "Comparing : ";
    lc.Compare();
}
