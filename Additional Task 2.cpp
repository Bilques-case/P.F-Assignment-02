#include <iostream>
using namespace std;
int main(){
  //Declare Variable
  double price_A = 10.0;
  double price_B = 15.0;
  double price_C = 20.0;
    int quantity_A, quantity_B, quantity_C;
     //Display and input quantity for each product
    cout << "Enter the quantity for Product A ($10): ";
    cin >> quantity_A;
    cout << "Enter the quantity for Product B ($15): ";
    cin >> quantity_B;
    cout << "Enter the quantity for Product C ($20): ";
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
      // Select Customer Type
    int customerType;
    double DiscountFee = 0.0;
    cout << "\nSelect a customer type:\n";
    cout << "1. Regular\n";
    cout << "2. VIP\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> customerType;
     //Apply the additional discount using if else
    cout<<"\nAdditional discount Added:\n";
     //grandTotal=(grandTotal>200)?(grandTotal*0.9):grandTotal;
     if(customerType==1){
        DiscountFee=grandTotal;
        cout<<"Regular No Additional Discount added (if applicable).\n";
     }else if(customerType==2){
        DiscountFee=grandTotal*0.05;
        cout<<"VIP Additional Discount added = $"<<DiscountFee;
     } else {
        cout << "Invalid choice. No Discount applied. \n";
    }

    return 0;
}
