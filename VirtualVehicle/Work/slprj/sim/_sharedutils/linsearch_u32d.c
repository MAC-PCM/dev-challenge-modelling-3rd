#include "linsearch_u32d.h"
#include "rtwtypes.h"

uint32_T linsearch_u32d(real_T u, const real_T bp[], uint32_T startIndex)
{
  uint32_T bpIndex;
  for (bpIndex = startIndex; u < bp[bpIndex]; bpIndex--) {
  }

  while (u >= bp[bpIndex + 1U]) {
    bpIndex++;
  }

  return bpIndex;
}
