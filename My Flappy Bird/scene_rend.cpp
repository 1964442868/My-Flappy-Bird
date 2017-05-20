#include"class.h"
#include"functions.h"

void Scene::rend()
{
	if (state == choice)
		rend_choice();
	if (state == ready)
		rend_bootInterface();
	if (state == deadchoice)
		rend_gameOver();
	if (state == gameing)
		rend_gameing();

	settarget(NULL);
	putimage(0, 0, picture.canvas);
}

void Scene::rend_choice()
{
	settarget(picture.canvas);
	putimage(0, 0, picture.startInterface);

	rend_ground();

	if (wingsMark >= 0 && wingsMark < 32)
		putimage_withalpha(NULL, picture.wingCentered0, 175, 220);	//以alpha混合的方式绘制图片
	if (wingsMark >= 32 && wingsMark < 64)
		putimage_withalpha(NULL, picture.wingUp0, 175, 216);
	if (wingsMark >= 64 && wingsMark < 96)
		putimage_withalpha(NULL, picture.wingCentered0, 175, 220);
	if (wingsMark >= 96 && wingsMark <= 128)
		putimage_withalpha(NULL, picture.wingDown0, 175, 224);
}

void Scene::rend_gameOver()
{
	settarget(picture.canvas);
	if (whitelight == 0)
	{
		setfillcolor(WHITE);
		bar(0, 0, 384, 512);
		delay_ms(20);
		ege::cleardevice();
		whitelight++;
	}
	//显示背景
	if (daystate == 0)
		putimage(0, 0, picture.background_day);
	else
		putimage(0, 0, picture.background_night);

	if (birdHeight < 410)//如果鸟到达地面，游戏结束，退出循环
		rend_birdfall();
	else
		rend_scorecard();
}

void Scene::rend_bootInterface()
{
	settarget(picture.canvas);
	if (temp >= 0 && temp < 16)
		if (daystate == 0)
		{
			if (birdcolor == yellow)
				putimage(0, 0, picture.readyUp_day_yellow);
			else if (birdcolor == red)
				putimage(0, 0, picture.readyUp_day_red);
			else if (birdcolor == blue)
				putimage(0, 0, picture.readyUp_day_blue);
			else if (birdcolor == green)
				putimage(0, 0, picture.readyUp_day_green);
		}
		else
		{
			if (birdcolor == yellow)
				putimage(0, 0, picture.readyUp_night_yellow);
			else if (birdcolor == red)
				putimage(0, 0, picture.readyUp_night_red);
			else if (birdcolor == blue)
				putimage(0, 0, picture.readyUp_night_blue);
			else if (birdcolor == green)
				putimage(0, 0, picture.readyUp_night_green);
		}
	if (temp >= 16 && temp < 32)
		if (daystate == 0)
		{
			if (birdcolor == yellow)
				putimage(0, 0, picture.readyCentered_day_yellow);
			else if (birdcolor == red)
				putimage(0, 0, picture.readyCentered_day_red);
			else if (birdcolor == blue)
				putimage(0, 0, picture.readyCentered_day_blue);
			else if (birdcolor == green)
				putimage(0, 0, picture.readyCentered_day_green);
		}
		else
		{
			if (birdcolor == yellow)
				putimage(0, 0, picture.readyCentered_night_yellow);
			else if (birdcolor == red)
				putimage(0, 0, picture.readyCentered_night_red);
			else if (birdcolor == blue)
				putimage(0, 0, picture.readyCentered_night_blue);
			else if (birdcolor == green)
				putimage(0, 0, picture.readyCentered_night_green);
		}
	if (temp >= 32 && temp < 48)
		if (daystate == 0)
		{
			if (birdcolor == yellow)
				putimage(0, 0, picture.readyDown_day_yellow);
			else if (birdcolor == red)
				putimage(0, 0, picture.readyDown_day_red);
			else if (birdcolor == blue)
				putimage(0, 0, picture.readyDown_day_blue);
			else if (birdcolor == green)
				putimage(0, 0, picture.readyDown_day_green);
		}
		else
		{
			if (birdcolor == yellow)
				putimage(0, 0, picture.readyDown_night_yellow);
			else if (birdcolor == red)
				putimage(0, 0, picture.readyDown_night_red);
			else if (birdcolor == blue)
				putimage(0, 0, picture.readyDown_night_blue);
			else if (birdcolor == green)
				putimage(0, 0, picture.readyDown_night_green);
		}
	if (temp >= 48 && temp < 64)
		if (daystate == 0)
		{
			if (birdcolor == yellow)
				putimage(0, 0, picture.readyCentered_day_yellow);
			else if (birdcolor == red)
				putimage(0, 0, picture.readyCentered_day_red);
			else if (birdcolor == blue)
				putimage(0, 0, picture.readyCentered_day_blue);
			else if (birdcolor == green)
				putimage(0, 0, picture.readyCentered_day_green);
		}
		else
		{
			if (birdcolor == yellow)
				putimage(0, 0, picture.readyCentered_night_yellow);
			else if (birdcolor == red)
				putimage(0, 0, picture.readyCentered_night_red);
			else if (birdcolor == blue)
				putimage(0, 0, picture.readyCentered_night_blue);
			else if (birdcolor == green)
				putimage(0, 0, picture.readyCentered_night_green);
		}

	rend_ground();
}
void Scene::rend_gameing()
{
	settarget(picture.canvas);
	if (!daystate)
		putimage(0, 0, picture.background_day);
	else
		putimage(0, 0, picture.background_night);

	rend_obstacle();
	rend_Bird();
	rend_score_L(170, 40);
	rend_ground();
}

void Scene::rend_Bird()
{
	settarget(picture.canvas);
	//利用模拟时间实现鸟的动态变化
	temp = time % 16;
	//水平
	if (birdStatus & 1)
	{
		if (temp >= 0 && temp < 4)
			putimage_withalpha(NULL, picture.wingCentered0, 100, birdHeight);
		if (temp >= 4 && temp < 8)
			putimage_withalpha(NULL, picture.wingUp0, 100, birdHeight);
		if (temp >= 8 && temp < 12)
			putimage_withalpha(NULL, picture.wingCentered0, 100, birdHeight);
		if (temp >= 12 && temp < 16)
			putimage_withalpha(NULL, picture.wingDown0, 100, birdHeight);
		if (keyDown > 0)
		{
			--keyDown;
			if (keyDown == 0)
			{
				birdStatus = 4;
				keyDown = 10;
			}
		}
	}
	//斜向上20度
	else if (birdStatus & 2)
	{
		if (temp >= 0 && temp < 4)
			putimage_withalpha(NULL, picture.wingCentered20, 100, birdHeight);
		if (temp >= 4 && temp < 8)
			putimage_withalpha(NULL, picture.wingUp20, 100, birdHeight);
		if (temp >= 8 && temp < 12)
			putimage_withalpha(NULL, picture.wingCentered20, 100, birdHeight);
		if (temp >= 12 && temp < 16)
			putimage_withalpha(NULL, picture.wingDown20, 100, birdHeight);
		if (keyDown > 0)
		{
			--keyDown;
			if (keyDown == 0)
			{
				birdStatus = 1;
				keyDown = 20;
			}
		}
	}
	//斜向下20度
	else if (birdStatus & 4)
	{
		if (temp >= 0 && temp < 4)
			putimage_withalpha(NULL, picture.wingCentered_20, 100, birdHeight);
		if (temp >= 4 && temp < 8)
			putimage_withalpha(NULL, picture.wingUp_20, 100, birdHeight);
		if (temp >= 8 && temp < 12)
			putimage_withalpha(NULL, picture.wingCentered_20, 100, birdHeight);
		if (temp >= 12 && temp < 16)
			putimage_withalpha(NULL, picture.wingDown_20, 100, birdHeight);
	}
}

void Scene::rend_ground()
{
	settarget(picture.canvas);
	putimage(groundPosition, 448, picture.ground);
	putimage(groundPosition - 384, 448, picture.ground);
}

void Scene::rend_obstacle()
{
	settarget(picture.canvas);
	for (c = 0; c < 3; c++)
	{
		putimage_withalpha(NULL, picture.obstacleUp, obstacle[c].x, obstacle[c].h);
		putimage_withalpha(NULL, picture.obstacleDown, obstacle[c].x, (obstacle[c].h - 400));
	}
}

void  Scene::rend_birdfall()
{
	settarget(picture.canvas);
	//显示柱子
	rend_obstacle();

	//显示鸟
	temp = time % 16;
	if (temp >= 0 && temp < 4)
		putimage_withalpha(NULL, picture.wingCentered_90, 100, birdHeight);
	if (temp >= 4 && temp < 8)
		putimage_withalpha(NULL, picture.wingUp_90, 100, birdHeight);
	if (temp >= 8 && temp < 12)
		putimage_withalpha(NULL, picture.wingCentered_90, 100, birdHeight);
	if (temp >= 12 && temp < 16)
		putimage_withalpha(NULL, picture.wingDown_90, 100, birdHeight);

	//模拟鸟下降速度变化
	acceleration += 9.8;
	birdHeight += acceleration * 2 / 77;
	//显示地面
	rend_ground();
}


void  Scene::rend_scorecard()
{
	settarget(picture.canvas);
	rend_obstacle();
	//显示地面
	rend_ground();
	putimage_withalpha(NULL, picture.wingCentered_90, 100, birdHeight);
	//画结束界面
	if (deadstate == 0)
	{
		deadstate++;
		putimage_withalpha(NULL, picture.gameOver, 55, 60);
		music.mu_Die();
		settarget(NULL);
		putimage(0, 0, picture.canvas);
		delay_ms(400);	//平均延迟400毫秒
	}
	else if (deadstate == 1)
	{
		deadstate++;
		for (int i = 512; i > 150; i -= 2)
		{
			settarget(picture.canvas);

			ege::cleardevice();
			if (daystate == 0)
				putimage(0, 0, picture.background_day);
			else
				putimage(0, 0, picture.background_night);
			rend_obstacle();
			rend_ground();
			putimage_withalpha(NULL, picture.wingCentered_90, 100, birdHeight);
			putimage_withalpha(NULL, picture.gameOver, 55, 60);
			putimage_withalpha(NULL, picture.scoreCard, 35, i);

			settarget(NULL);
			putimage(0, 0, picture.canvas);
			delay_ms(1);
		}
		music.mu_Wing();
		delay_ms(400);
		music.mu_Wing();
	}
	else if (deadstate == 2)
	{
		settarget(picture.canvas);

		deadstate++;
		putimage_withalpha(NULL, picture.wingCentered_90, 100, birdHeight);
		putimage_withalpha(NULL, picture.gameOver, 55, 60);
		putimage_withalpha(NULL, picture.scoreCard, 35, 150);
		putimage_withalpha(NULL, picture.restart, 35, 350);
		putimage_withalpha(NULL, picture.ranking, 200, 350);

		settarget(NULL);
		putimage(0, 0, picture.canvas);
		delay_ms(400);
	}
	else if (deadstate == 3)
	{
		deadstate++;
		for (int i = 0; i <= score; i++)
		{
			settarget(picture.canvas);

			ege::cleardevice();
			if (daystate == 0)
				putimage(0, 0, picture.background_day);
			else
				putimage(0, 0, picture.background_night);
			rend_obstacle();
			rend_ground();
			putimage_withalpha(NULL, picture.wingCentered_90, 100, birdHeight);
			putimage_withalpha(NULL, picture.gameOver, 55, 60);
			putimage_withalpha(NULL, picture.scoreCard, 35, 150);
			putimage_withalpha(NULL, picture.restart, 35, 350);
			putimage_withalpha(NULL, picture.ranking, 200, 350);

			rend_score_S(271, 195, i);
			rend_score_S(271, 260, maxScore);

			settarget(NULL);
			putimage(0, 0, picture.canvas);
			delay_ms(50);
		}
		delay_ms(400);
		if (score >= 10)
			music.mu_Wing();
	}
	else if (deadstate == 4)
	{
		settarget(picture.canvas);

		if (daystate == 0)
			putimage(0, 0, picture.background_day);
		else
			putimage(0, 0, picture.background_night);
		rend_obstacle();
		rend_ground();
		putimage_withalpha(NULL, picture.wingCentered_90, 100, birdHeight);
		putimage_withalpha(NULL, picture.gameOver, 55, 60);
		putimage_withalpha(NULL, picture.scoreCard, 35, 150);
		putimage_withalpha(NULL, picture.restart, 35, 350);
		putimage_withalpha(NULL, picture.ranking, 200, 350);

		//判断显示奖牌
		if (score >= 10 && score < 15)
			putimage(67, 205, picture.copper);
		if (score >= 15 && score < 30)
			putimage(67, 205, picture.silver);
		if (score >= 30 && score < 50)
			putimage(67, 205, picture.gold);
		if (score >= 50)
			putimage(67, 205, picture.platinum);

		rend_score_S(271, 195, score);//写出分数
		rend_score_S(271, 260, maxScore);//打印出最高分数

		settarget(NULL);
		putimage(0, 0, picture.canvas);
	}
}

void Scene::rend_score_L(int x, int y)
{
	settarget(picture.canvas);
	int i, n, dx, _score;
	dx = 35;
	_score = score;

	if (_score >= 0 && _score < 10)
		n = 1;
	else if (_score >= 10 && _score < 100)
		n = 2;
	else if (_score >= 100 && _score < 1000)
		n = 3;
	x = x + (n - 1)*(dx / 2);

	for (i = 0; i < n; i++)
	{
		switch (_score % 10)
		{
		case 0:
			putimage_withalpha(NULL, picture.number0_L, x - i*dx, y);
			break;
		case 1:
			putimage_withalpha(NULL, picture.number1_L, x - i*dx, y);
			break;
		case 2:
			putimage_withalpha(NULL, picture.number2_L, x - i*dx, y);
			break;
		case 3:
			putimage_withalpha(NULL, picture.number3_L, x - i*dx, y);
			break;
		case 4:
			putimage_withalpha(NULL, picture.number4_L, x - i*dx, y);
			break;
		case 5:
			putimage_withalpha(NULL, picture.number5_L, x - i*dx, y);
			break;
		case 6:
			putimage_withalpha(NULL, picture.number6_L, x - i*dx, y);
			break;
		case 7:
			putimage_withalpha(NULL, picture.number7_L, x - i*dx, y);
			break;
		case 8:
			putimage_withalpha(NULL, picture.number8_L, x - i*dx, y);
			break;
		case 9:
			putimage_withalpha(NULL, picture.number9_L, x - i*dx, y);
			break;
		default:
			break;
		}
		_score /= 10;
	}
}

void Scene::rend_score_S(int x, int y, int score)
{
	settarget(picture.canvas);
	int i, n, dx, _score;
	dx = 21;
	_score = score;

	if (_score >= 0 && _score < 10)
		n = 1;
	else if (_score >= 10 && _score < 100)
		n = 2;
	else if (_score >= 100 && _score < 1000)
		n = 3;
	x = x + (n - 1)*(dx / 2);

	for (i = 0; i < n; i++)
	{
		switch (_score % 10)
		{
		case 0:
			putimage_withalpha(NULL, picture.number0_S, x - i*dx, y);
			break;
		case 1:
			putimage_withalpha(NULL, picture.number1_S, x - i*dx, y);
			break;
		case 2:
			putimage_withalpha(NULL, picture.number2_S, x - i*dx, y);
			break;
		case 3:
			putimage_withalpha(NULL, picture.number3_S, x - i*dx, y);
			break;
		case 4:
			putimage_withalpha(NULL, picture.number4_S, x - i*dx, y);
			break;
		case 5:
			putimage_withalpha(NULL, picture.number5_S, x - i*dx, y);
			break;
		case 6:
			putimage_withalpha(NULL, picture.number6_S, x - i*dx, y);
			break;
		case 7:
			putimage_withalpha(NULL, picture.number7_S, x - i*dx, y);
			break;
		case 8:
			putimage_withalpha(NULL, picture.number8_S, x - i*dx, y);
			break;
		case 9:
			putimage_withalpha(NULL, picture.number9_S, x - i*dx, y);
			break;
		default:
			break;
		}
		_score /= 10;
	}
}