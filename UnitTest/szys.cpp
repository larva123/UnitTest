#include "UnitTest.h"
int add(int a, int b) //������
{
	if (a + b <= 100) //�Ͳ��ܳ���100
		return a + b; //a,b �����������ؼ���ֵ
	else
		return -1; //a,b ��������������-1
}
int sub(int a, int b) //������
{
	if (a - b >= 0) //�Ϊ��
		return a - b;
	else
		return -1;
}
int mul(int a, int b) //������
{
	if (a * b <= 100) //�����ܳ���100
		return a * b;
	else
		return -1;
}
int divi(int a, int b) //������
{
	if (b != 0 && (double)a / b - a / b == 0) //�̲�ΪС�������
		return a / b;
	else
		return -1;
}