#include "../../sdk/dexsdk.h"
#include "../../sdk/time.h"

#define up_key 'w'
#define down_key 's'
#define right_key 'd'
#define left_key 'a'
#define enter '\n'
#define quit 27

#define YELLOW 54
#define GRAY 56
#define WHITE 63
#define BROWN 20
#define VIOLET 40
#define RED 36
#define GREEN 18
#define BLUE 9
#define ORANGE 38
#define MAROON 4
#define FLESH 55
#define BLACK 70
#define DARK_GREEN 16
#define DARK_BROWN 32


void drawRectangle(int x, int y, int w, int h, int color){
   int i,j;
   for (i=y;i<=(y+h);i++)
      for (j=x;j<=(x+w);j++)
         write_pixel(j,i,color);
}

void drawMenu(){
    drawRectangle(0,0,320,220, BLACK);
    write_text("TEXT TWIST",115,50,WHITE,2);

    write_text("[Enter] START GAME",80,130,WHITE,0);
	write_text("[Esc]   QUIT",100,150,WHITE,0);
}

int main(){
	set_graphics(VGA_320X200X256);
	drawMenu();
	
	return 0;
}


