#include <iostream>
using namespace std;

void Ex3p5() {
/*
	enum class Color {red = {255,0,0}, green = {0,255,0}, yellow = {255,255,0}, purple = {128,0,128}, blue = {0, 0, 255}, black = {0, 0, 0}, white = {255,255,255}} ;

	const Color colors[3] { Color::purple, Color::yellow, Color::green } ;
*/
	  enum class Color : unsigned
	  {
		Red    = 0xFF0000u,
		Green  = 0x00FF00u,
		Blue   = 0x0000FFu,
		Yellow = 0xFFFF00u,
		Purple = 0xFF00FFu,
		Black  = 0x000000u,
		White  = 0xFFFFFFu
	  };
}
