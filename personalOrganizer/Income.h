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
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
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
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(109, 48);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(255, 22);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 30);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Date :";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 30);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Income source:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Job", L"Allowance from parents", L"Scholarships",
					L"Student Aid"
			});
			this->comboBox1->Location = System::Drawing::Point(184, 91);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(180, 24);
			this->comboBox1->TabIndex = 2;
			// 
			// Income
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(721, 437);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Name = L"Income";
			this->Text = L"Income";
			this->Load += gcnew System::EventHandler(this, &Income::Income_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Income_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
