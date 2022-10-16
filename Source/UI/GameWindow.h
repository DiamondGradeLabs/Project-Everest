/*
* ----------------------------------------------------------
* GameWindow.h
* ----------------------------------------------------------
* Header File For GameWindow Class.
*
* GameWindow is the class for storing basic game and framework 
* functionaity.
* 
* Author: Adam Guthrie
* Date: 4/26/2019
*/
#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

/*
* ----------------------------------------------------------
* Includes
* ----------------------------------------------------------
* Includes are devided by section according to where the 
* dependencie is needed. 
*
*/
//C++ Includes
#include "iostream"

//Panda Includes
#include "pandaFramework.h"
#include "pandaSystem.h"
//#include "pandaCore.h"
#include "windowProperties.h"

extern PandaFramework framework;
extern WindowFramework *window;

class GameWindow
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
	
		/*
		* GameWindow()
		* Used to create an instance of the GameWindow Class.
		*/
		GameWindow();

		~GameWindow();

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
		void create_window(std::string);

		/*
		* set_title(std::string)
		* Set window title.
		*/
		void set_title(std::string);

		/*
		* get_title()
		* Return window title.
		*/
		std::string get_title();

		PandaFramework* get_framework();

		

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
	
	/*
	* ----------------------------------------------------------
	* Private Functions and Objects With Public Members
	* ----------------------------------------------------------
	* Private members of the GameWindow class. Any manipulation
	* must be done either from within the class or by a public
	* member function.
	*
	*/
		
	

	/*
	* ----------------------------------------------------------
	* Private Functions and Objects Without Public Members
	* ----------------------------------------------------------
	* Private members of the GameWindow class. Any manipulation
	* must be done either from within the class.
	*
	*/
		std::string windowTitle;//Window title string.
};

#endif