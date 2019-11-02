#include <cstdio>
#include "utils/unit_conversions.hpp"

using workshop5::utils::unit_conversions::cmToInches;

int main()
{
  double cm = 30;
  printf("%f cm = %f inches\n", cm, cmToInches(cm));

  return 0;
}
