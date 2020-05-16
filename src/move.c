#include <math.h>
#include "model.h"
#include "callbacks.h"
#include "move.h"



void moveObjectForward(World* world) {
				if(world->object1.position.z < 1500 ){
					world->object1.position.z = world->object1.position.z + 10;
				}
}

void moveObjectBackward(World* world) {
				if(world->object1.position.z > -1500 ){
					world->object1.position.z = world->object1.position.z - 10;
				}
}

void moveObjectLeft(World* world) {
				if(world->object1.position.x < 1500 ){
					world->object1.position.x = world->object1.position.x + 10;
				}
}

void moveObjectRight(World* world) {
				if(world->object1.position.x > -1500 ){
					world->object1.position.x = world->object1.position.x - 10;
					
				}
}

void moveObject(World* world) {

				if (abs((int)(camera.position.x - world->object2.position.x)) < 250 && abs((int)(camera.position.z - world->object2.position.z)) < 250 && camera.position.y < 250)
				{
					world->object2.position.x = camera.position.x;
					world->object2.position.z = camera.position.z;

					world->object2.material_ambient[0] = camera.position.x / 200;
					world->object2.material_ambient[1] = camera.position.y / 200;
					world->object2.material_ambient[2] = camera.position.z / 200;
				}

		
	
}
