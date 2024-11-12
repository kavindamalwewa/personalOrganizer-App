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
	/// Summary for Income
	/// </summary>
	public ref class Income : public System::Windows::Forms::Form
	{
	public:
		String^ name;

		Income(String^ loggedInUsername) {
			InitializeComponent();
			name = loggedInUsername;
		}

		//Income(void)
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
		~Income()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dtpincomedate;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::ComboBox^ cbincomesource;
	private: System::Windows::Forms::TextBox^ tbincomedescription;

	private: System::Windows::Forms::TextBox^ tbincomeamount;









	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbincomename;


	private: System::Windows::Forms::Button^ btnaddincome;
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
			this->dtpincomedate = (gcnew System::Windows::Forms::DateTimePicker());
			this->cbincomesource = (gcnew System::Windows::Forms::ComboBox());
			this->tbincomedescription = (gcnew System::Windows::Forms::TextBox());
			this->tbincomeamount = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbincomename = (gcnew System::Windows::Forms::TextBox());
			this->btnaddincome = (gcnew System::Windows::Forms::Button());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// dtpincomedate
			// 
			this->dtpincomedate->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dtpincomedate->Location = System::Drawing::Point(99, 96);
			this->dtpincomedate->Name = L"dtpincomedate";
			this->dtpincomedate->Size = System::Drawing::Size(255, 22);
			this->dtpincomedate->TabIndex = 0;
			this->dtpincomedate->ValueChanged += gcnew System::EventHandler(this, &Income::dateTimePicker1_ValueChanged);
			// 
			// cbincomesource
			// 
			this->cbincomesource->FormattingEnabled = true;
			this->cbincomesource->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Job", L"Allowance from parents", L"Scholarships",
					L"Student Aid"
			});
			this->cbincomesource->Location = System::Drawing::Point(180, 42);
			this->cbincomesource->Name = L"cbincomesource";
			this->cbincomesource->Size = System::Drawing::Size(174, 24);
			this->cbincomesource->TabIndex = 2;
			// 
			// tbincomedescription
			// 
			this->tbincomedescription->Location = System::Drawing::Point(158, 139);
			this->tbincomedescription->Multiline = true;
			this->tbincomedescription->Name = L"tbincomedescription";
			this->tbincomedescription->Size = System::Drawing::Size(548, 91);
			this->tbincomedescription->TabIndex = 4;
			// 
			// tbincomeamount
			// 
			this->tbincomeamount->Location = System::Drawing::Point(534, 94);
			this->tbincomeamount->Name = L"tbincomeamount";
			this->tbincomeamount->Size = System::Drawing::Size(229, 22);
			this->tbincomeamount->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Income Source :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Description :";
			this->label3->Click += gcnew System::EventHandler(this, &Income::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(388, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Amount :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Date :";
			this->label1->Click += gcnew System::EventHandler(this, &Income::label3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(388, 46);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Income Name:";
			// 
			// tbincomename
			// 
			this->tbincomename->Location = System::Drawing::Point(534, 42);
			this->tbincomename->Name = L"tbincomename";
			this->tbincomename->Size = System::Drawing::Size(229, 22);
			this->tbincomename->TabIndex = 5;
			// 
			// btnaddincome
			// 
			this->btnaddincome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnaddincome->Location = System::Drawing::Point(215, 268);
			this->btnaddincome->Name = L"btnaddincome";
			this->btnaddincome->Size = System::Drawing::Size(139, 36);
			this->btnaddincome->TabIndex = 7;
			this->btnaddincome->Text = L"Add Income";
			this->btnaddincome->UseVisualStyleBackColor = true;
			this->btnaddincome->Click += gcnew System::EventHandler(this, &Income::btnaddincome_Click);
			// 
			// btnexit
			// 
			this->btnexit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnexit->Location = System::Drawing::Point(534, 268);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(126, 36);
			this->btnexit->TabIndex = 7;
			this->btnexit->Text = L"Exit";
			this->btnexit->UseVisualStyleBackColor = true;
			this->btnexit->Click += gcnew System::EventHandler(this, &Income::button2_Click);
			// 
			// Income
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
			this->Controls->Add(this->tbincomename);
			this->Controls->Add(this->tbincomeamount);
			this->Controls->Add(this->tbincomedescription);
			this->Controls->Add(this->cbincomesource);
			this->Controls->Add(this->dtpincomedate);
			this->Name = L"Income";
			this->Text = L"Income";
			this->Load += gcnew System::EventHandler(this, &Income::Income_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Income_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

//public: User^ user = nullptr;
private: System::Void btnaddincome_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ incomesource = cbincomesource->Text;
	String^ incomename = tbincomename->Text;
	String^ incomedate = dtpincomedate->Value.ToString("yyyy-MM-dd");
	String^ incomeamount = tbincomeamount->Text;
	String^ incomedescription = tbincomedescription->Text;

	if (incomesource->Length == 0 || incomename->Length == 0 || incomedate->Length == 0 || incomeamount->Length == 0 || incomedescription->Length == 0) {
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

		String^ sqlQuery = "INSERT INTO income" + "(name,incomesource,incomename,incomeamount,incomedate,incomedescription) VALUES" + "(@name,@incomesource,@incomename,@incomeamount,@incomedate,@incomedescription);";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@name",name);
		command.Parameters->AddWithValue("@incomesource", incomesource);
		command.Parameters->AddWithValue("@incomename", incomename);
		command.Parameters->AddWithValue("@incomeamount", incomeamount);
		command.Parameters->AddWithValue("@incomedate", incomedate);
		command.Parameters->AddWithValue("@incomedescription", incomedescription);

		command.ExecuteNonQuery();
		MessageBox::Show("Income record added successfully!", "Success", MessageBoxButtons::OK);
		this->Close();
	}

	catch (Exception^ ex) {
		MessageBox::Show("Failed to Update Income. Error:" + ex->Message, "Income Failure", MessageBoxButtons::OK);
	}


}
};
}
