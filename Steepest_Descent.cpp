#include <bits/stdc++.h>

using f32 = float;
// this is the eq using single variable and any number of coefficients
struct Eq {
  std::vector<double> coeffs;
  Eq() : coeffs(){}
  Eq(std::vector<double> arr) : coeffs(arr){}
};
// eq using two variables
struct Quad_eq{
  Eq x,y;
  Quad_eq(std::vector<double> x_coeffs,std::vector<double> y_coeffs): x(x_coeffs),y(y_coeffs){}
};
// single eq ka differentiation
void differentiate(Eq& nd){
  Eq* differentiated_eq = new Eq();
  std::vector<double> to_work = nd.coeffs;

  for(int idx=1;idx<(int)to_work.size();idx++){to_work[idx-1] = (idx)*to_work[idx];to_work[idx] = 0;}
  differentiated_eq->coeffs = to_work;
  nd.coeffs = to_work;
  return;
}
//differentiation of the complete quad eq using two variables
void differentiate_Quad(Quad_eq& nnd){
  differentiate(nnd.x);differentiate(nnd.y);
  return;
}
// print function for this 
void print_Quad(Quad_eq& qd){
  for(auto&x : qd.x.coeffs) std::cout << x << ' ';
  std::cout << '\n';
  for(auto&x :qd.y.coeffs) std::cout << x << ' ';
  std::cout << '\n';
}


int main(){
  std::vector<double> x1_coeffs = {0,-4.0,2.0};
  std::vector<double> x2_coeffs = {0,4.0,1.0};
  

  Quad_eq* eq = new Quad_eq(x1_coeffs,x2_coeffs);

  print_Quad(*eq);
  differentiate_Quad(*eq);
  print_Quad(*eq);



  return 0;
}
