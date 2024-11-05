#include <iostream>
using namespace std;
int main() {
    //Declare Variable
  double price_A = 10.0;
  double price_B = 15.0;
  double price_C = 20.0;
    int quantity_A, quantity_B, quantity_C;
     //Display and input quantity for each product
    cout << "Enter the quantity for Product A: ";
    cin >> quantity_A;
    cout << "Enter the quantity for Product B: ";
    cin >> quantity_B;
    cout << "Enter the quantity for Product C: ";
    cin >> quantity_C;
     // Process
    double total_A = price_A * quantity_A;
    double total_B = price_B * quantity_B;
    double total_C = price_C * quantity_C;
    double grandTotal = total_A + total_B + total_C;
     cout << "\nGrand Total before discount: $" << grandTotal << endl;
     //Apply 10% discount (if else) if price greater them $200
     if(grandTotal>200){
      grandTotal*=0.9;
    } 
     //Display the discounted price
     cout<<"Grand Total after discount (if applicable): $"<<grandTotal<<"\n";

     //shipping on after discounted price,total price less then $150 then $15 add
     double shippingCost = 0.0;
    if (grandTotal < 150) {
        shippingCost = 15.0;
        grandTotal += shippingCost;
    }

    // Display shipping information
    if (shippingCost > 0) {
        cout << "\nShipping fee: $15.00\n";
    } else {
        cout << "\nFree Shipping\n";
    }

    // Display final total cost
    cout << "Final Total (including shipping if applicable): $" << grandTotal << endl;

return 0;
    }