#include "Dot.h"

Dot::Dot()
{
	size = 1;
}

void Dot::DrawSelf(olc::PixelGameEngine* engine)
{
	engine->FillCircle(pos, size, colour);
}
