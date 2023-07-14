#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	int a = 0;
	int b = 0;
	int c = 0;
	//创建数组
	char FanLei[11][11] = { 0 };
	char ChaLei[11][11] = { 0 };
	//数组初始化
	ChuShiHua(FanLei, ZHS, HHS, '0');
	ChuShiHua(ChaLei, ZHS, HHS, '*');

	DaYin(ChaLei, ZH, HH);//打印数组
	MaiLei(FanLei, ZH, HH);//埋雷
	while (1)
	{
		printf("请输入坐标； ");
		scanf("%d %d", &a, &b);
		//判断输入是否正确
		if (a > 0 && a <= ZH && b > 0 && b <= HH)
		{   //判断是否踩到雷
			if (c < ZH * HH - Lei)
			{

				//踩中累
				if (FanLei[a][b] == '1')
				{
					printf("很遗憾，踩到雷了，游戏结束");
					printf("\n");
					DaYin(FanLei, ZH, HH);
					break;
				}
				//没踩中雷
				else
				{
					//判断该位置周围8格有几个有多少个雷
					int acc = PangDuan(FanLei, a, b);
					ChaLei[a][b] = acc + '0';
					DaYin(ChaLei, ZH, HH);
					c++;
				}
			}

		}
		else
			printf("输入错误，请从新输入；");
	
	
	}


}

int main()
{   //设置随机数生成起点
	srand(time(NULL));
	TiShi();
	int a = 0;

	do
	{
		printf("请输入： ");
		scanf("%d", &a);
		printf("\n");
		switch (a)
		{
		case 1:
		{
			printf("开始游戏\n");
			//进入游戏
			game();
			break;
		}
		case 0:
		{
			printf("游戏结束");
			break;
		}
		default:
		{
			printf("输入错误，请从新输入\n");
			break;
		}
		}
	}while (a);
	 return 0;
}