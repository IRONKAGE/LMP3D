#include <stdio.h>
#include <stdlib.h>

#ifdef __MINGW32__
#undef main
#endif

#include "LMP3D/LMP3D.h"

void game(LMP3D_Buffer *buffer);
void game2(LMP3D_Buffer *buffer);
int	game4(void);


int main(int argc, char** argv)
{
	LMP3D_Init();

	LMP3D_Buffer buffer;

	buffer = LMP3D_Window("Demo");


	//srand(time(NULL));

#ifdef DREAMCAST
	main2();
#endif

#ifdef PLAYSTATION1
	game2(&buffer);
#endif

#ifdef Wii
	game4();
#endif
	game(&buffer);

    return 0;
}
