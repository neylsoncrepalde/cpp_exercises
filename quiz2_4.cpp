#include <iostream>
#include <math.h>
#include "constants.h"

using namespace myconstants;
using namespace std;

double calculateHeight(double height, int seconds) {
  double distance_fallen = (gravity * pow(seconds, 2)) / 2;
  double distance_ground = height - distance_fallen;
  return distance_ground;
}

int main() {
  cout << "Enter the initial height of a tower to throw a ball: ";
  double height;
  cin >> height;
  //Calculate

  for (int i = 0; i < 6; ++i) {
    double distance_ground = calculateHeight(height, i);
    if (distance_ground > 0)
      cout << "At " << i << " seconds, the ball is at height: " <<
        distance_ground << endl;
    else {
      cout << "At " << i << " seconds, the ball is on the ground." << endl;
      break;
        }
  }
  return 0;
}

