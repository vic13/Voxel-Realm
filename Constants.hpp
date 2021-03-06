#pragma once

#include <cmath>      // fmod


#ifndef M_PI  // M_PI windows definition
namespace
{
	const double M_PI = std::acos(-1.0);
}
#endif


#define SCX 100
#define SCY 2
#define SCZ 100

#define CX 16
#define CY 16
#define CZ 16

#define MAPSIZE 40

#define MAPSEED 5000


static const glm::vec3 xDirection = glm::vec3(1, 0, 0);
static const glm::vec3 yDirection = glm::vec3(0, 1, 0);

