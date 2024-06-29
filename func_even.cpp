//wap to find the given number is even or odd using function

#include <iostream>
using namespace std;
void findEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is an even number\n", num);
    } else {
        printf("%d is an odd number\n", num);
    }
}

int main(){
  int num;
  cout << "Enter a number: ";
  cin >> num;

  findEvenOdd(num); // calling the function

  return 0;

return 0;
}