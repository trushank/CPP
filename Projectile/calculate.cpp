/*
 * Calculate.cpp
 *
 *  Created on: Sep 6, 2012
 *      Author: Trushank
 *      Reference for vector kinematics formula: 
 *      http://www.dallassd.com/our%20schools/high%20school/chemsite/apphysics/apnotes_knight/pdf/4kinetmatics2d.pdf
 */

#include "distance.h"
#include <iostream>
#include <math.h>
using namespace std;

float calculate(float angle, float velocity){
	float distance= (sin((angle*2)*3.14/180)*pow(velocity,2))/9.8;
         return (distance);
         
}
