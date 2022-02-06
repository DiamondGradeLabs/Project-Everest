/*
* ----------------------------------------------------------
* ToolsWindow.h
* ----------------------------------------------------------
* Header File For ToolsWindow Class
*
* ToolsWindow is the class for storing the Tools buttons.
* 
* Author: Adam Guthrie
* Date: 2/5/2022
*/
#ifndef TOOLSWINDOW_H
#define TOOLSWINDOW_H

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

//wxWidget Includes
#include <wx/wxprec.h>//This may cause IntelliSense Squiggles
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

//Everest Includes

//Global Variables
enum
{
    ID_Start_Loop = 1,
    ID_Stop_Loop = 2
};

//#define ID_Start_Loop 1;

class ToolsWindow : public wxFrame
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
		* ToolsWindow
		* Used to create an instance of the ToolsWindow Class
		*/
		ToolsWindow();
    
    /*
	* ----------------------------------------------------------
	* wxWidget Functions
	* ----------------------------------------------------------
	* Used to manipulate the wxWidget components
	*/

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

    /* ----------------------------------------------------------
	* wxWidget Functions
	* ----------------------------------------------------------
	* Used to manipulate the wxWidget components
	*/
    void OnExit(wxCommandEvent& event);

};
#endif