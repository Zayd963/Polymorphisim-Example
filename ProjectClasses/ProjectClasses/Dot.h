#pragma once
#include "Shape.h"
class Dot : public Shape
{
public:
	Dot();
	int size;
	void DrawSelf(olc::PixelGameEngine* engine) override;

};

