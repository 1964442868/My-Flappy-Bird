#ifndef PICTURE_H
#define PICTURE_H

#include"functions.h"

class Picture
{
public:
	Picture();
	~Picture();

	PIMAGE canvas = newimage(384,512);

	PIMAGE loading = newimage();
	PIMAGE outgame = newimage();
	PIMAGE startInterface = newimage();
	PIMAGE gameOver = newimage();
    PIMAGE scoreCard = newimage();
	PIMAGE restart = newimage();
	PIMAGE ranking = newimage();

	PIMAGE background_day = newimage();	//创建背景图对象
	PIMAGE background_night = newimage();
	PIMAGE ground = newimage();	//创建地面图对象

	PIMAGE copper = newimage();
	PIMAGE silver = newimage();
	PIMAGE gold = newimage();
	PIMAGE platinum = newimage();

	PIMAGE obstacleUp = newimage();	//创建柱子图对象（柱子朝上）
	PIMAGE obstacleDown = newimage();	//创建柱子图对象（柱子朝下）

	PIMAGE wingUp_90 = newimage();
	PIMAGE wingCentered_90 = newimage();
	PIMAGE wingDown_90 = newimage();

	PIMAGE wingUp0 = newimage();
	PIMAGE wingCentered0 = newimage();
	PIMAGE wingDown0 = newimage();

	PIMAGE wingUp20 = newimage();
	PIMAGE wingCentered20 = newimage();
	PIMAGE wingDown20 = newimage();

	PIMAGE wingUp_20 = newimage();
	PIMAGE wingCentered_20 = newimage();
	PIMAGE wingDown_20 = newimage();

	PIMAGE readyUp_day_yellow = newimage();	//创建准备界面图对象（鸟的翅膀向上）
	PIMAGE readyCentered_day_yellow = newimage();	//创建准备界面图对象
	PIMAGE readyDown_day_yellow = newimage();	//创建准备界面图对象（鸟的翅膀向下）
	PIMAGE readyUp_day_red = newimage();	
	PIMAGE readyCentered_day_red = newimage();
	PIMAGE readyDown_day_red = newimage();
	PIMAGE readyUp_day_blue = newimage();
	PIMAGE readyCentered_day_blue = newimage();
	PIMAGE readyDown_day_blue = newimage();
	PIMAGE readyUp_day_green = newimage();
	PIMAGE readyCentered_day_green = newimage();
	PIMAGE readyDown_day_green = newimage();

	PIMAGE readyUp_night_yellow = newimage();	//创建准备界面图对象（鸟的翅膀向上）
	PIMAGE readyCentered_night_yellow = newimage();	//创建准备界面图对象
	PIMAGE readyDown_night_yellow = newimage();	//创建准备界面图对象（鸟的翅膀向下）
	PIMAGE readyUp_night_red = newimage();
	PIMAGE readyCentered_night_red = newimage();
	PIMAGE readyDown_night_red = newimage();
	PIMAGE readyUp_night_blue = newimage();
	PIMAGE readyCentered_night_blue = newimage();
	PIMAGE readyDown_night_blue = newimage();
	PIMAGE readyUp_night_green = newimage();
	PIMAGE readyCentered_night_green = newimage();
	PIMAGE readyDown_night_green = newimage();

	PIMAGE number0_L = newimage();
	PIMAGE number1_L = newimage();
	PIMAGE number2_L = newimage();
	PIMAGE number3_L = newimage();
	PIMAGE number4_L = newimage();
	PIMAGE number5_L = newimage();
	PIMAGE number6_L = newimage();
	PIMAGE number7_L = newimage();
	PIMAGE number8_L = newimage();
	PIMAGE number9_L = newimage();

	PIMAGE number0_S = newimage();
	PIMAGE number1_S = newimage();
	PIMAGE number2_S = newimage();
	PIMAGE number3_S = newimage();
	PIMAGE number4_S = newimage();
	PIMAGE number5_S = newimage();
	PIMAGE number6_S = newimage();
	PIMAGE number7_S = newimage();
	PIMAGE number8_S = newimage();
	PIMAGE number9_S = newimage();
};

#endif PICTURE_H