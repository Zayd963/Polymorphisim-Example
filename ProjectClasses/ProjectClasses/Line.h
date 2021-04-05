#pragma once
#include "Shape.h"
class Line : public Shape
{
public:
	Line();
	void DrawSelf(olc::PixelGameEngine* engine) override;
};

