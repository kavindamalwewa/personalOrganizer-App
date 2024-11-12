#pragma once

namespace personalOrganizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ExpensesForm
	/// </summary>
	public ref class ExpensesForm : public System::Windows::Forms::Form
	{
	public:
		ExpensesForm(void)
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
		~ExpensesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnexit;
	protected:
	private: System::Windows::Forms::Button^ btnaddincome;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbexpensename;

	private: System::Windows::Forms::TextBox^ tbexpenseamount;
	private: System::Windows::Forms::TextBox^ tbexpensedescription;



	private: System::Windows::Forms::ComboBox^ cbexpensesource;
	private: System::Windows::Forms::DateTimePicker^ dtpexpensedate;




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
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->btnaddincome = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbexpensename = (gcnew System::Windows::Forms::TextBox());
			this->tbexpenseamount = (gcnew System::Windows::Forms::TextBox());
			this->tbexpensedescription = (gcnew System::Windows::Forms::TextBox());
			this->cbexpensesource = (gcnew System::Windows::Forms::ComboBox());
			this->dtpexpensedate = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// btnexit
			// 
			this->btnexit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnexit->Location = System::Drawing::Point(559, 272);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(126, 36);
			this->btnexit->TabIndex = 18;
			this->btnexit->Text = L"Exit";
			this->btnexit->UseVisualStyleBackColor = true;
			this->btnexit->Click += gcnew System::EventHandler(this, &ExpensesForm::btnexit_Click);
			// 
			// btnaddincome
			// 
			this->btnaddincome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnaddincome->Location = System::Drawing::Point(229, 272);
			this->btnaddincome->Name = L"btnaddincome";
			this->btnaddincome->Size = System::Drawing::Size(150, 36);
			this->btnaddincome->TabIndex = 19;
			this->btnaddincome->Text = L"Add Expense";
			this->btnaddincome->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(413, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 20);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Amount :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 20);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Date :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 20);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Description :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(413, 50);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 20);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Expense Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 20);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Expense Source :";
			// 
			// tbexpensename
			// 
			this->tbexpensename->Location = System::Drawing::Point(579, 52);
			this->tbexpensename->Name = L"tbexpensename";
			this->tbexpensename->Size = System::Drawing::Size(209, 22);
			this->tbexpensename->TabIndex = 11;
			// 
			// tbexpenseamount
			// 
			this->tbexpenseamount->Location = System::Drawing::Point(559, 98);
			this->tbexpenseamount->Name = L"tbexpenseamount";
			this->tbexpenseamount->Size = System::Drawing::Size(229, 22);
			this->tbexpenseamount->TabIndex = 12;
			// 
			// tbexpensedescription
			// 
			this->tbexpensedescription->Location = System::Drawing::Point(190, 141);
			this->tbexpensedescription->Multiline = true;
			this->tbexpensedescription->Name = L"tbexpensedescription";
			this->tbexpensedescription->Size = System::Drawing::Size(546, 91);
			this->tbexpensedescription->TabIndex = 10;
			// 
			// cbexpensesource
			// 
			this->cbexpensesource->FormattingEnabled = true;
			this->cbexpensesource->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Food", L"Entertainment", L"Travelling",
					L"Clothing", L"Education Equipment", L"University Fees"
			});
			this->cbexpensesource->Location = System::Drawing::Point(214, 50);
			this->cbexpensesource->Name = L"cbexpensesource";
			this->cbexpensesource->Size = System::Drawing::Size(165, 24);
			this->cbexpensesource->TabIndex = 9;
			// 
			// dtpexpensedate
			// 
			this->dtpexpensedate->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dtpexpensedate->Location = System::Drawing::Point(124, 100);
			this->dtpexpensedate->Name = L"dtpexpensedate";
			this->dtpexpensedate->Size = System::Drawing::Size(255, 22);
			this->dtpexpensedate->TabIndex = 8;
			// 
			// ExpensesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(825, 355);
			this->Controls->Add(this->btnexit);
			this->Controls->Add(this->btnaddincome);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbexpensename);
			this->Controls->Add(this->tbexpenseamount);
			this->Controls->Add(this->tbexpensedescription);
			this->Controls->Add(this->cbexpensesource);
			this->Controls->Add(this->dtpexpensedate);
			this->Name = L"ExpensesForm";
			this->Text = L"ExpensesForm";
			this->Load += gcnew System::EventHandler(this, &ExpensesForm::ExpensesForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tbincome_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnexit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void ExpensesForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
