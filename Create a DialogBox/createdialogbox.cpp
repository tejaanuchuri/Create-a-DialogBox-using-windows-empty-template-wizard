#include<afxwin.h>
#include "resource.h"

class Ccreatadialogbox : public CWinApp {
	BOOL InitInstance();
};
class Cdialogbox : public CDialog {
public:
	enum { IDD = IDD_DIALOG_CREATE_DLG };

	Cdialogbox();
	~Cdialogbox();

};
Cdialogbox::Cdialogbox() :CDialog(Cdialogbox::IDD) {

}
Cdialogbox::~Cdialogbox() {

}

BOOL Ccreatadialogbox::InitInstance()
{
	Cdialogbox dlg;
	m_pMainWnd = &dlg;
	dlg.DoModal();
	return TRUE;
}

Ccreatadialogbox theApp;