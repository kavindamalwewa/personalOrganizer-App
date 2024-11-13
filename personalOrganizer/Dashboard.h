#pragma once
#include"User.h"
#include"Income.h"
#include"ExpensesForm.h"
#include"BudgetForm.h"

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->llacademic = (gcnew System::Windows::Forms::LinkLabel());
			this->llreports = (gcnew System::Windows::Forms::LinkLabel());
			this->llbudget = (gcnew System::Windows::Forms::LinkLabel());
			this->llexpenses = (gcnew System::Windows::Forms::LinkLabel());
			this->llincome = (gcnew System::Windows::Forms::LinkLabel());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-4, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(888, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Personal Organizer App\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// llacademic
			// 
			this->llacademic->AutoSize = true;
			this->llacademic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llacademic->Location = System::Drawing::Point(709, 244);
			this->llacademic->Name = L"llacademic";
			this->llacademic->Size = System::Drawing::Size(162, 72);
			this->llacademic->TabIndex = 1;
			this->llacademic->TabStop = true;
			this->llacademic->Text = L"Academic \r\nSchedule\r\n";
			// 
			// llreports
			// 
			this->llreports->AutoSize = true;
			this->llreports->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llreports->Location = System::Drawing::Point(539, 262);
			this->llreports->Name = L"llreports";
			this->llreports->Size = System::Drawing::Size(127, 36);
			this->llreports->TabIndex = 1;
			this->llreports->TabStop = true;
			this->llreports->Text = L"Reports";
			this->llreports->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Dashboard::linkLabel4_LinkClicked);
			// 
			// llbudget
			// 
			this->llbudget->AutoSize = true;
			this->llbudget->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llbudget->Location = System::Drawing::Point(373, 262);
			this->llbudget->Name = L"llbudget";
			this->llbudget->Size = System::Drawing::Size(116, 36);
			this->llbudget->TabIndex = 1;
			this->llbudget->TabStop = true;
			this->llbudget->Text = L"Budget";
			this->llbudget->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Dashboard::llbudget_LinkClicked);
			// 
			// llexpenses
			// 
			this->llexpenses->AutoSize = true;
			this->llexpenses->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llexpenses->Location = System::Drawing::Point(163, 262);
			this->llexpenses->Name = L"llexpenses";
			this->llexpenses->Size = System::Drawing::Size(154, 36);
			this->llexpenses->TabIndex = 1;
			this->llexpenses->TabStop = true;
			this->llexpenses->Text = L"Expenses";
			this->llexpenses->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Dashboard::llexpenses_LinkClicked);
			// 
			// llincome
			// 
			this->llincome->AutoSize = true;
			this->llincome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llincome->Location = System::Drawing::Point(12, 262);
			this->llincome->Name = L"llincome";
			this->llincome->Size = System::Drawing::Size(117, 36);
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
			this->btnexit->Location = System::Drawing::Point(715, 425);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(139, 39);
			this->btnexit->TabIndex = 2;
			this->btnexit->Text = L"Exit";
			this->btnexit->UseVisualStyleBackColor = false;
			this->btnexit->Click += gcnew System::EventHandler(this, &Dashboard::btnexit_Click);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(883, 488);
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
};
}
