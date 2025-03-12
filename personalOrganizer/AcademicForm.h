#pragma once
#include"AssignmentForm.h"
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
	/// Summary for AcademicForm
	/// </summary>
	public ref class AcademicForm : public System::Windows::Forms::Form
	{
	public:

		String^ name;

		AcademicForm(String^ loggedInUsername) {
			InitializeComponent();
			name = loggedInUsername;
		}

		//AcademicForm(void)
		//{
			//InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		//}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AcademicForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ tbsubject;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dtpdate;


	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DateTimePicker^ dtpendtime;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ dtpstarttime;












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
			this->tbsubject = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dtpdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dtpendtime = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dtpstarttime = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-11, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(819, 62);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Weekly Lecture Schedule\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 22);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Subject : ";
			// 
			// tbsubject
			// 
			this->tbsubject->FormattingEnabled = true;
			this->tbsubject->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Web Technologies", L"Design and Analysis of Algorithms",
					L"Software Engineering", L"Graphics and Image Processing", L"English for Professional Purposes"
			});
			this->tbsubject->Location = System::Drawing::Point(133, 85);
			this->tbsubject->Name = L"tbsubject";
			this->tbsubject->Size = System::Drawing::Size(255, 24);
			this->tbsubject->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(23, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 22);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Date :";
			// 
			// dtpdate
			// 
			this->dtpdate->Location = System::Drawing::Point(133, 135);
			this->dtpdate->Name = L"dtpdate";
			this->dtpdate->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dtpdate->Size = System::Drawing::Size(255, 22);
			this->dtpdate->TabIndex = 27;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(422, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 22);
			this->label4->TabIndex = 26;
			this->label4->Text = L"End Time : ";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Blue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(180, 193);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 37);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Add Lectures";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AcademicForm::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Blue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(426, 193);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 37);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Refresh";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Cyan;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(106, 263);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(566, 321);
			this->dataGridView1->TabIndex = 30;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Subject";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Date";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Start Time";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"End Time";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(87, 619);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(331, 27);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Is there Any Assignment here\?";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Crimson;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(638, 611);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 37);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AcademicForm::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Blue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(437, 611);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 37);
			this->button4->TabIndex = 37;
			this->button4->Text = L"Next";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AcademicForm::button4_Click);
			// 
			// dtpendtime
			// 
			this->dtpendtime->CustomFormat = L"hh:mm tt";
			this->dtpendtime->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpendtime->Location = System::Drawing::Point(588, 135);
			this->dtpendtime->Name = L"dtpendtime";
			this->dtpendtime->ShowUpDown = true;
			this->dtpendtime->Size = System::Drawing::Size(164, 22);
			this->dtpendtime->TabIndex = 38;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(422, 87);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 22);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Start Time : ";
			// 
			// dtpstarttime
			// 
			this->dtpstarttime->CustomFormat = L"hh:mm tt";
			this->dtpstarttime->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
			this->dtpstarttime->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpstarttime->Location = System::Drawing::Point(588, 87);
			this->dtpstarttime->Name = L"dtpstarttime";
			this->dtpstarttime->ShowUpDown = true;
			this->dtpstarttime->Size = System::Drawing::Size(164, 22);
			this->dtpstarttime->TabIndex = 38;
			// 
			// AcademicForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(820, 697);
			this->Controls->Add(this->dtpstarttime);
			this->Controls->Add(this->dtpendtime);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dtpdate);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbsubject);
			this->Controls->Add(this->label1);
			this->Name = L"AcademicForm";
			this->Text = L"AcademicForm";
			this->Load += gcnew System::EventHandler(this, &AcademicForm::AcademicForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AcademicForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	AssignmentForm^ assignmentform = gcnew AssignmentForm();
	assignmentform->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Subject = tbsubject->Text;
	String^ Date = dtpdate->Value.ToString("yyyy-MM-dd");
	String^ Starttime = dtpstarttime->Value.ToString("hh:mm");
	String^ Endtime = dtpendtime->Value.ToString("hh:mm");

	if (String::IsNullOrWhiteSpace(Subject) || String::IsNullOrWhiteSpace(Date) || String::IsNullOrWhiteSpace(Starttime) || String::IsNullOrWhiteSpace(Endtime)) {
		MessageBox::Show("Please fill in all fields.", "Missing Information", MessageBoxButtons::OK);
		return;
	}

	try {
		String^ connString = "Data Source=KAVINDA_MALWEWA\\sqlexpress;Initial Catalog=useraccountsystem;Integrated Security=True;TrustServerCertificate=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		if (String::IsNullOrEmpty(name)) {
			MessageBox::Show("Name is not set.", "Error", MessageBoxButtons::OK);
			return;
		}

		String^ sqlQuery = "INSERT INTO academic (name, subject, date, start_time,end_time) VALUES (@name, @Subject, @Date, @Starttime, @Endtime)";
		SqlCommand command(sqlQuery, % sqlConn);

		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@Subject", Subject);
		command.Parameters->AddWithValue("@Date", Date);
		command.Parameters->AddWithValue("@Starttime", Starttime);
		command.Parameters->AddWithValue("@Endtime", Endtime);


		command.ExecuteNonQuery();

		MessageBox::Show("Lecture record updated successfully!", "Success", MessageBoxButtons::OK);
		//this->Close(); 
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to update Lecture Schedule. Error: " + ex->Message, "Academic Failure", MessageBoxButtons::OK);
	}
}
};
}
