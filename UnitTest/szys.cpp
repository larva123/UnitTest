#include "UnitTest.h"
int add(int a, int b) //和运算
{
	if (a + b <= 100) //和不能超过100
		return a + b; //a,b 满足条件返回计算值
	else
		return -1; //a,b 不满足条件返回-1
}
int sub(int a, int b) //差运算
{
	if (a - b >= 0) //差不为负
		return a - b;
	else
		return -1;
}
int mul(int a, int b) //积运算
{
	if (a * b <= 100) //积不能超过100
		return a * b;
	else
		return -1;
}
int divi(int a, int b) //商运算
{
	if (b != 0 && (double)a / b - a / b == 0) //商不为小数或分数
		return a / b;
	else
		return -1;
}