#include <iostream>
using namespace std;
int main(){

const double RATE2 = 2.10;
const double RATE6 = 3.20;
const double RATE10 = 4.70;
const double RATE20 = 5.80;
double weight, distance, dRate, price;

  cout << "Enter the package weight and distance\n";
  cin >> weight >> distance;
  if ((weight<0)&&(weight > 20))
  {
    cout <<"The package weight must be a positive number and less than 20.\n";
  exit (0);

  }
if (weight < 2)
  dRate = RATE2;
else if (weight<6)
  dRate = RATE6;
else if (weight<10)
  dRate = RATE10;
else if (weight<=20)
  dRate = RATE20;

else {
cout <<"The package weight must be less than 20\n";
  exit(0);
}

if (distance < 500)
  price = dRate;
    else
    price = (distance/500.00)*dRate;
    cout <<"The shipment price for the package is "<< price<< endl;
  }