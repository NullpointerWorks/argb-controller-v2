#include "PaletteSoftRainbow.hpp"

inline void setRGB(CRGB* rgb, int r, int g, int b)
{
	rgb->setRGB(r,g,b);
}

PaletteSoftRainbow::PaletteSoftRainbow()
{
	palette = new CRGB[20];
	setRGB(&palette[0], 127.0, 238.0, 63.0);
	setRGB(&palette[1], 167.0, 213.0, 63.0);
	setRGB(&palette[2], 202.0, 179.0, 63.0);
	setRGB(&palette[3], 231.0, 140.0, 63.0);
	setRGB(&palette[4], 249.0, 100.0, 63.0);
	setRGB(&palette[5], 255.0, 63.0, 63.0);
	setRGB(&palette[6], 249.0, 63.0, 100.0);
	setRGB(&palette[7], 231.0, 63.0, 140.0);
	setRGB(&palette[8], 202.0, 63.0, 179.0);
	setRGB(&palette[9], 167.0, 63.0, 213.0);
	setRGB(&palette[10], 127.0, 63.0, 238.0);
	setRGB(&palette[11], 87.0, 63.0, 252.0);
	setRGB(&palette[12], 63.0, 75.0, 254.0);
	setRGB(&palette[13], 63.0, 114.0, 244.0);
	setRGB(&palette[14], 63.0, 154.0, 222.0);
	setRGB(&palette[15], 63.0, 191.0, 191.0);
	setRGB(&palette[16], 63.0, 222.0, 154.0);
	setRGB(&palette[17], 63.0, 244.0, 114.0);
	setRGB(&palette[18], 63.0, 254.0, 75.0);
	setRGB(&palette[19], 87.0, 252.0, 63.0);
}

PaletteSoftRainbow::~PaletteSoftRainbow()
{
	delete[] palette;
}

CRGB* PaletteSoftRainbow::getColor(int index)
{
	if (index<0) {index=0;}
	if (index>=20) {index=19;}
	return &palette[index];
}
