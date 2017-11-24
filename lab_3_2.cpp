#include <iostream>
#include <limits>

using namespace std;

int main() {
  // เขียนโปรแกรมเพิ่ม เพื่อหาขนาดตัวแปรที่กำหนด
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of short signed int : " << sizeof(short signed int) << endl;
   cout << "Size of short unsigned int : " << sizeof(short unsigned int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;

   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of signed char : " << sizeof(char) << endl;
   cout << "Size of unsigned char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(char) << endl;
   cout << "Size of signed int : " << sizeof(char) << endl;
   cout << "Size of unsigned int : " << sizeof(char) << endl;
   cout << "Size of short int : " << sizeof(char) << endl;
   cout << "Size of signed short int : " << sizeof(char) << endl;
   cout << "Size of unsigned short int : " << sizeof(char) << endl;
   cout << "Size of long int : " << sizeof(char) << endl;
   cout << "Size of signed long int : " << sizeof(char) << endl;
   cout << "Size of unsigned long int : " << sizeof(char) << endl;
   cout << "Size of float : " << sizeof(char) << endl;
   cout << "Size of double : " << sizeof(char) << endl;
   cout << "Size of long double : " << sizeof(char) << endl;
   cout << "Size of wchar_t : " << sizeof(char) << endl;
   cout << "Size of bool : " << sizeof(char) << endl;

   // เขียนโปรแกรมเพิ่มเพื่อหาช่วงของค่าที่เก็บได้
   cout << "Min of char : " << numeric_limits<char>::min() << endl;
   cout << "Max of char : " << numeric_limits<char>::max() << endl;

   cout << "Min of signed char : " << numeric_limits<char>::min() << endl;
   cout << "Max of signed char : " << numeric_limits<char>::max() << endl;
   cout << "Min of unsigned char : " << numeric_limits<char>::min() << endl;
   cout << "Max of unsigned char : " << numeric_limits<char>::max() << endl;
   cout << "Min of int : " << numeric_limits<char>::min() << endl;
   cout << "Max of int : " << numeric_limits<char>::max() << endl;
   cout << "Min of signed int : " << numeric_limits<char>::min() << endl;
   cout << "Max of signed int : " << numeric_limits<char>::max() << endl;
   cout << "Min of unsigned int : " << numeric_limits<char>::min() << endl;
   cout << "Max of unsigned int : " << numeric_limits<char>::max() << endl;
   cout << "Min of short int : " << numeric_limits<char>::min() << endl;
   cout << "Max of short int : " << numeric_limits<char>::max() << endl;
   cout << "Min of signed short int : " << numeric_limits<char>::min() << endl;
   cout << "Max of signed short int : " << numeric_limits<char>::max() << endl;
   cout << "Min of unsigned short int : " << numeric_limits<char>::min() << endl;
   cout << "Max of unsigned short int : " << numeric_limits<char>::max() << endl;
   cout << "Min of long int : " << numeric_limits<char>::min() << endl;
   cout << "Max of long int : " << numeric_limits<char>::max() << endl;
   cout << "Min of signed long int : " << numeric_limits<char>::min() << endl;
   cout << "Max of signed long int : " << numeric_limits<char>::max() << endl;
   cout << "Min of unsigned long int : " << numeric_limits<char>::min() << endl;
   cout << "Max of unsigned long int : " << numeric_limits<char>::max() << endl;
   cout << "Min of float : " << numeric_limits<char>::min() << endl;
   cout << "Max of float : " << numeric_limits<char>::max() << endl;
   cout << "Min of double : " << numeric_limits<char>::min() << endl;
   cout << "Max of double : " << numeric_limits<char>::max() << endl;
   cout << "Min of long double : " << numeric_limits<char>::min() << endl;
   cout << "Max of long double : " << numeric_limits<char>::max() << endl;
   cout << "Min of wchar_t : " << numeric_limits<char>::min() << endl;
   cout << "Max of wchar_t : " << numeric_limits<char>::max() << endl;
   cout << "Min of bool : " << numeric_limits<char>::min() << endl;
   cout << "Max of bool : " << numeric_limits<char>::max() << endl;



   cout << "Min of short int : " << numeric_limits<short int>::min() << endl;
   cout << "Max of short int : " << numeric_limits<short int>::max() << endl;
  return 0;
}
