#pragma once
#include "MyGraphicsLib.h"
using namespace std;

extern const int SCREEN_WIDTH;
extern const int SCREEN_HEIGHT;
extern const float DEG;

class Bullet
{
public:
	Bullet(float x, float y, int angle);
	void Draw();
	void Update();
	float GetCoordX();
	float GetCoordY();
	~Bullet();
private:
	float x, y;
	int angle;
};



