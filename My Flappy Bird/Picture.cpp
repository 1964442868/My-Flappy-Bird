#include"class.h"
#include"functions.h"

Picture::Picture()
{
	getimage(loading, "��Դ��\\ͼƬ\\����\\����.png");

	getimage(loading, "��Դ��\\ͼƬ\\����\\����.png");
	getimage(outgame, "��Դ��\\ͼƬ\\����\\�˳�.png");
	getimage(gameOver, "��Դ��\\ͼƬ\\����\\gameOver.png");
	getimage(scoreCard, "��Դ��\\ͼƬ\\����\\�Ƿ���.png");
	getimage(startInterface, "��Դ��\\ͼƬ\\����\\��ʼ.png");
	getimage(ranking, "��Դ��\\ͼƬ\\����\\���а�.png");
	getimage(restart, "��Դ��\\ͼƬ\\����\\����.png");

	getimage(background_day, "��Դ��\\ͼƬ\\����\\����.png");
	getimage(background_night, "��Դ��\\ͼƬ\\����\\��ҹ.png");
	getimage(ground, "��Դ��\\ͼƬ\\����\\��.png");
	
	getimage(copper, "��Դ��\\ͼƬ\\����\\ͭ��.png");
	getimage(silver, "��Դ��\\ͼƬ\\����\\����.png");
	getimage(gold, "��Դ��\\ͼƬ\\����\\ͭ��.png");
	getimage(platinum, "��Դ��\\ͼƬ\\����\\������.png");

	getimage(obstacleUp, "��Դ��\\ͼƬ\\����\\��.png");
	getimage(obstacleDown, "��Դ��\\ͼƬ\\����\\��.png");

	getimage(wingUp0, "��Դ��\\ͼƬ\\��\\��\\��0.png");
	getimage(wingCentered0, "��Դ��\\ͼƬ\\��\\��\\��0.png");
	getimage(wingDown0, "��Դ��\\ͼƬ\\��\\��\\��0.png");

	getimage(wingUp20, "��Դ��\\ͼƬ\\��\\��\\��20.png");
	getimage(wingCentered20, "��Դ��\\ͼƬ\\��\\��\\��20.png");
	getimage(wingDown20, "��Դ��\\ͼƬ\\��\\��\\��20.png");
	
	getimage(wingUp_20, "��Դ��\\ͼƬ\\��\\��\\��-20.png");
	getimage(wingCentered_20, "��Դ��\\ͼƬ\\��\\��\\��-20.png");
	getimage(wingDown_20, "��Դ��\\ͼƬ\\��\\��\\��-20.png");

	getimage(wingUp_90, "��Դ��\\ͼƬ\\��\\��\\��-90.png");
	getimage(wingCentered_90, "��Դ��\\ͼƬ\\��\\��\\��-90.png");
	getimage(wingDown_90, "��Դ��\\ͼƬ\\��\\��\\��-90.png");

	getimage(readyUp_day_yellow, "��Դ��\\ͼƬ\\����\\����\\��\\��.png");
	getimage(readyCentered_day_yellow, "��Դ��\\ͼƬ\\����\\����\\��\\��.png");
	getimage(readyDown_day_yellow, "��Դ��\\ͼƬ\\����\\����\\��\\��.png");
	getimage(readyUp_day_red, "��Դ��\\ͼƬ\\����\\����\\��\\��.png");
	getimage(readyCentered_day_red, "��Դ��\\ͼƬ\\����\\����\\��\\��.png");
	getimage(readyDown_day_red, "��Դ��\\ͼƬ\\����\\����\\��\\��.png");
	getimage(readyUp_day_blue, "��Դ��\\ͼƬ\\����\\����\\��\\��.png");
	getimage(readyCentered_day_blue, "��Դ��\\ͼƬ\\����\\����\\��\\��.png");
	getimage(readyDown_day_blue, "��Դ��\\ͼƬ\\����\\����\\��\\��.png");
	getimage(readyUp_day_green, "��Դ��\\ͼƬ\\����\\����\\��\\��.png");
	getimage(readyCentered_day_green, "��Դ��\\ͼƬ\\����\\����\\��\\��.png");
	getimage(readyDown_day_green, "��Դ��\\ͼƬ\\����\\����\\��\\��.png");

	getimage(readyUp_night_yellow, "��Դ��\\ͼƬ\\����\\ҹ��\\��\\��.png");
	getimage(readyCentered_night_yellow, "��Դ��\\ͼƬ\\����\\ҹ��\\��\\��.png");
	getimage(readyDown_night_yellow, "��Դ��\\ͼƬ\\����\\ҹ��\\��\\��.png");
	getimage(readyUp_night_red, "��Դ��\\ͼƬ\\����\\ҹ��\\��\\��.png");
	getimage(readyCentered_night_red, "��Դ��\\ͼƬ\\����\\ҹ��\\��\\��.png");
	getimage(readyDown_night_red, "��Դ��\\ͼƬ\\����\\ҹ��\\��\\��.png");
	getimage(readyUp_night_blue, "��Դ��\\ͼƬ\\����\\ҹ��\\��\\��.png");
	getimage(readyCentered_night_blue, "��Դ��\\ͼƬ\\����\\ҹ��\\��\\��.png");
	getimage(readyDown_night_blue, "��Դ��\\ͼƬ\\����\\ҹ��\\��\\��.png");
	getimage(readyUp_night_green, "��Դ��\\ͼƬ\\����\\ҹ��\\��\\��.png");
	getimage(readyCentered_night_green, "��Դ��\\ͼƬ\\����\\ҹ��\\��\\��.png");
	getimage(readyDown_night_green, "��Դ��\\ͼƬ\\����\\ҹ��\\��\\��.png");

	getimage(number0_L, "��Դ��\\ͼƬ\\����\\���\\0.png");
	getimage(number1_L, "��Դ��\\ͼƬ\\����\\���\\1.png");
	getimage(number2_L, "��Դ��\\ͼƬ\\����\\���\\2.png");
	getimage(number3_L, "��Դ��\\ͼƬ\\����\\���\\3.png");
	getimage(number4_L, "��Դ��\\ͼƬ\\����\\���\\4.png");
	getimage(number5_L, "��Դ��\\ͼƬ\\����\\���\\5.png");
	getimage(number6_L, "��Դ��\\ͼƬ\\����\\���\\6.png");
	getimage(number7_L, "��Դ��\\ͼƬ\\����\\���\\7.png");
	getimage(number8_L, "��Դ��\\ͼƬ\\����\\���\\8.png");
	getimage(number9_L, "��Դ��\\ͼƬ\\����\\���\\9.png");

	getimage(number0_S, "��Դ��\\ͼƬ\\����\\С��\\0.png");
	getimage(number1_S, "��Դ��\\ͼƬ\\����\\С��\\1.png");
	getimage(number2_S, "��Դ��\\ͼƬ\\����\\С��\\2.png");
	getimage(number3_S, "��Դ��\\ͼƬ\\����\\С��\\3.png");
	getimage(number4_S, "��Դ��\\ͼƬ\\����\\С��\\4.png");
	getimage(number5_S, "��Դ��\\ͼƬ\\����\\С��\\5.png");
	getimage(number6_S, "��Դ��\\ͼƬ\\����\\С��\\6.png");
	getimage(number7_S, "��Դ��\\ͼƬ\\����\\С��\\7.png");
	getimage(number8_S, "��Դ��\\ͼƬ\\����\\С��\\8.png");
	getimage(number9_S, "��Դ��\\ͼƬ\\����\\С��\\9.png");
}

Picture::~Picture()
{
	delimage(canvas);

	delimage(loading);
	delimage(outgame);
	delimage(gameOver);
	delimage(scoreCard);
	delimage(startInterface);
	delimage(ranking);
	delimage(restart);

	delimage(background_day);
	delimage(background_night);
	delimage(ground);

	delimage(copper);
	delimage(silver);
	delimage(gold);
	delimage(platinum);

	delimage(obstacleUp);
	delimage(obstacleDown);

	delimage(wingUp0);
	delimage(wingCentered0);
	delimage(wingDown0);

	delimage(wingUp20);
	delimage(wingCentered20);
	delimage(wingDown20);

	delimage(wingUp_20);
	delimage(wingCentered_20);
	delimage(wingDown_20);

	delimage(wingUp_90);
	delimage(wingCentered_90);
	delimage(wingDown_90);

	delimage(readyUp_day_yellow);
	delimage(readyCentered_day_yellow);
	delimage(readyDown_day_yellow);
	delimage(readyUp_day_red);
	delimage(readyCentered_day_red);
	delimage(readyDown_day_red);
	delimage(readyUp_day_blue);
	delimage(readyCentered_day_blue);
	delimage(readyDown_day_blue);
	delimage(readyUp_day_green);
	delimage(readyCentered_day_green);
	delimage(readyDown_day_green);

	delimage(readyUp_night_yellow);
	delimage(readyCentered_night_yellow);
	delimage(readyDown_night_yellow);
	delimage(readyUp_night_red);
	delimage(readyCentered_night_red);
	delimage(readyDown_night_red);
	delimage(readyUp_night_blue);
	delimage(readyCentered_night_blue);
	delimage(readyDown_night_blue);
	delimage(readyUp_night_green);
	delimage(readyCentered_night_green);
	delimage(readyDown_night_green);

	delimage(number0_L);
	delimage(number1_L);
	delimage(number2_L);
	delimage(number3_L);
	delimage(number4_L);
	delimage(number5_L);
	delimage(number6_L);
	delimage(number7_L);
	delimage(number8_L);
	delimage(number9_L);

	delimage(number0_S);
	delimage(number1_S);
	delimage(number2_S);
	delimage(number3_S);
	delimage(number4_S);
	delimage(number5_S);
	delimage(number6_S);
	delimage(number7_S);
	delimage(number8_S);
	delimage(number9_S);
}