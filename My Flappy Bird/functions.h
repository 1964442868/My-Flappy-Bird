#ifndef HEAD_H
#define HEAD_H

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include<string.h>

#include<ege.h>
#include <graphics.h>

#include<conio.h>

#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

#include "mysql.h"
#pragma comment(lib,"libmysql")

enum State
{
	choice,
	ready,
	init,
	gameing,
	pause,
	dead,
	deadchoice
};

enum Birdcolor
{
	yellow,
	red,
	blue,
	green
};

struct Point//������¼�������λ��
{
	int x;
	int y;
};

struct Obstacle	//�ϰ���λ����Ϣ�ṹ��
{
	int x;
	int h;
};


void mainloop();

void saveHiScore(int score);
int readHiScore();
void count();

#endif HEAD_H