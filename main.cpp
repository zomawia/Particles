#include "sfwdraw.h"
#include "Splash.h"
#include "constded.h"
#include "Depart.h"



void main()
{
	sfw::initContext(800,600,"NSFW Draw");
	unsigned font = sfw::loadTextureMap("./res/fontmap.png",16,16);
		
	Splash splash;
	Depart depart;

	splash.init(font);
	depart.init(font);

	APP_STATE state = ENTER_SPLASH;

	while (sfw::stepContext())
	{	
		switch (state)
		{
		case ENTER_SPLASH:
			splash.play();
		case SPLASH:
			splash.step();
			splash.draw();
			state = splash.next();
			break;

		case ENTER_DEPART:
			depart.play();
		case DEPART:
			depart.step();
			depart.draw();
			state = depart.next();
			break;

		}

	}

	sfw::termContext();
}