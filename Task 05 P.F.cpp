#include <iostream>
using namespace std;
int main() {
      //Fixed prices for each product
  double price_A = 10.0;
  double price_B = 15.0;
  double price_C = 20.0;
    int quantity_A, quantity_B, quantity_C;
     // Display quantity for each product
    cout << "Enter the quantity for Product A: ";
    cin >> quantity_A;
    cout << "Enter the quantity for Product B: ";
    cin >> quantity_B;
    cout << "Enter the quantity for Product C: ";
    cin >> quantity_C;
     // Calculate the total cost for each product
    double total_A = price_A * quantity_A;
    double total_B = price_B * quantity_B;
    double total_C = price_C * quantity_C;
    // Calculate the grand total 
     double grandTotal = total_A + total_B + total_C;
     //intialization
     cout << "\nInitial Total Cost: $" << grandTotal << endl;
          //Apply10% discount
    if(grandTotal>200){
      grandTotal*=0.9;
    }
     //Display the discounted price
         cout<<"Grand Total after (10%) discount:New Total = $"<<grandTotal<<"\n";
     //If total after discount is less than $150 then add $15 shipping
     double shippingcost;
     if(grandTotal<150){
        shippingcost =15.0;
         grandTotal +=shippingcost;
     }else{
      cout<<"Free Shipping\n";
     }
   
    //If the grand total after shipping is more than $300,then 50 loyalty points
      int loyaltyPoints;
    if (grandTotal > 300) {
        loyaltyPoints = 50;
    } else {
        loyaltyPoints = 20;
    }
    cout << "\n--- Final Summary ---\n";
    cout << "Final Total (including shipping if applicable): $" << grandTotal << endl;
    cout << "Shipping Cost: $" << shippingcost << endl;
    cout << "Loyalty Points Earned: " << loyaltyPoints << " points\n";

    return 0;
    }
    