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

    assert(fabs(to_float_hours(0, 15, 0) - 0.25) < DBL_EPSILON);
    assert(fabs(to_float_hours(2, 45, 9) - 2.7525) < DBL_EPSILON);
    assert(fabs(to_float_hours(1, 0, 36) - 1.01) < DBL_EPSILON);
    cout << "If assert passed you would see this." << endl;
}