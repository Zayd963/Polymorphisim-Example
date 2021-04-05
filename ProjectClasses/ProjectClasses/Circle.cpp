#include "Circle.h"

Circle::Circle()
{
	size = 7;
}

void Circle::DrawSelf(olc::PixelGameEngine* engine)
{
	engine->FillCircle(pos, size, colour);
}
