#include <genesis.h>

//Main Graphics Header Files
//Used to load sprites from the resource file
#include <DrEmerald.h>
#include <graphics.h>
#include <Beans.h>


int main()
{
	VDP_drawText("Hello Genny World!", 10, 13);
	VDP_drawText("Sonic is cool!", 10, 20);

	while(1)
	{
		//read input
		//move sprite
		//update score
		//draw current screen (logo, start screen, settings, game, gameover, credits...)

		//wait for screen refresh
		VDP_waitVSync();
	}
	return (0);
}
