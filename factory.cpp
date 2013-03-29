#include "factory.h"
#include "cube.h"
#include "tetrah.h"

Solid* CubeFactory::CreateSolid()
{
    return new Cube;
}

Solid* TetrahFactory::CreateSolid()
{
    return new Tetrahedron;
}
