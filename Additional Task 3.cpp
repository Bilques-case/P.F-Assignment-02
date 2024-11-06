#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables for product prices and quantities
    double price_A = 10.0;
    double price_B = 15.0;
    double price_C = 20.0;
    int quantity_A, quantity_B, quantity_C;

    // Display and input quantity for each product
    cout << "Enter the quantity for Product A ($10): ";
    cin >> quantity_A;
    cout << "Enter the quantity for Product B ($15): ";
    cin >> quantity_B;
    cout << "Enter the quantity for Product C ($20): ";
    cin >> quantity_C;

    // Calculate total cost for each product and the grand total
    double total_A = price_A * quantity_A;
    double total_B = price_B * quantity_B;
    double total_C = price_C * quantity_C;
    double grandTotal = total_A + total_B + total_C;

    // Display grand total before discount
    cout << "\nGrand Total before discount: $" << grandTotal << endl;

    // Apply a 10% discount if the grand total is greater than $200 using a ternary operator
    grandTotal = (grandTotal > 200) ? (grandTotal * 0.9) : grandTotal;

    // Display the grand total after discount (if any)
    cout << "Grand Total after discount (if applicable): $" << grandTotal << endl;

    // Coupon code section
    string couponCode;
    double additionalDiscount = 0.0;
    cout << "\nEnter a Coupon Code for additional discount: ";
    cin >> couponCode;

    // Apply additional discount using the coupon code
    if (couponCode == "SAVE10") {
        additionalDiscount = grandTotal * 0.1;
        grandTotal -= additionalDiscount;
        cout << "Coupon code applied. Additional discount: $" << additionalDiscount << endl;
    } else {
        cout << "Invalid code. No additional discount applied.\n";
    }

    // Display final total after any discounts
    cout << "Final Total after all discounts: $" << grandTotal << endl;

    return 0;
}
