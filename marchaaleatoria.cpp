#include <iostream>
#include <random>
#include <stdlib.h>
#include <cmath>
int main(){
    for(i=0;i<1001,i++){
  int x;
  int y;
  float pi=3.141596;
    float raiz;
  srand48(10);
 x=2*pi;
 y=2*pi;
  raiz = sqrt(x*x, y*y);
    deltax= x/raiz;
    deltay=y/raiz;
        
    xx= suma(deltax);
        yy = suma(deltay);
        
        std::cout << xx << yy << std::endl;
    }
  return 0;
}

