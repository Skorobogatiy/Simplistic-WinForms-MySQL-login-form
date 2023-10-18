#pragma once

#include "mysql_connection.h"

#include "User.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>


namespace VisualDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbMail;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbBio;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbPass;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbConfirmPass;
	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::Button^ btnBack;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbMail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbBio = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbPass = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPass = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Teal;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(857, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(31, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RegisterForm::button1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Teal;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rondalo", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(876, 41);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Create new profile";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Teal;
			this->label2->Font = (gcnew System::Drawing::Font(L"Rondalo", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(190, 30);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Name";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbName
			// 
			this->tbName->BackColor = System::Drawing::Color::Teal;
			this->tbName->Location = System::Drawing::Point(214, 139);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(674, 30);
			this->tbName->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Teal;
			this->label3->Font = (gcnew System::Drawing::Font(L"Rondalo", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(17, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(190, 30);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Email";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbMail
			// 
			this->tbMail->BackColor = System::Drawing::Color::Teal;
			this->tbMail->Location = System::Drawing::Point(214, 175);
			this->tbMail->Name = L"tbMail";
			this->tbMail->Size = System::Drawing::Size(674, 30);
			this->tbMail->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Teal;
			this->label4->Font = (gcnew System::Drawing::Font(L"Rondalo", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(17, 211);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(190, 30);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Bio (optional)";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbBio
			// 
			this->tbBio->BackColor = System::Drawing::Color::Teal;
			this->tbBio->Location = System::Drawing::Point(214, 211);
			this->tbBio->Name = L"tbBio";
			this->tbBio->Size = System::Drawing::Size(674, 30);
			this->tbBio->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Teal;
			this->label5->Font = (gcnew System::Drawing::Font(L"Rondalo", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(17, 247);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(190, 30);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Password";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbPass
			// 
			this->tbPass->BackColor = System::Drawing::Color::Teal;
			this->tbPass->Location = System::Drawing::Point(214, 247);
			this->tbPass->Name = L"tbPass";
			this->tbPass->PasswordChar = '*';
			this->tbPass->Size = System::Drawing::Size(674, 30);
			this->tbPass->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Teal;
			this->label6->Font = (gcnew System::Drawing::Font(L"Rondalo", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(17, 283);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(190, 30);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Confirm password";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbConfirmPass
			// 
			this->tbConfirmPass->BackColor = System::Drawing::Color::Teal;
			this->tbConfirmPass->Location = System::Drawing::Point(214, 283);
			this->tbConfirmPass->Name = L"tbConfirmPass";
			this->tbConfirmPass->PasswordChar = '*';
			this->tbConfirmPass->Size = System::Drawing::Size(674, 30);
			this->tbConfirmPass->TabIndex = 3;
			// 
			// btnOk
			// 
			this->btnOk->BackColor = System::Drawing::Color::Teal;
			this->btnOk->Location = System::Drawing::Point(690, 339);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(96, 39);
			this->btnOk->TabIndex = 4;
			this->btnOk->Text = L"OK";
			this->btnOk->UseVisualStyleBackColor = false;
			this->btnOk->Click += gcnew System::EventHandler(this, &RegisterForm::btnOk_Click);
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::Teal;
			this->btnBack->Location = System::Drawing::Point(792, 339);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(96, 39);
			this->btnBack->TabIndex = 4;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &RegisterForm::btnBack_Click);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(900, 465);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->tbConfirmPass);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbPass);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbBio);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbMail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Rondalo", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
public: bool SwitchToLogin = false;

	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->SwitchToLogin = true;
		this->Close();
	}

public: User^ user = nullptr;
private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = tbName->Text;
	String^ email = tbMail->Text;
	String^ bio = tbBio->Text;
	String^ pass = tbPass->Text;
	String^ confPass = tbConfirmPass->Text;

	if (name->Length == 0 || email->Length == 0 || pass->Length == 0 || confPass->Length == 0)
	{
		MessageBox::Show("Please fill the obligatory fields", "Obligatory field empty", MessageBoxButtons::OK);
		return;
	}
	if (String::Compare(pass, confPass) != 0)
	{
		MessageBox::Show("Entered passwords do not match", "Password error", MessageBoxButtons::OK);
		return;
	}
	try
	{
		String^ connString = "server=localhost;user id=root;database=test;port=3306;password=root";
		MySqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ query = "INSERT INTO people (name, mail, bio, birth, password) VALUES (@name,@mail,@bio,0000,@password)";
		MySqlCommand command(query, % sqlConn);
		
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@mail", email);
		command.Parameters->AddWithValue("@bio", bio);
		command.Parameters->AddWithValue("@password", pass);

		
		command.ExecuteNonQuery();

		user = gcnew User;
		user->name = name;
		user->mail = email;
		user->bio = bio;
		user->password = pass;
		this->Close();

		sqlConn.Close();
	}
	catch (sql::SQLException& e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << endl;
	}
}
};
}
