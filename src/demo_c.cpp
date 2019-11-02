#include "utils/unit_conversions.hpp"
#include <cstdio>

using workshop5::utils::unit_conversions::speedOfLightToMPS;

int main();

int main()
{
  double speed_in_c = 3.4;
  double speed_in_mps = speedOfLightToMPS(speed_in_c);

  printf("%fc = %fm/s\n", speed_in_c, speed_in_mps);
  return 0;
}