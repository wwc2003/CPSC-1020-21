#ifndef DIVISIONSALES_H
#define DIVISIONSALES_H

#include <vector>

class DivisionSales {
private:
  std::vector<int> quarterlySales;
  static int totalSales;

public:
  DivisionSales(int q1, int q2, int q3, int q4);
  int reportQuarterSales(int q);
  static int reportTotalSales();
};

#endif
