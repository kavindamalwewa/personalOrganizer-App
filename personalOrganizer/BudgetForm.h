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
	/// Summary for BudgetForm
	/// </summary>
	public ref class BudgetForm : public System::Windows::Forms::Form
	{
	private:
		String^ name;

	private: System::Void DisplayBudgetDetails() {
		try {
			String^ connString = "Data Source=KAVINDA_MALWEWA\\sqlexpress;Initial Catalog=useraccountsystem;Integrated Security=True;TrustServerCertificate=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			if (String::IsNullOrEmpty(name)) {
				MessageBox::Show("Username is not set.", "Error", MessageBoxButtons::OK);
				return;
			}



			// FOOD BUDGET LABEL 
			String^ sqlQuery = "SELECT budgetAmount FROM budget WHERE name = @name AND budgetSource = 'Food'";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);

			Object^ result = command.ExecuteScalar();

			if (result != nullptr) {
				foodbudget->Text = result->ToString();
			}
			else {
				foodbudget->Text = "No budget set for Food";
			}

			// FOOD SPENT LABEL 

			String^ expenseQuery = "SELECT SUM(expenseamount) FROM expense WHERE name = @name AND expensesource = 'Food'";
			SqlCommand expenseCommand(expenseQuery, % sqlConn);
			expenseCommand.Parameters->AddWithValue("@name", name);

			Object^ expenseResult = expenseCommand.ExecuteScalar();

			if (expenseResult != nullptr && expenseResult->ToString() != "") {
				foodspent->Text = expenseResult->ToString();
			}
			else {
				foodspent->Text = "No expenses for Food";
			}

			// FOOD REMAIN CALCULATION 

			if (foodbudget->Text != "No budget set for Food" && foodspent->Text != "No expenses for Food") {
				// Convert the values from labels to float for calculation
				float budgetAmount = Convert::ToSingle(foodbudget->Text);
				float spentAmount = Convert::ToSingle(foodspent->Text);

				float balance = budgetAmount - spentAmount;

			//	// Display the balance in lbTransportBalance
				foodremain->Text = balance.ToString("F2");  // Format to 2 decimal places

				if (balance < 500) {
					MessageBox::Show("You have a low remaining balance for Food ", "Low Balance Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
			}
			else {
				foodremain->Text = "N/A";
			}







			// ENTERTAINMENT BUDGET LABEL 

			String^ entSqlQuery = "SELECT budgetAmount FROM budget WHERE name = @name AND budgetSource = 'Entertainment'";
			SqlCommand entCommand(entSqlQuery, % sqlConn);
			entCommand.Parameters->AddWithValue("@name", name);

			Object^ entResult = entCommand.ExecuteScalar();

			if (entResult != nullptr) {
				entbudget->Text = entResult->ToString();
			}
			else {
				entbudget->Text = "No budget set for Entertainment";
			}

			// ENTERTAINMENT SPENT LABEL

			String^ entExpenseQuery = "SELECT SUM(expenseamount) FROM expense WHERE name = @name AND expensesource = 'Entertainment'";
			SqlCommand entExpenseCommand(entExpenseQuery, % sqlConn);
			entExpenseCommand.Parameters->AddWithValue("@name", name);

			Object^ entExpenseResult = entExpenseCommand.ExecuteScalar();

			if (entExpenseResult != nullptr && entExpenseResult->ToString() != "") {
				entspent->Text = entExpenseResult->ToString();
			}
			else {
				entspent->Text = "No expenses for Entertainment";
			}
			

			// ENTERTAINMENT CALCULATION 

			if (entbudget->Text != "No budget set for Entertainment" && entspent->Text != "No expenses for Entertainment") {
					float entBudgetAmount = Convert::ToSingle(entbudget->Text);
					float entSpentAmount = Convert::ToSingle(entspent->Text);

					float entBalanceAmount = entBudgetAmount - entSpentAmount;

					entremain->Text = entBalanceAmount.ToString("F2");

					if (entBalanceAmount < 500) {
						MessageBox::Show("You have a low remaining balance for Entertainment", "Low Balance Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					}
				}
				else {
					entremain->Text = "N/A";
				}


			// CLOTHES BUDGET LABEL 
			
			String^ cloSqlQuery = "SELECT budgetAmount FROM budget WHERE name = @name AND budgetSource = 'Clothing'";
			SqlCommand cloCommand(cloSqlQuery, % sqlConn);
			cloCommand.Parameters->AddWithValue("@name", name);

			Object^ cloResult = cloCommand.ExecuteScalar();

			if (cloResult != nullptr) {
				clothbudget->Text = cloResult->ToString();
			}
			else {
				clothbudget->Text = "No budget set for Clothes";
			}

			// CLOTHES SPENT LABEL 

			String^ cloExpenseQuery = "SELECT SUM(expenseamount) FROM expense WHERE name = @name AND expensesource = 'Clothing'";
			SqlCommand cloExpenseCommand(cloExpenseQuery, % sqlConn);
			cloExpenseCommand.Parameters->AddWithValue("@name", name);

			Object^ cloExpenseResult = cloExpenseCommand.ExecuteScalar();

			if (cloExpenseResult != nullptr && cloExpenseResult->ToString() != "") {
				clothspent->Text = cloExpenseResult->ToString();
			}
			else {
				clothspent->Text = "No expenses for Clothes";
			}

			// CLOTHES CALCULATION 

			if (clothbudget->Text != "No budget set for Clothes" && clothspent->Text != "No expenses for Clothes") {
				float cloBudgetAmount = Convert::ToSingle(clothbudget->Text);
				float cloSpentAmount = Convert::ToSingle(clothspent->Text);

				float cloBalanceAmount = cloBudgetAmount - cloSpentAmount;

				clothremain->Text = cloBalanceAmount.ToString("F2");

				if (cloBalanceAmount < 500) {
					MessageBox::Show("You have a low remaining balance for Clothes", "Low Balance Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
			}
			else {
				clothremain->Text = "N/A";
			}


			// TRAVELLING BUDGET LABEL 
			
			String^ traSqlQuery = "SELECT budgetAmount FROM budget WHERE name = @name AND budgetSource = 'Travelling'";
			SqlCommand traCommand(traSqlQuery, % sqlConn);
			traCommand.Parameters->AddWithValue("@name", name);

			Object^ traResult = traCommand.ExecuteScalar();

			if (traResult != nullptr) {
				travelbudget->Text = traResult->ToString();
			}
			else {
				travelbudget->Text = "No budget set for Travelling";
			}

			// TRAVELLING SPENT LABEL 

			String^ traExpenseQuery = "SELECT SUM(expenseamount) FROM expense WHERE name = @name AND expensesource = 'Travelling'";
			SqlCommand traExpenseCommand(traExpenseQuery, % sqlConn);
			traExpenseCommand.Parameters->AddWithValue("@name", name);

			Object^ traExpenseResult = traExpenseCommand.ExecuteScalar();

			if (traExpenseResult != nullptr && traExpenseResult->ToString() != "") {
				travelspent->Text = traExpenseResult->ToString();
			}
			else {
				travelspent->Text = "No expenses for Travelling";
			}

			// TRAVELLING CALCULATION 

			if (travelbudget->Text != "No budget set for Travelling" && travelspent->Text != "No expenses for Travelling") {
				float traBudgetAmount = Convert::ToSingle(travelbudget->Text);
				float traSpentAmount = Convert::ToSingle(travelspent->Text);

				float traBalanceAmount = traBudgetAmount - traSpentAmount;

				travelremain->Text = traBalanceAmount.ToString("F2");

				if (traBalanceAmount < 500) {
					MessageBox::Show("You have a low remaining balance for Travelling", "Low Balance Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
			}
			else {
				travelremain->Text = "N/A";
			}


			// EDUCATION BUDGET LABEL 

			String^ eduSqlQuery = "SELECT budgetAmount FROM budget WHERE name = @name AND budgetSource = 'Education Equipment'";
			SqlCommand eduCommand(eduSqlQuery, % sqlConn);
			eduCommand.Parameters->AddWithValue("@name", name);

			Object^ eduResult = eduCommand.ExecuteScalar();

			if (eduResult != nullptr) {
				edubudget->Text = eduResult->ToString();
			}
			else {
				edubudget->Text = "No budget set for Education Equipment";
			}

			// EDUCATION SPENT LABEL 

			String^ eduExpenseQuery = "SELECT SUM(expenseamount) FROM expense WHERE name = @name AND expensesource = 'Education Equipment'";
			SqlCommand eduExpenseCommand(eduExpenseQuery, % sqlConn);
			eduExpenseCommand.Parameters->AddWithValue("@name", name);

			Object^ eduExpenseResult = eduExpenseCommand.ExecuteScalar();

			if (eduExpenseResult != nullptr && eduExpenseResult->ToString() != "") {
				eduspent->Text = eduExpenseResult->ToString();
			}
			else {
				eduspent->Text = "No expenses for Education Equipment";
			}

			// EDUCATION CALCULATION 

			if (edubudget->Text != "No budget set for Education Equipment" && eduspent->Text != "No expenses for Education Equipment") {
				float eduBudgetAmount = Convert::ToSingle(edubudget->Text);
				float eduSpentAmount = Convert::ToSingle(eduspent->Text);

				float eduBalanceAmount = eduBudgetAmount - eduSpentAmount;

				eduremain->Text = eduBalanceAmount.ToString("F2");

				if (eduBalanceAmount < 500) {
					MessageBox::Show("You have a low remaining balance for Education Equipment", "Low Balance Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
			}
			else {
				eduremain->Text = "N/A";
			}


			// UNIVERSITY BUDGET LABEL 

			String^ uniSqlQuery = "SELECT budgetAmount FROM budget WHERE name = @name AND budgetSource = 'University Fees'";
			SqlCommand uniCommand(uniSqlQuery, % sqlConn);
			uniCommand.Parameters->AddWithValue("@name", name);

			Object^ uniResult = uniCommand.ExecuteScalar();

			if (uniResult != nullptr) {
				unibudget->Text = uniResult->ToString();
			}
			else {
				unibudget->Text = "No budget set for University Fees";
			}

			// UNIVERSITY SPENT LABEL 

			String^ uniExpenseQuery = "SELECT SUM(expenseamount) FROM expense WHERE name = @name AND expensesource = 'University Fees'";
			SqlCommand uniExpenseCommand(uniExpenseQuery, % sqlConn);
			uniExpenseCommand.Parameters->AddWithValue("@name", name);

			Object^ uniExpenseResult = uniExpenseCommand.ExecuteScalar();

			if (uniExpenseResult != nullptr && uniExpenseResult->ToString() != "") {
				unispent->Text = uniExpenseResult->ToString();
			}
			else {
				unispent->Text = "No expenses for University Fees";
			}

			// UNIVERSITY CALCULATION 

			if (unibudget->Text != "No budget set for University Fees" && unispent->Text != "No expenses for University Fees") {
				float uniBudgetAmount = Convert::ToSingle(unibudget->Text);
				float uniSpentAmount = Convert::ToSingle(unispent->Text);

				float uniBalanceAmount = uniBudgetAmount - uniSpentAmount;

				uniremain->Text = uniBalanceAmount.ToString("F2");

				if (uniBalanceAmount < 500) {
					MessageBox::Show("You have a low remaining balance for University Fees", "Low Balance Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
			}
			else {
				uniremain->Text = "N/A";
			}


			sqlConn.Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK);
		}
	}
	public:

		BudgetForm(String^ loggedInUsername) {
			InitializeComponent();
			name = loggedInUsername;

			if (name != nullptr) {
				lbUserInfo->Text = "Hi, " + name + ", please set your budget";
				DisplayBudgetDetails();  // Call to display budget details
			}
			else {
				lbUserInfo->Text = "Username not found";
			}

			this->CenterToScreen();
		}
		//BudgetForm(void)
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
		~BudgetForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ budgetamount;

	private: System::Windows::Forms::ComboBox^ budgetsource;



	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ foodbudget;

private: System::Windows::Forms::Label^ lbUserInfo;
private: System::Windows::Forms::Label^ foodspent;
private: System::Windows::Forms::Label^ foodremain;
private: System::Windows::Forms::Label^ entbudget;
private: System::Windows::Forms::Label^ entspent;
private: System::Windows::Forms::Label^ entremain;



private: System::Windows::Forms::Label^ travelbudget;
private: System::Windows::Forms::Label^ clothbudget;
private: System::Windows::Forms::Label^ edubudget;
private: System::Windows::Forms::Label^ unibudget;







private: System::Windows::Forms::Label^ travelspent;
private: System::Windows::Forms::Label^ clothspent;
private: System::Windows::Forms::Label^ eduspent;
private: System::Windows::Forms::Label^ unispent;




private: System::Windows::Forms::Label^ travelremain;
private: System::Windows::Forms::Label^ clothremain;
private: System::Windows::Forms::Label^ eduremain;
private: System::Windows::Forms::Label^ uniremain;














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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->budgetamount = (gcnew System::Windows::Forms::TextBox());
			this->budgetsource = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->foodbudget = (gcnew System::Windows::Forms::Label());
			this->foodspent = (gcnew System::Windows::Forms::Label());
			this->foodremain = (gcnew System::Windows::Forms::Label());
			this->entbudget = (gcnew System::Windows::Forms::Label());
			this->entspent = (gcnew System::Windows::Forms::Label());
			this->entremain = (gcnew System::Windows::Forms::Label());
			this->travelbudget = (gcnew System::Windows::Forms::Label());
			this->clothbudget = (gcnew System::Windows::Forms::Label());
			this->edubudget = (gcnew System::Windows::Forms::Label());
			this->unibudget = (gcnew System::Windows::Forms::Label());
			this->travelspent = (gcnew System::Windows::Forms::Label());
			this->clothspent = (gcnew System::Windows::Forms::Label());
			this->eduspent = (gcnew System::Windows::Forms::Label());
			this->unispent = (gcnew System::Windows::Forms::Label());
			this->travelremain = (gcnew System::Windows::Forms::Label());
			this->clothremain = (gcnew System::Windows::Forms::Label());
			this->eduremain = (gcnew System::Windows::Forms::Label());
			this->uniremain = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Blue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(592, 572);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Refresh";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BudgetForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Blue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(742, 572);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &BudgetForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(404, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 22);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Amount :";
			this->label4->Click += gcnew System::EventHandler(this, &BudgetForm::label4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 22);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Expense Source :";
			this->label2->Click += gcnew System::EventHandler(this, &BudgetForm::label2_Click);
			// 
			// budgetamount
			// 
			this->budgetamount->BackColor = System::Drawing::Color::Silver;
			this->budgetamount->Location = System::Drawing::Point(518, 104);
			this->budgetamount->Name = L"budgetamount";
			this->budgetamount->Size = System::Drawing::Size(165, 22);
			this->budgetamount->TabIndex = 19;
			this->budgetamount->TextChanged += gcnew System::EventHandler(this, &BudgetForm::tbbudgetamount_TextChanged);
			// 
			// budgetsource
			// 
			this->budgetsource->BackColor = System::Drawing::Color::Silver;
			this->budgetsource->FormattingEnabled = true;
			this->budgetsource->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Food", L"Entertainment", L"Travelling", L"Clothing",
					L"Education Equipment", L"University Fees"
			});
			this->budgetsource->Location = System::Drawing::Point(202, 102);
			this->budgetsource->Name = L"budgetsource";
			this->budgetsource->Size = System::Drawing::Size(165, 24);
			this->budgetsource->TabIndex = 18;
			this->budgetsource->SelectedIndexChanged += gcnew System::EventHandler(this, &BudgetForm::cbbudgetsource_SelectedIndexChanged);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Cyan;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				57.58929F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				42.41071F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				189)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				202)));
			this->tableLayoutPanel1->Controls->Add(this->label3, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label6, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label7, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label8, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label9, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label10, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label11, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label13, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->foodbudget, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->foodspent, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->foodremain, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->entbudget, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->entspent, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->entremain, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->travelbudget, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->clothbudget, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->edubudget, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->unibudget, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->travelspent, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->clothspent, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->eduspent, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->unispent, 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->travelremain, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->clothremain, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->eduremain, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->uniremain, 3, 6);
			this->tableLayoutPanel1->Controls->Add(this->label12, 0, 5);
			this->tableLayoutPanel1->Location = System::Drawing::Point(28, 178);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 7;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 55.6701F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 44.3299F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 49)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 51)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 51)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 49)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 49)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(823, 366);
			this->tableLayoutPanel1->TabIndex = 22;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &BudgetForm::tableLayoutPanel1_Paint);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Blue;
			this->label3->Location = System::Drawing::Point(250, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 60);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Budget";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Blue;
			this->label6->Location = System::Drawing::Point(432, 1);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(183, 60);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Spent";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Blue;
			this->label7->Location = System::Drawing::Point(622, 1);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(177, 60);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Remaining";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Blue;
			this->label5->Location = System::Drawing::Point(4, 1);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(212, 60);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Category";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(4, 62);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(239, 48);
			this->label8->TabIndex = 1;
			this->label8->Text = L"FOOD";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(4, 111);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(239, 48);
			this->label9->TabIndex = 1;
			this->label9->Text = L"ENTERTAINMENT";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label9->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(4, 161);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(239, 48);
			this->label10->TabIndex = 1;
			this->label10->Text = L"TRAVELLING";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(4, 213);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(239, 48);
			this->label11->TabIndex = 1;
			this->label11->Text = L"CLOTHING";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label11->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(4, 315);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(239, 50);
			this->label13->TabIndex = 1;
			this->label13->Text = L"UNIVERSITY FEES\r\n";
			this->label13->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label13->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// foodbudget
			// 
			this->foodbudget->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->foodbudget->Location = System::Drawing::Point(250, 62);
			this->foodbudget->Name = L"foodbudget";
			this->foodbudget->Size = System::Drawing::Size(175, 48);
			this->foodbudget->TabIndex = 1;
			this->foodbudget->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->foodbudget->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// foodspent
			// 
			this->foodspent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->foodspent->Location = System::Drawing::Point(432, 62);
			this->foodspent->Name = L"foodspent";
			this->foodspent->Size = System::Drawing::Size(183, 48);
			this->foodspent->TabIndex = 1;
			this->foodspent->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->foodspent->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// foodremain
			// 
			this->foodremain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->foodremain->Location = System::Drawing::Point(622, 62);
			this->foodremain->Name = L"foodremain";
			this->foodremain->Size = System::Drawing::Size(189, 48);
			this->foodremain->TabIndex = 1;
			this->foodremain->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->foodremain->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// entbudget
			// 
			this->entbudget->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->entbudget->Location = System::Drawing::Point(250, 111);
			this->entbudget->Name = L"entbudget";
			this->entbudget->Size = System::Drawing::Size(175, 48);
			this->entbudget->TabIndex = 1;
			this->entbudget->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->entbudget->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// entspent
			// 
			this->entspent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->entspent->Location = System::Drawing::Point(432, 111);
			this->entspent->Name = L"entspent";
			this->entspent->Size = System::Drawing::Size(177, 48);
			this->entspent->TabIndex = 1;
			this->entspent->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->entspent->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// entremain
			// 
			this->entremain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->entremain->Location = System::Drawing::Point(622, 111);
			this->entremain->Name = L"entremain";
			this->entremain->Size = System::Drawing::Size(191, 48);
			this->entremain->TabIndex = 1;
			this->entremain->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->entremain->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// travelbudget
			// 
			this->travelbudget->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->travelbudget->Location = System::Drawing::Point(250, 161);
			this->travelbudget->Name = L"travelbudget";
			this->travelbudget->Size = System::Drawing::Size(175, 48);
			this->travelbudget->TabIndex = 1;
			this->travelbudget->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->travelbudget->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// clothbudget
			// 
			this->clothbudget->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clothbudget->Location = System::Drawing::Point(250, 213);
			this->clothbudget->Name = L"clothbudget";
			this->clothbudget->Size = System::Drawing::Size(175, 48);
			this->clothbudget->TabIndex = 1;
			this->clothbudget->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->clothbudget->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// edubudget
			// 
			this->edubudget->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edubudget->Location = System::Drawing::Point(250, 265);
			this->edubudget->Name = L"edubudget";
			this->edubudget->Size = System::Drawing::Size(175, 48);
			this->edubudget->TabIndex = 1;
			this->edubudget->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->edubudget->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// unibudget
			// 
			this->unibudget->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->unibudget->Location = System::Drawing::Point(250, 315);
			this->unibudget->Name = L"unibudget";
			this->unibudget->Size = System::Drawing::Size(175, 48);
			this->unibudget->TabIndex = 1;
			this->unibudget->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->unibudget->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// travelspent
			// 
			this->travelspent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->travelspent->Location = System::Drawing::Point(432, 161);
			this->travelspent->Name = L"travelspent";
			this->travelspent->Size = System::Drawing::Size(183, 48);
			this->travelspent->TabIndex = 1;
			this->travelspent->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->travelspent->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// clothspent
			// 
			this->clothspent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clothspent->Location = System::Drawing::Point(432, 213);
			this->clothspent->Name = L"clothspent";
			this->clothspent->Size = System::Drawing::Size(183, 48);
			this->clothspent->TabIndex = 1;
			this->clothspent->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->clothspent->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// eduspent
			// 
			this->eduspent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eduspent->Location = System::Drawing::Point(432, 265);
			this->eduspent->Name = L"eduspent";
			this->eduspent->Size = System::Drawing::Size(177, 48);
			this->eduspent->TabIndex = 1;
			this->eduspent->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->eduspent->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// unispent
			// 
			this->unispent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->unispent->Location = System::Drawing::Point(432, 315);
			this->unispent->Name = L"unispent";
			this->unispent->Size = System::Drawing::Size(177, 48);
			this->unispent->TabIndex = 1;
			this->unispent->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->unispent->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// travelremain
			// 
			this->travelremain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->travelremain->Location = System::Drawing::Point(622, 161);
			this->travelremain->Name = L"travelremain";
			this->travelremain->Size = System::Drawing::Size(191, 48);
			this->travelremain->TabIndex = 1;
			this->travelremain->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->travelremain->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// clothremain
			// 
			this->clothremain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clothremain->Location = System::Drawing::Point(622, 213);
			this->clothremain->Name = L"clothremain";
			this->clothremain->Size = System::Drawing::Size(191, 48);
			this->clothremain->TabIndex = 1;
			this->clothremain->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->clothremain->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// eduremain
			// 
			this->eduremain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eduremain->Location = System::Drawing::Point(622, 265);
			this->eduremain->Name = L"eduremain";
			this->eduremain->Size = System::Drawing::Size(191, 48);
			this->eduremain->TabIndex = 1;
			this->eduremain->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->eduremain->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// uniremain
			// 
			this->uniremain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uniremain->Location = System::Drawing::Point(622, 315);
			this->uniremain->Name = L"uniremain";
			this->uniremain->Size = System::Drawing::Size(191, 48);
			this->uniremain->TabIndex = 1;
			this->uniremain->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->uniremain->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(4, 265);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(239, 49);
			this->label12->TabIndex = 1;
			this->label12->Text = L"EDUCATION EQUIPMENT\r\n";
			this->label12->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label12->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Blue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(718, 97);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 37);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Add Budget";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BudgetForm::button3_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(865, 62);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Budget Your Expenses";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &BudgetForm::label1_Click);
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->AutoSize = true;
			this->lbUserInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbUserInfo->Location = System::Drawing::Point(345, 147);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(28, 20);
			this->lbUserInfo->TabIndex = 24;
			this->lbUserInfo->Text = L"Hi";
			// 
			// BudgetForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(880, 633);
			this->Controls->Add(this->lbUserInfo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->budgetamount);
			this->Controls->Add(this->budgetsource);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Name = L"BudgetForm";
			this->Text = L"BudgetForm";
			this->Load += gcnew System::EventHandler(this, &BudgetForm::BudgetForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void cbbudgetsource_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbbudgetamount_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ budgetSource = budgetsource->Text;
	String^ budgetAmount = budgetamount->Text;

	if (String::IsNullOrWhiteSpace(budgetSource) || String::IsNullOrWhiteSpace(budgetAmount)) {
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

		String^ sqlQuery = "IF EXISTS (SELECT 1 FROM budget WHERE name = @name AND budgetSource = @budgetSource) "
			"UPDATE budget SET budgetAmount = @budgetAmount WHERE name = @name AND budgetSource = @budgetSource "
			"ELSE "
			"INSERT INTO budget (name, budgetSource, budgetAmount) VALUES (@name, @budgetSource, @budgetAmount)";
		SqlCommand command(sqlQuery, % sqlConn);

		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@budgetSource", budgetSource);
		command.Parameters->AddWithValue("@budgetAmount", budgetAmount);

		command.ExecuteNonQuery();

		MessageBox::Show("Budget record updated successfully!", "Success", MessageBoxButtons::OK);
		//this->Close(); 
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to update budget. Error: " + ex->Message, "Budget Failure", MessageBoxButtons::OK);
	}
}
private: System::Void BudgetForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	DisplayBudgetDetails();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
