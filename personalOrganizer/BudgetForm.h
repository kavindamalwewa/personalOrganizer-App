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

	private: System::Void DisplayTransportationBudget() {
		try {
			String^ connString = "Data Source=KAVINDA_MALWEWA\\sqlexpress;Initial Catalog=useraccountsystem;Integrated Security=True;TrustServerCertificate=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			if (String::IsNullOrEmpty(name)) {
				MessageBox::Show("Username is not set.", "Error", MessageBoxButtons::OK);
				return;
			}



			//////////////////// FOOD BUDGET LABEL ////////////////////////////////
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

			//////////////////// FOOD SPENT LABEL ////////////////////////////////

			String^ expenseQuery = "SELECT SUM(expenseamount) FROM expense WHERE name = @name AND expensesource = 'Food'";
			SqlCommand expenseCommand(expenseQuery, % sqlConn);
			expenseCommand.Parameters->AddWithValue("@name", name);

			Object^ expenseResult = expenseCommand.ExecuteScalar();

			if (expenseResult != nullptr && expenseResult->ToString() != "") {
				foodspent->Text = expenseResult->ToString();
			}
			else {
				foodspent->Text = "No expenses for Transportation";
			}

			////////////////////// FOOD REMAIN CALCULATION ////////////////////////////////

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







			////////////////////// FOOD BUDGET LABEL ////////////////////////////////

			//String^ foodSqlQuery = "SELECT amount FROM budget WHERE username = @username AND category = 'Food'";
			//SqlCommand foodCommand(foodSqlQuery, % sqlConn);
			//foodCommand.Parameters->AddWithValue("@username", username);

			//Object^ foodResult = foodCommand.ExecuteScalar();

			//if (foodResult != nullptr) {
			//	foodBudget->Text = foodResult->ToString();
			//}
			//else {
			//	foodBudget->Text = "No budget set for Food";
			//}

			////////////////////// FOOD SPENT LABEL ////////////////////////////////

			//String^ foodExpenseQuery = "SELECT SUM(expense) FROM expense WHERE username = @username AND expensetype = 'Food'";
			//SqlCommand foodExpenseCommand(foodExpenseQuery, % sqlConn);
			//foodExpenseCommand.Parameters->AddWithValue("@username", username);

			//Object^ foodExpenseResult = foodExpenseCommand.ExecuteScalar();

			//if (foodExpenseResult != nullptr && foodExpenseResult->ToString() != "") {
			//	foodSpent->Text = foodExpenseResult->ToString();
			//}
			//else {
			//	foodSpent->Text = "No expenses for Food";
			//}

			////////////////////// FOOD CALCULATION ////////////////////////////////

			//if (foodBudget->Text != "No budget set for Food" && foodSpent->Text != "No expenses for Food") {
			//	// Convert the values from labels to float for calculation
			//	float foodBudgetAmount = Convert::ToSingle(foodBudget->Text);
			//	float foodSpentAmount = Convert::ToSingle(foodSpent->Text);

			//	float foodBalanceAmount = foodBudgetAmount - foodSpentAmount;

			//	// Display the balance in foodBalance
			//	foodBalance->Text = foodBalanceAmount.ToString("F2");  // Format to 2 decimal places

			//	if (foodBalanceAmount < 500) {
			//		MessageBox::Show("You have a low remaining balance for Food", "Low Balance Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			//	}
			//}
			//else {
			//	foodBalance->Text = "N/A";
			//}




			////////////////////// GROCERIES BUDGET LABEL ////////////////////////////////
			//String^ grocSqlQuery = "SELECT amount FROM budget WHERE username = @username AND category = 'Groceries'";
			//SqlCommand grocCommand(grocSqlQuery, % sqlConn);
			//grocCommand.Parameters->AddWithValue("@username", username);

			//Object^ grocResult = grocCommand.ExecuteScalar();

			//if (grocResult != nullptr) {
			//	grocBudget->Text = grocResult->ToString();
			//}
			//else {
			//	grocBudget->Text = "No budget set for Groceries";
			//}

			////////////////////// GROCERIES SPENT LABEL ////////////////////////////////

			//String^ grocExpenseQuery = "SELECT SUM(expense) FROM expense WHERE username = @username AND expensetype = 'Groceries'";
			//SqlCommand grocExpenseCommand(grocExpenseQuery, % sqlConn);
			//grocExpenseCommand.Parameters->AddWithValue("@username", username);

			//Object^ grocExpenseResult = grocExpenseCommand.ExecuteScalar();

			//if (grocExpenseResult != nullptr && grocExpenseResult->ToString() != "") {
			//	grocSpent->Text = grocExpenseResult->ToString();
			//}
			//else {
			//	grocSpent->Text = "No expenses for Groceries";
			//}

			////////////////////// GROCERIES CALCULATION ////////////////////////////////

			//if (grocBudget->Text != "No budget set for Groceries" && grocSpent->Text != "No expenses for Groceries") {
			//	float grocBudgetAmount = Convert::ToSingle(grocBudget->Text);
			//	float grocSpentAmount = Convert::ToSingle(grocSpent->Text);

			//	float grocBalanceAmount = grocBudgetAmount - grocSpentAmount;

			//	grocBalance->Text = grocBalanceAmount.ToString("F2");

			//	if (grocBalanceAmount < 500) {
			//		MessageBox::Show("You have a low remaining balance for Groceries", "Low Balance Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			//	}
			//}
			//else {
			//	grocBalance->Text = "N/A";
			//}





			////////////////////// SUPPLIES BUDGET LABEL ////////////////////////////////
			//String^ supSqlQuery = "SELECT amount FROM budget WHERE username = @username AND category = 'Supplies'";
			//SqlCommand supCommand(supSqlQuery, % sqlConn);
			//supCommand.Parameters->AddWithValue("@username", username);

			//Object^ supResult = supCommand.ExecuteScalar();

			//if (supResult != nullptr) {
			//	supBudget->Text = supResult->ToString();
			//}
			//else {
			//	supBudget->Text = "No budget set for Supplies";
			//}

			////////////////////// SUPPLIES SPENT LABEL ////////////////////////////////

			//String^ supExpenseQuery = "SELECT SUM(expense) FROM expense WHERE username = @username AND expensetype = 'Supplies'";
			//SqlCommand supExpenseCommand(supExpenseQuery, % sqlConn);
			//supExpenseCommand.Parameters->AddWithValue("@username", username);

			//Object^ supExpenseResult = supExpenseCommand.ExecuteScalar();

			//if (supExpenseResult != nullptr && supExpenseResult->ToString() != "") {
			//	supSpent->Text = supExpenseResult->ToString();
			//}
			//else {
			//	supSpent->Text = "No expenses for Supplies";
			//}

			////////////////////// SUPPLIES CALCULATION ////////////////////////////////

			//if (supBudget->Text != "No budget set for Supplies" && supSpent->Text != "No expenses for Supplies") {
			//	float supBudgetAmount = Convert::ToSingle(supBudget->Text);
			//	float supSpentAmount = Convert::ToSingle(supSpent->Text);

			//	float supBalanceAmount = supBudgetAmount - supSpentAmount;

			//	supBalance->Text = supBalanceAmount.ToString("F2");

			//	if (supBalanceAmount < 500) {
			//		MessageBox::Show("You have a low remaining balance for Supplies", "Low Balance Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			//	}
			//}
			//else {
			//	supBalance->Text = "N/A";
			//}






			////////////////////// ENTERTAINMENT BUDGET LABEL ////////////////////////////////
			//String^ entSqlQuery = "SELECT amount FROM budget WHERE username = @username AND category = 'Entertainment'";
			//SqlCommand entCommand(entSqlQuery, % sqlConn);
			//entCommand.Parameters->AddWithValue("@username", username);

			//Object^ entResult = entCommand.ExecuteScalar();

			//if (entResult != nullptr) {
			//	entBudget->Text = entResult->ToString();
			//}
			//else {
			//	entBudget->Text = "No budget set for Entertainment";
			//}

			////////////////////// ENTERTAINMENT SPENT LABEL ////////////////////////////////

			//String^ entExpenseQuery = "SELECT SUM(expense) FROM expense WHERE username = @username AND expensetype = 'Entertainment'";
			//SqlCommand entExpenseCommand(entExpenseQuery, % sqlConn);
			//entExpenseCommand.Parameters->AddWithValue("@username", username);

			//Object^ entExpenseResult = entExpenseCommand.ExecuteScalar();

			//if (entExpenseResult != nullptr && entExpenseResult->ToString() != "") {
			//	entSpent->Text = entExpenseResult->ToString();
			//}
			//else {
			//	entSpent->Text = "No expenses for Entertainment";
			//}

			////////////////////// ENTERTAINMENT CALCULATION ////////////////////////////////

			//if (entBudget->Text != "No budget set for Entertainment" && entSpent->Text != "No expenses for Entertainment") {
			//	float entBudgetAmount = Convert::ToSingle(entBudget->Text);
			//	float entSpentAmount = Convert::ToSingle(entSpent->Text);

			//	float entBalanceAmount = entBudgetAmount - entSpentAmount;

			//	entBalance->Text = entBalanceAmount.ToString("F2");

			//	if (entBalanceAmount < 500) {
			//		MessageBox::Show("You have a low remaining balance for Entertainment", "Low Balance Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			//	}
			//}
			//else {
			//	entBalance->Text = "N/A";
			//}







			////////////////////// CLOTHES BUDGET LABEL ////////////////////////////////
			//String^ cloSqlQuery = "SELECT amount FROM budget WHERE username = @username AND category = 'Clothes'";
			//SqlCommand cloCommand(cloSqlQuery, % sqlConn);
			//cloCommand.Parameters->AddWithValue("@username", username);

			//Object^ cloResult = cloCommand.ExecuteScalar();

			//if (cloResult != nullptr) {
			//	cloBudget->Text = cloResult->ToString();
			//}
			//else {
			//	cloBudget->Text = "No budget set for Clothes";
			//}

			////////////////////// CLOTHES SPENT LABEL ////////////////////////////////

			//String^ cloExpenseQuery = "SELECT SUM(expense) FROM expense WHERE username = @username AND expensetype = 'Clothes'";
			//SqlCommand cloExpenseCommand(cloExpenseQuery, % sqlConn);
			//cloExpenseCommand.Parameters->AddWithValue("@username", username);

			//Object^ cloExpenseResult = cloExpenseCommand.ExecuteScalar();

			//if (cloExpenseResult != nullptr && cloExpenseResult->ToString() != "") {
			//	cloSpent->Text = cloExpenseResult->ToString();
			//}
			//else {
			//	cloSpent->Text = "No expenses for Clothes";
			//}

			////////////////////// CLOTHES CALCULATION ////////////////////////////////

			//if (cloBudget->Text != "No budget set for Clothes" && cloSpent->Text != "No expenses for Clothes") {
			//	float cloBudgetAmount = Convert::ToSingle(cloBudget->Text);
			//	float cloSpentAmount = Convert::ToSingle(cloSpent->Text);

			//	float cloBalanceAmount = cloBudgetAmount - cloSpentAmount;

			//	cloBalance->Text = cloBalanceAmount.ToString("F2");

			//	if (cloBalanceAmount < 500) {
			//		MessageBox::Show("You have a low remaining balance for Clothes", "Low Balance Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			//	}
			//}
			//else {
			//	cloBalance->Text = "N/A";
			//}






			////////////////////// OTHER BUDGET LABEL ////////////////////////////////
			//String^ otSqlQuery = "SELECT amount FROM budget WHERE username = @username AND category = 'Other'";
			//SqlCommand otCommand(otSqlQuery, % sqlConn);
			//otCommand.Parameters->AddWithValue("@username", username);

			//Object^ otResult = otCommand.ExecuteScalar();

			//if (otResult != nullptr) {
			//	otBudget->Text = otResult->ToString();
			//}
			//else {
			//	otBudget->Text = "No budget set for Other";
			//}

			////////////////////// OTHER SPENT LABEL ////////////////////////////////

			//String^ otExpenseQuery = "SELECT SUM(expense) FROM expense WHERE username = @username AND expensetype = 'Other'";
			//SqlCommand otExpenseCommand(otExpenseQuery, % sqlConn);
			//otExpenseCommand.Parameters->AddWithValue("@username", username);

			//Object^ otExpenseResult = otExpenseCommand.ExecuteScalar();

			//if (otExpenseResult != nullptr && otExpenseResult->ToString() != "") {
			//	otSpent->Text = otExpenseResult->ToString();
			//}
			//else {
			//	otSpent->Text = "No expenses for Other";
			//}

			////////////////////// OTHER CALCULATION ////////////////////////////////

			//if (otBudget->Text != "No budget set for Other" && otSpent->Text != "No expenses for Other") {
			//	float otBudgetAmount = Convert::ToSingle(otBudget->Text);
			//	float otSpentAmount = Convert::ToSingle(otSpent->Text);

			//	float otBalanceAmount = otBudgetAmount - otSpentAmount;

			//	otBalance->Text = otBalanceAmount.ToString("F2");

			//	if (otBalanceAmount < 500) {
			//		MessageBox::Show("You have a low remaining balance for Other", "Low Balance Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			//	}
			//}
			//else {
			//	otBalance->Text = "N/A";
			//}


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
				DisplayTransportationBudget();  // Call to display transportation budget
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
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->foodbudget = (gcnew System::Windows::Forms::Label());
			this->foodspent = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->foodremain = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(601, 570);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Refresh";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BudgetForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(751, 570);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BudgetForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(414, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 20);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Amount :";
			this->label4->Click += gcnew System::EventHandler(this, &BudgetForm::label4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 20);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Expense Source :";
			this->label2->Click += gcnew System::EventHandler(this, &BudgetForm::label2_Click);
			// 
			// budgetamount
			// 
			this->budgetamount->Location = System::Drawing::Point(518, 104);
			this->budgetamount->Name = L"budgetamount";
			this->budgetamount->Size = System::Drawing::Size(165, 22);
			this->budgetamount->TabIndex = 19;
			this->budgetamount->TextChanged += gcnew System::EventHandler(this, &BudgetForm::tbbudgetamount_TextChanged);
			// 
			// budgetsource
			// 
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
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				57.58929F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				42.41071F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				189)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				194)));
			this->tableLayoutPanel1->Controls->Add(this->label3, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label6, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label7, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label8, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label9, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label10, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label11, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label12, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label13, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->foodbudget, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->foodspent, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->foodremain, 3, 1);
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
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Blue;
			this->label3->Location = System::Drawing::Point(255, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(178, 60);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Budget";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Blue;
			this->label6->Location = System::Drawing::Point(440, 1);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(183, 60);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Spent";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Blue;
			this->label7->Location = System::Drawing::Point(630, 1);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(177, 60);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Remaining";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
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
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(4, 62);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(244, 48);
			this->label8->TabIndex = 1;
			this->label8->Text = L"FOOD";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(4, 111);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(244, 48);
			this->label9->TabIndex = 1;
			this->label9->Text = L"ENTERTAINMENT";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label9->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(4, 161);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(244, 48);
			this->label10->TabIndex = 1;
			this->label10->Text = L"TRAVELLING";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(4, 213);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(244, 48);
			this->label11->TabIndex = 1;
			this->label11->Text = L"CLOTHING";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label11->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(4, 265);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(244, 48);
			this->label12->TabIndex = 1;
			this->label12->Text = L"EDUCATION EQUIPMENT\r\n";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label12->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(4, 315);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(244, 48);
			this->label13->TabIndex = 1;
			this->label13->Text = L"UNIVERSITY FEES\r\n";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label13->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// foodbudget
			// 
			this->foodbudget->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->foodbudget->Location = System::Drawing::Point(255, 62);
			this->foodbudget->Name = L"foodbudget";
			this->foodbudget->Size = System::Drawing::Size(178, 48);
			this->foodbudget->TabIndex = 1;
			this->foodbudget->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->foodbudget->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// foodspent
			// 
			this->foodspent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->foodspent->Location = System::Drawing::Point(440, 62);
			this->foodspent->Name = L"foodspent";
			this->foodspent->Size = System::Drawing::Size(183, 48);
			this->foodspent->TabIndex = 1;
			this->foodspent->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->foodspent->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(718, 97);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 37);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Add Budget";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &BudgetForm::button3_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(865, 62);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Budget Your Expenses";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			// foodremain
			// 
			this->foodremain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->foodremain->Location = System::Drawing::Point(630, 62);
			this->foodremain->Name = L"foodremain";
			this->foodremain->Size = System::Drawing::Size(189, 48);
			this->foodremain->TabIndex = 1;
			this->foodremain->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->foodremain->Click += gcnew System::EventHandler(this, &BudgetForm::label8_Click);
			// 
			// BudgetForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
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
	DisplayTransportationBudget();
}
};
}
