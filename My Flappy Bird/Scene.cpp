#include"class.h"
#include"functions.h"

Scene::Scene()
{
	groundPosition = 0;
	wingsMark = 0;

	point.x = 0;
	point.y = 0;

	obstacle[0].h = 0;
	obstacle[0].x = 0;
	obstacle[1].h = 0;
	obstacle[1].x = 0;
	obstacle[2].h = 0;
	obstacle[2].x = 0;

	score = 0;
	maxScore = readHiScore();

	time = 0;
	acceleration = 0;
	birdHeight = 0;
	nofobstacle = 3;

	state = choice;
	daystate = 0;
	keyDown = 0;
	birdStatus = 1;
	deadstate = 0;
}

Scene::~Scene()
{

}

void Scene::onmouse_left()
{
	if (state == ready&&time >= 30)
	{
		state = init;
		music.mu_Wing();
	}

	if (state == choice && (point.x > 35 && point.x < 175 && point.y>360 && point.y < 440))
	{
		time = 0;
		state = ready;
		update_birdcolor();
		update_daystate();
		music.mu_Wing();
	}

	if (state == deadchoice &&deadstate == 4 && (point.x > 35 && point.x < 175 && point.y>360 && point.y < 440))	//判断是否点击重新开始
	{
		time = 0;
		state = ready;
		update_birdcolor();
		update_daystate();
		music.mu_Wing();
	}

	if (time - lastTime>1 && state == gameing)
	{
		keyDown = 10;
		birdStatus = 2;
		acceleration = -180;
		lastTime = time;
		//music.mu_Wing();
	}

	if (state == pause)
	{
		state = gameing;
		music.mu_Wing();
	}
}

void Scene::onmouse_right()
{
	if (state == gameing)
	{
		state = pause;
		music.mu_Wing();
	}
}

State Scene::getState()
{
	return state;
}