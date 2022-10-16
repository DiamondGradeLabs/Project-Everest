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
#ifndef EVERESTENGINE_H
#define EVERESTENGINE_H

/*
* ----------------------------------------------------------
* Includes
* ----------------------------------------------------------
* Includes are devided by section according to where the 
* dependencie is needed. 
*
*/
//C++ Includes
#include <thread>

//Panda3d Includes
#include "pandaFramework.h"
#include "pandaSystem.h"

//wxWidget Includes
#include <wx/wxprec.h>//This may cause IntelliSense Squiggles
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

//Everest Includes
#include "UI/GameWindow.h"
#include "UI/ToolsWindow.h"

#include "UI/GameWindow.cpp"
#include "UI/ToolsWindow.cpp"

//Global Variables
PandaFramework framework;
GraphicsEngine *graphics_engine;
WindowFramework *window;

GameWindow previewWindow;

std::thread windowThread;

//bool loop_state = false;

class EverestEngine : public wxApp
{
/*
* ----------------------------------------------------------
* Public Member Functions and Objects
* ----------------------------------------------------------
* Public Functions and Members. Used to manipulate private
* members of the class.
*
*/
public: 
	/*
	* ----------------------------------------------------------
	* Constructors
	* ----------------------------------------------------------
	* Used to create instances of the GameWindow Class.
	*
	*/
        
        EverestEngine();

    /*
    * ----------------------------------------------------------
    * Core Engine Functions
    * ----------------------------------------------------------
    * Used for core functionality.
    */

   virtual bool OnInit();


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
        void start_panda(int argc, char* argv[]);

        /*
        * stop_panda()
        * Close the FrameWork
        */
        void stop_panda();

        void load_test_scene();

/*
* ----------------------------------------------------------
* Private Member Functions and Objects
* ----------------------------------------------------------
* Private members of the GameWindow class. Any manipulation
* must be done either from within the class or by a public 
* member function.
*
*/
private:

    //GameWindow previewWindow = GameWindow();
    ToolsWindow *tools;
};
#endif