#include"class.h"
#include"functions.h"

void rend_loading(Picture &picture)
{
	putimage(0, 0, picture.loading);	//����Ļ�ϻ���ָ��ͼ��
	delay_ms(1000);	//��ͣ1000����
}

void rend_outgame(Picture &picture)
{
	putimage(0, 0, picture.outgame);	//����Ļ�ϻ���ָ��ͼ��
	delay_ms(1000);	//��ͣ1000����
}