#include <iostream>
using namespace std;
int main() {
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

    // Calculate total cost for each product and the initial grand total
    double totalA = price_A * quantity_A;
    double totalB = price_B * quantity_B;
    double totalC = price_C * quantity_C;
    double grandTotal = totalA + totalB + totalC;

    // Display initial grand total
    cout << "\nInitial Total Cost: $" << grandTotal << endl;

    // Select Payment method 
    int paymentMethod;
    double transactionFee = 0.0;
    cout << "\nSelect a payment method:\n";
    cout << "1. Credit Card (2% transaction fee)\n";
    cout << "2. PayPal (3% transaction fee)\n";
    cout << "3. Cash (No fee)\n";
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> paymentMethod;

    // Apply transaction
    if (paymentMethod == 1) {
        transactionFee = grandTotal * 0.02;
        cout << "Credit Card selected: 2% transaction fee applied.\n";
    } else if (paymentMethod == 2) {
        transactionFee = grandTotal * 0.03;
        cout << "PayPal selected: 3% transaction fee applied.\n";
    } else if (paymentMethod == 3) {
        transactionFee = 0.0;
        cout << "Cash selected: No transaction fee.\n";
    } else {
        cout << "Invalid choice. No transaction fee applied.\n";
    }

    // Add transaction fee to grand total
    grandTotal += transactionFee;

    // Display final total including transaction fee
    cout << "Final Total (including transaction fee if applicable): $" << grandTotal << endl;
    cout << "Transaction Fee: $" << transactionFee << endl;  

 return 0;
}
