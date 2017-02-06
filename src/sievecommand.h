/*
 * File:   sievecommand.h
 * Author: janschml
 *
 * Created on Piatok, 2010, mĂˇj 7, 14:51
 */

#ifndef _SIEVECOMMAND_H
#define	_SIEVECOMMAND_H
#define scriptname "JSSieveVacation.sieve"
#define LoginCmd(encoded) wxString::Format(_T("authenticate \"plain\" \"%s\"\n"),encoded)
#define ListScripts wxString::Format(_T("LISTSCRIPTS\n"))
#define GetScript wxString::Format(_T("GETSCRIPT \"" scriptname "\"\n"))
#define PutScript(ssize) wxString::Format(_T("PUTSCRIPT \"" scriptname "\" {%d}\n"),ssize)
#define PutScriptData(data) wxString::Format(_T("%s\n"),data)
#define SetActiveScript wxString::Format(_T("SETACTIVE \"" scriptname "\"\n"))
#define DisableActiveScript wxString::Format(_T("SETACTIVE \"\" \n"))
#define DeleteScript wxString::Format(_T("DELETESCRIPT \"" scriptname "\"\n"))

#define ScriptData _T("require \"vacation\";\n\
\n\
if header :contains \"X-Spam-Flag\" \"YES\" { keep; stop; }\n\
vacation\n :days 1\n:subject \"<subject>\"\n:addresses \"<address>\"\n  \"<text>\";")

#endif	/* _SIEVECOMMAND_H */

