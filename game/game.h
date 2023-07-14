#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ZH 9
#define HH 9
#define ZHS ZH+2
#define HHS HH+2

//À×µÄ¸öÊý
#define Lei 10

void TiShi();
void ChuShiHua(char arr[ZHS][HHS], int zhs, int hhs, int b);
void MaiLei(char arr[ZHS][HHS], int zh, int hh);
int PangDuan(char arr[ZHS][HHS], int x, int y);
void DaYin(char arr[ZHS][HHS], int zh, int hh);