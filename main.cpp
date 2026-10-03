#include "extra-task-1.h"
#include <cassert>
#include <cmath>
#include <cfloat>

int main() {
    assert(fabs(seconds_difference(3600, 1800)) - 1800.0 < DBL_EPSILON);
}