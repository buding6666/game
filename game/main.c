#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	int a = 0;
	int b = 0;
	int c = 0;
	//��������
	char FanLei[11][11] = { 0 };
	char ChaLei[11][11] = { 0 };
	//�����ʼ��
	ChuShiHua(FanLei, ZHS, HHS, '0');
	ChuShiHua(ChaLei, ZHS, HHS, '*');

	DaYin(ChaLei, ZH, HH);//��ӡ����
	MaiLei(FanLei, ZH, HH);//����
	while (1)
	{
		printf("���������ꣻ ");
		scanf("%d %d", &a, &b);
		//�ж������Ƿ���ȷ
		if (a > 0 && a <= ZH && b > 0 && b <= HH)
		{   //�ж��Ƿ�ȵ���
			if (c < ZH * HH - Lei)
			{

				//������
				if (FanLei[a][b] == '1')
				{
					printf("���ź����ȵ����ˣ���Ϸ����");
					printf("\n");
					DaYin(FanLei, ZH, HH);
					break;
				}
				//û������
				else
				{
					//�жϸ�λ����Χ8���м����ж��ٸ���
					int acc = PangDuan(FanLei, a, b);
					ChaLei[a][b] = acc + '0';
					DaYin(ChaLei, ZH, HH);
					c++;
				}
			}

		}
		else
			printf("���������������룻");
	
	
	}


}

int main()
{   //����������������
	srand(time(NULL));
	TiShi();
	int a = 0;

	do
	{
		printf("�����룺 ");
		scanf("%d", &a);
		printf("\n");
		switch (a)
		{
		case 1:
		{
			printf("��ʼ��Ϸ\n");
			//������Ϸ
			game();
			break;
		}
		case 0:
		{
			printf("��Ϸ����");
			break;
		}
		default:
		{
			printf("����������������\n");
			break;
		}
		}
	}while (a);
	 return 0;
}