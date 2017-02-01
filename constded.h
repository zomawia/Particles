#pragma once

enum APP_STATE
{
	SPLASH,
	ENTER_SPLASH,
	ENTER_DEPART,
	DEPART
};


// states will have 4 props
	// initialization
		// called once
	// activation
		// setting up the state
	// update/draw
		// normal logic stuff
	// transition
		// condition to move to a state