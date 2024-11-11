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
			this->CenterToScreen();
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbname;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbemail;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbphone;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbaddress;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbconfirmpassword;
	private: System::Windows::Forms::Button^ btnok;
	private: System::Windows::Forms::Button^ btncancel;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::LinkLabel^ lllogin;








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
			this->tbname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbphone = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbaddress = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbconfirmpassword = (gcnew System::Windows::Forms::TextBox());
			this->btnok = (gcnew System::Windows::Forms::Button());
			this->btncancel = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lllogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-1, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(600, 59);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &RegisterForm::label1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 38);
			this->label2->TabIndex = 1;
			this->label2->Text = L"User Name";
			this->label2->Click += gcnew System::EventHandler(this, &RegisterForm::label2_Click);
			// 
			// tbname
			// 
			this->tbname->Location = System::Drawing::Point(218, 89);
			this->tbname->Name = L"tbname";
			this->tbname->Size = System::Drawing::Size(362, 34);
			this->tbname->TabIndex = 2;
			this->tbname->TextChanged += gcnew System::EventHandler(this, &RegisterForm::tbname_TextChanged);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 38);
			this->label3->TabIndex = 1;
			this->label3->Text = L"E-mail";
			this->label3->Click += gcnew System::EventHandler(this, &RegisterForm::label2_Click);
			// 
			// tbemail
			// 
			this->tbemail->Location = System::Drawing::Point(218, 145);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(362, 34);
			this->tbemail->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 206);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(186, 38);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Phone Number";
			this->label4->Click += gcnew System::EventHandler(this, &RegisterForm::label2_Click);
			// 
			// tbphone
			// 
			this->tbphone->Location = System::Drawing::Point(218, 203);
			this->tbphone->Name = L"tbphone";
			this->tbphone->Size = System::Drawing::Size(362, 34);
			this->tbphone->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 259);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 38);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Address";
			this->label5->Click += gcnew System::EventHandler(this, &RegisterForm::label2_Click);
			// 
			// tbaddress
			// 
			this->tbaddress->Location = System::Drawing::Point(218, 256);
			this->tbaddress->Name = L"tbaddress";
			this->tbaddress->Size = System::Drawing::Size(362, 34);
			this->tbaddress->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(13, 311);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 38);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Password";
			this->label6->Click += gcnew System::EventHandler(this, &RegisterForm::label2_Click);
			// 
			// tbpassword
			// 
			this->tbpassword->Location = System::Drawing::Point(218, 308);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(362, 34);
			this->tbpassword->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(13, 364);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(213, 38);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Confirm Password";
			this->label7->Click += gcnew System::EventHandler(this, &RegisterForm::label2_Click);
			// 
			// tbconfirmpassword
			// 
			this->tbconfirmpassword->Location = System::Drawing::Point(218, 361);
			this->tbconfirmpassword->Name = L"tbconfirmpassword";
			this->tbconfirmpassword->PasswordChar = '*';
			this->tbconfirmpassword->Size = System::Drawing::Size(362, 34);
			this->tbconfirmpassword->TabIndex = 2;
			// 
			// btnok
			// 
			this->btnok->Location = System::Drawing::Point(114, 422);
			this->btnok->Name = L"btnok";
			this->btnok->Size = System::Drawing::Size(159, 42);
			this->btnok->TabIndex = 3;
			this->btnok->Text = L"OK";
			this->btnok->UseVisualStyleBackColor = true;
			this->btnok->Click += gcnew System::EventHandler(this, &RegisterForm::btnok_Click);
			// 
			// btncancel
			// 
			this->btncancel->Location = System::Drawing::Point(342, 422);
			this->btncancel->Name = L"btncancel";
			this->btncancel->Size = System::Drawing::Size(159, 42);
			this->btncancel->TabIndex = 3;
			this->btncancel->Text = L"Cancel";
			this->btncancel->UseVisualStyleBackColor = true;
			this->btncancel->Click += gcnew System::EventHandler(this, &RegisterForm::btncancel_Click);
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(96, 485);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(321, 32);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Already have an account\? \r\n";
			this->label8->Click += gcnew System::EventHandler(this, &RegisterForm::label8_Click);
			// 
			// lllogin
			// 
			this->lllogin->AutoSize = true;
			this->lllogin->Location = System::Drawing::Point(375, 485);
			this->lllogin->Name = L"lllogin";
			this->lllogin->Size = System::Drawing::Size(73, 29);
			this->lllogin->TabIndex = 5;
			this->lllogin->TabStop = true;
			this->lllogin->Text = L"Login";
			this->lllogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::linkLabel1_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Cyan;
			this->ClientSize = System::Drawing::Size(603, 538);
			this->Controls->Add(this->lllogin);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btncancel);
			this->Controls->Add(this->btnok);
			this->Controls->Add(this->tbconfirmpassword);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbaddress);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbphone);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"RegisterForm";
			this->Text = L"Register Form";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public: bool switchToLogin = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}
	private: System::Void btncancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: User^ user = nullptr;
	private: System::Void btnok_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbname->Text;
		String^ email = tbemail->Text;
		String^ phone = tbphone->Text;
		String^ address = tbaddress->Text;
		String^ password = tbpassword->Text;
		String^ confirmpassword = tbconfirmpassword->Text;

		if (name->Length == 0 || email->Length == 0 || phone->Length == 0 || address->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter all the feilds", "On or more empty fields", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(password, confirmpassword) != 0) {
			MessageBox::Show("Password and Confirm Password do not match", "Password Error", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source=KAVINDA_MALWEWA\\sqlexpress;Initial Catalog=useraccountsystem;Integrated Security=True;TrustServerCertificate=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO users" + "(name,email,phone,address,password) VALUES" + "(@name,@email,@phone,@address,@password);";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@phone", phone);
			command.Parameters->AddWithValue("@address", address);
			command.Parameters->AddWithValue("@password", password);

			command.ExecuteNonQuery();
			user = gcnew User;
			user->name = name;
			user->email = email;
			user->phone = phone;
			user->address = address;
			user->password = password;

			this->Close();
		}

		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user", "Register Failure", MessageBoxButtons::OK);
		}
	}
	private: System::Void tbname_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}