///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui__
#define __gui__

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/notebook.h>
#include <wx/statusbr.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame 
{
	private:
	
	protected:
		wxNotebook* m_notebook1;
		wxPanel* m_panel1;
		wxStaticText* m_staticText22;
		wxTextCtrl* m_textCtrlEmail;
		wxStaticText* m_staticText221;
		wxTextCtrl* m_textCtrlSubject;
		wxStaticText* m_staticText24;
		wxTextCtrl* m_textCtrlVacationText;
		wxButton* m_BtnEnDis;
		wxPanel* m_panel2;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_textCtrl_host;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textCtrl_port;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textCtrl_login;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCtrl_pwd;
		wxStaticText* m_staticText81;
		wxStdDialogButtonSizer* m_sdbSizer3;
		wxButton* m_sdbSizer3Save;
		wxButton* m_sdbSizer3Cancel;
		wxTextCtrl* m_textCtrlLog;
		wxButton* m_CloseBtn;
		wxStatusBar* m_statusBar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickEnDisBtn( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCancelButtonClickSetting( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveButtonClickSetting( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickCloseBtn( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Vacation"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 316,428 ), long style = wxCAPTION|wxCLOSE_BOX|wxFRAME_SHAPED|wxMINIMIZE_BOX|wxSYSTEM_MENU|wxSTATIC_BORDER );
		~MainFrame();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame1
///////////////////////////////////////////////////////////////////////////////
class MainFrame1 : public wxFrame 
{
	private:
	
	protected:
		wxNotebook* m_notebook1;
		wxPanel* m_panel1;
		wxStaticText* m_staticText22;
		wxTextCtrl* m_textCtrlEmail;
		wxStaticText* m_staticText221;
		wxTextCtrl* m_textCtrlSubject;
		wxStaticText* m_staticText24;
		wxTextCtrl* m_textCtrlVacationText;
		wxButton* m_BtnEnDis;
		wxPanel* m_panel2;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_textCtrl_host;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textCtrl_port;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textCtrl_login;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCtrl_pwd;
		wxStaticText* m_staticText81;
		wxStdDialogButtonSizer* m_sdbSizer3;
		wxButton* m_sdbSizer3Save;
		wxButton* m_sdbSizer3Cancel;
		wxTextCtrl* m_textCtrlLog;
		wxButton* m_CloseBtn;
		wxStatusBar* m_statusBar1;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickEnDisBtn( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCancelButtonClickSetting( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveButtonClickSetting( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickCloseBtn( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MainFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Vacation"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 316,428 ), long style = wxCAPTION|wxCLOSE_BOX|wxFRAME_SHAPED|wxMINIMIZE_BOX|wxRESIZE_BORDER|wxSYSTEM_MENU|wxSTATIC_BORDER );
		~MainFrame1();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame2
///////////////////////////////////////////////////////////////////////////////
class MainFrame2 : public wxFrame 
{
	private:
	
	protected:
		wxNotebook* m_notebook1;
		wxPanel* m_panel1;
		wxStaticText* m_staticText22;
		wxTextCtrl* m_textCtrlEmail;
		wxStaticText* m_staticText221;
		wxTextCtrl* m_textCtrlSubject;
		wxStaticText* m_staticText24;
		wxTextCtrl* m_textCtrlVacationText;
		wxButton* m_BtnEnDis;
		wxPanel* m_panel2;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_textCtrl_host;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textCtrl_port;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textCtrl_login;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCtrl_pwd;
		wxStaticText* m_staticText81;
		wxStdDialogButtonSizer* m_sdbSizer3;
		wxButton* m_sdbSizer3Save;
		wxButton* m_sdbSizer3Cancel;
		wxTextCtrl* m_textCtrlLog;
		wxButton* m_CloseBtn;
		wxStatusBar* m_statusBar1;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickEnDisBtn( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCancelButtonClickSetting( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveButtonClickSetting( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickCloseBtn( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MainFrame2( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Vacation"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 316,428 ), long style = wxCAPTION|wxCLOSE_BOX|wxFRAME_SHAPED|wxMINIMIZE_BOX|wxRESIZE_BORDER|wxSYSTEM_MENU|wxSTATIC_BORDER );
		~MainFrame2();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame3
///////////////////////////////////////////////////////////////////////////////
class MainFrame3 : public wxFrame 
{
	private:
	
	protected:
		wxNotebook* m_notebook1;
		wxPanel* m_panel1;
		wxStaticText* m_staticText22;
		wxTextCtrl* m_textCtrlEmail;
		wxStaticText* m_staticText221;
		wxTextCtrl* m_textCtrlSubject;
		wxStaticText* m_staticText24;
		wxTextCtrl* m_textCtrlVacationText;
		wxButton* m_BtnEnDis;
		wxPanel* m_panel2;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_textCtrl_host;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textCtrl_port;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textCtrl_login;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCtrl_pwd;
		wxStaticText* m_staticText81;
		wxStdDialogButtonSizer* m_sdbSizer3;
		wxButton* m_sdbSizer3Save;
		wxButton* m_sdbSizer3Cancel;
		wxTextCtrl* m_textCtrlLog;
		wxButton* m_CloseBtn;
		wxStatusBar* m_statusBar1;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickEnDisBtn( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCancelButtonClickSetting( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveButtonClickSetting( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickCloseBtn( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MainFrame3( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Vacation"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 316,428 ), long style = wxCAPTION|wxCLOSE_BOX|wxFRAME_SHAPED|wxMINIMIZE_BOX|wxSYSTEM_MENU );
		~MainFrame3();
	
};

#endif //__gui__
