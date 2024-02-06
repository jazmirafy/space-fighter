#include <iostream>

int main() {
  std::cout << " you are an interplanetary space fighter who\n wants to compete to win championship belts for various weight\n categories on other planets in the milkyway.\n as your interplanetary space coach, i will compute\n your weight for your destination planet.\n";
  std::cout << " how many pounds do you weigh on earth?\n";
  double weight;
  std::cin >> weight;
  std::cout << " which planet would you like to compete on?\n press 1 for mercury, 2 for venus, 3 for mars, 4 for jupiter,\n 5 for saturn, 6 for uranus, and 7 for neptune.\n";
  int planet;
  std::cin >> planet;
  switch (planet) {
    case 1 :
      std::cout << "you weigh " << (0.38 * weight) << " pounds on mercury\n";
      break;
    case 2 :
      std::cout << "you weigh " << (0.91 * weight) << " pounds on venus\n";
      break;
    case 3 :
      std::cout << "you weigh " << (0.38 * weight) << " pounds on mars\n";
      break;
    case 4 :
      std::cout << "you weigh " << (2.34 * weight) << " pounds on jupiter\n";
      break;
    case 5 :
      std::cout << "you weigh " << (1.06 * weight) << " pounds on saturn\n";
      break;
    case 6 :
      std::cout << "you weigh " << (0.92 * weight) << " pounds on uranus\n";
      break;
    case 7 :
      std::cout << "you weigh " << (1.19 * weight) << " pounds on neptune.\n";
      break;
    default :
      std::cout << "you entered an invalid number\n";
      break;
  }
