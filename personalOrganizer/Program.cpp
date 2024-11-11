#include"LoginForm.h"
#include"RegisterForm.h"
#include"Dashboard.h"
#include"Income.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true) {
		personalOrganizer::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			personalOrganizer::RegisterForm registerform;
			registerform.ShowDialog();

			if (registerform.switchToLogin) {
				continue;
			}
			else {
				user = registerform.user;
				break;
			}
		}
		else {
			user = loginForm.user;
			break;
		}

	}

	if (user != nullptr) {
		//MessageBox::Show("Successfull Authentification of " + user->name, "LoginForm.cpp", MessageBoxButtons::OK);
		personalOrganizer::Dashboard dashboard(user);
		Application::Run(% dashboard);
	}
}