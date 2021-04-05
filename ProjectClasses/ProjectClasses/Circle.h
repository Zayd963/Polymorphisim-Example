#pragma once
#include "Shape.h"
class Circle : public Shape
{
public:
	Circle();
	int size;
	void DrawSelf(olc::PixelGameEngine* engine);

};

