#include <iostream>
using namespace std;

int main(void)
{
  int month, day;
  cin >> month >> day;
  if (month == 2) {
    if (day == 18) {
      cout << "Special";
    }
    else if (day > 18) {
      cout << "After";
    }
    else cout << "Before";
  }

  else if (month > 2) {
    cout << "After";
  }

  else cout << "Before";

  return 0;
}
