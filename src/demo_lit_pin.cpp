#include <cstdio>
#include <iostream>
#include "utils/unit_conversions.hpp"

using workshop5::utils::unit_conversions::litresToPints;

int main()
{
  double l = 1.5;
  printf("%f l = %f pint \n", l, litresToPints(l));
}