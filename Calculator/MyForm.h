#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include "InfixToPostfix.h"
#include "PostfixEvaluator.h"
#include <msclr\marshal_cppstd.h>
#include "Utilitie.h"
#include "BaseConverter.h" 

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;









	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;

	private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ lblResult;

    private: System::Windows::Forms::Label^ lblDisplay;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Panel^ panel3;




















    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::Panel^ panel4;

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::ComboBox^ comboBox2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::Button^ buttonthree;

    private: System::Windows::Forms::Button^ buttonTwo;


    private: System::Windows::Forms::Button^ buttonOne;
    private: System::Windows::Forms::Button^ btnC;


    private: System::Windows::Forms::Button^ btnSix;
    private: System::Windows::Forms::Button^ buttonNine;






private: System::Windows::Forms::Button^ buttonEight;
private: System::Windows::Forms::Button^ btnA;


private: System::Windows::Forms::Button^ btnSeven;



private: System::Windows::Forms::Button^ btnFive;
private: System::Windows::Forms::Label^ lblFrom;


private: System::Windows::Forms::Button^ btnE;


private: System::Windows::Forms::Button^ btnD;



private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
private: System::Windows::Forms::Button^ btnBack;
private: System::Windows::Forms::Button^ btnClear;
private: System::Windows::Forms::Button^ rightBracket;
private: System::Windows::Forms::Button^ lftBracket;




private: System::Windows::Forms::Button^ buttonPi;

private: System::Windows::Forms::Button^ btnPlus;
private: System::Windows::Forms::Button^ btnMinus;
private: System::Windows::Forms::Button^ btnMultiplication;






private: System::Windows::Forms::Button^ btn3;

private: System::Windows::Forms::Button^ btn2;

private: System::Windows::Forms::Button^ btn1;
private: System::Windows::Forms::Button^ btnLog;









private: System::Windows::Forms::Button^ btn6;
private: System::Windows::Forms::Button^ btn9;


private: System::Windows::Forms::Button^ btn8;
private: System::Windows::Forms::Button^ btnSin;
private: System::Windows::Forms::Button^ btnLogBase2;








private: System::Windows::Forms::Button^ btn7;

private: System::Windows::Forms::Button^ btn5;
private: System::Windows::Forms::Label^ lblResultValue;






private: System::Windows::Forms::Button^ btnEquals;
private: System::Windows::Forms::Button^ btn4;
private: System::Windows::Forms::Button^ btnPow;
private: System::Windows::Forms::Button^ buttonLn;


private: System::Windows::Forms::Button^ btnRadical;


private: System::Windows::Forms::Button^ buttonTan;
private: System::Windows::Forms::Button^ btnDot;
private: System::Windows::Forms::Button^ btnDivison;
private: System::Windows::Forms::Button^ btn0;
private: System::Windows::Forms::Button^ buttonCos;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ btnRad;
private: System::Windows::Forms::Button^ btnfour;

private: System::Windows::Forms::Button^ button0;
private: System::Windows::Forms::Button^ btnF;


private: System::Windows::Forms::Button^ btnB;













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
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btnfour = (gcnew System::Windows::Forms::Button());
            this->button0 = (gcnew System::Windows::Forms::Button());
            this->btnF = (gcnew System::Windows::Forms::Button());
            this->btnE = (gcnew System::Windows::Forms::Button());
            this->btnD = (gcnew System::Windows::Forms::Button());
            this->buttonthree = (gcnew System::Windows::Forms::Button());
            this->buttonTwo = (gcnew System::Windows::Forms::Button());
            this->buttonOne = (gcnew System::Windows::Forms::Button());
            this->btnC = (gcnew System::Windows::Forms::Button());
            this->btnSix = (gcnew System::Windows::Forms::Button());
            this->buttonNine = (gcnew System::Windows::Forms::Button());
            this->buttonEight = (gcnew System::Windows::Forms::Button());
            this->btnA = (gcnew System::Windows::Forms::Button());
            this->btnB = (gcnew System::Windows::Forms::Button());
            this->btnSeven = (gcnew System::Windows::Forms::Button());
            this->btnFive = (gcnew System::Windows::Forms::Button());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->lblResultValue = (gcnew System::Windows::Forms::Label());
            this->lblFrom = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btnDot = (gcnew System::Windows::Forms::Button());
            this->btnDivison = (gcnew System::Windows::Forms::Button());
            this->btn0 = (gcnew System::Windows::Forms::Button());
            this->buttonCos = (gcnew System::Windows::Forms::Button());
            this->btnEquals = (gcnew System::Windows::Forms::Button());
            this->btn4 = (gcnew System::Windows::Forms::Button());
            this->btnPow = (gcnew System::Windows::Forms::Button());
            this->buttonLn = (gcnew System::Windows::Forms::Button());
            this->btnRadical = (gcnew System::Windows::Forms::Button());
            this->buttonTan = (gcnew System::Windows::Forms::Button());
            this->btnBack = (gcnew System::Windows::Forms::Button());
            this->btnClear = (gcnew System::Windows::Forms::Button());
            this->rightBracket = (gcnew System::Windows::Forms::Button());
            this->lftBracket = (gcnew System::Windows::Forms::Button());
            this->buttonPi = (gcnew System::Windows::Forms::Button());
            this->btnPlus = (gcnew System::Windows::Forms::Button());
            this->btnMinus = (gcnew System::Windows::Forms::Button());
            this->btnMultiplication = (gcnew System::Windows::Forms::Button());
            this->btn3 = (gcnew System::Windows::Forms::Button());
            this->btn2 = (gcnew System::Windows::Forms::Button());
            this->btn1 = (gcnew System::Windows::Forms::Button());
            this->btnLog = (gcnew System::Windows::Forms::Button());
            this->button26 = (gcnew System::Windows::Forms::Button());
            this->btn6 = (gcnew System::Windows::Forms::Button());
            this->btn9 = (gcnew System::Windows::Forms::Button());
            this->btn8 = (gcnew System::Windows::Forms::Button());
            this->btnSin = (gcnew System::Windows::Forms::Button());
            this->btnLogBase2 = (gcnew System::Windows::Forms::Button());
            this->btn7 = (gcnew System::Windows::Forms::Button());
            this->btn5 = (gcnew System::Windows::Forms::Button());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->btnRad = (gcnew System::Windows::Forms::Button());
            this->lblResult = (gcnew System::Windows::Forms::Label());
            this->lblDisplay = (gcnew System::Windows::Forms::Label());
            this->tabControl1->SuspendLayout();
            this->tabControl2->SuspendLayout();
            this->tabPage3->SuspendLayout();
            this->tableLayoutPanel1->SuspendLayout();
            this->panel4->SuspendLayout();
            this->tabPage4->SuspendLayout();
            this->panel1->SuspendLayout();
            this->panel3->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tabControl1->Location = System::Drawing::Point(0, 0);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(451, 574);
            this->tabControl1->TabIndex = 0;
            // 
            // tabPage1
            // 
            this->tabPage1->Location = System::Drawing::Point(4, 22);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(443, 548);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"tabPage1";
            this->tabPage1->UseVisualStyleBackColor = true;
            // 
            // tabPage2
            // 
            this->tabPage2->Location = System::Drawing::Point(4, 22);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(443, 548);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"tabPage2";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // tabControl2
            // 
            this->tabControl2->Controls->Add(this->tabPage3);
            this->tabControl2->Controls->Add(this->tabPage4);
            this->tabControl2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tabControl2->Location = System::Drawing::Point(0, 0);
            this->tabControl2->Name = L"tabControl2";
            this->tabControl2->SelectedIndex = 0;
            this->tabControl2->Size = System::Drawing::Size(400, 606);
            this->tabControl2->TabIndex = 1;
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->tableLayoutPanel1);
            this->tabPage3->Controls->Add(this->panel4);
            this->tabPage3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tabPage3->Location = System::Drawing::Point(4, 22);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(3);
            this->tabPage3->Size = System::Drawing::Size(379, 567);
            this->tabPage3->TabIndex = 0;
            this->tabPage3->Text = L"Converter";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->ColumnCount = 5;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel1->Controls->Add(this->btnfour, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->button0, 2, 3);
            this->tableLayoutPanel1->Controls->Add(this->btnF, 4, 2);
            this->tableLayoutPanel1->Controls->Add(this->btnE, 4, 1);
            this->tableLayoutPanel1->Controls->Add(this->btnD, 4, 0);
            this->tableLayoutPanel1->Controls->Add(this->buttonthree, 3, 2);
            this->tableLayoutPanel1->Controls->Add(this->buttonTwo, 2, 2);
            this->tableLayoutPanel1->Controls->Add(this->buttonOne, 1, 2);
            this->tableLayoutPanel1->Controls->Add(this->btnC, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->btnSix, 3, 1);
            this->tableLayoutPanel1->Controls->Add(this->buttonNine, 3, 0);
            this->tableLayoutPanel1->Controls->Add(this->buttonEight, 2, 0);
            this->tableLayoutPanel1->Controls->Add(this->btnA, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->btnB, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->btnSeven, 1, 0);
            this->tableLayoutPanel1->Controls->Add(this->btnFive, 2, 1);
            this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel1->Location = System::Drawing::Point(3, 173);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 4;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(373, 391);
            this->tableLayoutPanel1->TabIndex = 2;
            this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint);
            // 
            // btnfour
            // 
            this->btnfour->AutoEllipsis = true;
            this->btnfour->BackColor = System::Drawing::Color::White;
            this->btnfour->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnfour->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnfour->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnfour->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnfour->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnfour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnfour->Location = System::Drawing::Point(77, 100);
            this->btnfour->Name = L"btnfour";
            this->btnfour->Size = System::Drawing::Size(68, 91);
            this->btnfour->TabIndex = 18;
            this->btnfour->Text = L"4";
            this->btnfour->UseCompatibleTextRendering = true;
            this->btnfour->UseVisualStyleBackColor = true;
            this->btnfour->Click += gcnew System::EventHandler(this, &MyForm::btnfour_Click);
            // 
            // button0
            // 
            this->button0->AutoEllipsis = true;
            this->button0->BackColor = System::Drawing::Color::White;
            this->button0->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button0->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button0->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button0->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button0->Location = System::Drawing::Point(151, 294);
            this->button0->Name = L"button0";
            this->button0->Size = System::Drawing::Size(68, 94);
            this->button0->TabIndex = 15;
            this->button0->Text = L"0";
            this->button0->UseCompatibleTextRendering = true;
            this->button0->UseVisualStyleBackColor = true;
            this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
            // 
            // btnF
            // 
            this->btnF->AutoEllipsis = true;
            this->btnF->BackColor = System::Drawing::Color::White;
            this->btnF->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnF->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnF->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnF->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnF->Location = System::Drawing::Point(299, 197);
            this->btnF->Name = L"btnF";
            this->btnF->Size = System::Drawing::Size(71, 91);
            this->btnF->TabIndex = 7;
            this->btnF->Text = L"F";
            this->btnF->UseCompatibleTextRendering = true;
            this->btnF->UseVisualStyleBackColor = true;
            this->btnF->Click += gcnew System::EventHandler(this, &MyForm::btnF_Click);
            // 
            // btnE
            // 
            this->btnE->AutoEllipsis = true;
            this->btnE->BackColor = System::Drawing::Color::White;
            this->btnE->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnE->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnE->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnE->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnE->Location = System::Drawing::Point(299, 100);
            this->btnE->Name = L"btnE";
            this->btnE->Size = System::Drawing::Size(71, 91);
            this->btnE->TabIndex = 7;
            this->btnE->Text = L"E";
            this->btnE->UseCompatibleTextRendering = true;
            this->btnE->UseVisualStyleBackColor = true;
            this->btnE->Click += gcnew System::EventHandler(this, &MyForm::btnE_Click);
            // 
            // btnD
            // 
            this->btnD->AutoEllipsis = true;
            this->btnD->BackColor = System::Drawing::Color::White;
            this->btnD->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnD->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnD->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnD->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnD->Location = System::Drawing::Point(299, 3);
            this->btnD->Name = L"btnD";
            this->btnD->Size = System::Drawing::Size(71, 91);
            this->btnD->TabIndex = 7;
            this->btnD->Text = L"D";
            this->btnD->UseCompatibleTextRendering = true;
            this->btnD->UseVisualStyleBackColor = true;
            this->btnD->Click += gcnew System::EventHandler(this, &MyForm::btnD_Click);
            // 
            // buttonthree
            // 
            this->buttonthree->AutoEllipsis = true;
            this->buttonthree->BackColor = System::Drawing::Color::White;
            this->buttonthree->Dock = System::Windows::Forms::DockStyle::Fill;
            this->buttonthree->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonthree->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->buttonthree->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonthree->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonthree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonthree->Location = System::Drawing::Point(225, 197);
            this->buttonthree->Name = L"buttonthree";
            this->buttonthree->Size = System::Drawing::Size(68, 91);
            this->buttonthree->TabIndex = 17;
            this->buttonthree->Text = L"3";
            this->buttonthree->UseCompatibleTextRendering = true;
            this->buttonthree->UseVisualStyleBackColor = true;
            this->buttonthree->Click += gcnew System::EventHandler(this, &MyForm::buttonthree_Click);
            // 
            // buttonTwo
            // 
            this->buttonTwo->AutoEllipsis = true;
            this->buttonTwo->BackColor = System::Drawing::Color::White;
            this->buttonTwo->Dock = System::Windows::Forms::DockStyle::Fill;
            this->buttonTwo->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonTwo->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->buttonTwo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonTwo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonTwo->Location = System::Drawing::Point(151, 197);
            this->buttonTwo->Name = L"buttonTwo";
            this->buttonTwo->Size = System::Drawing::Size(68, 91);
            this->buttonTwo->TabIndex = 16;
            this->buttonTwo->Text = L"2";
            this->buttonTwo->UseCompatibleTextRendering = true;
            this->buttonTwo->UseVisualStyleBackColor = true;
            this->buttonTwo->Click += gcnew System::EventHandler(this, &MyForm::buttonTwo_Click);
            // 
            // buttonOne
            // 
            this->buttonOne->AutoEllipsis = true;
            this->buttonOne->BackColor = System::Drawing::Color::White;
            this->buttonOne->Dock = System::Windows::Forms::DockStyle::Fill;
            this->buttonOne->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonOne->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->buttonOne->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonOne->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonOne->Location = System::Drawing::Point(77, 197);
            this->buttonOne->Name = L"buttonOne";
            this->buttonOne->Size = System::Drawing::Size(68, 91);
            this->buttonOne->TabIndex = 15;
            this->buttonOne->Text = L"1";
            this->buttonOne->UseCompatibleTextRendering = true;
            this->buttonOne->UseVisualStyleBackColor = true;
            this->buttonOne->Click += gcnew System::EventHandler(this, &MyForm::buttonOne_Click);
            // 
            // btnC
            // 
            this->btnC->AutoEllipsis = true;
            this->btnC->BackColor = System::Drawing::Color::White;
            this->btnC->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnC->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnC->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnC->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnC->Location = System::Drawing::Point(3, 197);
            this->btnC->Name = L"btnC";
            this->btnC->Size = System::Drawing::Size(68, 91);
            this->btnC->TabIndex = 11;
            this->btnC->Text = L"C";
            this->btnC->UseCompatibleTextRendering = true;
            this->btnC->UseVisualStyleBackColor = true;
            this->btnC->Click += gcnew System::EventHandler(this, &MyForm::btnC_Click);
            // 
            // btnSix
            // 
            this->btnSix->AutoEllipsis = true;
            this->btnSix->BackColor = System::Drawing::Color::White;
            this->btnSix->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnSix->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnSix->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnSix->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnSix->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnSix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSix->Location = System::Drawing::Point(225, 100);
            this->btnSix->Name = L"btnSix";
            this->btnSix->Size = System::Drawing::Size(68, 91);
            this->btnSix->TabIndex = 10;
            this->btnSix->Text = L"6";
            this->btnSix->UseCompatibleTextRendering = true;
            this->btnSix->UseVisualStyleBackColor = true;
            this->btnSix->Click += gcnew System::EventHandler(this, &MyForm::btnSix_Click);
            // 
            // buttonNine
            // 
            this->buttonNine->AutoEllipsis = true;
            this->buttonNine->BackColor = System::Drawing::Color::White;
            this->buttonNine->Dock = System::Windows::Forms::DockStyle::Fill;
            this->buttonNine->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonNine->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->buttonNine->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonNine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonNine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonNine->Location = System::Drawing::Point(225, 3);
            this->buttonNine->Name = L"buttonNine";
            this->buttonNine->Size = System::Drawing::Size(68, 91);
            this->buttonNine->TabIndex = 6;
            this->buttonNine->Text = L"9";
            this->buttonNine->UseCompatibleTextRendering = true;
            this->buttonNine->UseVisualStyleBackColor = true;
            this->buttonNine->Click += gcnew System::EventHandler(this, &MyForm::buttonNine_Click);
            // 
            // buttonEight
            // 
            this->buttonEight->AutoEllipsis = true;
            this->buttonEight->BackColor = System::Drawing::Color::White;
            this->buttonEight->Dock = System::Windows::Forms::DockStyle::Fill;
            this->buttonEight->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonEight->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->buttonEight->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonEight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonEight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonEight->Location = System::Drawing::Point(151, 3);
            this->buttonEight->Name = L"buttonEight";
            this->buttonEight->Size = System::Drawing::Size(68, 91);
            this->buttonEight->TabIndex = 6;
            this->buttonEight->Text = L"8";
            this->buttonEight->UseCompatibleTextRendering = true;
            this->buttonEight->UseVisualStyleBackColor = true;
            this->buttonEight->Click += gcnew System::EventHandler(this, &MyForm::buttonEight_Click);
            // 
            // btnA
            // 
            this->btnA->AutoEllipsis = true;
            this->btnA->BackColor = System::Drawing::Color::White;
            this->btnA->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnA->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnA->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnA->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnA->Location = System::Drawing::Point(3, 3);
            this->btnA->Name = L"btnA";
            this->btnA->Size = System::Drawing::Size(68, 91);
            this->btnA->TabIndex = 4;
            this->btnA->Text = L"A";
            this->btnA->UseCompatibleTextRendering = true;
            this->btnA->UseVisualStyleBackColor = true;
            this->btnA->Click += gcnew System::EventHandler(this, &MyForm::btnA_Click);
            // 
            // btnB
            // 
            this->btnB->AutoEllipsis = true;
            this->btnB->BackColor = System::Drawing::Color::White;
            this->btnB->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnB->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnB->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnB->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnB->Location = System::Drawing::Point(3, 100);
            this->btnB->Name = L"btnB";
            this->btnB->Size = System::Drawing::Size(68, 91);
            this->btnB->TabIndex = 5;
            this->btnB->Text = L"B";
            this->btnB->UseCompatibleTextRendering = true;
            this->btnB->UseVisualStyleBackColor = true;
            this->btnB->Click += gcnew System::EventHandler(this, &MyForm::btnB_Click);
            // 
            // btnSeven
            // 
            this->btnSeven->AutoEllipsis = true;
            this->btnSeven->BackColor = System::Drawing::Color::White;
            this->btnSeven->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnSeven->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnSeven->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnSeven->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnSeven->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnSeven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSeven->Location = System::Drawing::Point(77, 3);
            this->btnSeven->Name = L"btnSeven";
            this->btnSeven->Size = System::Drawing::Size(68, 91);
            this->btnSeven->TabIndex = 4;
            this->btnSeven->Text = L"7";
            this->btnSeven->UseCompatibleTextRendering = true;
            this->btnSeven->UseVisualStyleBackColor = true;
            this->btnSeven->Click += gcnew System::EventHandler(this, &MyForm::btnSeven_Click);
            // 
            // btnFive
            // 
            this->btnFive->AutoEllipsis = true;
            this->btnFive->BackColor = System::Drawing::Color::White;
            this->btnFive->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnFive->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnFive->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnFive->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnFive->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnFive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnFive->Location = System::Drawing::Point(151, 100);
            this->btnFive->Name = L"btnFive";
            this->btnFive->Size = System::Drawing::Size(68, 91);
            this->btnFive->TabIndex = 9;
            this->btnFive->Text = L"5";
            this->btnFive->UseCompatibleTextRendering = true;
            this->btnFive->UseVisualStyleBackColor = true;
            this->btnFive->Click += gcnew System::EventHandler(this, &MyForm::btnFive_Click);
            // 
            // panel4
            // 
            this->panel4->Controls->Add(this->lblResultValue);
            this->panel4->Controls->Add(this->lblFrom);
            this->panel4->Controls->Add(this->label2);
            this->panel4->Controls->Add(this->comboBox2);
            this->panel4->Controls->Add(this->label1);
            this->panel4->Controls->Add(this->comboBox1);
            this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel4->Location = System::Drawing::Point(3, 3);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(373, 170);
            this->panel4->TabIndex = 1;
            // 
            // lblResultValue
            // 
            this->lblResultValue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lblResultValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblResultValue->ForeColor = System::Drawing::Color::Black;
            this->lblResultValue->Location = System::Drawing::Point(2, 49);
            this->lblResultValue->Name = L"lblResultValue";
            this->lblResultValue->Size = System::Drawing::Size(368, 30);
            this->lblResultValue->TabIndex = 7;
            this->lblResultValue->TextAlign = System::Drawing::ContentAlignment::BottomRight;
            // 
            // lblFrom
            // 
            this->lblFrom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lblFrom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblFrom->ForeColor = System::Drawing::Color::Black;
            this->lblFrom->Location = System::Drawing::Point(-1, 0);
            this->lblFrom->Name = L"lblFrom";
            this->lblFrom->Size = System::Drawing::Size(370, 40);
            this->lblFrom->TabIndex = 6;
            this->lblFrom->TextAlign = System::Drawing::ContentAlignment::BottomRight;
            // 
            // label2
            // 
            this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::Gray;
            this->label2->Location = System::Drawing::Point(3, 130);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(57, 34);
            this->label2->TabIndex = 5;
            this->label2->Text = L"To";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // comboBox2
            // 
            this->comboBox2->AllowDrop = true;
            this->comboBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"HEX", L"DECIMAL", L"OCTAL", L"BINARY" });
            this->comboBox2->Location = System::Drawing::Point(66, 137);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(304, 24);
            this->comboBox2->TabIndex = 4;
            this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
            // 
            // label1
            // 
            this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Gray;
            this->label1->Location = System::Drawing::Point(3, 94);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(57, 34);
            this->label1->TabIndex = 3;
            this->label1->Text = L"From";
            this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // comboBox1
            // 
            this->comboBox1->AllowDrop = true;
            this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"HEX", L"DECIMAL", L"OCTAL", L"BINARY" });
            this->comboBox1->Location = System::Drawing::Point(66, 101);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(304, 24);
            this->comboBox1->TabIndex = 2;
            this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // 
            // tabPage4
            // 
            this->tabPage4->Controls->Add(this->panel1);
            this->tabPage4->Controls->Add(this->panel2);
            this->tabPage4->Location = System::Drawing::Point(4, 22);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Padding = System::Windows::Forms::Padding(3);
            this->tabPage4->Size = System::Drawing::Size(392, 580);
            this->tabPage4->TabIndex = 1;
            this->tabPage4->Text = L"Calculator";
            this->tabPage4->UseVisualStyleBackColor = true;
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->panel3);
            this->panel1->Controls->Add(this->button13);
            this->panel1->Controls->Add(this->button14);
            this->panel1->Controls->Add(this->button15);
            this->panel1->Controls->Add(this->button16);
            this->panel1->Controls->Add(this->button9);
            this->panel1->Controls->Add(this->button10);
            this->panel1->Controls->Add(this->button11);
            this->panel1->Controls->Add(this->button12);
            this->panel1->Controls->Add(this->button5);
            this->panel1->Controls->Add(this->button6);
            this->panel1->Controls->Add(this->button7);
            this->panel1->Controls->Add(this->button8);
            this->panel1->Controls->Add(this->button4);
            this->panel1->Controls->Add(this->button3);
            this->panel1->Controls->Add(this->button2);
            this->panel1->Controls->Add(this->button1);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel1->Location = System::Drawing::Point(3, 157);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(386, 420);
            this->panel1->TabIndex = 1;
            // 
            // panel3
            // 
            this->panel3->Controls->Add(this->tableLayoutPanel2);
            this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel3->Location = System::Drawing::Point(0, 0);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(386, 420);
            this->panel3->TabIndex = 16;
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->ColumnCount = 5;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel2->Controls->Add(this->btnDot, 1, 5);
            this->tableLayoutPanel2->Controls->Add(this->btnDivison, 3, 5);
            this->tableLayoutPanel2->Controls->Add(this->btn0, 2, 5);
            this->tableLayoutPanel2->Controls->Add(this->buttonCos, 0, 1);
            this->tableLayoutPanel2->Controls->Add(this->btnEquals, 4, 5);
            this->tableLayoutPanel2->Controls->Add(this->btn4, 1, 3);
            this->tableLayoutPanel2->Controls->Add(this->btnPow, 4, 1);
            this->tableLayoutPanel2->Controls->Add(this->buttonLn, 3, 1);
            this->tableLayoutPanel2->Controls->Add(this->btnRadical, 2, 1);
            this->tableLayoutPanel2->Controls->Add(this->buttonTan, 1, 1);
            this->tableLayoutPanel2->Controls->Add(this->btnBack, 4, 0);
            this->tableLayoutPanel2->Controls->Add(this->btnClear, 3, 0);
            this->tableLayoutPanel2->Controls->Add(this->rightBracket, 2, 0);
            this->tableLayoutPanel2->Controls->Add(this->lftBracket, 1, 0);
            this->tableLayoutPanel2->Controls->Add(this->buttonPi, 0, 0);
            this->tableLayoutPanel2->Controls->Add(this->btnPlus, 4, 4);
            this->tableLayoutPanel2->Controls->Add(this->btnMinus, 4, 3);
            this->tableLayoutPanel2->Controls->Add(this->btnMultiplication, 4, 2);
            this->tableLayoutPanel2->Controls->Add(this->btn3, 3, 4);
            this->tableLayoutPanel2->Controls->Add(this->btn2, 2, 4);
            this->tableLayoutPanel2->Controls->Add(this->btn1, 1, 4);
            this->tableLayoutPanel2->Controls->Add(this->btnLog, 0, 4);
            this->tableLayoutPanel2->Controls->Add(this->button26, 0, 5);
            this->tableLayoutPanel2->Controls->Add(this->btn6, 3, 3);
            this->tableLayoutPanel2->Controls->Add(this->btn9, 3, 2);
            this->tableLayoutPanel2->Controls->Add(this->btn8, 2, 2);
            this->tableLayoutPanel2->Controls->Add(this->btnSin, 0, 2);
            this->tableLayoutPanel2->Controls->Add(this->btnLogBase2, 0, 3);
            this->tableLayoutPanel2->Controls->Add(this->btn7, 1, 2);
            this->tableLayoutPanel2->Controls->Add(this->btn5, 2, 3);
            this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 6;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(386, 420);
            this->tableLayoutPanel2->TabIndex = 3;
            // 
            // btnDot
            // 
            this->btnDot->AutoEllipsis = true;
            this->btnDot->BackColor = System::Drawing::Color::White;
            this->btnDot->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnDot->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnDot->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnDot->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnDot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDot->Location = System::Drawing::Point(80, 353);
            this->btnDot->Name = L"btnDot";
            this->btnDot->Size = System::Drawing::Size(71, 64);
            this->btnDot->TabIndex = 36;
            this->btnDot->Text = L".";
            this->btnDot->UseCompatibleTextRendering = true;
            this->btnDot->UseVisualStyleBackColor = true;
            // 
            // btnDivison
            // 
            this->btnDivison->AutoEllipsis = true;
            this->btnDivison->BackColor = System::Drawing::Color::White;
            this->btnDivison->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnDivison->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnDivison->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnDivison->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnDivison->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnDivison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDivison->Location = System::Drawing::Point(234, 353);
            this->btnDivison->Name = L"btnDivison";
            this->btnDivison->Size = System::Drawing::Size(71, 64);
            this->btnDivison->TabIndex = 35;
            this->btnDivison->Text = L"/";
            this->btnDivison->UseCompatibleTextRendering = true;
            this->btnDivison->UseVisualStyleBackColor = true;
            // 
            // btn0
            // 
            this->btn0->AutoEllipsis = true;
            this->btn0->BackColor = System::Drawing::Color::White;
            this->btn0->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btn0->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn0->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btn0->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn0->Location = System::Drawing::Point(157, 353);
            this->btn0->Name = L"btn0";
            this->btn0->Size = System::Drawing::Size(71, 64);
            this->btn0->TabIndex = 34;
            this->btn0->Text = L"0";
            this->btn0->UseCompatibleTextRendering = true;
            this->btn0->UseVisualStyleBackColor = true;
            this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btn0_Click_1);
            // 
            // buttonCos
            // 
            this->buttonCos->AutoEllipsis = true;
            this->buttonCos->BackColor = System::Drawing::Color::White;
            this->buttonCos->Dock = System::Windows::Forms::DockStyle::Fill;
            this->buttonCos->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonCos->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->buttonCos->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonCos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonCos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonCos->Location = System::Drawing::Point(3, 73);
            this->buttonCos->Name = L"buttonCos";
            this->buttonCos->Size = System::Drawing::Size(71, 64);
            this->buttonCos->TabIndex = 31;
            this->buttonCos->Text = L"cos";
            this->buttonCos->UseCompatibleTextRendering = true;
            this->buttonCos->UseVisualStyleBackColor = true;
            this->buttonCos->Click += gcnew System::EventHandler(this, &MyForm::buttonCos_Click);
            // 
            // btnEquals
            // 
            this->btnEquals->AutoEllipsis = true;
            this->btnEquals->BackColor = System::Drawing::Color::White;
            this->btnEquals->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnEquals->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnEquals->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnEquals->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnEquals->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnEquals->Location = System::Drawing::Point(311, 353);
            this->btnEquals->Name = L"btnEquals";
            this->btnEquals->Size = System::Drawing::Size(72, 64);
            this->btnEquals->TabIndex = 29;
            this->btnEquals->Text = L"=";
            this->btnEquals->UseCompatibleTextRendering = true;
            this->btnEquals->UseVisualStyleBackColor = true;
            this->btnEquals->Click += gcnew System::EventHandler(this, &MyForm::btnEquals_Click);
            // 
            // btn4
            // 
            this->btn4->AutoEllipsis = true;
            this->btn4->BackColor = System::Drawing::Color::White;
            this->btn4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btn4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn4->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btn4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn4->Location = System::Drawing::Point(80, 213);
            this->btn4->Name = L"btn4";
            this->btn4->Size = System::Drawing::Size(71, 64);
            this->btn4->TabIndex = 28;
            this->btn4->Text = L"4";
            this->btn4->UseCompatibleTextRendering = true;
            this->btn4->UseVisualStyleBackColor = true;
            this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
            // 
            // btnPow
            // 
            this->btnPow->AutoEllipsis = true;
            this->btnPow->BackColor = System::Drawing::Color::White;
            this->btnPow->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnPow->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnPow->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnPow->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnPow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnPow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnPow->Location = System::Drawing::Point(311, 73);
            this->btnPow->Name = L"btnPow";
            this->btnPow->Size = System::Drawing::Size(72, 64);
            this->btnPow->TabIndex = 27;
            this->btnPow->Text = L"^";
            this->btnPow->UseCompatibleTextRendering = true;
            this->btnPow->UseVisualStyleBackColor = true;
            this->btnPow->Click += gcnew System::EventHandler(this, &MyForm::btnPow_Click);
            // 
            // buttonLn
            // 
            this->buttonLn->AutoEllipsis = true;
            this->buttonLn->BackColor = System::Drawing::Color::White;
            this->buttonLn->Dock = System::Windows::Forms::DockStyle::Fill;
            this->buttonLn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonLn->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->buttonLn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonLn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonLn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonLn->Location = System::Drawing::Point(234, 73);
            this->buttonLn->Name = L"buttonLn";
            this->buttonLn->Size = System::Drawing::Size(71, 64);
            this->buttonLn->TabIndex = 26;
            this->buttonLn->Text = L"ln";
            this->buttonLn->UseCompatibleTextRendering = true;
            this->buttonLn->UseVisualStyleBackColor = true;
            this->buttonLn->Click += gcnew System::EventHandler(this, &MyForm::buttonLn_Click);
            // 
            // btnRadical
            // 
            this->btnRadical->AutoEllipsis = true;
            this->btnRadical->BackColor = System::Drawing::Color::White;
            this->btnRadical->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnRadical->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnRadical->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnRadical->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnRadical->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnRadical->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnRadical->Location = System::Drawing::Point(157, 73);
            this->btnRadical->Name = L"btnRadical";
            this->btnRadical->Size = System::Drawing::Size(71, 64);
            this->btnRadical->TabIndex = 25;
            this->btnRadical->Text = L"√";
            this->btnRadical->UseCompatibleTextRendering = true;
            this->btnRadical->UseVisualStyleBackColor = true;
            this->btnRadical->Click += gcnew System::EventHandler(this, &MyForm::btnRadical_Click);
            // 
            // buttonTan
            // 
            this->buttonTan->AutoEllipsis = true;
            this->buttonTan->BackColor = System::Drawing::Color::White;
            this->buttonTan->Dock = System::Windows::Forms::DockStyle::Fill;
            this->buttonTan->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonTan->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->buttonTan->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonTan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonTan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonTan->Location = System::Drawing::Point(80, 73);
            this->buttonTan->Name = L"buttonTan";
            this->buttonTan->Size = System::Drawing::Size(71, 64);
            this->buttonTan->TabIndex = 24;
            this->buttonTan->Text = L"tan";
            this->buttonTan->UseCompatibleTextRendering = true;
            this->buttonTan->UseVisualStyleBackColor = true;
            this->buttonTan->Click += gcnew System::EventHandler(this, &MyForm::buttonTan_Click);
            // 
            // btnBack
            // 
            this->btnBack->AutoEllipsis = true;
            this->btnBack->BackColor = System::Drawing::Color::White;
            this->btnBack->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnBack->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnBack->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnBack->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnBack->Location = System::Drawing::Point(311, 3);
            this->btnBack->Name = L"btnBack";
            this->btnBack->Size = System::Drawing::Size(72, 64);
            this->btnBack->TabIndex = 22;
            this->btnBack->Text = L"<-";
            this->btnBack->UseCompatibleTextRendering = true;
            this->btnBack->UseVisualStyleBackColor = true;
            this->btnBack->Click += gcnew System::EventHandler(this, &MyForm::btnBack_Click);
            // 
            // btnClear
            // 
            this->btnClear->AutoEllipsis = true;
            this->btnClear->BackColor = System::Drawing::Color::White;
            this->btnClear->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnClear->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnClear->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnClear->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnClear->Location = System::Drawing::Point(234, 3);
            this->btnClear->Name = L"btnClear";
            this->btnClear->Size = System::Drawing::Size(71, 64);
            this->btnClear->TabIndex = 21;
            this->btnClear->Text = L"CL";
            this->btnClear->UseCompatibleTextRendering = true;
            this->btnClear->UseVisualStyleBackColor = true;
            this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
            // 
            // rightBracket
            // 
            this->rightBracket->AutoEllipsis = true;
            this->rightBracket->BackColor = System::Drawing::Color::White;
            this->rightBracket->Dock = System::Windows::Forms::DockStyle::Fill;
            this->rightBracket->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->rightBracket->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->rightBracket->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->rightBracket->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->rightBracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rightBracket->Location = System::Drawing::Point(157, 3);
            this->rightBracket->Name = L"rightBracket";
            this->rightBracket->Size = System::Drawing::Size(71, 64);
            this->rightBracket->TabIndex = 20;
            this->rightBracket->Text = L")";
            this->rightBracket->UseCompatibleTextRendering = true;
            this->rightBracket->UseVisualStyleBackColor = true;
            this->rightBracket->Click += gcnew System::EventHandler(this, &MyForm::rightBracket_Click);
            // 
            // lftBracket
            // 
            this->lftBracket->AutoEllipsis = true;
            this->lftBracket->BackColor = System::Drawing::Color::White;
            this->lftBracket->Dock = System::Windows::Forms::DockStyle::Fill;
            this->lftBracket->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->lftBracket->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->lftBracket->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->lftBracket->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->lftBracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lftBracket->Location = System::Drawing::Point(80, 3);
            this->lftBracket->Name = L"lftBracket";
            this->lftBracket->Size = System::Drawing::Size(71, 64);
            this->lftBracket->TabIndex = 19;
            this->lftBracket->Text = L"(";
            this->lftBracket->UseCompatibleTextRendering = true;
            this->lftBracket->UseVisualStyleBackColor = true;
            this->lftBracket->Click += gcnew System::EventHandler(this, &MyForm::leftBarcket);
            // 
            // buttonPi
            // 
            this->buttonPi->AutoEllipsis = true;
            this->buttonPi->BackColor = System::Drawing::Color::White;
            this->buttonPi->Dock = System::Windows::Forms::DockStyle::Fill;
            this->buttonPi->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonPi->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->buttonPi->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->buttonPi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonPi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonPi->Location = System::Drawing::Point(3, 3);
            this->buttonPi->Name = L"buttonPi";
            this->buttonPi->Size = System::Drawing::Size(71, 64);
            this->buttonPi->TabIndex = 7;
            this->buttonPi->Text = L"PI";
            this->buttonPi->UseCompatibleTextRendering = true;
            this->buttonPi->UseVisualStyleBackColor = true;
            this->buttonPi->Click += gcnew System::EventHandler(this, &MyForm::buttonPi_Click);
            // 
            // btnPlus
            // 
            this->btnPlus->AutoEllipsis = true;
            this->btnPlus->BackColor = System::Drawing::Color::White;
            this->btnPlus->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnPlus->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnPlus->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnPlus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnPlus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnPlus->Location = System::Drawing::Point(311, 283);
            this->btnPlus->Name = L"btnPlus";
            this->btnPlus->Size = System::Drawing::Size(72, 64);
            this->btnPlus->TabIndex = 7;
            this->btnPlus->Text = L"+";
            this->btnPlus->UseCompatibleTextRendering = true;
            this->btnPlus->UseVisualStyleBackColor = true;
            this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::btnPlus_Click);
            // 
            // btnMinus
            // 
            this->btnMinus->AutoEllipsis = true;
            this->btnMinus->BackColor = System::Drawing::Color::White;
            this->btnMinus->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnMinus->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnMinus->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnMinus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnMinus->Location = System::Drawing::Point(311, 213);
            this->btnMinus->Name = L"btnMinus";
            this->btnMinus->Size = System::Drawing::Size(72, 64);
            this->btnMinus->TabIndex = 7;
            this->btnMinus->Text = L"-";
            this->btnMinus->UseCompatibleTextRendering = true;
            this->btnMinus->UseVisualStyleBackColor = true;
            this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::btnMinus_Click);
            // 
            // btnMultiplication
            // 
            this->btnMultiplication->AutoEllipsis = true;
            this->btnMultiplication->BackColor = System::Drawing::Color::White;
            this->btnMultiplication->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnMultiplication->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnMultiplication->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnMultiplication->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnMultiplication->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnMultiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btnMultiplication->Location = System::Drawing::Point(311, 143);
            this->btnMultiplication->Name = L"btnMultiplication";
            this->btnMultiplication->Size = System::Drawing::Size(72, 64);
            this->btnMultiplication->TabIndex = 7;
            this->btnMultiplication->Text = L"*";
            this->btnMultiplication->UseCompatibleTextRendering = true;
            this->btnMultiplication->UseVisualStyleBackColor = true;
            this->btnMultiplication->Click += gcnew System::EventHandler(this, &MyForm::btnMultiplication_Click);
            // 
            // btn3
            // 
            this->btn3->AutoEllipsis = true;
            this->btn3->BackColor = System::Drawing::Color::White;
            this->btn3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btn3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn3->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btn3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn3->Location = System::Drawing::Point(234, 283);
            this->btn3->Name = L"btn3";
            this->btn3->Size = System::Drawing::Size(71, 64);
            this->btn3->TabIndex = 17;
            this->btn3->Text = L"3";
            this->btn3->UseCompatibleTextRendering = true;
            this->btn3->UseVisualStyleBackColor = true;
            this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
            // 
            // btn2
            // 
            this->btn2->AutoEllipsis = true;
            this->btn2->BackColor = System::Drawing::Color::White;
            this->btn2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btn2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn2->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btn2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn2->Location = System::Drawing::Point(157, 283);
            this->btn2->Name = L"btn2";
            this->btn2->Size = System::Drawing::Size(71, 64);
            this->btn2->TabIndex = 16;
            this->btn2->Text = L"2";
            this->btn2->UseCompatibleTextRendering = true;
            this->btn2->UseVisualStyleBackColor = true;
            this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
            // 
            // btn1
            // 
            this->btn1->AutoEllipsis = true;
            this->btn1->BackColor = System::Drawing::Color::White;
            this->btn1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btn1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn1->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btn1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn1->Location = System::Drawing::Point(80, 283);
            this->btn1->Name = L"btn1";
            this->btn1->Size = System::Drawing::Size(71, 64);
            this->btn1->TabIndex = 15;
            this->btn1->Text = L"1";
            this->btn1->UseCompatibleTextRendering = true;
            this->btn1->UseVisualStyleBackColor = true;
            this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
            // 
            // btnLog
            // 
            this->btnLog->AutoEllipsis = true;
            this->btnLog->BackColor = System::Drawing::Color::White;
            this->btnLog->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnLog->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnLog->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnLog->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnLog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnLog->Location = System::Drawing::Point(3, 283);
            this->btnLog->Name = L"btnLog";
            this->btnLog->Size = System::Drawing::Size(71, 64);
            this->btnLog->TabIndex = 11;
            this->btnLog->Text = L"log₁₀(x)";
            this->btnLog->UseCompatibleTextRendering = true;
            this->btnLog->UseVisualStyleBackColor = true;
            this->btnLog->Click += gcnew System::EventHandler(this, &MyForm::btnLog_Click);
            // 
            // button26
            // 
            this->button26->AutoEllipsis = true;
            this->button26->BackColor = System::Drawing::Color::White;
            this->button26->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button26->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button26->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button26->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button26->Location = System::Drawing::Point(3, 353);
            this->button26->Name = L"button26";
            this->button26->Size = System::Drawing::Size(71, 64);
            this->button26->TabIndex = 13;
            this->button26->Text = L"e";
            this->button26->UseCompatibleTextRendering = true;
            this->button26->UseVisualStyleBackColor = true;
            this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
            // 
            // btn6
            // 
            this->btn6->AutoEllipsis = true;
            this->btn6->BackColor = System::Drawing::Color::White;
            this->btn6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btn6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn6->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btn6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn6->Location = System::Drawing::Point(234, 213);
            this->btn6->Name = L"btn6";
            this->btn6->Size = System::Drawing::Size(71, 64);
            this->btn6->TabIndex = 10;
            this->btn6->Text = L"6";
            this->btn6->UseCompatibleTextRendering = true;
            this->btn6->UseVisualStyleBackColor = true;
            this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
            // 
            // btn9
            // 
            this->btn9->AutoEllipsis = true;
            this->btn9->BackColor = System::Drawing::Color::White;
            this->btn9->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btn9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn9->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btn9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn9->Location = System::Drawing::Point(234, 143);
            this->btn9->Name = L"btn9";
            this->btn9->Size = System::Drawing::Size(71, 64);
            this->btn9->TabIndex = 6;
            this->btn9->Text = L"9";
            this->btn9->UseCompatibleTextRendering = true;
            this->btn9->UseVisualStyleBackColor = true;
            this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
            // 
            // btn8
            // 
            this->btn8->AutoEllipsis = true;
            this->btn8->BackColor = System::Drawing::Color::White;
            this->btn8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btn8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn8->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btn8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn8->Location = System::Drawing::Point(157, 143);
            this->btn8->Name = L"btn8";
            this->btn8->Size = System::Drawing::Size(71, 64);
            this->btn8->TabIndex = 6;
            this->btn8->Text = L"8";
            this->btn8->UseCompatibleTextRendering = true;
            this->btn8->UseVisualStyleBackColor = true;
            this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
            // 
            // btnSin
            // 
            this->btnSin->AutoEllipsis = true;
            this->btnSin->BackColor = System::Drawing::Color::White;
            this->btnSin->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnSin->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnSin->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnSin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnSin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnSin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSin->Location = System::Drawing::Point(3, 143);
            this->btnSin->Name = L"btnSin";
            this->btnSin->Size = System::Drawing::Size(71, 64);
            this->btnSin->TabIndex = 4;
            this->btnSin->Text = L"sin";
            this->btnSin->UseCompatibleTextRendering = true;
            this->btnSin->UseVisualStyleBackColor = true;
            this->btnSin->Click += gcnew System::EventHandler(this, &MyForm::btnSin_Click);
            // 
            // btnLogBase2
            // 
            this->btnLogBase2->AutoEllipsis = true;
            this->btnLogBase2->BackColor = System::Drawing::Color::White;
            this->btnLogBase2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btnLogBase2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnLogBase2->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btnLogBase2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btnLogBase2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnLogBase2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnLogBase2->Location = System::Drawing::Point(3, 213);
            this->btnLogBase2->Name = L"btnLogBase2";
            this->btnLogBase2->Size = System::Drawing::Size(71, 64);
            this->btnLogBase2->TabIndex = 5;
            this->btnLogBase2->Text = L"log₂(x)";
            this->btnLogBase2->UseCompatibleTextRendering = true;
            this->btnLogBase2->UseVisualStyleBackColor = true;
            this->btnLogBase2->Click += gcnew System::EventHandler(this, &MyForm::btnLogBase2_Click);
            // 
            // btn7
            // 
            this->btn7->AutoEllipsis = true;
            this->btn7->BackColor = System::Drawing::Color::White;
            this->btn7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btn7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn7->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btn7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn7->Location = System::Drawing::Point(80, 143);
            this->btn7->Name = L"btn7";
            this->btn7->Size = System::Drawing::Size(71, 64);
            this->btn7->TabIndex = 4;
            this->btn7->Text = L"7";
            this->btn7->UseCompatibleTextRendering = true;
            this->btn7->UseVisualStyleBackColor = true;
            this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
            // 
            // btn5
            // 
            this->btn5->AutoEllipsis = true;
            this->btn5->BackColor = System::Drawing::Color::White;
            this->btn5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->btn5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn5->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->btn5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn5->Location = System::Drawing::Point(157, 213);
            this->btn5->Name = L"btn5";
            this->btn5->Size = System::Drawing::Size(71, 64);
            this->btn5->TabIndex = 9;
            this->btn5->Text = L"5";
            this->btn5->UseCompatibleTextRendering = true;
            this->btn5->UseVisualStyleBackColor = true;
            this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
            // 
            // button13
            // 
            this->button13->AutoEllipsis = true;
            this->button13->BackColor = System::Drawing::Color::White;
            this->button13->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button13->Location = System::Drawing::Point(9, 135);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(84, 49);
            this->button13->TabIndex = 15;
            this->button13->Text = L"%";
            this->button13->UseCompatibleTextRendering = true;
            this->button13->UseVisualStyleBackColor = true;
            // 
            // button14
            // 
            this->button14->AutoEllipsis = true;
            this->button14->BackColor = System::Drawing::Color::White;
            this->button14->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button14->Location = System::Drawing::Point(99, 135);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(84, 49);
            this->button14->TabIndex = 14;
            this->button14->Text = L"CE";
            this->button14->UseCompatibleTextRendering = true;
            this->button14->UseVisualStyleBackColor = true;
            // 
            // button15
            // 
            this->button15->AutoEllipsis = true;
            this->button15->BackColor = System::Drawing::Color::White;
            this->button15->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button15->Location = System::Drawing::Point(189, 135);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(84, 49);
            this->button15->TabIndex = 13;
            this->button15->Text = L"C";
            this->button15->UseCompatibleTextRendering = true;
            this->button15->UseVisualStyleBackColor = true;
            // 
            // button16
            // 
            this->button16->AutoEllipsis = true;
            this->button16->BackColor = System::Drawing::Color::White;
            this->button16->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button16->Location = System::Drawing::Point(279, 135);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(84, 49);
            this->button16->TabIndex = 12;
            this->button16->Text = L"<";
            this->button16->UseCompatibleTextRendering = true;
            this->button16->UseVisualStyleBackColor = true;
            // 
            // button9
            // 
            this->button9->AutoEllipsis = true;
            this->button9->BackColor = System::Drawing::Color::White;
            this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->Location = System::Drawing::Point(9, 80);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(84, 49);
            this->button9->TabIndex = 11;
            this->button9->Text = L"%";
            this->button9->UseCompatibleTextRendering = true;
            this->button9->UseVisualStyleBackColor = true;
            // 
            // button10
            // 
            this->button10->AutoEllipsis = true;
            this->button10->BackColor = System::Drawing::Color::White;
            this->button10->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button10->Location = System::Drawing::Point(99, 80);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(84, 49);
            this->button10->TabIndex = 10;
            this->button10->Text = L"CE";
            this->button10->UseCompatibleTextRendering = true;
            this->button10->UseVisualStyleBackColor = true;
            // 
            // button11
            // 
            this->button11->AutoEllipsis = true;
            this->button11->BackColor = System::Drawing::Color::White;
            this->button11->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button11->Location = System::Drawing::Point(189, 80);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(84, 49);
            this->button11->TabIndex = 9;
            this->button11->Text = L"C";
            this->button11->UseCompatibleTextRendering = true;
            this->button11->UseVisualStyleBackColor = true;
            // 
            // button12
            // 
            this->button12->AutoEllipsis = true;
            this->button12->BackColor = System::Drawing::Color::White;
            this->button12->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button12->Location = System::Drawing::Point(279, 80);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(84, 49);
            this->button12->TabIndex = 8;
            this->button12->Text = L"<";
            this->button12->UseCompatibleTextRendering = true;
            this->button12->UseVisualStyleBackColor = true;
            // 
            // button5
            // 
            this->button5->AutoEllipsis = true;
            this->button5->BackColor = System::Drawing::Color::White;
            this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->Location = System::Drawing::Point(9, 238);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(84, 49);
            this->button5->TabIndex = 7;
            this->button5->Text = L"%";
            this->button5->UseCompatibleTextRendering = true;
            this->button5->UseVisualStyleBackColor = true;
            // 
            // button6
            // 
            this->button6->AutoEllipsis = true;
            this->button6->BackColor = System::Drawing::Color::White;
            this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->Location = System::Drawing::Point(99, 238);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(84, 49);
            this->button6->TabIndex = 6;
            this->button6->Text = L"CE";
            this->button6->UseCompatibleTextRendering = true;
            this->button6->UseVisualStyleBackColor = true;
            // 
            // button7
            // 
            this->button7->AutoEllipsis = true;
            this->button7->BackColor = System::Drawing::Color::White;
            this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->Location = System::Drawing::Point(189, 238);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(84, 49);
            this->button7->TabIndex = 5;
            this->button7->Text = L"C";
            this->button7->UseCompatibleTextRendering = true;
            this->button7->UseVisualStyleBackColor = true;
            // 
            // button8
            // 
            this->button8->AutoEllipsis = true;
            this->button8->BackColor = System::Drawing::Color::White;
            this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->Location = System::Drawing::Point(279, 238);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(84, 49);
            this->button8->TabIndex = 4;
            this->button8->Text = L"<";
            this->button8->UseCompatibleTextRendering = true;
            this->button8->UseVisualStyleBackColor = true;
            // 
            // button4
            // 
            this->button4->AutoEllipsis = true;
            this->button4->BackColor = System::Drawing::Color::White;
            this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->Location = System::Drawing::Point(9, 25);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(84, 49);
            this->button4->TabIndex = 3;
            this->button4->Text = L"%";
            this->button4->UseCompatibleTextRendering = true;
            this->button4->UseVisualStyleBackColor = true;
            // 
            // button3
            // 
            this->button3->AutoEllipsis = true;
            this->button3->BackColor = System::Drawing::Color::White;
            this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(99, 25);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(84, 49);
            this->button3->TabIndex = 2;
            this->button3->Text = L"CE";
            this->button3->UseCompatibleTextRendering = true;
            this->button3->UseVisualStyleBackColor = true;
            // 
            // button2
            // 
            this->button2->AutoEllipsis = true;
            this->button2->BackColor = System::Drawing::Color::White;
            this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(189, 25);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(84, 49);
            this->button2->TabIndex = 1;
            this->button2->Text = L"C";
            this->button2->UseCompatibleTextRendering = true;
            this->button2->UseVisualStyleBackColor = true;
            // 
            // button1
            // 
            this->button1->AutoEllipsis = true;
            this->button1->BackColor = System::Drawing::Color::White;
            this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(279, 25);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(84, 49);
            this->button1->TabIndex = 0;
            this->button1->Text = L"<";
            this->button1->UseCompatibleTextRendering = true;
            this->button1->UseVisualStyleBackColor = true;
            // 
            // panel2
            // 
            this->panel2->Controls->Add(this->btnRad);
            this->panel2->Controls->Add(this->lblResult);
            this->panel2->Controls->Add(this->lblDisplay);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel2->Location = System::Drawing::Point(3, 3);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(386, 154);
            this->panel2->TabIndex = 0;
            // 
            // btnRad
            // 
            this->btnRad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnRad->Location = System::Drawing::Point(6, 109);
            this->btnRad->Name = L"btnRad";
            this->btnRad->Size = System::Drawing::Size(68, 42);
            this->btnRad->TabIndex = 4;
            this->btnRad->Text = L"Rad";
            this->btnRad->UseVisualStyleBackColor = true;
            this->btnRad->Click += gcnew System::EventHandler(this, &MyForm::btnRad_Click);
            // 
            // lblResult
            // 
            this->lblResult->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lblResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblResult->ForeColor = System::Drawing::Color::Black;
            this->lblResult->Location = System::Drawing::Point(3, 43);
            this->lblResult->Name = L"lblResult";
            this->lblResult->Size = System::Drawing::Size(381, 34);
            this->lblResult->TabIndex = 3;
            this->lblResult->TextAlign = System::Drawing::ContentAlignment::BottomRight;
            this->lblResult->Click += gcnew System::EventHandler(this, &MyForm::lblResult_Click);
            // 
            // lblDisplay
            // 
            this->lblDisplay->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblDisplay->ForeColor = System::Drawing::Color::Gray;
            this->lblDisplay->Location = System::Drawing::Point(5, 0);
            this->lblDisplay->Name = L"lblDisplay";
            this->lblDisplay->Size = System::Drawing::Size(378, 34);
            this->lblDisplay->TabIndex = 2;
            this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::BottomRight;
            // 
            // MyForm
            // 
            this->ClientSize = System::Drawing::Size(400, 606);
            this->Controls->Add(this->tabControl2);
            this->Name = L"MyForm";
            this->tabControl1->ResumeLayout(false);
            this->tabControl2->ResumeLayout(false);
            this->tabPage3->ResumeLayout(false);
            this->tableLayoutPanel1->ResumeLayout(false);
            this->panel4->ResumeLayout(false);
            this->tabPage4->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->panel3->ResumeLayout(false);
            this->tableLayoutPanel2->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
    //String displayString,EvaluationString;

    private: System::Void buttonCE_Click(System::Object^ sender, System::EventArgs^ e) {

    }

private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
    lblDisplay->Text += btn1->Text;
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
    lblDisplay->Text += btn2->Text;

}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
    lblDisplay->Text += btn3->Text;

}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
    lblDisplay->Text += btn4->Text;

}
private: System::Void btnRadical_Click(System::Object^ sender, System::EventArgs^ e) {
    if (lblDisplay->Text->Length > 0) {
        if ((lblDisplay->Text[lblDisplay->Text->Length - 1] >= '0' && lblDisplay->Text[lblDisplay->Text->Length - 1] <= '9') || lblDisplay->Text[lblDisplay->Text->Length - 1] == ')') {
            lblDisplay->Text += L"*";
        }
    }
    lblDisplay->Text += L"sqrt";
    lblDisplay->Text += L"(";
}
private: System::Void buttonPi_Click(System::Object^ sender, System::EventArgs^ e) {
    if (lblDisplay->Text->Length > 0) {
        if ((lblDisplay->Text[lblDisplay->Text->Length - 1] >= '0' && lblDisplay->Text[lblDisplay->Text->Length - 1] <= '9') || lblDisplay->Text[lblDisplay->Text->Length - 1] == ')') {
            lblDisplay->Text += L"*";
        }
    }
    
    lblDisplay->Text += M_PI.ToString();
    
}
private: System::Void btnMultiplication_Click(System::Object^ sender, System::EventArgs^ e) {


    if (lblDisplay->Text->Length > 0) {
        if (!(lblDisplay->Text[lblDisplay->Text->Length - 1] < '0' || lblDisplay->Text[lblDisplay->Text->Length - 1] > '9') || lblDisplay->Text[lblDisplay->Text->Length - 1] == ')') {
            lblDisplay->Text += btnMultiplication->Text;

        }
    }

}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
    lblDisplay->Text += btn6->Text;

}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
    lblDisplay->Text += btn7->Text;

}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
    lblDisplay->Text += btn8->Text;

}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
    lblDisplay->Text += btn9->Text;

}
private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
    lblDisplay->Text += btn0->Text;

}
private: System::Void btnPlus_Click(System::Object^ sender, System::EventArgs^ e) {
    if (lblDisplay->Text->Length > 0) {
        if (!(lblDisplay->Text[lblDisplay->Text->Length - 1] < '0' || lblDisplay->Text[lblDisplay->Text->Length - 1] > '9') || lblDisplay->Text[lblDisplay->Text->Length - 1] == ')') {

            lblDisplay->Text += btnPlus->Text;
        }
    }


}
private: System::Void btnMinus_Click(System::Object^ sender, System::EventArgs^ e) {

    lblDisplay->Text += btnMinus->Text;

}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
    lblDisplay->Text += btn5->Text;

}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
    if (lblDisplay->Text->Length>0) {
        lblDisplay->Text = lblDisplay->Text->Remove(lblDisplay->Text->Length - 1);
    }
}
private: System::Void btnDivison_Click(System::Object^ sender, System::EventArgs^ e) {
    if (lblDisplay->Text->Length > 0) {
        if (!(lblDisplay->Text[lblDisplay->Text->Length - 1] < '0' || lblDisplay->Text[lblDisplay->Text->Length - 1] > '9') || lblDisplay->Text[lblDisplay->Text->Length - 1] == ')') {
            lblDisplay->Text += btnDivison->Text;

        }
    }


}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
    lblDisplay->Text = "";
    lblResult->Text = "";
}
private: System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e) {
    /*
    * error if the last char of the experation to be evaluated is not a number
    * in that case evaluation will note be done
    */
    if (!(lblDisplay->Text[lblDisplay->Text->Length - 1]<'0' || lblDisplay->Text[lblDisplay->Text->Length - 1] > '9') || lblDisplay->Text[lblDisplay->Text->Length - 1]=='(' || lblDisplay->Text[lblDisplay->Text->Length - 1]==')') {
        infixToPost i = infixToPost();
        Evapost ev = Evapost();

        //to convert String ^ to standard string
        //---------------------------------------
        msclr::interop::marshal_context context;
        std::string standardString = context.marshal_as<std::string>(lblDisplay->Text);
        //---------------------------------------
        Utilite u = Utilite();


        bool deg= (btnRad->Text == L"Deg")?true:false;
        if (u.areBracketsBalanced(standardString)) {
            lblResult->Text = ev.Evaluate(i.toPost(standardString),deg).ToString();
        }
    }
}
private: System::Void lblResult_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btnDot_Click(System::Object^ sender, System::EventArgs^ e) {
    /*
    * error if the last char of the experation is not number while
    * trying to add '.'
    * in that case char dot('.') will not be added.
    */

    if (!(lblDisplay->Text[lblDisplay->Text->Length - 1] < '0' || lblDisplay->Text[lblDisplay->Text->Length - 1] > '9')) {
        lblDisplay->Text += btnDot->Text;
    }
}

private: System::Void leftBarcket(System::Object^ sender, System::EventArgs^ e) {
    if (lblDisplay->Text->Length > 0) {
        if (lblDisplay->Text[lblDisplay->Text->Length - 1] >= '0' && lblDisplay->Text[lblDisplay->Text->Length - 1] >= '0'<='9') {
            lblDisplay->Text += L"*";
        }
    }
    lblDisplay->Text += lftBracket->Text;
}
private: System::Void rightBracket_Click(System::Object^ sender, System::EventArgs^ e) {
    if (lblDisplay->Text->Length > 0) {
        if (lblDisplay->Text[lblDisplay->Text->Length - 1] != '(') {
            lblDisplay->Text += rightBracket->Text;
        }
    }
}
private: System::Void btnSin_Click(System::Object^ sender, System::EventArgs^ e) {
    if (lblDisplay->Text->Length > 0) {
        if ((lblDisplay->Text[lblDisplay->Text->Length - 1] >= '0' && lblDisplay->Text[lblDisplay->Text->Length - 1] <= '9') || lblDisplay->Text[lblDisplay->Text->Length - 1] == ')') {
            lblDisplay->Text += L"*";
        }
    }

    lblDisplay->Text += btnSin->Text;
    lblDisplay->Text += L"(";
}

private: System::Void buttonCos_Click(System::Object^ sender, System::EventArgs^ e) {
    if (lblDisplay->Text->Length > 0) {
        if ((lblDisplay->Text[lblDisplay->Text->Length - 1] >= '0' && lblDisplay->Text[lblDisplay->Text->Length - 1] <= '9') || lblDisplay->Text[lblDisplay->Text->Length - 1] == ')') {
            lblDisplay->Text += L"*";
        }
    }
    lblDisplay->Text += buttonCos->Text;
    lblDisplay->Text += L"(";
}
private: System::Void buttonTan_Click(System::Object^ sender, System::EventArgs^ e) {
    if (lblDisplay->Text->Length > 0) {
        if ((lblDisplay->Text[lblDisplay->Text->Length - 1] >= '0' && lblDisplay->Text[lblDisplay->Text->Length - 1] <= '9') || lblDisplay->Text[lblDisplay->Text->Length - 1] == ')') {
            lblDisplay->Text += L"*";
        }
    }
    lblDisplay->Text += buttonTan->Text;
    lblDisplay->Text += L"(";
}
private: System::Void btnPow_Click(System::Object^ sender, System::EventArgs^ e) {
    if (lblDisplay->Text->Length > 0) {
        if (!(lblDisplay->Text[lblDisplay->Text->Length - 1] < '0' || lblDisplay->Text[lblDisplay->Text->Length - 1] > '9') || lblDisplay->Text[lblDisplay->Text->Length - 1] == ')') {
            lblDisplay->Text += btnPow->Text;

        }
    }
}
private: System::Void btnLog_Click(System::Object^ sender, System::EventArgs^ e) {
    if (lblDisplay->Text->Length > 0) {
        if ((lblDisplay->Text[lblDisplay->Text->Length - 1] >= '0' && lblDisplay->Text[lblDisplay->Text->Length - 1] <= '9') || lblDisplay->Text[lblDisplay->Text->Length - 1] == ')') {
            lblDisplay->Text += L"*";
        }
    }
    lblDisplay->Text += L"log10";
    lblDisplay->Text += L"(";
}
private: System::Void btnLogBase2_Click(System::Object^ sender, System::EventArgs^ e) {
    if (lblDisplay->Text->Length > 0) {
        if ((lblDisplay->Text[lblDisplay->Text->Length - 1] >= '0' && lblDisplay->Text[lblDisplay->Text->Length - 1] <= '9') || lblDisplay->Text[lblDisplay->Text->Length - 1] == ')') {
            lblDisplay->Text += L"*";
        }
    }
    lblDisplay->Text += L"log2";
    lblDisplay->Text += L"(";
}

private: System::Void btnRad_Click(System::Object^ sender, System::EventArgs^ e) {
    if (btnRad->Text == "Rad") {
        btnRad->Text = L"Deg";
    }
    else {
        btnRad->Text = L"Rad";
    }
}
private: System::Void btn0_Click_1(System::Object^ sender, System::EventArgs^ e) {
    lblDisplay->Text += btn0->Text;
}
private: System::Void buttonLn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (lblDisplay->Text->Length > 0) {
        if ((lblDisplay->Text[lblDisplay->Text->Length - 1] >= '0' && lblDisplay->Text[lblDisplay->Text->Length - 1] <= '9') || lblDisplay->Text[lblDisplay->Text->Length - 1] == ')') {
            lblDisplay->Text += L"*";
        }
    }
    lblDisplay->Text += L"ln";
    lblDisplay->Text += L"(";
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
    if (lblDisplay->Text->Length > 0) {
        if ((lblDisplay->Text[lblDisplay->Text->Length - 1] >= '0' && lblDisplay->Text[lblDisplay->Text->Length - 1] <= '9') || lblDisplay->Text[lblDisplay->Text->Length - 1] == ')') {
            lblDisplay->Text += L"*";
        }
    }

    lblDisplay->Text += M_E.ToString();

}
private: System::Void btnFive_Click(System::Object^ sender, System::EventArgs^ e) {
    lblFrom->Text += L"5";
}
private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
    lblFrom->Text += L"C";
}
private: System::Void buttonOne_Click(System::Object^ sender, System::EventArgs^ e) {
    lblFrom->Text += L"1";
}
private: System::Void buttonthree_Click(System::Object^ sender, System::EventArgs^ e) {
    lblFrom->Text += L"3";

}
private: System::Void btnF_Click(System::Object^ sender, System::EventArgs^ e) {
    lblFrom->Text += L"F";

}
private: System::Void btnE_Click(System::Object^ sender, System::EventArgs^ e) {
    lblFrom->Text += L"E";

}
private: System::Void btnSix_Click(System::Object^ sender, System::EventArgs^ e) {
    lblFrom->Text += L"6";

}
private: System::Void buttonTwo_Click(System::Object^ sender, System::EventArgs^ e) {
    lblFrom->Text += L"2";

}
private: System::Void btnfour_Click(System::Object^ sender, System::EventArgs^ e) {
    lblFrom->Text += L"4";

}
private: System::Void btnB_Click(System::Object^ sender, System::EventArgs^ e) {
    lblFrom->Text += L"B";

}
private: System::Void btnA_Click(System::Object^ sender, System::EventArgs^ e) {
    lblFrom->Text += L"A";

}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void btnSeven_Click(System::Object^ sender, System::EventArgs^ e) {
    lblFrom->Text += L"7";

}
private: System::Void buttonEight_Click(System::Object^ sender, System::EventArgs^ e) {
    lblFrom->Text += L"8";

}
private: System::Void buttonNine_Click(System::Object^ sender, System::EventArgs^ e) {
    lblFrom->Text += L"9";

}
private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
    lblFrom->Text += L"0";

}
private: System::Void btnD_Click(System::Object^ sender, System::EventArgs^ e) {
    lblFrom->Text += L"D";

}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    lblFrom->Text = "";
    lblResultValue->Text = "";
    if (comboBox1->SelectedItem == L"BINARY") {
        buttonNine->Enabled = false;
        buttonEight->Enabled = false;
        btnSeven->Enabled = false;
        btnSix->Enabled = false;
        btnFive->Enabled = false;
        btnfour->Enabled = false;
        buttonthree->Enabled = false;
        buttonTwo->Enabled = false;
        buttonOne->Enabled = true;
        button0->Enabled = true;

        btnA->Enabled = false;
        btnB->Enabled = false;
        btnC->Enabled = false;
        btnD->Enabled = false;
        btnE->Enabled = false;
        btnF->Enabled = false;
    }
    else if (comboBox1->SelectedItem == L"HEX") {
        buttonNine->Enabled = true;
        buttonEight->Enabled = true;
        btnSeven->Enabled = true;
        btnSix->Enabled = true;
        btnFive->Enabled = true;
        btnfour->Enabled = true;
        buttonthree->Enabled = true;
        buttonTwo->Enabled = true;
        buttonOne->Enabled = true;
        button0->Enabled = true;

        btnA->Enabled = true;
        btnB->Enabled = true;
        btnC->Enabled = true;
        btnD->Enabled = true;
        btnE->Enabled = true;
        btnF->Enabled = true;
    }
    else if (comboBox1->SelectedItem == L"OCTAL") {
        buttonEight->Enabled = false;
        buttonNine->Enabled = false;
        btnA->Enabled = false;
        btnB->Enabled = false;
        btnC->Enabled = false;
        btnD->Enabled = false;
        btnE->Enabled = false;
        btnF->Enabled = false;
        btnSeven->Enabled = true;
        btnSix->Enabled = true;
        btnFive->Enabled = true;
        btnfour->Enabled = true;
        buttonthree->Enabled = true;
        buttonTwo->Enabled = true;
        buttonOne->Enabled = true;
        button0->Enabled = true;
    }
    else if (comboBox1->SelectedItem == L"DECIMAL") {
        btnA->Enabled = false;
        btnB->Enabled = false;
        btnC->Enabled = false;
        btnD->Enabled = false;
        btnE->Enabled = false;
        btnF->Enabled = false;
        buttonNine->Enabled = true;
        buttonEight->Enabled = true;
        btnSeven->Enabled = true;
        btnSix->Enabled = true;
        btnFive->Enabled = true;
        btnfour->Enabled = true;
        buttonthree->Enabled = true;
        buttonTwo->Enabled = true;
        buttonOne->Enabled = true;
        button0->Enabled = true;
    }
}

private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (lblFrom->Text->Length > 0) {
        BaseConverter converter;
        //to convert String ^ to standard string
        //---------------------------------------
        msclr::interop::marshal_context context;
        std::string givenNum = context.marshal_as<std::string>(lblFrom->Text);
        //---------------------------------------

        int requiredBase;
        int givenBase;
        if (comboBox1->SelectedItem == "HEX") {
            givenBase = 16;
        }
        else if (comboBox1->SelectedItem == L"BINARY") {
            givenBase = 2;
        }
        else if (comboBox1->SelectedItem == "OCTAL") {
            givenBase = 8;
        }
        else if (comboBox1->SelectedItem == "DECIMAL") {
            givenBase = 10;
        }

        if (comboBox2->SelectedItem == "HEX") {
            requiredBase = 16;
        }
        else if (comboBox2->SelectedItem == "BINARY") {
            requiredBase = 2;
        }
        else if (comboBox2->SelectedItem == "OCTAL") {
            requiredBase = 8;
        }
        else if (comboBox2->SelectedItem == "DECIMAL") {
            requiredBase = 10;
        }
        string result = converter.convert(givenNum, givenBase, requiredBase);
        lblResultValue->Text = gcnew String(result.c_str());
    }
}
};
}
