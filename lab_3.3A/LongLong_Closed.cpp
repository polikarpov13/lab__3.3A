#include "LongLong_Closed.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

LongLong_Closed::LongLong_Closed()
	: LongLong_Base()
{ }

LongLong_Closed::LongLong_Closed(double a, double b)

	: LongLong_Base(a, b)

{}

LongLong_Closed::LongLong_Closed(const LongLong_Closed& l)

	: LongLong_Base(l)

{}

void LongLong_Closed::Compare()
{
	if (getOlder() + getYounger() == getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is equal  " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() != getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is not equal  " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() > getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is bigger than " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() < getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is less than " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() >= getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is bigger/equal than  " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() <= getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is less/equal than  " << getOlder() * getYounger() << " \n ";

}

LongLong_Closed::operator string() const {
	stringstream sout;
	sout << "LongLong = " << this->getOlder() << " " << this->getYounger() << endl;

	return sout.str();
}

ostream& operator << (ostream& out, const LongLong_Closed& l) {
	out << (string)l;
	return out;
}

istream& operator >> (istream& in, LongLong_Closed& l) {
	double a, b;
	cout << "Older : "; cin >> a;
	cout << "Younger : "; cin >> b;

	l.setOlder(a);
	l.setYounger(b);

	return in;
}

LongLong_Closed LongLong_Closed::operator + (LongLong_Closed l) {
	LongLong_Closed l1(0, 0);

	l1.setOlder(this->getOlder() + l.getOlder());
	l1.setYounger(this->getYounger() + l.getYounger());

	return l1;
}

LongLong_Closed LongLong_Closed::operator * (LongLong_Closed l) {
	LongLong_Closed l1(0, 0);

	l1.setOlder(this->getOlder() * l.getOlder());
	l1.setYounger(this->getYounger() * l.getYounger());

	return l1;
}
