#include "area_circle.h"
#include <iostream>
using namespace std;
int main()
{
	area_circle area;
	double r;       //Բ�뾶

	cout << "������Բ�뾶:";
	cin >> r;
	cout << "Բ�����Ϊ:" << area.calculate(r) << endl;
}