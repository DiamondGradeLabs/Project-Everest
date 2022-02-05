/*
* ----------------------------------------------------------
* EverestEngine.h
* ----------------------------------------------------------
* Everest Engine Main header file.
*
* This file handles the everest engine dependency links.
*
* Author: Adam Guthrie
* Date: February 3, 2022
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

//Panda3d Includes
#include "pandaFramework.h"
#include "pandaSystem.h"

//wxWidget Includes

//Everest Includes
#include "UI/GameWindow.h"

//Global Variables
PandaFramework framework;
WindowFramework *window;


/*
* ----------------------------------------------------------
* Framework Functions
* ----------------------------------------------------------
* Used to manipulate the PandaFramework Options
*/
	
    /*
	* start_panda(int argc, char* argv[])
	* Opens the PandaFramework for use.
	*/
    void start_panda(int argc, char* argv[])
    {
        framework.open_framework(argc, argv);
    }

    /*
	* start_loop()
	* Starts the Main Loop
	*/
    void start_loop()
    {
        framework.main_loop();
    }

    /*
	* stop_loop()
	* Close the FrameWork
	*/
    void stop_panda()
    {
        framework.close_framework();
    }