#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int age;
    float height;

    // รับค่าชื่อ
    cout << "Enter your name: ";
    getline(cin, name);  // ใช้ getline เพื่อรับข้อความทั้งประโยค

    // รับค่าอายุ
    cout << "Enter your age: ";
    cin >> age;

    // รับค่าความสูง
    cout << "Enter your height (cm): ";
    cin >> height;

    cout << endl; // เว้นบรรทัด

    // แสดงผลลัพธ์
    cout << "======= Student Profile =======" << endl;
    cout << "Name   : " << name << endl;
    cout << "Age    : " << age << endl;
    cout << "Height : " << height << " cm" << endl;
    cout << "================================" << endl;

    return 0;
}
