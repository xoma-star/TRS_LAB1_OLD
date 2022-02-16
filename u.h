#pragma once
#include <math.h>


double f(double x) {
	return -x / (16.7 * cos(x * x) * cos(x * x));
}