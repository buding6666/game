#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void TiShi()
{
	printf("******ɨ����Ϸ******\n");
	printf("**��1��ʼ��Ϸ����0������Ϸ**\n");
	
}

//�����ʼ��
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

//��ӡ����
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
//����
void MaiLei(char arr[ZHS][HHS], int zh, int hh)
{
	int i = 0;
	int j = 0;
	int b = Lei;
	for (b;b>0;b--)
	{     //�������һ����
		  i = rand() % zh+1;
		  j = rand() % hh+1;
		  if (arr[i][j] == '0')
		      arr[i][j] = '1';
		
      
	}
}

//�ж���Χ���ٸ���
int PangDuan(char arr[ZHS][HHS], int x, int y)
{
	int a = arr[x - 1][y - 1] + arr[x][y - 1] + arr[x - 1][y] + arr[x + 1][y - 1] + arr[x + 1][y] + arr[x][y + 1] +
		arr[x - 1][y] + arr[x + 1][y + 1] - 8 * '0';
	//int b = aqq[x][y];
	//aqq[x][y] = a+'0';
	//printf("%d", aqq[x][y]);
	return a;
}