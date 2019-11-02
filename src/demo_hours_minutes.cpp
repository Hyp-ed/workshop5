#include <cstdio>
#include "utils/unit_conversions.hpp"

using workshop5::utils::unit_conversions::hoursToMinutes;

int main()
{
  double h = 1.5;
  printf("%f h = %f min\n", h, hoursToMinutes(h));
}
