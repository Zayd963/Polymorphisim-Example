#pragma once
#include "olcPixelGameEngine.h"
class Shape
{
public:
	olc::vf2d pos;
	olc::Pixel colour = olc::WHITE;
	virtual void DrawSelf(olc::PixelGameEngine* engine) = 0;
};

