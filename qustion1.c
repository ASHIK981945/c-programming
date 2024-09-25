#include <stdio.h>
// #include <math.h>
#define Sales_Tax_Rate 10;
int main(){
     float ItemPrice =100.0;
     int QuantityPurchased=3;
     int SubTotal=50;

     float SubTotal = ItemPrice * QuantityPurchased;
     float TolatSaleTax = SubTotal * Sales_Tax_Rate;
     float TolatPrice = SubTotal + TolatSaleTax;

     printf("subtotal %.2f\n", SubTotal);
     printf("tolatsaletax %.2f\n",TolatSaleTax);
     printf("tolatprice %.2f\n",TolatPrice);

     return 0;
}