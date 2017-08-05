#include <cmath>
#include <iostream>

using namespace std;
int main(void){
  for (int i=500; i<=1400; i++){
    int j = 2;
    while(i%j != 0 && j<i){
      j++;
      if (j == i){
	cout<< i <<endl;
	break;
      }
    }
  }

}
