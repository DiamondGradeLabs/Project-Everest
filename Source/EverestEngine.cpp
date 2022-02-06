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

/*
* ----------------------------------------------------------
* Constructors
* ----------------------------------------------------------
* Used to create instances of the EverestEngine Class.
*
*/

	/*
	* EverestEngine()
	* Used to create an instance of the Enverest Engine
	*/
	EverestEngine::EverestEngine()//Blank constructor.
	{
        
	}

/*
* ----------------------------------------------------------
* Core Engine Functions
* ----------------------------------------------------------
* Used for core functionality.
*/

bool EverestEngine::OnInit()
{
    cout << "Everest Engine 0.1.0" << endl;
    this->start_panda(0, NULL);
    this->tools = new ToolsWindow();
    this->tools->Show(true);
    this->previewWindow.create_window("Everest Engine Preview Window");
    return true;
}



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
    void EverestEngine::start_panda(int argc, char* argv[])
    {
        framework.open_framework(argc, argv);
    }

    /*
    * start_loop()
    * Starts the Main Loop
    */
    void EverestEngine::start_loop()
    {
        framework.main_loop();
    }

    /*
    * stop_loop()
    * Stops the main loop.
    */
    void EverestEngine::stop_loop()
    {
        framework.set_exit_flag();
    }

    /*
    * stop_loop()
    * Close the FrameWork
    */
    void EverestEngine::stop_panda()
    {
        framework.close_framework();
    }

//wxWidgets Start, OnInit takes the place of main().
wxIMPLEMENT_APP(EverestEngine);