#include <iostream>
#include<conio.h>
using namespace std;
int main() {
int n, num, d, rev = 0;
     cout << "Enter a positive number: ";
     cin >> num;
     n = num;
     do
     {
         d= num % 10;
         rev = (rev * 10) + d;
         num = num / 10;
     } while (num != 0);
     if (n == rev)
     {
         cout << " The number is a palindrome";
     }
     else
     {
         cout << " The number is not a palindrome";
}
	return 0;
  getch();
}
