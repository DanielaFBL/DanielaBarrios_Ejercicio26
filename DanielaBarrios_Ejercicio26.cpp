#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

void solve_equation_euler(float x_init, float x_end, float delta_x, float omega, float z, string filename);

int main(){
  float omega=0.1;
  solve_equation_euler(0.0, 4.0/omega, 0.01/omega, omega, "euler_001.dat");
    
  solve_equation_euler(0.0, 4.0/omega, 0.1/omega, omega, "euler_01.dat");
  
  solve_equation_euler(0.0, 4.0/omega, 1.0/omega, omega, "euler_1.dat");

  return 0;
}

void solve_equation_euler(float x_init, float x_end, float delta_x, float omega, float z, string filename){
  float x=x_init;
  float y=1.0;
  float z = 0.0
  ofstream outfile;
  outfile.open(filename);

  while(t<t_end){    
    outfile << x << " " << y << endl;
    y = y - delta_t * omega  * y;
    x = x + delta_x;
  }
  outfile.close();
}