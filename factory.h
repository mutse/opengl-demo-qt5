#ifndef FACTORY_H
#define FACTORY_H

#include "solid.h"

class SolidFactory
{
public:
    virtual Solid* CreateSolid() = 0;
};

class CubeFactory: public SolidFactory
{
public:
    Solid* CreateSolid();
};

class TetrahFactory: public SolidFactory
{
public:
    Solid* CreateSolid();
};

#endif // FACTORY_H
