#include"class.h"
#include"functions.h"

void mainloop()
{
	Picture picture;
	Scene scene;

	rend_loading(picture);
	count();
	for (; ege::is_run(); ege::delay_fps(70))//ÿ��65֡�������ȶ�֡�ʿ���
	{

		if (keystate(VK_LBUTTON))	//����������Ƿ���
		{
			mousepos(&scene.point.x, &scene.point.y);  //��ȡ��ǰ���λ��
			scene.onmouse_left();
		}

		if (keystate(VK_RBUTTON))
		{
			scene.onmouse_right();
		}

		if (scene.getState() != pause)
		{
			//�߼�����
			scene.update();

			//ͼ�����
			ege::cleardevice();
			scene.rend();
		}
	}
	ege::cleardevice();
	rend_outgame(picture);
}