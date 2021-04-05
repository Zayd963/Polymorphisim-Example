#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"
#include "Shape.h"
#include "Line.h"
#include"Dot.h"
#include"Circle.h"
#include <vector>
#include "Box.h"
// Override base class with your custom functionality
class Example : public olc::PixelGameEngine
{
	Shape* newShape;
	std::vector<Shape*> vecShapes;
public:
	Example()
	{
		// Name you application
		sAppName = "Example";
	}

public:
	bool OnUserCreate() override
	{
		// Called once at the start, so create things here
		Shape* shape;
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		Clear(olc::BLACK);
		olc::vf2d mousePos = { (float)GetMouseX(), (float)GetMouseY() };

		if (GetKey(olc::Q).bPressed)
		{
			newShape = new Line();
			newShape->pos = mousePos;
			vecShapes.push_back(newShape);
		}

		if (GetKey(olc::W).bPressed)
		{
			newShape = new Dot();
			newShape->pos = mousePos;
			vecShapes.push_back(newShape);
		}

		if (GetKey(olc::E).bPressed)
		{
			newShape = new Circle();
			newShape->pos = mousePos;
			vecShapes.push_back(newShape);
		}

		if (GetKey(olc::R).bPressed)
		{
			newShape = new Box();
			newShape->pos = mousePos;
			vecShapes.push_back(newShape);
		}

		if (vecShapes.size() != 0)
		{
			for (auto& s : vecShapes)
			{
				s->DrawSelf(this);
			}
		}
		return true;
	}
};

int main()
{
	Example demo;
	if (demo.Construct(256, 240, 4, 4))
		demo.Start();
	return 0;
}