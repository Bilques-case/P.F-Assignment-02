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
    //Before discount
     cout << "\nGrand Total before discount: $" << grandTotal << endl;
     //Apply 10% discount using ternary operaters 
     grandTotal=(grandTotal>200)?(grandTotal*0.9):grandTotal;
     //Display the discounted price
     cout<<"Grand Total after discount (if applicable): $"<<grandTotal<<"\n";

    return 0;
}
