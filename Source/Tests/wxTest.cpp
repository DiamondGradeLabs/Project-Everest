/*
* ----------------------------------------------------------
* wxTest.cpp
* ----------------------------------------------------------
* Test Development Environment for Proper wxWidget Setup.
*
* 
*
* Author: Adam Guthrie
* Date: February 2, 2022
*/

//C++ Includes
#include <iostream>

//Panda3d Includes

//wxWidget Includes
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

//Everest Includes

using namespace std;

int main()
{
    //Main Function
    cout << "wxWidget Test" << endl;
    system("wx-config --version");

    return 0;
}