#include "area_circle.h"
#include <iostream>
using namespace std;
int main()
{
	area_circle area;
	double r;       //Ô²°ë¾¶

	cout << "ÇëÊäÈëÔ²°ë¾¶:";
	cin >> r;
	cout << "Ô²µÄÃæ»ýÎª:" << area.calculate(r) << endl;
}