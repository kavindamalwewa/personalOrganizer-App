#pragma once
#include"User.h"
#include"Income.h"
#include"ExpensesForm.h"
#include"BudgetForm.h"
#include"AcademicForm.h"

namespace personalOrganizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		String^ loggedInUsername;
		Dashboard(User^ user)
		{
			InitializeComponent();
			loggedInUsername = user->name;
			lbUserInfo->Text = "" + user->name;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;






	private: System::Windows::Forms::LinkLabel^ llacademic;
	private: System::Windows::Forms::LinkLabel^ llreports;
	private: System::Windows::Forms::LinkLabel^ llbudget;
	private: System::Windows::Forms::LinkLabel^ llexpenses;
	private: System::Windows::Forms::LinkLabel^ llincome;
	private: System::Windows::Forms::Button^ btnexit;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lbUserInfo;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->llacademic = (gcnew System::Windows::Forms::LinkLabel());
			this->llreports = (gcnew System::Windows::Forms::LinkLabel());
			this->llbudget = (gcnew System::Windows::Forms::LinkLabel());
			this->llexpenses = (gcnew System::Windows::Forms::LinkLabel());
			this->llincome = (gcnew System::Windows::Forms::LinkLabel());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label1->Location = System::Drawing::Point(209, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(741, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Personal Organizer App\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// llacademic
			// 
			this->llacademic->AutoSize = true;
			this->llacademic->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->llacademic->Location = System::Drawing::Point(1016, 384);
			this->llacademic->Name = L"llacademic";
			this->llacademic->Size = System::Drawing::Size(162, 76);
			this->llacademic->TabIndex = 1;
			this->llacademic->TabStop = true;
			this->llacademic->Text = L"Academic \r\nSchedule\r\n";
			this->llacademic->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Dashboard::llacademic_LinkClicked);
			// 
			// llreports
			// 
			this->llreports->AutoSize = true;
			this->llreports->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->llreports->Location = System::Drawing::Point(796, 384);
			this->llreports->Name = L"llreports";
			this->llreports->Size = System::Drawing::Size(123, 38);
			this->llreports->TabIndex = 1;
			this->llreports->TabStop = true;
			this->llreports->Text = L"Reports";
			this->llreports->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Dashboard::linkLabel4_LinkClicked);
			// 
			// llbudget
			// 
			this->llbudget->AutoSize = true;
			this->llbudget->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->llbudget->Location = System::Drawing::Point(555, 384);
			this->llbudget->Name = L"llbudget";
			this->llbudget->Size = System::Drawing::Size(115, 38);
			this->llbudget->TabIndex = 1;
			this->llbudget->TabStop = true;
			this->llbudget->Text = L"Budget";
			this->llbudget->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Dashboard::llbudget_LinkClicked);
			// 
			// llexpenses
			// 
			this->llexpenses->AutoSize = true;
			this->llexpenses->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->llexpenses->Location = System::Drawing::Point(288, 384);
			this->llexpenses->Name = L"llexpenses";
			this->llexpenses->Size = System::Drawing::Size(147, 38);
			this->llexpenses->TabIndex = 1;
			this->llexpenses->TabStop = true;
			this->llexpenses->Text = L"Expenses";
			this->llexpenses->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Dashboard::llexpenses_LinkClicked);
			// 
			// llincome
			// 
			this->llincome->AutoSize = true;
			this->llincome->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->llincome->Location = System::Drawing::Point(67, 384);
			this->llincome->Name = L"llincome";
			this->llincome->Size = System::Drawing::Size(122, 38);
			this->llincome->TabIndex = 1;
			this->llincome->TabStop = true;
			this->llincome->Text = L"Income";
			this->llincome->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Dashboard::llincome_LinkClicked);
			// 
			// btnexit
			// 
			this->btnexit->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btnexit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnexit->Location = System::Drawing::Point(982, 503);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(180, 39);
			this->btnexit->TabIndex = 2;
			this->btnexit->Text = L"Log Out";
			this->btnexit->UseVisualStyleBackColor = false;
			this->btnexit->Click += gcnew System::EventHandler(this, &Dashboard::btnexit_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1088, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(76, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->AutoSize = true;
			this->lbUserInfo->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbUserInfo->Location = System::Drawing::Point(1082, 80);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(96, 34);
			this->lbUserInfo->TabIndex = 4;
			this->lbUserInfo->Text = L"label2";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(40, 210);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(170, 140);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Dashboard::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(278, 208);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(170, 142);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(526, 208);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(170, 142);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(769, 210);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(170, 142);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(1008, 210);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(170, 142);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 9;
			this->pictureBox6->TabStop = false;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1235, 580);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->lbUserInfo);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnexit);
			this->Controls->Add(this->llacademic);
			this->Controls->Add(this->llreports);
			this->Controls->Add(this->llbudget);
			this->Controls->Add(this->llexpenses);
			this->Controls->Add(this->llincome);
			this->Controls->Add(this->label1);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linkLabel4_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	}

private: System::Void llincome_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Income^ incomeform = gcnew Income(loggedInUsername);
	incomeform->ShowDialog();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnexit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void llexpenses_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	ExpensesForm^ expensesform = gcnew ExpensesForm(loggedInUsername);
	expensesform->ShowDialog();
}
private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void llbudget_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	BudgetForm^ budgetform = gcnew BudgetForm(loggedInUsername);
	budgetform->ShowDialog();
}
private: System::Void llacademic_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	AcademicForm^ academicform = gcnew AcademicForm(loggedInUsername);
	academicform->ShowDialog();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
