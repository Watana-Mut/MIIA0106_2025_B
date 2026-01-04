#include <iostream>
#include <string>
using namespace std;

int main() {

    string itemName;
    float price;
    int qty;
    float total;

    // รับชื่อสินค้า
    cout << "Enter item name: ";
    getline(cin, itemName);

    // รับราคา
    cout << "Enter price: ";
    cin >> price;

    // รับจำนวน
    cout << "Enter quantity: ";
    cin >> qty;

    // คำนวณราคารวม
    total = price * qty;

    // แสดงใบเสร็จ
    cout << endl;
    cout << "------- Receipt -------" << endl;
    cout << "Item : " << itemName << endl;
    cout << "Price: " << price << endl;
    cout << "Qty  : " << qty << endl;
    cout << "Total: " << total << endl;
    cout << "------------------------" << endl;

    return 0;
}
