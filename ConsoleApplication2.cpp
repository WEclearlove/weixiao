// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CTestCopy
{
	int x;
	int y;
public:
	CTestCopy()
	{

	}
	CTestCopy(int a, int b)
	{

		x = a;
		y = b;
    }

	void setXY(int a, int b)
	{
		x = a;
		y = b;
	}
	void disPlay()
	{
		cout << "x=" << x << "y=" << y << endl;
	}
};

int main()
{
	CTestCopy ocpy(500, 800);
	ocpy. disPlay();
	ocpy. setXY(100, 200);
	ocpy. disPlay();
    return 0;
}

