#include "DivisionSales.h"
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    vector<DivisionSales> divisions;
    
    for (int i = 0; i < 4; i++) {
        double q1, q2, q3, q4;
        cin >> q1 >> q2 >> q3 >> q4;
        divisions.emplace_back(q1, q2, q3, q4);
    }

    cout << fixed << setprecision(2);
    for (int i = 0; i < 4; i++) {
        cout << "Division " << i + 1 << endl;
        for (int j = 0; j < 4; j++) {
            cout << "Quarter " << j + 1 << " : $ " << divisions[i].reportQuarterSales(j) / 1.0 << endl;
        }
    }

    int corporationTotal = 0;
    for (const DivisionSales& division : divisions) {
        corporationTotal += division.reportTotalSales();
    }

    cout << "Total Corporate Sales: $ " << corporationTotal / 4.0 << endl;

    return 0;
}
