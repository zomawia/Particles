#include "Depart.h"
#include "sfwdraw.h"

void Depart::init(int a_font)
{
	font = a_font;
}

void Depart::play()
{	
}

void Depart::draw()
{
	sfw::drawString(font, "PONG", 210, 390, 100, 100, 0, 0, BLACK);
	sfw::drawString(font, "PONG", 200, 400, 100, 100);
}

void Depart::step()
{
}

APP_STATE Depart::next()
{
	if (sfw::getKey(KEY_ESCAPE)) return ENTER_SPLASH;
	return ENTER_DEPART;
}
