//===============================
//�������ƣ�My Flappy Bird
//�����ˣ�������
//����ʱ�䣺2017.3.19
//�깤ʱ�䣺2017.3.21 23:19
//�������ڣ�3 ��
//
//������־��
//V1.1:  
//  2017.3.24 14:56
//	����canvasͼƬ��Ϊ��������˫�����ӡͼ��
//	2017.3.26 15:29
//  �������ݿ⹦�ܣ�ͨ�����ݿⴢ���ȡ��ʷ�ɼ����������д���
//
//===============================

#include"functions.h"

//���ڳߴ�
#define Win_w 384
#define Win_H 512

int main()
{
	ege::setinitmode(ege::INIT_ANIMATION + ege::INIT_WITHLOGO);
	// ͼ�γ�ʼ��
	ege::initgraph(Win_w, Win_H);//��ʼ����ͼ����
	setcaption("My Flappy Bird"); //�޸Ĵ�������
	setbkmode(TRANSPARENT);//�����������ʱ�ı���ģʽΪ͸��

	// �������ʼ���������Ҫʹ��������Ļ�
	ege::randomize();
	// ������ѭ��
	mainloop();
	// �رջ�ͼ�豸
	ege::closegraph();

	return 0;
}