#include "Line.h"

Line::Line()
{
}

void Line::DrawSelf(olc::PixelGameEngine* engine)
{
	olc::vf2d startPos = pos;
	olc::vf2d endPos;
	endPos.x = pos.x;
	endPos.y = pos.y + 50;
	engine->DrawLine(startPos, endPos, colour);
}
