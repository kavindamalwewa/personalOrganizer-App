#include"LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	personalOrganizer::LoginForm loginForm;
	loginForm.ShowDialog();

	User^ user = loginForm.user;
	
	if (user != nullptr) {
		MessageBox::Show("Successfull Authentification of " + user->name, "LoginForm.cpp", MessageBoxButtons::OK);
	}
}