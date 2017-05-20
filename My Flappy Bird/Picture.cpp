#include"class.h"
#include"functions.h"

Picture::Picture()
{
	getimage(loading, "资源包\\图片\\其他\\画布.png");

	getimage(loading, "资源包\\图片\\其他\\加载.png");
	getimage(outgame, "资源包\\图片\\其他\\退出.png");
	getimage(gameOver, "资源包\\图片\\其他\\gameOver.png");
	getimage(scoreCard, "资源包\\图片\\其他\\记分牌.png");
	getimage(startInterface, "资源包\\图片\\其他\\开始.png");
	getimage(ranking, "资源包\\图片\\其他\\排行榜.png");
	getimage(restart, "资源包\\图片\\其他\\重来.png");

	getimage(background_day, "资源包\\图片\\背景\\白天.png");
	getimage(background_night, "资源包\\图片\\背景\\黑夜.png");
	getimage(ground, "资源包\\图片\\背景\\地.png");
	
	getimage(copper, "资源包\\图片\\奖牌\\铜牌.png");
	getimage(silver, "资源包\\图片\\奖牌\\银牌.png");
	getimage(gold, "资源包\\图片\\奖牌\\铜牌.png");
	getimage(platinum, "资源包\\图片\\奖牌\\铂金牌.png");

	getimage(obstacleUp, "资源包\\图片\\柱子\\正.png");
	getimage(obstacleDown, "资源包\\图片\\柱子\\反.png");

	getimage(wingUp0, "资源包\\图片\\鸟\\黄\\上0.png");
	getimage(wingCentered0, "资源包\\图片\\鸟\\黄\\中0.png");
	getimage(wingDown0, "资源包\\图片\\鸟\\黄\\下0.png");

	getimage(wingUp20, "资源包\\图片\\鸟\\黄\\上20.png");
	getimage(wingCentered20, "资源包\\图片\\鸟\\黄\\中20.png");
	getimage(wingDown20, "资源包\\图片\\鸟\\黄\\下20.png");
	
	getimage(wingUp_20, "资源包\\图片\\鸟\\黄\\上-20.png");
	getimage(wingCentered_20, "资源包\\图片\\鸟\\黄\\中-20.png");
	getimage(wingDown_20, "资源包\\图片\\鸟\\黄\\下-20.png");

	getimage(wingUp_90, "资源包\\图片\\鸟\\黄\\上-90.png");
	getimage(wingCentered_90, "资源包\\图片\\鸟\\黄\\中-90.png");
	getimage(wingDown_90, "资源包\\图片\\鸟\\黄\\下-90.png");

	getimage(readyUp_day_yellow, "资源包\\图片\\引导\\白天\\黄\\上.png");
	getimage(readyCentered_day_yellow, "资源包\\图片\\引导\\白天\\黄\\中.png");
	getimage(readyDown_day_yellow, "资源包\\图片\\引导\\白天\\黄\\下.png");
	getimage(readyUp_day_red, "资源包\\图片\\引导\\白天\\红\\上.png");
	getimage(readyCentered_day_red, "资源包\\图片\\引导\\白天\\红\\中.png");
	getimage(readyDown_day_red, "资源包\\图片\\引导\\白天\\红\\下.png");
	getimage(readyUp_day_blue, "资源包\\图片\\引导\\白天\\蓝\\上.png");
	getimage(readyCentered_day_blue, "资源包\\图片\\引导\\白天\\蓝\\中.png");
	getimage(readyDown_day_blue, "资源包\\图片\\引导\\白天\\蓝\\下.png");
	getimage(readyUp_day_green, "资源包\\图片\\引导\\白天\\绿\\上.png");
	getimage(readyCentered_day_green, "资源包\\图片\\引导\\白天\\绿\\中.png");
	getimage(readyDown_day_green, "资源包\\图片\\引导\\白天\\绿\\下.png");

	getimage(readyUp_night_yellow, "资源包\\图片\\引导\\夜晚\\黄\\上.png");
	getimage(readyCentered_night_yellow, "资源包\\图片\\引导\\夜晚\\黄\\中.png");
	getimage(readyDown_night_yellow, "资源包\\图片\\引导\\夜晚\\黄\\下.png");
	getimage(readyUp_night_red, "资源包\\图片\\引导\\夜晚\\红\\上.png");
	getimage(readyCentered_night_red, "资源包\\图片\\引导\\夜晚\\红\\中.png");
	getimage(readyDown_night_red, "资源包\\图片\\引导\\夜晚\\红\\下.png");
	getimage(readyUp_night_blue, "资源包\\图片\\引导\\夜晚\\蓝\\上.png");
	getimage(readyCentered_night_blue, "资源包\\图片\\引导\\夜晚\\蓝\\中.png");
	getimage(readyDown_night_blue, "资源包\\图片\\引导\\夜晚\\蓝\\下.png");
	getimage(readyUp_night_green, "资源包\\图片\\引导\\夜晚\\绿\\上.png");
	getimage(readyCentered_night_green, "资源包\\图片\\引导\\夜晚\\绿\\中.png");
	getimage(readyDown_night_green, "资源包\\图片\\引导\\夜晚\\绿\\下.png");

	getimage(number0_L, "资源包\\图片\\数字\\大号\\0.png");
	getimage(number1_L, "资源包\\图片\\数字\\大号\\1.png");
	getimage(number2_L, "资源包\\图片\\数字\\大号\\2.png");
	getimage(number3_L, "资源包\\图片\\数字\\大号\\3.png");
	getimage(number4_L, "资源包\\图片\\数字\\大号\\4.png");
	getimage(number5_L, "资源包\\图片\\数字\\大号\\5.png");
	getimage(number6_L, "资源包\\图片\\数字\\大号\\6.png");
	getimage(number7_L, "资源包\\图片\\数字\\大号\\7.png");
	getimage(number8_L, "资源包\\图片\\数字\\大号\\8.png");
	getimage(number9_L, "资源包\\图片\\数字\\大号\\9.png");

	getimage(number0_S, "资源包\\图片\\数字\\小号\\0.png");
	getimage(number1_S, "资源包\\图片\\数字\\小号\\1.png");
	getimage(number2_S, "资源包\\图片\\数字\\小号\\2.png");
	getimage(number3_S, "资源包\\图片\\数字\\小号\\3.png");
	getimage(number4_S, "资源包\\图片\\数字\\小号\\4.png");
	getimage(number5_S, "资源包\\图片\\数字\\小号\\5.png");
	getimage(number6_S, "资源包\\图片\\数字\\小号\\6.png");
	getimage(number7_S, "资源包\\图片\\数字\\小号\\7.png");
	getimage(number8_S, "资源包\\图片\\数字\\小号\\8.png");
	getimage(number9_S, "资源包\\图片\\数字\\小号\\9.png");
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