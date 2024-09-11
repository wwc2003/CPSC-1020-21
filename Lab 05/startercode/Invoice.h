#ifndef INVOICE_H
#define INVOICE_H

using namespace std;

class Invoice
{
private:
  double price;
  double discount;
public:
  Invoice();
  double calculatePrice(double p);
  void printInvoice();
};

#endif

