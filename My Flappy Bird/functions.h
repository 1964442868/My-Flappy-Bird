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

struct Point//用来记录鼠标点击的位置
{
	int x;
	int y;
};

struct Obstacle	//障碍物位置信息结构体
{
	int x;
	int h;
};


void mainloop();

void saveHiScore(int score);
int readHiScore();
void count();

#endif HEAD_H