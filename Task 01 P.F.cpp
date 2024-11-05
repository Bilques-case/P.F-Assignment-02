#include <iostream> 
using namespace std;
int main() { 
    //Declare the variables
  double price_A = 10.0;
  double price_B = 15.0;
  double price_C = 20.0;
   int quantity_A, quantity_B, quantity_C;
    // Display and input quantity for each product
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
    // Display the result
    cout<<"\nCost for selected products are\n";
    cout << "Product A: $" << total_A << endl;
    cout << "Product B: $" << total_B << endl;
    cout << "Product C: $" << total_C << endl;
    cout<<"Grand Total Amount; $"<<grandTotal<<endl;
    
    
return 0; 
} 