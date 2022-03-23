/***************************************************************
 * Name:      HelloGuiMain.h
 * Purpose:   Defines Application Frame
 * Author:    Kassio Vieira ()
 * Created:   2022-03-23
 * Copyright: Kassio Vieira ()
 * License:
 **************************************************************/

#ifndef HELLOGUIMAIN_H
#define HELLOGUIMAIN_H

//(*Headers(HelloGuiFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class HelloGuiFrame: public wxFrame
{
    public:

        HelloGuiFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~HelloGuiFrame();

    private:

        //(*Handlers(HelloGuiFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(HelloGuiFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(HelloGuiFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // HELLOGUIMAIN_H
