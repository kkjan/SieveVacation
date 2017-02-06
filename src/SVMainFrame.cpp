#include <wx/socket.h>
#include <wx/textctrl.h>

#include "SVMainFrame.h"

BEGIN_EVENT_TABLE(SVMainFrame, wxFrame)
    EVT_SOCKET(SOCKET_ID,SVMainFrame::OnSocketEvent)
END_EVENT_TABLE()

SVMainFrame::SVMainFrame( wxWindow* parent ): MainFrame( parent ){
    wxString str, str1;
    int i;


    wxFileConfig *config = new wxFileConfig(_T("wxSieveVacation"));

    config->Read(_T("General/host"), &str);
    m_textCtrl_host->ChangeValue(str);
    config->Read(_T("General/port"), &str);
    m_textCtrl_port->ChangeValue(str);
    config->Read(_T("General/login"), &str);
    m_textCtrl_login->ChangeValue(str);
    config->Read(_T("General/password"), &str);
    m_textCtrl_pwd->ChangeValue(str);
    config->Read(_T("General/email"), &str);
    m_textCtrlEmail->ChangeValue(str);
    
        config->Read(_T("General/subject"), &str);
    m_textCtrlSubject->ChangeValue(str);

    config->Read(_T("General/text"), &str);
    m_textCtrlVacationText->ChangeValue(str);

      m_sock = new wxSocketClient();


     m_sock->SetFlags(wxSOCKET_NONE);
  // Setup the event handler and subscribe to most events
  m_sock->SetEventHandler(*this, SOCKET_ID);
  m_sock->SetNotify(wxSOCKET_CONNECTION_FLAG |
                    wxSOCKET_INPUT_FLAG |
                    wxSOCKET_LOST_FLAG);
  m_sock->Notify(true);

  m_busy = false;
  LoginSV();
if (!LoginOK) return;


        WriteSock(ListScripts);



 ReadSock();
if (recvstr.Contains(_T("\"" scriptname "\" ACTIVE"))){
    m_BtnEnDis->SetLabel(_T("Disable"));
    m_statusBar->SetStatusText(_T("Auto response activated"),0);
    m_statusBar->SetForegroundColour(wxT("RED"));
    m_statusBar->SetBackgroundColour(wxT("YELLOW"));
    m_statusBar->ClearBackground();
}else{
    m_BtnEnDis->SetLabel(_T("Enable"));
    m_statusBar->SetStatusText(_T("Auto response deactivated"),0);
     m_statusBar->SetForegroundColour(wxT("DEFAULT"));
    m_statusBar->SetBackgroundColour(wxT("DEFAULT"));
}


;
WriteSock(GetScript);


 ReadSock();
if (recvstr.Contains(_T("NO "))){

    str=ScriptData;

    str1=m_textCtrlEmail->GetValue();
    str.Replace(_T("<address>"),m_textCtrlEmail->GetValue());
    str.Replace(_T("<subject>"),m_textCtrlSubject->GetValue());
    str.Replace(_T("<text>"),m_textCtrlVacationText->GetValue());
    config->Write(_T("General/subject"), m_textCtrlSubject->GetValue());
config->Write(_T("General/text"), m_textCtrlVacationText->GetValue());


    int len;
    len=strlen(str.mb_str());
   WriteSock(PutScript(len));

         //wxString::FromAscii(encoded.c_str()).c_str())

       WriteSock(PutScriptData(str.c_str()));

         ReadSock();

//m_busy=true;
 //while(m_busy)
   //         wxYield();
}

delete config;
}
SVMainFrame::~SVMainFrame(){

}
void SVMainFrame::OnClickEnDisBtn( wxCommandEvent& event ){
    int i;

wxFileConfig *config = new wxFileConfig(_T("wxSieveVacation"));
wxString str, str1;
;
WriteSock(ListScripts);

 ReadSock();


if (recvstr.Contains(_T("\"" scriptname "\" ACTIVE"))){

    m_BtnEnDis->SetLabel(_T("Enable"));
    WriteSock(DisableActiveScript);
     ReadSock();
     WriteSock(DeleteScript);
     ReadSock();
       m_statusBar->SetStatusText(_T("Auto response deactivated"),0);
     m_statusBar->SetForegroundColour(wxT("DEFAULT"));
    m_statusBar->SetBackgroundColour(wxT("DEFAULT"));
     m_statusBar->SetStatusText(_T("Auto response deactivated"),0);

    ;
}else{

    m_BtnEnDis->SetLabel(_T("Disable"));
    str=ScriptData;

    str1=m_textCtrlEmail->GetValue();
    str.Replace(_T("<address>"),m_textCtrlEmail->GetValue());
    str.Replace(_T("<subject>"),m_textCtrlSubject->GetValue());
    str.Replace(_T("<text>"),m_textCtrlVacationText->GetValue());



    int len;
    len=strlen(str.mb_str());
   WriteSock(PutScript(len));

         //wxString::FromAscii(encoded.c_str()).c_str())

       WriteSock(PutScriptData(str.c_str()));

         ReadSock();
    WriteSock(SetActiveScript);
     ReadSock();

    m_statusBar->SetForegroundColour(wxT("RED"));
    m_statusBar->SetBackgroundColour(wxT("YELLOW"));
    m_statusBar->ClearBackground();
     m_statusBar->SetStatusText(_T("Auto response activated"),0);
    ;

    wxFileConfig *config = new wxFileConfig(_T("wxSieveVacation"));
     config->Write(_T("General/subject"), m_textCtrlSubject->GetValue());
     config->Write(_T("General/text"), m_textCtrlVacationText->GetValue());
  delete config;

}



delete config;


}



void SVMainFrame::OnCancelButtonClickScript( wxCommandEvent& event )
{
	// TODO: Implement OnCancelButtonClickScript
}

void SVMainFrame::OnSaveButtonClickScript( wxCommandEvent& event )
{
	// TODO: Implement OnSaveButtonClickScript
     wxFileConfig *config = new wxFileConfig(_T("wxSieveVacation"));

    config->Write(_T("General/email"), m_textCtrlEmail->GetValue());
    config->Write(_T("General/subject"), m_textCtrlSubject->GetValue());
    config->Write(_T("General/text"), m_textCtrlVacationText->GetValue());
    delete config;
}
void SVMainFrame::OnCancelButtonClickSetting( wxCommandEvent& event )
{
	// TODO: Implement OnCancelButtonClickScript
}

void SVMainFrame::OnSaveButtonClickSetting( wxCommandEvent& event )
{
	// TODO: Implement OnClickSettingBtnOk
    wxFileConfig *config = new wxFileConfig(_T("wxSieveVacation"));
    config->Write(_T("General/host"), m_textCtrl_host->GetValue());
   config->Write(_T("General/port"), m_textCtrl_port->GetValue());
   config->Write(_T("General/login"), m_textCtrl_login->GetValue());
   config->Write(_T("General/password"), m_textCtrl_pwd->GetValue());
   config->Write(_T("General/email"), m_textCtrlEmail->GetValue());
   config->Write(_T("General/subject"), m_textCtrlSubject->GetValue());
   config->Write(_T("General/text"), m_textCtrlVacationText->GetValue());
  delete config;
  if (!LoginSV())
    m_notebook1->SetSelection(0);
  else
    m_notebook1->SetSelection(1);


}

void SVMainFrame::OnClickCloseBtn( wxCommandEvent& event )
{
	// TODO: Implement OnClickCloseBtn
//while(m_busy)
  //          wxYield();
      //delete m_sock;

    Close(true);

}

void SVMainFrame::OnSocketEvent( wxSocketEvent& event ){


wxString s = _("\nOnSocketEvent: ");





  switch(event.GetSocketEvent())
  {
    case wxSOCKET_INPUT      :

        s.Append(_("\nwxSOCKET_INPUT\n"));


    // while (i!=0){



    break;
    case wxSOCKET_LOST       :
        s.Append(_("\nwxSOCKET_LOST\n"));

     break;
    case wxSOCKET_CONNECTION :
s.Append(_("\nwxSOCKET_CONNECTION\n"));
    break;
    default                  :
        s.Append(_("\nUnexpected event !\n"));
    break;
  }



}

int SVMainFrame::LoginSV(){
   LoginOK=false;
    wxString login;
    wxString pwd;

    char *str;
std::string l,p,s;
int size,j,i;
std::string encoded;//



login =m_textCtrl_login->GetValue();
pwd=m_textCtrl_pwd->GetValue();

l=std::string(login.mb_str());
p=std::string(pwd.mb_str());


size=l.length()+p.length()+2;
str=(char*) malloc (size);
str[0]=0x0;

for(i=1;i<l.length()+1;i++){
    str[i]=l[i-1];
}

str[i]=0x0;
i++;
for(;i<(size);i++){
    str[i]=p[i-l.length()-2];
}


encoded= base64_encode((unsigned char*) str, size);


 wxIPV4address addr;
 addr.Hostname(m_textCtrl_host->GetValue());
  addr.Service(wxAtoi(m_textCtrl_port->GetValue()));

   if(m_sock->IsConnected()){
       m_sock->Close();
   }
     if(!m_sock->IsConnected()){
          m_textCtrlLog->AppendText(_("\nTrying to connect (timeout = 10 sec) ...\n"));

  m_sock->Connect(addr, false);
  m_sock->WaitOnConnect(5);


  if(m_sock->IsConnected()){



 // m_sock->WaitForRead(5,0);
  ReadSock();
      if (recvstr.Contains(_T("OK "))){





        m_busy=true;

      WriteSock(LoginCmd(wxString::FromAscii(encoded.c_str()).c_str()));

    ReadSock();


              if (recvstr.Contains(_T("OK"))){

                  //TODO: Dopisat script
              }else{
               wxMessageBox(recvstr,_T("Login failed"),wxICON_ERROR|wxOK );
               m_notebook1->SetSelection(1);
               LoginOK=false;
               m_BtnEnDis->Disable();
                return -2;
              }
      }
      }else{
          wxMessageBox(_T("Host not found"),_T("Host not found"),wxICON_ERROR|wxOK );
          m_notebook1->SetSelection(1);
          LoginOK=false;
          m_BtnEnDis->Disable();
          return -1;
      }



  }
  LoginOK=true;
  m_BtnEnDis->Enable(true);
  //delete[] readbuf;*/
  return 0;
}

void SVMainFrame::ReadSock(){
    int j;
    char readbuf[1024];

   if (! m_sock->WaitForRead(5,0))
           wxMessageBox(_T("TimeOut error"),_T("TimeOut error"),wxICON_ERROR|wxOK);
    recvstr.Clear();
for(j=0;j<sizeof(readbuf);j++)
              readbuf[j]=0;
  while (m_sock->IsData()) {
      m_sock->Read(readbuf,sizeof(readbuf));

      recvstr.Append(wxString::FromAscii(readbuf));
      m_sock->WaitForRead(0,0);
      wxYield();
       m_sock->WaitForRead(0,0);
  }
  m_textCtrlLog->AppendText(_T("\nRESPONSE: "));
  m_textCtrlLog->AppendText(recvstr);
}


void SVMainFrame::WriteSock(wxString senddata){
    char send[1024];
    int j;
    if (! m_sock->WaitForWrite(5,0))
           wxMessageBox(_T("TimeOut error"),_T("TimeOut error"),wxICON_ERROR|wxOK);

for(j=0;j<sizeof(send);j++)
              send[j]=0;
strcpy( send, (const char*)senddata.mb_str() );

m_sock->Write(send,strlen(send));
m_textCtrlLog->AppendText(_T("\nCOMMAND: "));
m_textCtrlLog->AppendText(wxString::FromAscii(send));
return;
}
