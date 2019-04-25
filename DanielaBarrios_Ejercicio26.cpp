#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <cmath>

using namespace std;


void solve_equation_euler(float t_init, float t_end, float delta_t, float omega, string filename);
void solve_equation_rk4(float t_init, float t_end, float delta_t, float omega, string filename);
void solve_equation_leapfrog(float t_init, float t_end, float delta_t, float omega, string filename);

float dzdt(float t, float y, float z, float omega);
float dydt(float t, float y, float z, float omega);

int main(){
  float omega=1.0;
  solve_equation_euler(0.0, 4.0/omega, 0.01/omega, omega, "euler.dat");
  solve_equation_rk4(0.0, 10000.0, omega/2, omega, "rk4.dat");
  solve_equation_leapfrog(0.0, 10000.0, omega/2, omega, "leapfrog.dat");
  return 0;
}

void solve_equation_euler(float t_init, float t_end, float delta_t, float omega, float z, string filename){
  float t = t_init;
  float y = 1.0;
  float z = 0.0;
  float z_o = 0.0;
  ofstream outfile;
  outfile.open(filename);

  while(t<t_end){    
    outfile << t << " " << y << endl;
    z = z - delta_t * omega *omega * y;
    y = y + delta_t * z_o;
    t = t + delta_t;
    z_o = z ;
    
  }
  outfile.close();
}

void solve_equation_runge_kutta(float t_init, float t_end, float delta_t, float omega, float z, string filename){
  
  float t = t_init;
  float y = 1.0;
  float z = 0.0;
  float z_o = 0.0;
  float a = -omega * omega;
  ofstream outfile;
  outfile.open(filename);

  f_0 = 
  f_1 = 
  f_2 = 
  f_3 = 
  f = 
    
}


void solve_equation_Leap_Froge(float x_init, float x_end, float delta_x, float omega, float z, string filename){
  float t = t_init;
  float y = 1.0;
  float z = 0.0;
  float z_o = 0.0;
  ofstream outfile;
  outfile.open(filename);

  while(t < t_end){    
    outfile << t << " " << y << endl;
    z_n = z - delta_t/2 * omega *omega * y;
    y = y + delta_t * z;
      
    t = t + delta_t;
    z_o = z;
    
  }
  outfile.close();    
    
}
    
