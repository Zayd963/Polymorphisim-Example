#include "Rectangle.h"

Rectangle::Rectangle()
{
	size = { 7, 7 };
}

void Rectangle::DrawSelf(olc::PixelGameEngine* engine)
{
	engine->FillRect(pos, size, colour);
}
