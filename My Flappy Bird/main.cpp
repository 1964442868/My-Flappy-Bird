//===============================
//程序名称：My Flappy Bird
//制作人：杨新瑞
//创建时间：2017.3.19
//完工时间：2017.3.21 23:19
//制作周期：3 天
//
//更新日志：
//V1.1:  
//  2017.3.24 14:56
//	定义canvas图片作为画布进行双缓冲打印图像
//	2017.3.26 15:29
//  新增数据库功能，通过数据库储存读取历史成绩及程序运行次数
//
//===============================

#include"functions.h"

//窗口尺寸
#define Win_w 384
#define Win_H 512

int main()
{
	ege::setinitmode(ege::INIT_ANIMATION + ege::INIT_WITHLOGO);
	// 图形初始化
	ege::initgraph(Win_w, Win_H);//初始化绘图环境
	setcaption("My Flappy Bird"); //修改窗口名称
	setbkmode(TRANSPARENT);//设置输出文字时的背景模式为透明

	// 随机数初始化，如果需要使用随机数的话
	ege::randomize();
	// 程序主循环
	mainloop();
	// 关闭绘图设备
	ege::closegraph();

	return 0;
}