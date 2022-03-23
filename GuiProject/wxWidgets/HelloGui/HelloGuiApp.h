/***************************************************************
 * Name:      HelloGuiApp.h
 * Purpose:   Defines Application Class
 * Author:    Kassio Vieira ()
 * Created:   2022-03-23
 * Copyright: Kassio Vieira ()
 * License:
 **************************************************************/

#ifndef HELLOGUIAPP_H
#define HELLOGUIAPP_H

#include <wx/app.h>

class HelloGuiApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // HELLOGUIAPP_H
