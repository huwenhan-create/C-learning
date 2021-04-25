/*********************************/
/*知识点： bool, 命名空间 输入输出*/
/*题目要求：*/
/*使用一个函数找出一个整型数组中的最大值最小值*/
/************************************************************************/
#include <iostream>
#include <stdlib.h>
using namespace std;

/*  * comment pairs /*   */ cannot nest. * ''cannot nest'' is considered source code, * as is the rest of the program* /

// /*C++ Primer, Fifth Edition
// * everything inside a single-line comment is ignored 
// * including nested comment pairs 
//  */

int getMaxOrMin(int* arr, int count, bool isMax)
{
	int temp = arr[0];
	for (int i=1;i<count;i++)
	{
		if (isMax)
		{
			if (temp > arr[i])
			{
				temp = arr[i];
			}
		}
		else
		{
			if (temp < arr[i])
			{
				temp = arr[i];
			}
		}
	}


	return temp;
}
