#pragma once
#include <vector>
#include "u.h"

std::vector<double> Euler(int n, float h) {
	double y1 = 1; //v_0 после замены в системе
	double y2 = 0; //x_0
	int steps = 0;

	for (double t = 0; t < n; t += h) {
		y1 += h * f(t);
		steps++;

		y2 += 10 * y1 * h;

		fout << t << " " << y1 << " " << y2 << "\n";
	}

	return { y1, y2 };
}
