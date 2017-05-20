#include"class.h"
#include"functions.h"

Music::Music()
{
	mciSendString(TEXT("open 资源包\\音效\\die.WAV alias die"), NULL, 0, NULL);
	mciSendString(TEXT("open 资源包\\音效\\point.WAV alias point"), NULL, 0, NULL);
	mciSendString(TEXT("open 资源包\\音效\\wing.WAV alias wing"), NULL, 0, NULL);
	mciSendString(TEXT("open 资源包\\音效\\hit.WAV alias hit"), NULL, 0, NULL);
}
Music::~Music()
{
	mciSendString(TEXT("close die"), NULL, 0, NULL);
	mciSendString(TEXT("close point"), NULL, 0, NULL);
	mciSendString(TEXT("close wing"), NULL, 0, NULL);
	mciSendString(TEXT("close hit"), NULL, 0, NULL);
}

void Music::mu_Die()
{
	mciSendString(TEXT("seek die to 0"), NULL, 0, NULL);
	mciSendString(TEXT("play die"), NULL, 0, NULL);
}

void Music::mu_Point()
{
	mciSendString(TEXT("seek point to 0"), NULL, 0, NULL);
	mciSendString(TEXT("play point"), NULL, 0, NULL);
}

void Music::mu_Wing()
{
	mciSendString(TEXT("seek wing to 0"), NULL, 0, NULL);
	mciSendString(TEXT("play wing"), NULL, 0, NULL);
}

void Music::mu_Hit()
{
	mciSendString(TEXT("seek hit to 0"), NULL, 0, NULL);
	mciSendString(TEXT("play hit"), NULL, 0, NULL);
}

