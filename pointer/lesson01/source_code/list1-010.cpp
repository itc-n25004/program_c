#include <iostream>

using namespace std;

int main(void) {
  int nx = 100;
  int ny = 200;
  int *px = &nx;
  int *py = &ny;
  cout << "nxの値は" << &nx << " です\n";
  cout << "nxの値は" << &ny << " です\n";
  cout << "nxの値は" << &px << " です\n";
  cout << "nxの値は" << &py << " です\n";

  return (0);
}
