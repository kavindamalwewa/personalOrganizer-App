#pragma once

namespace personalOrganizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Income
	/// </summary>
	public ref class Income : public System::Windows::Forms::Form
	{
	public:
		Income(void)
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
		~Income()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dtpdate;
	protected:

	private: System::Windows::Forms::ComboBox^ cbincomesource;
	private: System::Windows::Forms::TextBox^ tbdescription;






	private: System::Windows::Forms::TextBox^ tbamount;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbincome;

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
			this->dtpdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->cbincomesource = (gcnew System::Windows::Forms::ComboBox());
			this->tbdescription = (gcnew System::Windows::Forms::TextBox());
			this->tbamount = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbincome = (gcnew System::Windows::Forms::TextBox());
			this->btnaddincome = (gcnew System::Windows::Forms::Button());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// dtpdate
			// 
			this->dtpdate->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpdate->Location = System::Drawing::Point(99, 96);
			this->dtpdate->Name = L"dtpdate";
			this->dtpdate->Size = System::Drawing::Size(255, 22);
			this->dtpdate->TabIndex = 0;
			this->dtpdate->ValueChanged += gcnew System::EventHandler(this, &Income::dateTimePicker1_ValueChanged);
			// 
			// cbincomesource
			// 
			this->cbincomesource->FormattingEnabled = true;
			this->cbincomesource->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Job", L"Allowance from parents", L"Scholarships",
					L"Student Aid"
			});
			this->cbincomesource->Location = System::Drawing::Point(164, 42);
			this->cbincomesource->Name = L"cbincomesource";
			this->cbincomesource->Size = System::Drawing::Size(190, 24);
			this->cbincomesource->TabIndex = 2;
			// 
			// tbdescription
			// 
			this->tbdescription->Location = System::Drawing::Point(136, 139);
			this->tbdescription->Multiline = true;
			this->tbdescription->Name = L"tbdescription";
			this->tbdescription->Size = System::Drawing::Size(548, 91);
			this->tbdescription->TabIndex = 4;
			// 
			// tbamount
			// 
			this->tbamount->Location = System::Drawing::Point(534, 94);
			this->tbamount->Name = L"tbamount";
			this->tbamount->Size = System::Drawing::Size(229, 22);
			this->tbamount->TabIndex = 5;
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
			// tbincome
			// 
			this->tbincome->Location = System::Drawing::Point(534, 42);
			this->tbincome->Name = L"tbincome";
			this->tbincome->Size = System::Drawing::Size(229, 22);
			this->tbincome->TabIndex = 5;
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
			this->Controls->Add(this->tbincome);
			this->Controls->Add(this->tbamount);
			this->Controls->Add(this->tbdescription);
			this->Controls->Add(this->cbincomesource);
			this->Controls->Add(this->dtpdate);
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
private: System::Void btnaddincome_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
