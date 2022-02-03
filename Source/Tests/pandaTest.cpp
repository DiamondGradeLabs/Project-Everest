/*
* ----------------------------------------------------------
* pandaTest.cpp
* ----------------------------------------------------------
* Test Development Environment for Proper panda3d Setup.
*
* 
*
* Author: Adam Guthrie
* Date: February 2, 2022
*/

//C++ Includes
#include <iostream>

//Panda3d Includes
#include "pandaFramework.h"
#include "pandaSystem.h"

//wxWidget Includes

//Everest Includes

using namespace std;

int main(int argc, char *argv[]) {
  // Open a new window framework
  PandaFramework framework;
  framework.open_framework(argc, argv);

  // Set the window title and open the window
  framework.set_window_title("My Panda3D Window");
  WindowFramework *window = framework.open_window();

  // Here is room for your own code

  // Do the main loop, equal to run() in python
  framework.main_loop();
  framework.close_framework();
  return (0);
}