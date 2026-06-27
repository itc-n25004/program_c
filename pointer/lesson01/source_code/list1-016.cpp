#include <iostream>

using namespace std;

void swap(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}

int main(void) {

  int a, b;
  cout << "２つの整数を入力してください\n";
  cout << "整数A:";
  cin >> a;
  cout << "整数B:";
  cin >> b;

  swap(a, b);

  cout << "整数AとBを交換しました\n";
  cout << "整数A:" << a << "です\n";
  cout << "整数B:" << b << "です\n";
}
