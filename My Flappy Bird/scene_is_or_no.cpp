#include"class.h"
#include"functions.h"

bool Scene::isGameOver()
{
	//���Ƿ������ϰ���
	for (int i = 0; i<nofobstacle; ++i)
		if (obstacle[i].x >= 35 && obstacle[i].x <= 135 && (obstacle[i].h<(birdHeight + 27) || (obstacle[i].h - 155)>birdHeight))
		{
			music.mu_Hit();
			return true;
		}
	//�ж����Ƿ�ײ������
	if (birdHeight>415)
	{
		return true;
	}
	return false;
}