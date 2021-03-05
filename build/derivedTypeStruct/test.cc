#include <iostream>
#include <vector>
#include "summa.h"


int main()  {
  

  std::vector<int> vec_i1{1,-2,3,-4,5}, vec_i2;
  std::vector<double> vec_d1{1.1,-2.2,3.3,-4.4,5.5}, vec_d2, vec_d3;
  std::vector<std::vector<int>> mat_i1{ { 11, 12, 13, 14 }, { 21, 22, 23 }, {31} }, mat_i2;
  std::vector<std::vector<double>> mat_d1{ { 11, 12, 13, 14 }, { 21, 22, 23 }, {31} }, mat_d2;

  Summa S;
  
  S.set_dt(4.5);
  S.set_veg_fluxflag(true);
  
  S.set_type(vec_i1);
  S.set_attr(vec_d1);
  S.set_forc(vec_d1);
  S.set_indx(mat_i1);
  S.set_diag(mat_d1);

  
  S.coupled_em();
   
  vec_i2 = S.get_type();
  vec_d2 = S.get_attr();
  vec_d3 = S.get_forc();
  mat_i2 = S.get_indx(); 
  mat_d2 = S.get_diag(); 
  int err = S.get_err();
  
   
  std::cout << "indx_data = " << std::endl;
  std::cout << "\t";
  for(size_t i=0; i<mat_i2.size(); i++) {
  	for(size_t j=0; j<mat_i2[i].size(); j++)
  		std::cout << mat_i2[i][j] << "  ";
  	std::cout << std::endl << "\t";
  } 
  std::cout << "\n" << "-----------------------" << std::endl;
  
  std::cout << "diag_data = " << std::endl;
  std::cout << "\t";
  for(size_t i=0; i<mat_d2.size(); i++) {
  	for(size_t j=0; j<mat_d2[i].size(); j++)
  		std::cout << mat_d2[i][j] << "  ";
  	std::cout << std::endl << "\t";
  } 
  std::cout << "\n" << "-----------------------" << std::endl;
  
  std::cout << "type_data = ";
  for(size_t i=0; i<vec_i2.size(); i++)
        std::cout << vec_i2[i] << "  ";
  std::cout << std::endl;
  std::cout << "-----------------------" << std::endl;
  
  std::cout << "attr_data = ";
  for(size_t i=0; i<vec_d2.size(); i++)
        std::cout << vec_d2[i] << "  ";
  std::cout << std::endl;
  std::cout << "-----------------------" << std::endl;
  
  std::cout << "forc_data =  ";
  for(size_t i=0; i<vec_d3.size(); i++)
        std::cout  << vec_d3[i] << "  ";
  std::cout << std::endl;
  std::cout << "-----------------------" << std::endl;

  return 0;
}
