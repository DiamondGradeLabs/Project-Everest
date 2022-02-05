/*
* ----------------------------------------------------------
* EverestEngine.cpp
* ----------------------------------------------------------
* Everest Engine Root File.
*
* Everything starts here!
*
* Author: Adam Guthrie
* Date: February 2, 2022
*/

/*
* ----------------------------------------------------------
* Includes
* ----------------------------------------------------------
* Includes are devided by section according to where the 
* dependencie is needed. 
*
*/
//C++ Includes
#include <iostream>

//Panda3d Includes

//wxWidget Includes

//Everest Includes
#include "EverestEngine.h"

using namespace std;

int main()
{
    //Main Function 
    cout << "Everest Engine 0.1.0" << endl;
    start_panda(0, NULL);

    GameWindow previewWindow = GameWindow();
    previewWindow.create_window("Everest Game Preview");

    start_loop();
    framework.main_loop();

    stop_panda();

    return 0;
}