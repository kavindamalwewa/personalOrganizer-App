#pragma once
#include"User.h"

namespace personalOrganizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for ExpensesForm
	/// </summary>
	public ref class ExpensesForm : public System::Windows::Forms::Form
	{
	public:
		String^ name;

		ExpensesForm(String^ loggedInUsername) {
			InitializeComponent();
			name = loggedInUsername;
		}

		//ExpensesForm(void)
		//{
		//	InitializeComponent();
		//	//
		//	//TODO: Add the constructor code here
		//	//
		//}

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ExpensesForm::typeid));
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnexit
			// 
			this->btnexit->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btnexit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnexit->Location = System::Drawing::Point(907, 476);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(147, 36);
			this->btnexit->TabIndex = 18;
			this->btnexit->Text = L"Exit";
			this->btnexit->UseVisualStyleBackColor = false;
			this->btnexit->Click += gcnew System::EventHandler(this, &ExpensesForm::btnexit_Click);
			// 
			// btnaddincome
			// 
			this->btnaddincome->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btnaddincome->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnaddincome->Location = System::Drawing::Point(659, 476);
			this->btnaddincome->Name = L"btnaddincome";
			this->btnaddincome->Size = System::Drawing::Size(171, 36);
			this->btnaddincome->TabIndex = 19;
			this->btnaddincome->Text = L"Add Expense";
			this->btnaddincome->UseVisualStyleBackColor = false;
			this->btnaddincome->Click += gcnew System::EventHandler(this, &ExpensesForm::btnaddincome_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(607, 245);
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
			this->label1->Location = System::Drawing::Point(607, 64);
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
			this->label3->Location = System::Drawing::Point(607, 305);
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
			this->label5->Location = System::Drawing::Point(607, 126);
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
			this->label2->Location = System::Drawing::Point(607, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 20);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Expense Source :";
			// 
			// tbexpensename
			// 
			this->tbexpensename->Location = System::Drawing::Point(765, 124);
			this->tbexpensename->Name = L"tbexpensename";
			this->tbexpensename->Size = System::Drawing::Size(197, 22);
			this->tbexpensename->TabIndex = 11;
			// 
			// tbexpenseamount
			// 
			this->tbexpenseamount->Location = System::Drawing::Point(765, 243);
			this->tbexpenseamount->Name = L"tbexpenseamount";
			this->tbexpenseamount->Size = System::Drawing::Size(197, 22);
			this->tbexpenseamount->TabIndex = 12;
			// 
			// tbexpensedescription
			// 
			this->tbexpensedescription->Location = System::Drawing::Point(611, 338);
			this->tbexpensedescription->Multiline = true;
			this->tbexpensedescription->Name = L"tbexpensedescription";
			this->tbexpensedescription->Size = System::Drawing::Size(496, 91);
			this->tbexpensedescription->TabIndex = 10;
			// 
			// cbexpensesource
			// 
			this->cbexpensesource->FormattingEnabled = true;
			this->cbexpensesource->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Food", L"Entertainment", L"Travelling",
					L"Clothing", L"Education Equipment", L"University Fees"
			});
			this->cbexpensesource->Location = System::Drawing::Point(797, 180);
			this->cbexpensesource->Name = L"cbexpensesource";
			this->cbexpensesource->Size = System::Drawing::Size(165, 24);
			this->cbexpensesource->TabIndex = 9;
			// 
			// dtpexpensedate
			// 
			this->dtpexpensedate->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dtpexpensedate->Location = System::Drawing::Point(707, 62);
			this->dtpexpensedate->MaxDate = System::DateTime(2024, 11, 12, 0, 0, 0, 0);
			this->dtpexpensedate->MinDate = System::DateTime(2024, 10, 12, 0, 0, 0, 0);
			this->dtpexpensedate->Name = L"dtpexpensedate";
			this->dtpexpensedate->Size = System::Drawing::Size(255, 22);
			this->dtpexpensedate->TabIndex = 8;
			this->dtpexpensedate->Value = System::DateTime(2024, 11, 12, 0, 0, 0, 0);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(575, 556);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// ExpensesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1119, 552);
			this->Controls->Add(this->pictureBox1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
private: System::Void btnaddincome_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ expensesource = cbexpensesource->Text;
	String^ expensename = tbexpensename->Text;
	String^ expensedate = dtpexpensedate->Value.ToString("yyyy-MM-dd");
	String^ expenseamount = tbexpenseamount->Text;
	String^ expensedescription = tbexpensedescription->Text;

	if (expensesource->Length == 0 || expensename->Length == 0 || expensedate->Length == 0 || expenseamount->Length == 0 || expensedescription->Length == 0) {
		MessageBox::Show("Please enter all the feilds", "On or more empty fields", MessageBoxButtons::OK);
		return;
	}

	try {
		String^ connString = "Data Source=KAVINDA_MALWEWA\\sqlexpress;Initial Catalog=useraccountsystem;Integrated Security=True;TrustServerCertificate=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		if (String::IsNullOrEmpty(name)) {
			MessageBox::Show("Username is not set.", "Error", MessageBoxButtons::OK);
			return;
		}

		String^ sqlQuery = "INSERT INTO expense" + "(name,expensesource,expensename,expenseamount,expensedate,expensedescription) VALUES" + "(@name,@expensesource,@expensename,@expenseamount,@expensedate,@expensedescription);";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@expensesource", expensesource);
		command.Parameters->AddWithValue("@expensename", expensename);
		command.Parameters->AddWithValue("@expenseamount", expenseamount);
		command.Parameters->AddWithValue("@expensedate", expensedate);
		command.Parameters->AddWithValue("@expensedescription", expensedescription);

		command.ExecuteNonQuery();
		MessageBox::Show("Expense record added successfully!", "Success", MessageBoxButtons::OK);
		this->Close();
	}

	catch (Exception^ ex) {
		MessageBox::Show("Failed to Update Expense. Error:" + ex->Message, "Expense Failure", MessageBoxButtons::OK);
	}
}
};
}
