/***************************************************************
 * Name:      HelloGuiApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Kassio Vieira ()
 * Created:   2022-03-23
 * Copyright: Kassio Vieira ()
 * License:
 **************************************************************/

#include "HelloGuiApp.h"

//(*AppHeaders
#include "HelloGuiMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(HelloGuiApp);

bool HelloGuiApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	HelloGuiFrame* Frame = new HelloGuiFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
