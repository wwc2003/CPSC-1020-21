#include "DivisionSales.h"
#include <vector>

int DivisionSales::totalSales = 0;

DivisionSales::DivisionSales(int q1, int q2, int q3, int q4) {
  quarterlySales = std::vector<int>{q1, q2, q3, q4};
  totalSales += q1 + q2 + q3 + q4;
}

int DivisionSales::reportQuarterSales(int q) {
  if (q >= 0 && q < quarterlySales.size()) {
    return quarterlySales[q];
  } else {
    return -1;
  }
}

int DivisionSales::reportTotalSales() {
  return totalSales;
}
