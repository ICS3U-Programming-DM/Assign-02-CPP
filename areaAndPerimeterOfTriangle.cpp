// Copyright © 2021 Dylan Melo All rights reserved
//
// Created by Dylan Melo
// Created on December 2021
// This program asks the user for the unit, height, base
// and all side lengths of the triangle. It then
// calculates and displays the area and
// perimeter.
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // declare varaibles
  float height, base, sideA, sideB, sideC, perimeter, area;

  std::string unit = {};
  cout << "\033[0;34m" << endl;
  std::cout << "Today we will calculate the area and";
  cout << "\033[0;33m" << endl;
  std::cout << "perimeter of a triangle.\n";

  // get unit from the user
  cout << "\033[0;36m" << endl;
  std::cout << "Enter the unit: ";
  std::cin >> unit;

  // get height from the user
  cout << "\033[0;32m" << endl;
  std::cout << "Enter the height: ";
  std::cin >> height;

  // get base from the user
  cout << "\033[0;34m" << endl;
  std::cout << "Enter the base: ";
  std::cin >> base;

  // get sideA from the user
  cout << "\033[0;31m" << endl;
  std::cout << "Enter the sideA: ";
  std::cin >> sideA;

  // get sideB from the user
  cout << "\033[0;35m" << endl;
  std::cout << "Enter the sideB: ";
  std::cin >> sideB;

  // get sideC from the user
  cout << "\033[0;33m" << endl;
  std::cout << "Enter the sideC: ";
  std::cin >> sideC;

  // calculate the area using height * base / 2
  area = height * base / 2;

  // calculate the perimeter using sideA + sideB + sideC
  perimeter = sideA + sideB  + sideC;

  // display the perimeter and area to the user
  std::cout << std::endl;
  std::cout << ("Perimeter = ") << perimeter << unit << std::endl;
  std::cout << ("Area = ") << area << unit << std::endl;
}
