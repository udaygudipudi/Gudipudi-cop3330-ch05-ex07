/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Uday Gudipudi
 */

#include "std_lib_facilities.h"

void quadratic (double a, double b, double c){

  double check, d, negb, plus, minus;

  check = (b * b) - (4 * a * c); 
  negb = b * -1;

  if(check < 0) {

    printf("There are no real roots");

  }

  if (check > 0){

    d = sqrt(check);

    plus = negb + d;
    minus = negb - d;

    plus = plus / (2 * a);
    minus = minus / (2 * a);

    std::cout << "The roots are " << plus << " and " << minus;

  }

  if(check == 0){

    d = sqrt(check);

    plus = negb + d;
    minus = negb - d;

    plus = plus / (2 * a);
    minus = minus / (2 * a);

    std::cout << "The root is " << plus;


  }

}

int main() {

  double a, b, c, check;

  std::cout << "Enter numbers for a, b, and c.\n";

  std::cin >> a >> b >> c;

  quadratic(a,b,c);

  return 0;
} 