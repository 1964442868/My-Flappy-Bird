#include"class.h"
#include"functions.h"

char szSqlText[1000];
char host[] = "localhost";
char szTargetDSN[] = "siri";
const char username[] = "root";
const char password[] = "";
unsigned int port = 3306;

MYSQL *conn;
MYSQL_RES *res;
MYSQL_ROW row;

void count()
{
	if ((conn = mysql_init((MYSQL *)NULL)) && (mysql_options(conn, MYSQL_SET_CHARSET_NAME, "utf8") == 0) && (mysql_real_connect(conn, host, username, password, szTargetDSN, port, NULL, 0)))
	{
		sprintf(szSqlText, "update flappybird set count=count+1");
		mysql_query(conn, "update flappybird set count=count+1");
	}

	mysql_close(conn);
}

void saveHiScore(int score)
{
	
	if ((conn = mysql_init((MYSQL *)NULL)) && (mysql_options(conn, MYSQL_SET_CHARSET_NAME, "utf8") == 0) && (mysql_real_connect(conn, host, username, password, szTargetDSN, port, NULL, 0)))
	{
		sprintf(szSqlText, "update flappybird set history=%d", score);
		mysql_query(conn, szSqlText);

		FILE *fp;
		fp = fopen("��Դ��\\��¼\\��¼.txt", "w");	//��д�ķ�ʽ���ļ�
		if (fp)	//�򿪳ɹ�
		{
			fprintf(fp, "%d", score);	//����߷���д���ļ�
			fclose(fp);	//�ر��ļ�
		}
	}
	else
	{
		FILE *fp;
		fp = fopen("��Դ��\\��¼\\��¼.txt", "w");	//��д�ķ�ʽ���ļ�
		if (fp)	//�򿪳ɹ�
		{
			fprintf(fp, "%d", score);	//����߷���д���ļ�
			fclose(fp);	//�ر��ļ�
		}
	}

	mysql_close(conn);
}

int readHiScore()
{
	int score = 0;

	if ((conn = mysql_init((MYSQL *)NULL)) && (mysql_options(conn, MYSQL_SET_CHARSET_NAME, "utf8") == 0) && (mysql_real_connect(conn, host, username, password, szTargetDSN, port, NULL, 0)))
	{
		strcpy(szSqlText, "select * from flappybird");
		mysql_query(conn, szSqlText);
		res = mysql_store_result(conn);
		row = mysql_fetch_row(res);

		if (row != NULL)
			score = atoi(row[0]);
		else
		{
			FILE *fp;

			fp = fopen("��Դ��\\��¼\\��¼.txt", "r");	//�Զ��ķ�ʽ���ļ�
			if (fp)	//�򿪳ɹ�
			{
				fscanf(fp, "%d", &score);	//����߷������ļ��ж���
				fclose(fp);	//�ر��ļ�
			}
		}
		mysql_free_result(res);
	}
	else
	{
		FILE *fp;

		fp = fopen("��Դ��\\��¼\\��¼.txt", "r");	//�Զ��ķ�ʽ���ļ�
		if (fp)	//�򿪳ɹ�
		{
			fscanf(fp, "%d", &score);	//����߷������ļ��ж���
			fclose(fp);	//�ر��ļ�
		}
	}

	
	mysql_close(conn);
	return score;
}