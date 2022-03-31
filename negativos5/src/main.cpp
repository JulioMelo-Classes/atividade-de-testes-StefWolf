#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int number;
    int cont = 0;
    for(int i = 0; i < SIZE; i++){
      std::cin>>number;
      if(number < 0){
        cont = cont + 1;
      } 
    }
    std::cout<<cont;
    return 0;
}
