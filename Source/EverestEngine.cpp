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
    previewWindow = GameWindow();
    this->tools->Show(true);
    previewWindow.create_window("Everest Engine Preview Window");
    this->load_test_scene();
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
        graphics_engine = GraphicsEngine::get_global_ptr();
    }

    /*
    * stop_panda()
    * Close the FrameWork
    */
    void EverestEngine::stop_panda()
    {
        framework.close_framework();
    }

    void EverestEngine::load_test_scene()
    {
        NodePath scene = window->load_model(framework.get_models(), "models/environment");
        scene.reparent_to(window->get_render());
        scene.set_scale(0.25f, 0.25f, 0.25f);
        scene.set_pos(-8, 42, 0);
    }
    

//wxWidgets Start, OnInit takes the place of main().
wxIMPLEMENT_APP(EverestEngine);