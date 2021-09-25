#include "PaletteRainbow.hpp"

inline void setRGB(CRGB* rgb, int r, int g, int b)
{
	rgb->setRGB(r,g,b);
}

PaletteRainbow::PaletteRainbow()
{
	palette = new CRGB[20];
	setRGB(&palette[0], 73, 231, 0);
	setRGB(&palette[1], 129, 195, 0);
	setRGB(&palette[2], 180, 147, 0);
	setRGB(&palette[3], 220, 92, 0);
	setRGB(&palette[4], 246, 35, 0);
	setRGB(&palette[5], 255, 0, 0);
	setRGB(&palette[6], 246, 0, 35);
	setRGB(&palette[7], 220, 0, 92);
	setRGB(&palette[8], 180, 0, 147);
	setRGB(&palette[9], 129, 0, 195);
	setRGB(&palette[10], 73, 0, 231);
	setRGB(&palette[11], 17, 0, 251);
	setRGB(&palette[12], 0, 0, 255);
	setRGB(&palette[13], 0, 54, 239);
	setRGB(&palette[14], 0, 111, 208);
	setRGB(&palette[15], 0, 164, 164);
	setRGB(&palette[16], 0, 208, 111);
	setRGB(&palette[17], 0, 239, 54);
	setRGB(&palette[18], 0, 255, 0);
	setRGB(&palette[19], 17, 251, 0);
}

PaletteRainbow::~PaletteRainbow()
{
	delete[] palette;
}

int PaletteRainbow::getSize()
{
	return 20;
}

CRGB* PaletteRainbow::getColor(int index)
{
	if (index<0) {index=0;}
	if (index>=20) {index=19;}
	return &palette[index];
}
