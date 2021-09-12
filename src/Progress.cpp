#include "util.h"

void Progress(string theme) {

  cout << HIDE;

  float progress = 0.0;

  string color = "white";

  if (theme == "white") {
    color = BHWHT;
  } else if (theme == "blue") {
    color = BHBLU;
  } else if (theme == "magenta") {
    color = BHMAG;
  } else {
    std::cout << RED << "This is not a valid theme\n" << reset;
    exit(EXIT_FAILURE);
  }

  while (progress < 1.01) {
    
    int barWidth = 70;
    
    std::cout << BHGRN << "[";
    
    int pos = barWidth * progress;

    for (int i = 0; i < barWidth; i++) {

      if (i < pos) {
        std::cout << color << "=";
      } else if (i == pos) {
        std::cout << color << ">";
      } else {
        std::cout << " ";
      }
    }

    std::cout << BHGRN << "] " << BHYEL << int(progress * 100.0) << BHWHT << " %\r";
    std::cout.flush();
    
    usleep(0.1 * MICROSECOND);
    progress += 0.01;

  }

  std::cout << std::endl;
  std::cout << SHOW;
}