#pragma once
#include "Shape.h"
class Box : public Shape
{
public:
	Box();
	olc::vi2d size;
	void DrawSelf(olc::PixelGameEngine* engine) override;
};

