//
// Created by lorenzo on 15/07/17.
//

#ifndef PROGETTOLABORATORIO2_0_MAINFRAME_H
#define PROGETTOLABORATORIO2_0_MAINFRAME_H


#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/frame.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/imaglist.h>
#include <wx/stattext.h>
#include <wx/statline.h>
#include <wx/button.h>
#include <wx/textctrl.h>
#include <wx/timer.h>
#include <wx/spinctrl.h>
#include <wx/wx.h>

#include "Time.h"
#include "Date.h"
#include "Timer.h"


class MainFrame : public wxFrame {

protected:

    wxNotebook* Notebook;
    wxPanel* DateTimePanel;
    wxStaticText* DateText;
    wxStaticText* TimeText;
    wxStaticLine* DateTimeLine;
    wxButton* DateFormatButton;
    wxButton* TimeFormatButton;
    wxPanel* TimerPanel;
    wxStaticText* TimerText;
    wxStaticLine* TimerBoxLine;
    wxSpinCtrl* HourSpinCtrl;
    wxSpinCtrl* MinuteSpinCtrl;
    wxSpinCtrl* SecondSpinCtrl;
    wxButton* StartStopTimerButton;
    wxButton* ResetTimerButton;
    wxTimer* DateTimeTimer;
    wxTimer* TimerTimer;
    wxMessageDialog* message;
    Time* time;
    Date* date;
    Timer* timer;

protected:

    virtual void OnDateFormatButtonClicked(wxCommandEvent& event);
    virtual void OnTimeFormatButtonClicked(wxCommandEvent& event);
    virtual void OnHourspinctrlTextUpdated(wxCommandEvent& event);
    virtual void OnMinutespinctrlTextUpdated(wxCommandEvent& event);
    virtual void OnSecondspinctrlTextUpdated(wxCommandEvent& event);
    virtual void OnStartStopTimerButtonClicked(wxCommandEvent& event);
    virtual void OnResettimerbuttonButtonClicked(wxCommandEvent& event);
    virtual void OnDateTimeTimer(wxTimerEvent& event);
    virtual void OnTimerTimer(wxTimerEvent& event);


public:

    wxStaticText* GetDateText() { return DateText; }
    wxStaticText* GetTimeText() { return TimeText; }
    wxStaticLine* GetDateTimeLine() { return DateTimeLine; }
    wxButton* GetDateFormatButton() { return DateFormatButton; }
    wxButton* GetTimeFormatButton() { return TimeFormatButton; }
    wxPanel* GetDateTimePanel() { return DateTimePanel; }
    wxStaticText* GetTimerText() { return TimerText; }
    wxStaticLine* GetTimerBoxLine() { return TimerBoxLine; }
    wxSpinCtrl* GetHourSpinCtrl() { return HourSpinCtrl; }
    wxSpinCtrl* GetMinuteSpinCtrl() { return MinuteSpinCtrl; }
    wxSpinCtrl* GetSecondSpinCtrl() { return SecondSpinCtrl; }
    wxButton* GetStartStopTimerButton() { return StartStopTimerButton; }
    wxButton* GetResetTimerButton() { return ResetTimerButton; }
    wxPanel* GetTimerPanel() { return TimerPanel; }
    wxNotebook* GetNotebook() { return Notebook; }
    wxTimer* GetDateTimeTimer() { return DateTimeTimer; }
    wxTimer* GetTimerTimer() { return TimerTimer; }
    MainFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Progetto Laboratorio"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500, 500), long style = wxDEFAULT_FRAME_STYLE|wxRESIZE_BORDER);
    virtual ~MainFrame();
};



#endif //PROGETTOLABORATORIO2_0_MAINFRAME_H
