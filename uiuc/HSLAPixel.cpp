/**
 * @file HSLAPixel.cpp
 * Implementation of the HSLAPixel class for use in with the PNG library.
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#include <cmath>
#include <iostream>
#include "HSLAPixel.h"
using namespace std;

namespace uiuc {
    HSLAPixel::HSLAPixel(){
        h = 0;
        s = 0;
        l = 0;
        a = 0;
    }

    HSLAPixel::HSLAPixel(double x, double y, double c, double d){
        h = x;
        s = y;
        l = c;
        a = d;
    }
}
