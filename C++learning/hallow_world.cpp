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
//namespace ��������package
//Ҫ����ʾ�û�����һ���������������ֱ���8���ơ�ʮ���ơ�16���ƴ�ӡ����Ļ��
//Ҫ����ʾ�û�����һ������ֵ��0��1�����Բ�����ʽ��ӡ����Ļ��
 
int main()
{
	
	
	cout << "�������������֣�" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	cout << "�������ĺ�Ϊ" << v1 + v2 << endl;
	cout << "�������Ĳ�Ϊ" << v1 - v2 << endl;
	cout << "�������ĳ˻�Ϊ" << v1 * v2 << endl;
	cout << "�������ĳ���Ϊ" << v1 / v2 << endl;
	int x = 0;
	cout << "������һ��������" << endl;

	cin >> x;
	cout << oct << x << endl;
	cout << dec << x << endl;
	cout << hex << x << endl;

	cout << "������һ������ֵ��0��1��:" << endl;
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