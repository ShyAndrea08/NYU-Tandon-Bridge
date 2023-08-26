#include <iostream>
using namespace std;

int main()
{
    double price_item1, price_item2, tax_rate, base_price, discount_price, total_price;
    char member_status;

    cout<<"Enter the price of first item: "<<endl;   // User will input the price of the first item
    cin>>price_item1;

    cout<<"Enter price of second item: "<<endl;      // User will input the price of the second item
    cin>>price_item2;

    base_price = (price_item1 + price_item2);     // The total price of item 1 and item 2 before discounts are applied

    if (price_item1 >= price_item2){
        price_item2 /= 2.0;
    }
    else if (price_item2 > price_item1){
            price_item1 /= 2.0;
    }

    discount_price = price_item1 + price_item2;    // After discount is applied, there will be a new price

    cout<<"Does customer have a club card? (Y/N): "<<endl;   // If the user input is Y/y, then the discount will be applied. If not, not discount will be applied
    cin>>member_status;

    if(member_status == 89 || member_status == 121){
      discount_price = discount_price - (discount_price * .10);
    }

    cout<<"Enter tax rate, e.g 5.5 for 5.55% tax: "<<endl;  // User will input tax rate
    cin>>tax_rate;
    tax_rate /= 100;

    total_price = discount_price + (discount_price * tax_rate);

    cout<<"Base price: "<<endl;
    cin>>base_price;
    base_price /= 100;

    cout<<"Price after discounts: "<<discount_price<<endl;  // Price after discounts will be shown after execution

    cout<<"Total price: "<<total_price<<endl;    // Total price will be shown after execution


    return 0;
}
