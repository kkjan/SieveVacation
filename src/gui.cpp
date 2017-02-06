///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel1 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText22 = new wxStaticText( m_panel1, wxID_ANY, wxT("My e-mail address:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	bSizer13->Add( m_staticText22, 0, wxALL, 5 );
	
	m_textCtrlEmail = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlEmail->SetMinSize( wxSize( 150,-1 ) );
	
	bSizer13->Add( m_textCtrlEmail, 0, wxALL, 5 );
	
	bSizer12->Add( bSizer13, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText221 = new wxStaticText( m_panel1, wxID_ANY, wxT("Subject:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText221->Wrap( -1 );
	bSizer131->Add( m_staticText221, 0, wxALL, 5 );
	
	m_textCtrlSubject = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlSubject->SetMinSize( wxSize( 150,-1 ) );
	
	bSizer131->Add( m_textCtrlSubject, 1, wxALIGN_RIGHT|wxALL|wxEXPAND, 5 );
	
	bSizer12->Add( bSizer131, 0, wxALL|wxEXPAND, 0 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	bSizer14->SetMinSize( wxSize( -1,80 ) ); 
	m_staticText24 = new wxStaticText( m_panel1, wxID_ANY, wxT("Text"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	bSizer14->Add( m_staticText24, 0, wxALL, 5 );
	
	m_textCtrlVacationText = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxPoint( 0,0 ), wxSize( 250,-1 ), wxTE_MULTILINE|wxTE_RICH );
	m_textCtrlVacationText->SetMaxLength( 160 ); 
	m_textCtrlVacationText->SetMinSize( wxSize( 250,-1 ) );
	
	bSizer14->Add( m_textCtrlVacationText, 1, wxALL|wxEXPAND, 5 );
	
	bSizer12->Add( bSizer14, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	m_BtnEnDis = new wxButton( m_panel1, wxID_ANY, wxT("Enable"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_BtnEnDis, 0, wxRIGHT, 5 );
	
	bSizer12->Add( bSizer10, 0, wxALIGN_RIGHT|wxRIGHT, 0 );
	
	m_panel1->SetSizer( bSizer12 );
	m_panel1->Layout();
	bSizer12->Fit( m_panel1 );
	m_notebook1->AddPage( m_panel1, wxT("Main"), true );
	m_panel2 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer121;
	bSizer121 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 2, 2, 0, 0 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText8 = new wxStaticText( m_panel2, wxID_ANY, wxT("Host"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	fgSizer2->Add( m_staticText8, 0, wxALL, 5 );
	
	m_textCtrl_host = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	fgSizer2->Add( m_textCtrl_host, 0, wxALL, 5 );
	
	m_staticText5 = new wxStaticText( m_panel2, wxID_ANY, wxT("Port"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	fgSizer2->Add( m_staticText5, 0, wxALL, 5 );
	
	m_textCtrl_port = new wxTextCtrl( m_panel2, wxID_ANY, wxT("2000"), wxDefaultPosition, wxSize( 200,-1 ), 0 );
	fgSizer2->Add( m_textCtrl_port, 0, wxALL, 5 );
	
	m_staticText6 = new wxStaticText( m_panel2, wxID_ANY, wxT("Login"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	fgSizer2->Add( m_staticText6, 0, wxALL, 5 );
	
	m_textCtrl_login = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	fgSizer2->Add( m_textCtrl_login, 0, wxALL, 5 );
	
	m_staticText7 = new wxStaticText( m_panel2, wxID_ANY, wxT("Password"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	fgSizer2->Add( m_staticText7, 0, wxALL, 5 );
	
	m_textCtrl_pwd = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), wxTE_PASSWORD );
	fgSizer2->Add( m_textCtrl_pwd, 0, wxALL, 5 );
	
	m_staticText81 = new wxStaticText( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText81->Wrap( -1 );
	fgSizer2->Add( m_staticText81, 0, wxALL, 5 );
	
	bSizer121->Add( fgSizer2, 1, 0, 5 );
	
	m_sdbSizer3 = new wxStdDialogButtonSizer();
	m_sdbSizer3Save = new wxButton( m_panel2, wxID_SAVE );
	m_sdbSizer3->AddButton( m_sdbSizer3Save );
	m_sdbSizer3Cancel = new wxButton( m_panel2, wxID_CANCEL );
	m_sdbSizer3->AddButton( m_sdbSizer3Cancel );
	m_sdbSizer3->Realize();
	bSizer121->Add( m_sdbSizer3, 0, wxEXPAND, 5 );
	
	m_panel2->SetSizer( bSizer121 );
	m_panel2->Layout();
	bSizer121->Fit( m_panel2 );
	m_notebook1->AddPage( m_panel2, wxT("Settings"), false );
	
	bSizer1->Add( m_notebook1, 1, 0, 5 );
	
	m_textCtrlLog = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,100 ), wxTE_MULTILINE|wxTE_READONLY );
	bSizer1->Add( m_textCtrlLog, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	m_CloseBtn = new wxButton( this, wxID_ANY, wxT("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_CloseBtn, 0, wxALIGN_RIGHT|wxALL|wxEXPAND, 5 );
	
	bSizer1->Add( bSizer8, 0, wxEXPAND, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	m_statusBar = this->CreateStatusBar( 1, 0, wxID_ANY );
	
	// Connect Events
	m_BtnEnDis->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnClickEnDisBtn ), NULL, this );
	m_sdbSizer3Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnCancelButtonClickSetting ), NULL, this );
	m_sdbSizer3Save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnSaveButtonClickSetting ), NULL, this );
	m_CloseBtn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnClickCloseBtn ), NULL, this );
}

MainFrame::~MainFrame()
{
	// Disconnect Events
	m_BtnEnDis->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnClickEnDisBtn ), NULL, this );
	m_sdbSizer3Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnCancelButtonClickSetting ), NULL, this );
	m_sdbSizer3Save->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnSaveButtonClickSetting ), NULL, this );
	m_CloseBtn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnClickCloseBtn ), NULL, this );
}

MainFrame1::MainFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel1 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText22 = new wxStaticText( m_panel1, wxID_ANY, wxT("My e-mail address:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	bSizer13->Add( m_staticText22, 0, wxALL, 5 );
	
	m_textCtrlEmail = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlEmail->SetMinSize( wxSize( 150,-1 ) );
	
	bSizer13->Add( m_textCtrlEmail, 0, wxALL, 5 );
	
	bSizer12->Add( bSizer13, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText221 = new wxStaticText( m_panel1, wxID_ANY, wxT("Subject:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText221->Wrap( -1 );
	bSizer131->Add( m_staticText221, 0, wxALL, 5 );
	
	m_textCtrlSubject = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlSubject->SetMinSize( wxSize( 150,-1 ) );
	
	bSizer131->Add( m_textCtrlSubject, 1, wxALIGN_RIGHT|wxALL|wxEXPAND, 5 );
	
	bSizer12->Add( bSizer131, 0, wxALL|wxEXPAND, 0 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	bSizer14->SetMinSize( wxSize( -1,80 ) ); 
	m_staticText24 = new wxStaticText( m_panel1, wxID_ANY, wxT("Text"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	bSizer14->Add( m_staticText24, 0, wxALL, 5 );
	
	m_textCtrlVacationText = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxPoint( 0,0 ), wxSize( 250,-1 ), wxTE_MULTILINE|wxTE_RICH );
	m_textCtrlVacationText->SetMaxLength( 160 ); 
	m_textCtrlVacationText->SetMinSize( wxSize( 250,-1 ) );
	
	bSizer14->Add( m_textCtrlVacationText, 1, wxALL|wxEXPAND, 5 );
	
	bSizer12->Add( bSizer14, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	m_BtnEnDis = new wxButton( m_panel1, wxID_ANY, wxT("Enable"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_BtnEnDis, 0, wxRIGHT, 5 );
	
	bSizer12->Add( bSizer10, 0, wxALIGN_RIGHT|wxRIGHT, 0 );
	
	m_panel1->SetSizer( bSizer12 );
	m_panel1->Layout();
	bSizer12->Fit( m_panel1 );
	m_notebook1->AddPage( m_panel1, wxT("Main"), true );
	m_panel2 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer121;
	bSizer121 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 2, 2, 0, 0 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText8 = new wxStaticText( m_panel2, wxID_ANY, wxT("Host"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	fgSizer2->Add( m_staticText8, 0, wxALL, 5 );
	
	m_textCtrl_host = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	fgSizer2->Add( m_textCtrl_host, 0, wxALL, 5 );
	
	m_staticText5 = new wxStaticText( m_panel2, wxID_ANY, wxT("Port"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	fgSizer2->Add( m_staticText5, 0, wxALL, 5 );
	
	m_textCtrl_port = new wxTextCtrl( m_panel2, wxID_ANY, wxT("2000"), wxDefaultPosition, wxSize( 200,-1 ), 0 );
	fgSizer2->Add( m_textCtrl_port, 0, wxALL, 5 );
	
	m_staticText6 = new wxStaticText( m_panel2, wxID_ANY, wxT("Login"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	fgSizer2->Add( m_staticText6, 0, wxALL, 5 );
	
	m_textCtrl_login = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	fgSizer2->Add( m_textCtrl_login, 0, wxALL, 5 );
	
	m_staticText7 = new wxStaticText( m_panel2, wxID_ANY, wxT("Password"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	fgSizer2->Add( m_staticText7, 0, wxALL, 5 );
	
	m_textCtrl_pwd = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), wxTE_PASSWORD );
	fgSizer2->Add( m_textCtrl_pwd, 0, wxALL, 5 );
	
	m_staticText81 = new wxStaticText( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText81->Wrap( -1 );
	fgSizer2->Add( m_staticText81, 0, wxALL, 5 );
	
	bSizer121->Add( fgSizer2, 1, 0, 5 );
	
	m_sdbSizer3 = new wxStdDialogButtonSizer();
	m_sdbSizer3Save = new wxButton( m_panel2, wxID_SAVE );
	m_sdbSizer3->AddButton( m_sdbSizer3Save );
	m_sdbSizer3Cancel = new wxButton( m_panel2, wxID_CANCEL );
	m_sdbSizer3->AddButton( m_sdbSizer3Cancel );
	m_sdbSizer3->Realize();
	bSizer121->Add( m_sdbSizer3, 0, wxEXPAND, 5 );
	
	m_panel2->SetSizer( bSizer121 );
	m_panel2->Layout();
	bSizer121->Fit( m_panel2 );
	m_notebook1->AddPage( m_panel2, wxT("Settings"), false );
	
	bSizer1->Add( m_notebook1, 1, 0, 5 );
	
	m_textCtrlLog = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,100 ), wxTE_MULTILINE|wxTE_READONLY );
	bSizer1->Add( m_textCtrlLog, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	m_CloseBtn = new wxButton( this, wxID_ANY, wxT("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_CloseBtn, 0, wxALIGN_RIGHT|wxALL|wxEXPAND, 5 );
	
	bSizer1->Add( bSizer8, 0, wxEXPAND, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	m_statusBar1 = this->CreateStatusBar( 1, 0, wxID_ANY );
	
	// Connect Events
	m_BtnEnDis->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame1::OnClickEnDisBtn ), NULL, this );
	m_sdbSizer3Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame1::OnCancelButtonClickSetting ), NULL, this );
	m_sdbSizer3Save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame1::OnSaveButtonClickSetting ), NULL, this );
	m_CloseBtn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame1::OnClickCloseBtn ), NULL, this );
}

MainFrame1::~MainFrame1()
{
	// Disconnect Events
	m_BtnEnDis->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame1::OnClickEnDisBtn ), NULL, this );
	m_sdbSizer3Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame1::OnCancelButtonClickSetting ), NULL, this );
	m_sdbSizer3Save->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame1::OnSaveButtonClickSetting ), NULL, this );
	m_CloseBtn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame1::OnClickCloseBtn ), NULL, this );
}

MainFrame2::MainFrame2( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel1 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText22 = new wxStaticText( m_panel1, wxID_ANY, wxT("My e-mail address:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	bSizer13->Add( m_staticText22, 0, wxALL, 5 );
	
	m_textCtrlEmail = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlEmail->SetMinSize( wxSize( 150,-1 ) );
	
	bSizer13->Add( m_textCtrlEmail, 0, wxALL, 5 );
	
	bSizer12->Add( bSizer13, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText221 = new wxStaticText( m_panel1, wxID_ANY, wxT("Subject:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText221->Wrap( -1 );
	bSizer131->Add( m_staticText221, 0, wxALL, 5 );
	
	m_textCtrlSubject = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlSubject->SetMinSize( wxSize( 150,-1 ) );
	
	bSizer131->Add( m_textCtrlSubject, 1, wxALIGN_RIGHT|wxALL|wxEXPAND, 5 );
	
	bSizer12->Add( bSizer131, 0, wxALL|wxEXPAND, 0 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	bSizer14->SetMinSize( wxSize( -1,80 ) ); 
	m_staticText24 = new wxStaticText( m_panel1, wxID_ANY, wxT("Text"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	bSizer14->Add( m_staticText24, 0, wxALL, 5 );
	
	m_textCtrlVacationText = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxPoint( 0,0 ), wxSize( 250,-1 ), wxTE_MULTILINE|wxTE_RICH );
	m_textCtrlVacationText->SetMaxLength( 160 ); 
	m_textCtrlVacationText->SetMinSize( wxSize( 250,-1 ) );
	
	bSizer14->Add( m_textCtrlVacationText, 1, wxALL|wxEXPAND, 5 );
	
	bSizer12->Add( bSizer14, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	m_BtnEnDis = new wxButton( m_panel1, wxID_ANY, wxT("Enable"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_BtnEnDis, 0, wxRIGHT, 5 );
	
	bSizer12->Add( bSizer10, 0, wxALIGN_RIGHT|wxRIGHT, 0 );
	
	m_panel1->SetSizer( bSizer12 );
	m_panel1->Layout();
	bSizer12->Fit( m_panel1 );
	m_notebook1->AddPage( m_panel1, wxT("Main"), true );
	m_panel2 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer121;
	bSizer121 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 2, 2, 0, 0 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText8 = new wxStaticText( m_panel2, wxID_ANY, wxT("Host"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	fgSizer2->Add( m_staticText8, 0, wxALL, 5 );
	
	m_textCtrl_host = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	fgSizer2->Add( m_textCtrl_host, 0, wxALL, 5 );
	
	m_staticText5 = new wxStaticText( m_panel2, wxID_ANY, wxT("Port"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	fgSizer2->Add( m_staticText5, 0, wxALL, 5 );
	
	m_textCtrl_port = new wxTextCtrl( m_panel2, wxID_ANY, wxT("2000"), wxDefaultPosition, wxSize( 200,-1 ), 0 );
	fgSizer2->Add( m_textCtrl_port, 0, wxALL, 5 );
	
	m_staticText6 = new wxStaticText( m_panel2, wxID_ANY, wxT("Login"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	fgSizer2->Add( m_staticText6, 0, wxALL, 5 );
	
	m_textCtrl_login = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	fgSizer2->Add( m_textCtrl_login, 0, wxALL, 5 );
	
	m_staticText7 = new wxStaticText( m_panel2, wxID_ANY, wxT("Password"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	fgSizer2->Add( m_staticText7, 0, wxALL, 5 );
	
	m_textCtrl_pwd = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), wxTE_PASSWORD );
	fgSizer2->Add( m_textCtrl_pwd, 0, wxALL, 5 );
	
	m_staticText81 = new wxStaticText( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText81->Wrap( -1 );
	fgSizer2->Add( m_staticText81, 0, wxALL, 5 );
	
	bSizer121->Add( fgSizer2, 1, 0, 5 );
	
	m_sdbSizer3 = new wxStdDialogButtonSizer();
	m_sdbSizer3Save = new wxButton( m_panel2, wxID_SAVE );
	m_sdbSizer3->AddButton( m_sdbSizer3Save );
	m_sdbSizer3Cancel = new wxButton( m_panel2, wxID_CANCEL );
	m_sdbSizer3->AddButton( m_sdbSizer3Cancel );
	m_sdbSizer3->Realize();
	bSizer121->Add( m_sdbSizer3, 0, wxEXPAND, 5 );
	
	m_panel2->SetSizer( bSizer121 );
	m_panel2->Layout();
	bSizer121->Fit( m_panel2 );
	m_notebook1->AddPage( m_panel2, wxT("Settings"), false );
	
	bSizer1->Add( m_notebook1, 1, 0, 5 );
	
	m_textCtrlLog = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,100 ), wxTE_MULTILINE|wxTE_READONLY );
	bSizer1->Add( m_textCtrlLog, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	m_CloseBtn = new wxButton( this, wxID_ANY, wxT("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_CloseBtn, 0, wxALIGN_RIGHT|wxALL|wxEXPAND, 5 );
	
	bSizer1->Add( bSizer8, 0, wxEXPAND, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	m_statusBar1 = this->CreateStatusBar( 1, 0, wxID_ANY );
	
	// Connect Events
	m_BtnEnDis->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame2::OnClickEnDisBtn ), NULL, this );
	m_sdbSizer3Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame2::OnCancelButtonClickSetting ), NULL, this );
	m_sdbSizer3Save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame2::OnSaveButtonClickSetting ), NULL, this );
	m_CloseBtn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame2::OnClickCloseBtn ), NULL, this );
}

MainFrame2::~MainFrame2()
{
	// Disconnect Events
	m_BtnEnDis->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame2::OnClickEnDisBtn ), NULL, this );
	m_sdbSizer3Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame2::OnCancelButtonClickSetting ), NULL, this );
	m_sdbSizer3Save->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame2::OnSaveButtonClickSetting ), NULL, this );
	m_CloseBtn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame2::OnClickCloseBtn ), NULL, this );
}

MainFrame3::MainFrame3( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 316,428 ), wxSize( 316,428 ) );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel1 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText22 = new wxStaticText( m_panel1, wxID_ANY, wxT("My e-mail address:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	bSizer13->Add( m_staticText22, 0, wxALL, 5 );
	
	m_textCtrlEmail = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlEmail->SetMinSize( wxSize( 150,-1 ) );
	
	bSizer13->Add( m_textCtrlEmail, 0, wxALL, 5 );
	
	bSizer12->Add( bSizer13, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText221 = new wxStaticText( m_panel1, wxID_ANY, wxT("Subject:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText221->Wrap( -1 );
	bSizer131->Add( m_staticText221, 0, wxALL, 5 );
	
	m_textCtrlSubject = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlSubject->SetMinSize( wxSize( 150,-1 ) );
	
	bSizer131->Add( m_textCtrlSubject, 1, wxALIGN_RIGHT|wxALL|wxEXPAND, 5 );
	
	bSizer12->Add( bSizer131, 0, wxALL|wxEXPAND, 0 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	bSizer14->SetMinSize( wxSize( -1,80 ) ); 
	m_staticText24 = new wxStaticText( m_panel1, wxID_ANY, wxT("Text"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	bSizer14->Add( m_staticText24, 0, wxALL, 5 );
	
	m_textCtrlVacationText = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxPoint( 0,0 ), wxSize( 250,-1 ), wxTE_MULTILINE|wxTE_RICH );
	m_textCtrlVacationText->SetMaxLength( 160 ); 
	m_textCtrlVacationText->SetMinSize( wxSize( 250,-1 ) );
	
	bSizer14->Add( m_textCtrlVacationText, 1, wxALL|wxEXPAND, 5 );
	
	bSizer12->Add( bSizer14, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	m_BtnEnDis = new wxButton( m_panel1, wxID_ANY, wxT("Enable"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_BtnEnDis, 0, wxRIGHT, 5 );
	
	bSizer12->Add( bSizer10, 0, wxALIGN_RIGHT|wxRIGHT, 0 );
	
	m_panel1->SetSizer( bSizer12 );
	m_panel1->Layout();
	bSizer12->Fit( m_panel1 );
	m_notebook1->AddPage( m_panel1, wxT("Main"), true );
	m_panel2 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer121;
	bSizer121 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 2, 2, 0, 0 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText8 = new wxStaticText( m_panel2, wxID_ANY, wxT("Host"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	fgSizer2->Add( m_staticText8, 0, wxALL, 5 );
	
	m_textCtrl_host = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	fgSizer2->Add( m_textCtrl_host, 0, wxALL, 5 );
	
	m_staticText5 = new wxStaticText( m_panel2, wxID_ANY, wxT("Port"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	fgSizer2->Add( m_staticText5, 0, wxALL, 5 );
	
	m_textCtrl_port = new wxTextCtrl( m_panel2, wxID_ANY, wxT("2000"), wxDefaultPosition, wxSize( 200,-1 ), 0 );
	fgSizer2->Add( m_textCtrl_port, 0, wxALL, 5 );
	
	m_staticText6 = new wxStaticText( m_panel2, wxID_ANY, wxT("Login"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	fgSizer2->Add( m_staticText6, 0, wxALL, 5 );
	
	m_textCtrl_login = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	fgSizer2->Add( m_textCtrl_login, 0, wxALL, 5 );
	
	m_staticText7 = new wxStaticText( m_panel2, wxID_ANY, wxT("Password"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	fgSizer2->Add( m_staticText7, 0, wxALL, 5 );
	
	m_textCtrl_pwd = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), wxTE_PASSWORD );
	fgSizer2->Add( m_textCtrl_pwd, 0, wxALL, 5 );
	
	m_staticText81 = new wxStaticText( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText81->Wrap( -1 );
	fgSizer2->Add( m_staticText81, 0, wxALL, 5 );
	
	bSizer121->Add( fgSizer2, 1, 0, 5 );
	
	m_sdbSizer3 = new wxStdDialogButtonSizer();
	m_sdbSizer3Save = new wxButton( m_panel2, wxID_SAVE );
	m_sdbSizer3->AddButton( m_sdbSizer3Save );
	m_sdbSizer3Cancel = new wxButton( m_panel2, wxID_CANCEL );
	m_sdbSizer3->AddButton( m_sdbSizer3Cancel );
	m_sdbSizer3->Realize();
	bSizer121->Add( m_sdbSizer3, 0, wxEXPAND, 5 );
	
	m_panel2->SetSizer( bSizer121 );
	m_panel2->Layout();
	bSizer121->Fit( m_panel2 );
	m_notebook1->AddPage( m_panel2, wxT("Settings"), false );
	
	bSizer1->Add( m_notebook1, 1, 0, 5 );
	
	m_textCtrlLog = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,100 ), wxTE_MULTILINE|wxTE_READONLY );
	bSizer1->Add( m_textCtrlLog, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	m_CloseBtn = new wxButton( this, wxID_ANY, wxT("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_CloseBtn, 0, wxALIGN_RIGHT|wxALL|wxEXPAND, 5 );
	
	bSizer1->Add( bSizer8, 0, wxEXPAND, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	m_statusBar1 = this->CreateStatusBar( 1, 0, wxID_ANY );
	
	// Connect Events
	m_BtnEnDis->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame3::OnClickEnDisBtn ), NULL, this );
	m_sdbSizer3Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame3::OnCancelButtonClickSetting ), NULL, this );
	m_sdbSizer3Save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame3::OnSaveButtonClickSetting ), NULL, this );
	m_CloseBtn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame3::OnClickCloseBtn ), NULL, this );
}

MainFrame3::~MainFrame3()
{
	// Disconnect Events
	m_BtnEnDis->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame3::OnClickEnDisBtn ), NULL, this );
	m_sdbSizer3Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame3::OnCancelButtonClickSetting ), NULL, this );
	m_sdbSizer3Save->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame3::OnSaveButtonClickSetting ), NULL, this );
	m_CloseBtn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame3::OnClickCloseBtn ), NULL, this );
}
