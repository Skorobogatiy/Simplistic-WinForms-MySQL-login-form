#include <stdlib.h>
#include <iostream>


#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

#include "MainForm.h"
#include "LoginForm.h"
#include "RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{


	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	User^ user = nullptr;


	while (true)
	{
		VisualDB::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.SwitchToRegister)
		{
			VisualDB::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.SwitchToLogin)
			{
				continue;
			}
			else
			{
				user = registerForm.user;
				break;
			}
		}
		else 
		{
			user = loginForm.user;
			break;
		}
	}

	if (user != nullptr) {
		VisualDB::MainForm mainForm(user);
		Application::Run(% mainForm);
	}
	else
	{
		MessageBox::Show("Authentication failed successfully", "Prog.cpp", MessageBoxButtons::OK);
	}


	return 0;
}