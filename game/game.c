#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void TiShi()
{
	printf("******扫雷游戏******\n");
	printf("**按1开始游戏，按0结束游戏**\n");
	
}

//数组初始化
void ChuShiHua(char arr[ZHS][HHS], int zhs, int hhs, int b)
{
	int i = 0;
	for (i = 0; i < zhs; i++)
	{
		int j = 0;
		for (j = 0; j < hhs; j++)
		{
			arr[i][j] = b;
		}
	}
	

}

//打印数组
void DaYin(char arr[ZHS][HHS], int zh, int hh)
{   
	int c = 0;
	for (c = 0; c < 10; c++)
	{
		printf("%d ", c);
		
	}
	printf("\n");

	int i = 0;
	for (i = 1; i <= zh; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= hh; j++)
		{   
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}
//埋雷
void MaiLei(char arr[ZHS][HHS], int zh, int hh)
{
	int i = 0;
	int j = 0;
	int b = Lei;
	for (b;b>0;b--)
	{     //随机生成一个数
		  i = rand() % zh+1;
		  j = rand() % hh+1;
		  if (arr[i][j] == '0')
		      arr[i][j] = '1';
		
      
	}
}

//判断周围多少个雷
int PangDuan(char arr[ZHS][HHS], int x, int y)
{
	int a = arr[x - 1][y - 1] + arr[x][y - 1] + arr[x - 1][y] + arr[x + 1][y - 1] + arr[x + 1][y] + arr[x][y + 1] +
		arr[x - 1][y] + arr[x + 1][y + 1] - 8 * '0';
	//int b = aqq[x][y];
	//aqq[x][y] = a+'0';
	//printf("%d", aqq[x][y]);
	return a;
}