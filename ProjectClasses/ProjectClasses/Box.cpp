#include "Box.h"

Box::Box()
{
	size = { 7, 7 };
}

void Box::DrawSelf(olc::PixelGameEngine* engine)
{
	engine->FillRect(pos, size, colour);
}
