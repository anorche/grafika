#ifndef INCLUDE_MOVE_H_
#define INCLUDE_MOVE_H_

#include "model.h"


void moveObject(World* world);

void moveObjectForward(World* world);
void moveObjectBackward(World* world);
void moveObjectRight(World* world);
void moveObjectLeft(World* world);
void moveObjectRandom(World* world);

#endif /* INCLUDE_MOVE_H_ */
