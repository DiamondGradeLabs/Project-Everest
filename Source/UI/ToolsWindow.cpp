/*
* ----------------------------------------------------------
* ToolsWindow.cpp
* ----------------------------------------------------------
* Source File For ToolsWindow Class
*
* ToolsWindow provides interaction between the game window
* and the user.
*
* Author: Adam Guthrie
* Date: 2/5/2022
*/

/*
* ----------------------------------------------------------
* Includes
* ----------------------------------------------------------
* Includes are devided by section according to where the
* dependencie is needed.
*
*/
#include "ToolsWindow.h"


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
* Used to create instances of the ToolsWindow Class.
*
*/

	/*
	* ToolsWindow
	* Used to create an instance of the ToolsWindow Class.
	*/
	ToolsWindow::ToolsWindow()//Blank constructor.
        : wxFrame(NULL, wxID_ANY, "Everest Engine Tools")
	{
        wxMenu *menuFile = new wxMenu;
        menuFile->AppendSeparator();
        menuFile->Append(wxID_EXIT);
        wxMenu *menuEngine = new wxMenu;
        menuEngine->Append(ID_Start_Loop, "&Start Loop", "Start Game Loop");
        menuEngine->Append(ID_Stop_Loop, "S&top Loop", "Stop Game Loop");
        menuEngine->AppendSeparator();
        wxMenuBar *menuBar = new wxMenuBar;
        menuBar->Append(menuFile, "&File");
        menuBar->Append(menuEngine, "&Engine");
        SetMenuBar( menuBar );
        CreateStatusBar();
        SetStatusText("Engine Started");
        Bind(wxEVT_MENU, &ToolsWindow::OnExit, this, wxID_EXIT);
    }


void ToolsWindow::OnExit(wxCommandEvent& event)
{
    framework.set_exit_flag();
    framework.close_framework();
    Close(true);
}