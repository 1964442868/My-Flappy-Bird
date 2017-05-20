#include"class.h"
#include"functions.h"

void rend_loading(Picture &picture)
{
	putimage(0, 0, picture.loading);	//在屏幕上绘制指定图像
	delay_ms(1000);	//暂停1000毫秒
}

void rend_outgame(Picture &picture)
{
	putimage(0, 0, picture.outgame);	//在屏幕上绘制指定图像
	delay_ms(1000);	//暂停1000毫秒
}