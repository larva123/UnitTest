#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int add(int a,int b) //������
{
	if (a + b <= 100) //�Ͳ��ܳ���100
		return a + b; //a,b �����������ؼ���ֵ
	else
		return -1; //a,b ��������������-1
}
int sub(int a,int b) //������
{
	if (a - b >= 0) //�Ϊ��
		return a - b;
	else
		return -1;
}
int mul(int a,int b) //������
{
	if (a * b <= 100) //�����ܳ���100
		return a * b;
	else
		return -1;
}
int divi(int a,int b) //������
{
	if (b != 0 && (double)a / b - a / b == 0) //�̲�ΪС�������
		return a / b;
	else
		return -1;
}
void main() //������
{
	int a, b, c, d = 0;
	int m = 1, n, p;
	printf("������������:");
	scanf("%d", &n);
	srand((unsigned)time(NULL));
	while (m <= n)
	{
		a = rand() % 100; //100��������� a
		b = rand() % 100; //100��������� b
		p = rand() % 4; //�㷨ѡ������� p
		switch (p) //�㷨ѡ��
		{
		case 0: //�������ж�
			if (add(a, b)>=0) //�����a,b��������
			{
				printf("%d��%d��", a, b); //��ӡ����ʽ
				scanf("%d", &c); //�����
				if (c == add(a, b)) //�ж϶Դ�
				{
					printf("������ȷ\n");
					d++; //��¼���Ե�����
				}
				else
					printf("������󣬴�Ϊ��%d��\n", add(a, b)); //����ʱ������ȷ��
			}
			else
				m--; //�����a,b�����������򲻼���ѭ������ switch �� m++ ����
			break;
		case 1: //�������ж�
			if (sub(a, b) >= 0)
			{
				printf("%d��%d��", a, b);
				scanf("%d", &c);
				if (c == sub(a, b))
				{
					printf("������ȷ\n");
					d++;
				}
				else
					printf("������󣬴�Ϊ��%d��\n", sub(a, b));
			}
			else
				m--;
			break;
		case 2: //�������ж�
			if (mul(a, b) >= 0)
			{
				printf("%d��%d��", a, b);
				scanf("%d", &c);
				if (c == mul(a, b))
				{
					printf("������ȷ\n");
					d++;
				}
				else
					printf("������󣬴�Ϊ��%d��\n", mul(a, b));
			}
			else
				m--;
			break;
		case 3: //�������ж�
			if (divi(a, b) >= 0)
			{
				printf("%d��%d��", a, b);
				scanf("%d", &c);
				if (c == divi(a, b))
				{
					printf("������ȷ\n");
					d++;
				}
				else
					printf("������󣬴�Ϊ��%d��\n", divi(a, b));
			}
			else
				m--;
			break;
		}
		m++; //ѭ������
	}
	printf("\n");
	printf("�����������������%d�⣬������%d�⣬�÷�Ϊ��%d�֡�\n", d, n - d, d); //ͳ��������
}