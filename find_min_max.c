#include "find_min_max.h"

#include <limits.h>

struct MinMax GetMinMax(int *array, unsigned int begin, unsigned int end) {
  struct MinMax mm;
  mm.min = array[begin];
  mm.max = array[begin++];

  // your code here
  for (int i = begin; i < end; ++i)
  {
      if (array[i] < mm.min) { mm.min = array[i]; }
      else if (array[i] > mm.max) { mm.max = array[i]; }
  }
  
  return mm;
}
