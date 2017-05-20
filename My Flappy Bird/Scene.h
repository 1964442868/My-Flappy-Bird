#ifndef SCENE_H
#define SCENE_H

#include"functions.h"
#include"Picture.h"
#include"Music.h"

class Scene
{
public:
	Scene();
	~Scene();

	void onmouse_left();
	void onmouse_right();

	void update();

	void rend();

	State getState();
private:
	void update_choice();
	void update_bootInterface();
	void update_groundPosition();
	void update_init();
	void update_gameing();
	void update_birdcolor();
	void update_daystate();
	void update_birdPcolor();

	bool isGameOver();

	void rend_choice();
	void rend_bootInterface();
	void rend_gameing();
	void rend_Bird();
	void rend_ground();
	void rend_gameOver();
	void rend_obstacle();
	void rend_birdfall();
	void rend_scorecard();
	void rend_score_L(int x, int y);
	void rend_score_S(int x, int y,int score);

public:
	Point point;
	
	
private:
	Picture picture;
	Music music;

	State state;
	int daystate;
	int keyDown;
	int birdStatus;
	int deadstate;
	Birdcolor birdcolor;

	int score;
	int maxScore;

	int time;
	int temp;
	int lastTime;

	float acceleration;
	float birdHeight;
	int nofobstacle;
	Obstacle obstacle[3];
	int groundPosition;
	int wingsMark;

	int c;
	int whitelight;
};

#endif // !SCENE_H
