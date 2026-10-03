#include "extra-task-1.h"
#include <cassert>
#include <cmath>
#include <cfloat>
#include <iostream>

using std::cout; using std::endl; using std::cin;

int main() {
    assert(fabs(seconds_difference(3600, 1800) + 1800.0) < DBL_EPSILON);
    cout << "If assert passed you would see this." << endl;
    assert(fabs(hours_difference(3600, 1800) + 0.5) < DBL_EPSILON);
    cout << "If assert passed you would see this." << endl;
}