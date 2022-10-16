/*
* ----------------------------------------------------------
* GameWindow.cpp
* ----------------------------------------------------------
* Source File For GameWindow Class.
*
* GameWindow is the class for storing basic game and framework
* functionaity.
*
* Author: Adam Guthrie
* Date: 4/26/2019
*/

/*
* ----------------------------------------------------------
* Includes
* ----------------------------------------------------------
* Includes are devided by section according to where the
* dependencie is needed.
*
*/

//Everest Includes
#include "GameWindow.h"

using namespace std;//Use the standard namespace.

/*
* ----------------------------------------------------------
* Global Variables
* ----------------------------------------------------------
* Defined global variables for use by the object.
*
*/

/*
* ----------------------------------------------------------
* Constructors
* ----------------------------------------------------------
* Used to create instances of the GameWindow Class.
*
*/

	/*
	* GameWindow()
	* Used to create an instance of the GameWindow Class.
	*/
	GameWindow::GameWindow()//Blank constructor.
	{

	}

	GameWindow::~GameWindow()
	{
		
	}


/*
* ----------------------------------------------------------
* WindowFramework Functions
* ----------------------------------------------------------
* Used to manipulate the WindowFramework object.
*/
	
	/*
	* create_window(std::string)
	* Creates window with title.
	*/
	void GameWindow::create_window(string windowName)
	{
		framework.set_window_title(windowName);//Setup Game Window
		//window = framework.open_window();//Open Game Window
		WindowProperties *props = new WindowProperties();
    	props->set_size(640,480);
    	props->set_undecorated(true);
    	window = framework.open_window(*props,0);
    	delete props;
		//window->get_graphics_window()->get_properties().set_undecorated(true);
	}

	/*
	* set_title(std::string)
	* Set window title.
	*/
	void GameWindow::set_title(string title)
	{
		this->windowTitle = title;
		framework.set_window_title(title);
	}

	/*
	* get_title()
	* Return window title.
	*/
	string GameWindow::get_title()
	{
		return windowTitle;
	}
	
	PandaFramework* GameWindow::get_framework()
	{
		return &framework;
	}