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
        Bind(wxEVT_MENU, &ToolsWindow::StartLoop, this, ID_Start_Loop);
        Bind(wxEVT_MENU, &ToolsWindow::StopLoop, this, ID_Stop_Loop);
    }


void ToolsWindow::OnExit(wxCommandEvent& event)
{
    framework.set_exit_flag();
    framework.close_framework();
    Close(true);
}

void ToolsWindow::StartLoop(wxCommandEvent& event)
{
    windowThread = std::thread(start_loop);
}

void ToolsWindow::StopLoop(wxCommandEvent& event)
{
    cout << "Loop Stop\n";
    stop_loop();
}

void ToolsWindow::start_loop()
{
    cout << "Loop Start\n";
    if(framework.get_num_windows() == 1)
    {
        framework.main_loop();
    }
    else if (framework.get_num_windows() == 0)
    {
        window = NULL;
        previewWindow.create_window("Everest Engine Preview Window");
    }
    else {
        cout << "Loop Start Failed.\n";
    }
    
}

void ToolsWindow::stop_loop()
{
    //Implement Thread Stop Code. 
    framework.set_exit_flag();
    framework.close_window(0);
    //previewWindow.~GameWindow();

}