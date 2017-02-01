#include "Splash.h"
#include "sfwdraw.h"
#include <cstdio>

void Splash::init(int a_font)
{
	font = a_font;
}

void Splash::play()
{
	timer = 3.f;
}

void Splash::draw()
{
	char buffer[64];
	sprintf_s(buffer,"Press ENTER to start");
	sfw::drawString(font, buffer, 100, 100, 20, 20);
	//sfw::drawLine(100, 80, 100 + 500 * (timer/3.f) , 80);
}

void Splash::step()
{
	//timer -= sfw::getDeltaTime();
}

APP_STATE Splash::next()
{
	if (sfw::getKey(KEY_ENTER)) return ENTER_DEPART;
	return SPLASH;
}
