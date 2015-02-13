/*
 * distance.cpp
 *
 *  Created on: Sep 6, 2012
 *      Author: Trushank
 */

#include "distance.h"
#include <iostream>

using namespace std;
int main()
{
    float velocity=0;
    float angle=0;
    float distanceM=0;
    float distanceF=0;
    cout<<"Enter initial velocity (m/s): ";
    cin>>velocity;
    cout<<"\nEnter elevation angle (degrees): ";
    cin>>angle;
    distanceM=calculate(angle,velocity);
    distanceF=distanceM*3.28084;
    
     cout<< "The projectile travelled "<<distanceM<<" meters or "<<distanceF<<" feet"<<endl;
    
     return 1;
 }
