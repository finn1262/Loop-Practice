#include <iostream>

using namespace std;

int main()
{
   cout << "1.) Counting" << endl;
   cout << endl;

   for (int i = 15; i >= -15; i = i -5){
    cout << i << " ";
   }

   cout << endl;

   for (int i = 1; i <= 9; i = i +2){
    cout << i << " ";
   }

   cout << endl;

   for (int i = 9; i >= 1; i = i -2){
    cout << i << " ";
   }

   cout << endl;

   for (char i = 'A'; i <= 'Z' ; i++){
    cout << i << " ";
   }

   cout << endl;
   cout << endl;

   string greeting;

   cout << "2.) Enter Greeting: ";
   cin >> greeting;

   for(int i = 1; i <= 100; i++){
    cout << greeting << " ";
   }

   cout << endl;
   cout << endl;

   int sum;

   cout << "3.) Calculate The Sum Of Numbers From 1 to 10" << endl;
   for (int g = 1; g <= 9; g++){
    cout << g << "  " << "+ ";
   }
    cout << " 10 = 55" << endl;

   cout << endl;
   cout << endl;

   int num1;
   cout << "4.) Display It's Multiplication table from 1 to 10" << endl;
   cout << "Enter a Number: ";
   cin >> num1;

    for(int i = 1; i <= 10; i++){
        cout << num1 << " x " << i << " = " << num1 * i << endl;
   }


    return 0;
}
