#include <iostream>

using namespace std;

int main() {

  const double p = 977; // is the water density (kg/m3)
  const double g = 9.8; // is the acceleration caused by gravity (9.81 m/s2).
  double Q;             // is the volume flow rate (m3/s).
  double H;             // is the distance (in m) water falls on its way to the generator

  cout << "Input the Head distance: ";
  cin >> H;

  cout << "Input the Water Flow Rate: ";
  cin >> Q;

  


}

double powerGen(double H, double Q)
{
  const double p = 977;
  const double g = 9.8; 

  double P = p * Q * H * g;

  return P;
}