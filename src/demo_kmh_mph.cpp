#include <cstdio>
#include "utils/unit_conversions.hpp"

using workshop5::utils::unit_conversions::kmhToMph;

int main()
{
  double kmh, mph = 0;
  double conversion = 1.60934;
    
  scanf("Please enter distance in kmh: %f\n", &kmh);
  
  mph = kmh/conversion;
  
  printf("kmh to mph: %f\n", mph);

  return 0;
}