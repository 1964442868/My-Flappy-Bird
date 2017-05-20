#include"class.h"
#include"functions.h"

void mainloop()
{
	Picture picture;
	Scene scene;

	rend_loading(picture);
	count();
	for (; ege::is_run(); ege::delay_fps(70))//每秒65帧，用于稳定帧率控制
	{

		if (keystate(VK_LBUTTON))	//检测鼠标左键是否按下
		{
			mousepos(&scene.point.x, &scene.point.y);  //获取当前鼠标位置
			scene.onmouse_left();
		}

		if (keystate(VK_RBUTTON))
		{
			scene.onmouse_right();
		}

		if (scene.getState() != pause)
		{
			//逻辑更新
			scene.update();

			//图像更新
			ege::cleardevice();
			scene.rend();
		}
	}
	ege::cleardevice();
	rend_outgame(picture);
}