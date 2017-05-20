#include"class.h"
#include"functions.h"

void Scene::update()
{
	if (state == choice)
		update_choice();
	if (state == ready)
		update_bootInterface();
	if (state == init)
		update_init();
	if (state == gameing)
		update_gameing();
	if (state == dead)
	{
		if (score > maxScore)
		{
			saveHiScore(score);
			maxScore = score;
		}
		state = deadchoice;
	}
}

void Scene::update_choice()
{
	update_groundPosition();
	wingsMark = groundPosition % 128;
}

void Scene::update_bootInterface()
{
	update_groundPosition();
	time += 1;
	temp = time % 64;
	if (time == 10000)
		time = 0;
}

void Scene::update_groundPosition()
{
	groundPosition -= 2;
	if (groundPosition <= 0)
		groundPosition = 384;
}

void Scene::update_init()
{
	update_birdPcolor();
	maxScore = readHiScore();
	birdHeight = 250;
	lastTime = 0;
	time = 0;
	c = 0;
	whitelight = 0;

	score = 0;
	acceleration = 0;
	birdStatus = 1;
	keyDown = 0;
	deadstate = 0;

	for (int i = 0, x = 700; i<3; ++i, x += 240)
		obstacle[i].x = x;

	state = gameing;
}

void Scene::update_daystate()
{
	daystate = ((int)random(10) + 1) % 2;
}

void Scene::update_birdcolor()
{
	int i;
	i = (int)random(12) % 4;
	if (i == 0)
		birdcolor = red;
	else if (i == 1)
		birdcolor = blue;
	else if (i == 2)
		birdcolor = green;
	else
		birdcolor = yellow;
}

void Scene::update_birdPcolor()
{
	if (birdcolor == yellow)
	{
		getimage(picture.wingUp0, "��Դ��\\ͼƬ\\��\\��\\��0.png");
		getimage(picture.wingCentered0, "��Դ��\\ͼƬ\\��\\��\\��0.png");
		getimage(picture.wingDown0, "��Դ��\\ͼƬ\\��\\��\\��0.png");

		getimage(picture.wingUp20, "��Դ��\\ͼƬ\\��\\��\\��20.png");
		getimage(picture.wingCentered20, "��Դ��\\ͼƬ\\��\\��\\��20.png");
		getimage(picture.wingDown20, "��Դ��\\ͼƬ\\��\\��\\��20.png");

		getimage(picture.wingUp_20, "��Դ��\\ͼƬ\\��\\��\\��-20.png");
		getimage(picture.wingCentered_20, "��Դ��\\ͼƬ\\��\\��\\��-20.png");
		getimage(picture.wingDown_20, "��Դ��\\ͼƬ\\��\\��\\��-20.png");

		getimage(picture.wingUp_90, "��Դ��\\ͼƬ\\��\\��\\��-90.png");
		getimage(picture.wingCentered_90, "��Դ��\\ͼƬ\\��\\��\\��-90.png");
		getimage(picture.wingDown_90, "��Դ��\\ͼƬ\\��\\��\\��-90.png");
	}
	else if (birdcolor == red)
	{
		getimage(picture.wingUp0, "��Դ��\\ͼƬ\\��\\��\\��0.png");
		getimage(picture.wingCentered0, "��Դ��\\ͼƬ\\��\\��\\��0.png");
		getimage(picture.wingDown0, "��Դ��\\ͼƬ\\��\\��\\��0.png");

		getimage(picture.wingUp20, "��Դ��\\ͼƬ\\��\\��\\��20.png");
		getimage(picture.wingCentered20, "��Դ��\\ͼƬ\\��\\��\\��20.png");
		getimage(picture.wingDown20, "��Դ��\\ͼƬ\\��\\��\\��20.png");

		getimage(picture.wingUp_20, "��Դ��\\ͼƬ\\��\\��\\��-20.png");
		getimage(picture.wingCentered_20, "��Դ��\\ͼƬ\\��\\��\\��-20.png");
		getimage(picture.wingDown_20, "��Դ��\\ͼƬ\\��\\��\\��-20.png");

		getimage(picture.wingUp_90, "��Դ��\\ͼƬ\\��\\��\\��-90.png");
		getimage(picture.wingCentered_90, "��Դ��\\ͼƬ\\��\\��\\��-90.png");
		getimage(picture.wingDown_90, "��Դ��\\ͼƬ\\��\\��\\��-90.png");
	}
	else if (birdcolor == blue)
	{
		getimage(picture.wingUp0, "��Դ��\\ͼƬ\\��\\��\\��0.png");
		getimage(picture.wingCentered0, "��Դ��\\ͼƬ\\��\\��\\��0.png");
		getimage(picture.wingDown0, "��Դ��\\ͼƬ\\��\\��\\��0.png");

		getimage(picture.wingUp20, "��Դ��\\ͼƬ\\��\\��\\��20.png");
		getimage(picture.wingCentered20, "��Դ��\\ͼƬ\\��\\��\\��20.png");
		getimage(picture.wingDown20, "��Դ��\\ͼƬ\\��\\��\\��20.png");

		getimage(picture.wingUp_20, "��Դ��\\ͼƬ\\��\\��\\��-20.png");
		getimage(picture.wingCentered_20, "��Դ��\\ͼƬ\\��\\��\\��-20.png");
		getimage(picture.wingDown_20, "��Դ��\\ͼƬ\\��\\��\\��-20.png");

		getimage(picture.wingUp_90, "��Դ��\\ͼƬ\\��\\��\\��-90.png");
		getimage(picture.wingCentered_90, "��Դ��\\ͼƬ\\��\\��\\��-90.png");
		getimage(picture.wingDown_90, "��Դ��\\ͼƬ\\��\\��\\��-90.png");
	}
	else if (birdcolor == green)
	{
		getimage(picture.wingUp0, "��Դ��\\ͼƬ\\��\\��\\��0.png");
		getimage(picture.wingCentered0, "��Դ��\\ͼƬ\\��\\��\\��0.png");
		getimage(picture.wingDown0, "��Դ��\\ͼƬ\\��\\��\\��0.png");

		getimage(picture.wingUp20, "��Դ��\\ͼƬ\\��\\��\\��20.png");
		getimage(picture.wingCentered20, "��Դ��\\ͼƬ\\��\\��\\��20.png");
		getimage(picture.wingDown20, "��Դ��\\ͼƬ\\��\\��\\��20.png");

		getimage(picture.wingUp_20, "��Դ��\\ͼƬ\\��\\��\\��-20.png");
		getimage(picture.wingCentered_20, "��Դ��\\ͼƬ\\��\\��\\��-20.png");
		getimage(picture.wingDown_20, "��Դ��\\ͼƬ\\��\\��\\��-20.png");

		getimage(picture.wingUp_90, "��Դ��\\ͼƬ\\��\\��\\��-90.png");
		getimage(picture.wingCentered_90, "��Դ��\\ͼƬ\\��\\��\\��-90.png");
		getimage(picture.wingDown_90, "��Դ��\\ͼƬ\\��\\��\\��-90.png");
	}
}

void Scene::update_gameing()
{
	time += 1;
	update_groundPosition();

	/***************����߶�************************/
	acceleration += 9.8;
	birdHeight += acceleration*1.9 / 77;

	/***************���ӵ��ƶ�**********************/
	for (c = 0; c<3; c++)
	{
		obstacle[c].x -= 2;
		if (obstacle[c].x <= -70)
			obstacle[c].x = 650;
		if (obstacle[c].x == 512)
		{
			obstacle[c].h = random(200) + 200;
		}
	}

	/***************�������****************/
	for (c = 0; c<3; ++c)	//ֻҪ�ϰ���ͨ�����λ�ã������ͼ�һ
	{
		if (obstacle[c].x == 100 - 66)
		{
			music.mu_Point();
			++score;
		}
	}

	if (isGameOver())
	{
		state = dead;
	}
}
