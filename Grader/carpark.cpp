#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int a, b, c, d; cin >> a >> b >> c >> d;

  int minutes = (c*60+d) - (a*60+b);

  if(minutes<=15) {
    cout << 0;
  }else if(minutes<=3*60) {
    cout << ceil(minutes/60.0)*10;
  }else if(minutes<=6*60){
    cout << 3*10 + ceil((minutes-180)/60.0)*20;
  }else {
    cout << ceil(minutes/60.0/24.0)*200;
  }

  return 0;
}