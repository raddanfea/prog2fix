#include <iostream>
#include <iomanip>
#include <cmath>

void kiir(double tomb[], int db);
double tavolsag(double PR[], double PRv[], int n);
void pagerank(double T[4][4]);


int main() {
  double L[4][4] = {
    {0.0,  0.0,      1.0/3.0,  0.0},
    {1.0,  1.0/2.0,  1.0/3.0,  1.0},
    {0.0,  1.0/2.0,  0.0,      0.0},
    {0.0,  0.0,      1.0/3.0,  0.0}
  };

  std::cout << std::endl << "Az oldalak PageRank értékei:" << std::endl;
  pagerank(L);

  std::cout << std::endl;
  
  return 0;
}


void kiir(double tomb[], int db) {
  for (int i = 0; i < db; ++i) {
    std::cout << std::fixed << std::setprecision(6) << tomb[i] << std::endl;
  }
}

double tavolsag(double PR[], double PRv[], int n) {
  double osszeg = 0;
  
  for (int i = 0; i < n; ++i)
    osszeg += (PRv[i] - PR[i]) * (PRv[i] - PR[i]);

  return std::sqrt(osszeg);
}

void pagerank(double T[4][4]) {
  double PR[4] = { 0.0, 0.0, 0.0, 0.0 };
  double PRv[4] = { 1.0/4.0, 1.0/4.0, 1.0/4.0, 1.0/4.0};

  while (true) {
    for (int i = 0; i < 4; ++i) {
      PR[i] = 0.0;
      for (int j = 0; j < 4; ++j) {
        PR[i] = PR[i] + T[i][j] * PRv[j];
      }
    }
    
    if (tavolsag(PR, PRv, 4) < 1e-10)
      break;
  
    for (int i = 0; i < 4; ++i) {
      PRv[i] = PR[i];
    }
  }

  kiir(PR, 4);
}