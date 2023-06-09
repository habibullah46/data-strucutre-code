#include<iostream>
using namespace std;

int main() {
   int choice, base, height;
   float area;

   cout << "Enter base and height of the triangle: ";
   cin >> base >> height;

   cout << "Choose a method to find the area of the triangle:\n";
   cout << "1. Using formula 1/2 * base * height\n";
   cout << "2. Using formula base * height / 2\n";
   cout << "3. Using formula sqrt(s * (s - a) * (s - b) * (s - c)), where s = (a + b + c) / 2\n";
   cin >> choice;

   switch (choice)
    {
      case 1:
         area = 0.5 * base * height;
         break;
      case 2:
         area = base * height / 2.0;
         break;
      case 3:
         float a, b, c, s;
         cout << "Enter the length of three sides of the triangle: ";
         cin >> a >> b >> c;
         s = (a + b + c) / 2.0;
         area = (s * (s - a) * (s - b) * (s - c));
         break;
      default:
         cout << "Invalid choice. Please choose 1, 2, or 3.";
         return 0;
   }

   cout << "Area of the triangle is: " << area;

}
