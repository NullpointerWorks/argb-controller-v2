#include "PaletteFireIce.hpp"

inline void setRGB(CRGB* rgb, int r, int g, int b)
{
	rgb->setRGB(r,g,b);
}

PaletteFireIce::PaletteFireIce()
{
	palette = new CRGB[20];
	setRGB(&palette[0], 180,15,0);
	setRGB(&palette[1], 110,5,0);
	setRGB(&palette[2], 40,0,0);
	setRGB(&palette[3], 0,0,0);
	setRGB(&palette[4], 0,0,0);
	setRGB(&palette[5], 0,0,0);
	setRGB(&palette[6], 0,0,0);
	setRGB(&palette[7], 0,70,70);
	setRGB(&palette[8], 0,130,130);
	setRGB(&palette[9], 0,255,255); // ice (cyan)
	setRGB(&palette[10], 0,130,130);
	setRGB(&palette[11], 0,70,70);
	setRGB(&palette[12], 0,0,0);
	setRGB(&palette[13], 0,0,0);
	setRGB(&palette[14], 0,0,0);
	setRGB(&palette[15], 0,0,0);
	setRGB(&palette[16], 40,0,0);
	setRGB(&palette[17], 110,5,0);
	setRGB(&palette[18], 180,15,0);
	setRGB(&palette[19], 255,30,0); // fire (red)
}

PaletteFireIce::~PaletteFireIce()
{
	delete[] palette;
}

CRGB* PaletteFireIce::getColor(int index)
{
	if (index<0) {index=0;}
	if (index>=20) {index=19;}
	return &palette[index];
}
