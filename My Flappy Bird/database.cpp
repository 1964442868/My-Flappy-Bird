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
		fp = fopen("资源包\\记录\\记录.txt", "w");	//以写的方式打开文件
		if (fp)	//打开成功
		{
			fprintf(fp, "%d", score);	//将最高分数写入文件
			fclose(fp);	//关闭文件
		}
	}
	else
	{
		FILE *fp;
		fp = fopen("资源包\\记录\\记录.txt", "w");	//以写的方式打开文件
		if (fp)	//打开成功
		{
			fprintf(fp, "%d", score);	//将最高分数写入文件
			fclose(fp);	//关闭文件
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

			fp = fopen("资源包\\记录\\记录.txt", "r");	//以读的方式打开文件
			if (fp)	//打开成功
			{
				fscanf(fp, "%d", &score);	//将最高分数从文件中读出
				fclose(fp);	//关闭文件
			}
		}
		mysql_free_result(res);
	}
	else
	{
		FILE *fp;

		fp = fopen("资源包\\记录\\记录.txt", "r");	//以读的方式打开文件
		if (fp)	//打开成功
		{
			fscanf(fp, "%d", &score);	//将最高分数从文件中读出
			fclose(fp);	//关闭文件
		}
	}

	
	mysql_close(conn);
	return score;
}