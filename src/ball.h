#pragma once
#include <stdbool.h>
#include <stdint.h>

#include <SDL.h>
#include <SDL2_gfxPrimitives.h>

#include "global.h"
#include "random.h"
#include "pad.h"

const int maxVerticalSpeed;

enum {
	LEFT_PAD,
	RIGHT_PAD
};

typedef struct Ball {
	//the coordinates of the top left corner of the ball
	int32_t x;
	int32_t y;
	int32_t radius;
	Color color;
	int32_t horizontalSpeed;
	int32_t verticalSpeed;
} Ball;

Ball ball;

typedef struct Point {
	int x;
	int y;
} Point;

void initBall();
Point getClosestPointOfBall(Ball, Point);
Point getClosestPointOfPad(int);
void detectBallCollision();
void detectBallMaxSpeed();
void updateBall();
void renderBall();