#pragma once
#include <string>
#include "LongLong_Base.h"

using namespace std;

class LongLong_Closed : private LongLong_Base
{
private:
	double older;
	double younger;
public:

	double getOlder() const { return older; }
	double getYounger() const { return younger; }

	void setOlder(double value) { older = value; }
	void setYounger(double value) { younger = value; }

	LongLong_Closed();
	LongLong_Closed(double, double);
	LongLong_Closed(const LongLong_Closed&);

	void Compare();

	operator string() const;

	friend ostream& operator << (ostream&, const LongLong_Closed&);
	friend istream& operator >> (istream&, LongLong_Closed&);

	LongLong_Closed operator + (LongLong_Closed r);
	LongLong_Closed operator * (LongLong_Closed r);
};

