#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int add(int a,int b) //和运算
{
	if (a + b <= 100) //和不能超过100
		return a + b; //a,b 满足条件返回计算值
	else
		return -1; //a,b 不满足条件返回-1
}
int sub(int a,int b) //差运算
{
	if (a - b >= 0) //差不为负
		return a - b;
	else
		return -1;
}
int mul(int a,int b) //积运算
{
	if (a * b <= 100) //积不能超过100
		return a * b;
	else
		return -1;
}
int divi(int a,int b) //商运算
{
	if (b != 0 && (double)a / b - a / b == 0) //商不为小数或分数
		return a / b;
	else
		return -1;
}
void main() //主函数
{
	int a, b, c, d = 0;
	int m = 1, n, p;
	printf("请输入出题个数:");
	scanf("%d", &n);
	srand((unsigned)time(NULL));
	while (m <= n)
	{
		a = rand() % 100; //100以内随机数 a
		b = rand() % 100; //100以内随机数 b
		p = rand() % 4; //算法选择随机数 p
		switch (p) //算法选择
		{
		case 0: //和运算判断
			if (add(a, b)>=0) //随机数a,b满足条件
			{
				printf("%d＋%d＝", a, b); //打印运算式
				scanf("%d", &c); //输入答案
				if (c == add(a, b)) //判断对错
				{
					printf("计算正确\n");
					d++; //记录做对的题数
				}
				else
					printf("计算错误，答案为：%d。\n", add(a, b)); //做错时返回正确答案
			}
			else
				m--; //随机数a,b不满足条件则不计入循环，与 switch 外 m++ 抵消
			break;
		case 1: //差运算判断
			if (sub(a, b) >= 0)
			{
				printf("%d－%d＝", a, b);
				scanf("%d", &c);
				if (c == sub(a, b))
				{
					printf("计算正确\n");
					d++;
				}
				else
					printf("计算错误，答案为：%d。\n", sub(a, b));
			}
			else
				m--;
			break;
		case 2: //积运算判断
			if (mul(a, b) >= 0)
			{
				printf("%d×%d＝", a, b);
				scanf("%d", &c);
				if (c == mul(a, b))
				{
					printf("计算正确\n");
					d++;
				}
				else
					printf("计算错误，答案为：%d。\n", mul(a, b));
			}
			else
				m--;
			break;
		case 3: //商运算判断
			if (divi(a, b) >= 0)
			{
				printf("%d÷%d＝", a, b);
				scanf("%d", &c);
				if (c == divi(a, b))
				{
					printf("计算正确\n");
					d++;
				}
				else
					printf("计算错误，答案为：%d。\n", divi(a, b));
			}
			else
				m--;
			break;
		}
		m++; //循环计数
	}
	printf("\n");
	printf("运算结束，你做对了%d题，做错了%d题，得分为：%d分。\n", d, n - d, d); //统计运算结果
}