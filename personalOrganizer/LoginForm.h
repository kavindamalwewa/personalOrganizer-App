#pragma once
#include "User.h"

namespace personalOrganizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbusername;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::Button^ btnok;
	private: System::Windows::Forms::Button^ btncancel;
	private: System::Windows::Forms::LinkLabel^ llregister;

	private: System::Windows::Forms::Label^ label4;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbusername = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->btnok = (gcnew System::Windows::Forms::Button());
			this->btncancel = (gcnew System::Windows::Forms::Button());
			this->llregister = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(553, 48);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"User Name";
			// 
			// tbusername
			// 
			this->tbusername->Location = System::Drawing::Point(191, 93);
			this->tbusername->Name = L"tbusername";
			this->tbusername->Size = System::Drawing::Size(346, 38);
			this->tbusername->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 32);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &LoginForm::label3_Click);
			// 
			// tbpassword
			// 
			this->tbpassword->Location = System::Drawing::Point(191, 166);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(346, 38);
			this->tbpassword->TabIndex = 4;
			// 
			// btnok
			// 
			this->btnok->Location = System::Drawing::Point(109, 264);
			this->btnok->Name = L"btnok";
			this->btnok->Size = System::Drawing::Size(139, 43);
			this->btnok->TabIndex = 5;
			this->btnok->Text = L"OK";
			this->btnok->UseVisualStyleBackColor = true;
			this->btnok->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// btncancel
			// 
			this->btncancel->Location = System::Drawing::Point(329, 264);
			this->btncancel->Name = L"btncancel";
			this->btncancel->Size = System::Drawing::Size(139, 43);
			this->btncancel->TabIndex = 6;
			this->btncancel->Text = L"Cancel";
			this->btncancel->UseVisualStyleBackColor = true;
			this->btncancel->Click += gcnew System::EventHandler(this, &LoginForm::btncancel_Click);
			// 
			// llregister
			// 
			this->llregister->AutoSize = true;
			this->llregister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llregister->Location = System::Drawing::Point(324, 339);
			this->llregister->Name = L"llregister";
			this->llregister->Size = System::Drawing::Size(104, 29);
			this->llregister->TabIndex = 7;
			this->llregister->TabStop = true;
			this->llregister->Text = L"Register";
			this->llregister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkLabel1_LinkClicked);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(68, 339);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(262, 32);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Don\'t have an account\?";
			this->label4->Click += gcnew System::EventHandler(this, &LoginForm::label4_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(552, 381);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->llregister);
			this->Controls->Add(this->btncancel);
			this->Controls->Add(this->btnok);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbusername);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginForm";
			this->Text = L"Login Form";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = this->tbusername->Text;
		String^ password = this->tbpassword->Text;

		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show("Enter username and password", "Login Denied", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		try {
			String^ connString = "Data Source=KAVINDA_MALWEWA\\sqlexpress;Initial Catalog=useraccountsystem;Integrated Security=True;TrustServerCertificate=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE name=@name AND password=@pwd;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", username);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->email = reader->GetString(2);
				user->phone = reader->GetString(3);
				user->address = reader->GetString(4);
				user->password = reader->GetString(5);
				this->Close();
			}
			else {
				MessageBox::Show("Email or password is incorrect", "Email or Password Error", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database", "Database Connection Error", MessageBoxButtons::OK);
		}

	}
	private: System::Void btncancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public:User^ user = nullptr;
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	public: bool switchToRegister = false;

	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToRegister = true;
		this->Close();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}