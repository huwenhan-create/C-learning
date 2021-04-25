#include <iostream>
#include<stdlib.h>
using namespace std;

namespace A
{
	int x = 1;
	void fun()
	{
		cout << "A" << endl;
	}
}

namespace B
{
	int x = 2;
	void fun()
	{
		cout << "B" << endl;
	}

	void fun2()
	{
		cout << "2B" << endl;
	}
}

using namespace B;
//namespace 可以视作package
//要求：提示用户输入一个整数，将整数分别以8进制、十进制、16进制打印在屏幕上
//要求：提示用户输入一个布尔值（0或1）。以布尔方式打印在屏幕上
 
int main()
{
	
	
	cout << "请输入两个数字：" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	cout << "两个数的和为" << v1 + v2 << endl;
	cout << "两个数的差为" << v1 - v2 << endl;
	cout << "两个数的乘积为" << v1 * v2 << endl;
	cout << "两个数的除数为" << v1 / v2 << endl;
	int x = 0;
	cout << "请输入一个整数：" << endl;

	cin >> x;
	cout << oct << x << endl;
	cout << dec << x << endl;
	cout << hex << x << endl;

	cout << "请输入一个布尔值（0，1）:" << endl;
	bool y = false;
	cin >> y;
	cout << boolalpha << y << endl;
	system("pause");

	cout << A::x << endl;
	B::fun();
	B::fun2();
	fun2();
	return 0;
}