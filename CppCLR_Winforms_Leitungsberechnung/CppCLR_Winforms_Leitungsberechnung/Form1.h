#include <math.h>


double SpannungsfallBerechnung(int stromArt, double kappa, double laengeMeter, double ampere, double cosphie, double deltaUProzent);
double BerechnungFEins(int umgebungstemperatur); //f1
double BerechnungFZwei(int Leitungshaeufung, int Verlegung); //f2
double VerlegungVielardrigBelasteterLeitungen(int vieladrigBelasteteLeitungen); //f3
double BerechnungFVier(int Oberschwingungen); //f4
double ZulaessigeStrombelastbarkeit(double fEins, double fZwei, double fDrei, double fVier, double iBemessung); //Berechnung Iz
double Bemessungstromstaerke(int counterStartStromBelastung, int verlegeArt, int stromArt);


#pragma once

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  headline;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;

	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label24;




	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->headline = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			this->SuspendLayout();
			// 
			// headline
			// 
			this->headline->AutoSize = true;
			this->headline->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F));
			this->headline->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->headline->Location = System::Drawing::Point(32, 30);
			this->headline->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->headline->Name = L"headline";
			this->headline->Size = System::Drawing::Size(1430, 57);
			this->headline->TabIndex = 0;
			this->headline->Text = L"Leitungsberechnung nach Spannungsfall und Strombelastbarkeit";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(52, 120);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(404, 38);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Wechsel- bzw- Drehstrom:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(52, 188);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(385, 38);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Betriebsstrom in Ampere:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(52, 255);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(413, 38);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Länge der Leitung in Meter:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(52, 322);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(388, 38);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Spannungsfall in Prozent:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(52, 390);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(201, 38);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Cosinus Phi:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(52, 458);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(262, 38);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Der Kappa-Wert:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(52, 525);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(141, 38);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Material:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(52, 592);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(304, 38);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Referenzverlegeart:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(52, 930);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(438, 38);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Oberschwingungen in % (f4):";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(52, 862);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(429, 38);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Zusätz. belastete Adern (f3):";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label11->Location = System::Drawing::Point(52, 728);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(324, 38);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Leitungshäufung (f2):";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label12->Location = System::Drawing::Point(52, 660);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(417, 38);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Umgebungstemperatur (f1):";
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->comboBox2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"A1", L"A2", L"B1", L"B2", L"C", L"E", L"F", L"G" });
			this->comboBox2->Location = System::Drawing::Point(540, 592);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(187, 37);
			this->comboBox2->TabIndex = 14;
			this->comboBox2->TabStop = false;
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->comboBox3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Cu" });
			this->comboBox3->Location = System::Drawing::Point(540, 525);
			this->comboBox3->Margin = System::Windows::Forms::Padding(4);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(187, 37);
			this->comboBox3->TabIndex = 15;
			this->comboBox3->TabStop = false;
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->comboBox4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Kanal/Rohr", L"direkt Wand", L"gelochte Wanne",
					L"ungelochte Wanne"
			});
			this->comboBox4->Location = System::Drawing::Point(540, 795);
			this->comboBox4->Margin = System::Windows::Forms::Padding(4);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(187, 37);
			this->comboBox4->TabIndex = 16;
			this->comboBox4->TabStop = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->numericUpDown1->DecimalPlaces = 1;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->numericUpDown1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown1->Location = System::Drawing::Point(540, 188);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 250, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(188, 35);
			this->numericUpDown1->TabIndex = 17;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 16, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->numericUpDown2->DecimalPlaces = 2;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->numericUpDown2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown2->InterceptArrowKeys = false;
			this->numericUpDown2->Location = System::Drawing::Point(540, 322);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(188, 35);
			this->numericUpDown2->TabIndex = 18;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->numericUpDown3->DecimalPlaces = 1;
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->numericUpDown3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->numericUpDown3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown3->Location = System::Drawing::Point(540, 255);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(188, 35);
			this->numericUpDown3->TabIndex = 19;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->numericUpDown4->DecimalPlaces = 1;
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->numericUpDown4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->numericUpDown4->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown4->Location = System::Drawing::Point(540, 458);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 58, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(188, 35);
			this->numericUpDown4->TabIndex = 20;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 491, 0, 0, 65536 });
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->numericUpDown5->DecimalPlaces = 2;
			this->numericUpDown5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->numericUpDown5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->numericUpDown5->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown5->Location = System::Drawing::Point(540, 390);
			this->numericUpDown5->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 65536 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(188, 35);
			this->numericUpDown5->TabIndex = 21;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->numericUpDown6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->numericUpDown6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->numericUpDown6->Location = System::Drawing::Point(540, 660);
			this->numericUpDown6->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 65, 0, 0, 0 });
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(188, 35);
			this->numericUpDown6->TabIndex = 22;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->numericUpDown7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->numericUpDown7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->numericUpDown7->Location = System::Drawing::Point(540, 728);
			this->numericUpDown7->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(188, 35);
			this->numericUpDown7->TabIndex = 23;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->numericUpDown8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->numericUpDown8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->numericUpDown8->Location = System::Drawing::Point(540, 862);
			this->numericUpDown8->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 24, 0, 0, 0 });
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(188, 35);
			this->numericUpDown8->TabIndex = 24;
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->numericUpDown9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->numericUpDown9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->numericUpDown9->Location = System::Drawing::Point(540, 930);
			this->numericUpDown9->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(188, 35);
			this->numericUpDown9->TabIndex = 25;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(765, 120);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 42);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Info";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(765, 188);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 42);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Info";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(765, 255);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 42);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Info";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(765, 322);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 42);
			this->button4->TabIndex = 29;
			this->button4->Text = L"Info";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(765, 525);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(126, 42);
			this->button5->TabIndex = 30;
			this->button5->Text = L"Info";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(765, 390);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(126, 42);
			this->button6->TabIndex = 31;
			this->button6->Text = L"Info";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(765, 458);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(126, 42);
			this->button7->TabIndex = 32;
			this->button7->Text = L"Info";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(765, 660);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(126, 42);
			this->button8->TabIndex = 33;
			this->button8->Text = L"Info";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Location = System::Drawing::Point(765, 592);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(126, 42);
			this->button9->TabIndex = 34;
			this->button9->Text = L"Info";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Location = System::Drawing::Point(765, 795);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(126, 42);
			this->button10->TabIndex = 35;
			this->button10->Text = L"Info";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->Location = System::Drawing::Point(765, 728);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(126, 42);
			this->button11->TabIndex = 36;
			this->button11->Text = L"Info";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button12->Location = System::Drawing::Point(765, 862);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(126, 42);
			this->button12->TabIndex = 37;
			this->button12->Text = L"Info";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->Location = System::Drawing::Point(765, 930);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(126, 42);
			this->button13->TabIndex = 38;
			this->button13->Text = L"Info";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label13->Location = System::Drawing::Point(52, 795);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(279, 38);
			this->label13->TabIndex = 39;
			this->label13->Text = L"Zusatzinfo zu (f2):";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.25F));
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label16->Location = System::Drawing::Point(1050, 112);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(584, 52);
			this->label16->TabIndex = 42;
			this->label16->Text = L"Der Mindest-Querschnitt ist:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.25F));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox1->Location = System::Drawing::Point(1635, 112);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(204, 51);
			this->textBox1->TabIndex = 43;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label14->Location = System::Drawing::Point(1050, 290);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(573, 42);
			this->label14->TabIndex = 44;
			this->label14->Text = L"Normquerschnitt (Spannungsfall):";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label15->Location = System::Drawing::Point(1050, 365);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(563, 42);
			this->label15->TabIndex = 45;
			this->label15->Text = L"Querschnitt (Strombelastbarkeit):";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label17->Location = System::Drawing::Point(1050, 515);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(175, 42);
			this->label17->TabIndex = 46;
			this->label17->Text = L"Faktor f1:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label18->Location = System::Drawing::Point(1050, 665);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(144, 42);
			this->label18->TabIndex = 47;
			this->label18->Text = L"Wert Iz:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label19->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label19->Location = System::Drawing::Point(1050, 590);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(175, 42);
			this->label19->TabIndex = 48;
			this->label19->Text = L"Faktor f3:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label20->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label20->Location = System::Drawing::Point(1444, 590);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(175, 42);
			this->label20->TabIndex = 49;
			this->label20->Text = L"Faktor f4:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label21->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label21->Location = System::Drawing::Point(1444, 515);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(175, 42);
			this->label21->TabIndex = 50;
			this->label21->Text = L"Faktor f2:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label22->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label22->Location = System::Drawing::Point(1444, 665);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(137, 42);
			this->label22->TabIndex = 51;
			this->label22->Text = L"Wert Ir:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox2->Location = System::Drawing::Point(1635, 290);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(204, 42);
			this->textBox2->TabIndex = 52;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox3->Location = System::Drawing::Point(1635, 365);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(204, 42);
			this->textBox3->TabIndex = 53;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox4->Location = System::Drawing::Point(1238, 515);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(198, 42);
			this->textBox4->TabIndex = 54;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox5->Location = System::Drawing::Point(1635, 515);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(204, 42);
			this->textBox5->TabIndex = 55;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox6->Location = System::Drawing::Point(1238, 590);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(198, 42);
			this->textBox6->TabIndex = 56;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox7->Location = System::Drawing::Point(1238, 665);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(198, 42);
			this->textBox7->TabIndex = 57;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox8->Location = System::Drawing::Point(1635, 590);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(204, 42);
			this->textBox8->TabIndex = 58;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox9->Location = System::Drawing::Point(1635, 665);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(204, 42);
			this->textBox9->TabIndex = 59;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->richTextBox1->Location = System::Drawing::Point(1173, 879);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(629, 130);
			this->richTextBox1->TabIndex = 60;
			this->richTextBox1->Text = L"Dieses Programm hat keinen Anspruch auf Richtigkeit\n \nFeedback an: JonathanReimer"
				L"s@hotmail.de";
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button14->Location = System::Drawing::Point(1058, 755);
			this->button14->Margin = System::Windows::Forms::Padding(4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(330, 104);
			this->button14->TabIndex = 61;
			this->button14->Text = L"Berechnen";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button15->Location = System::Drawing::Point(1455, 755);
			this->button15->Margin = System::Windows::Forms::Padding(4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(330, 104);
			this->button15->TabIndex = 62;
			this->button15->Text = L"Rücksetzen";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox10->Location = System::Drawing::Point(1635, 215);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(204, 42);
			this->textBox10->TabIndex = 64;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label23->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label23->Location = System::Drawing::Point(1050, 215);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(580, 42);
			this->label23->TabIndex = 63;
			this->label23->Text = L"Querschnittswert (Spannungsfall):";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Wechselstrom", L"Drehstrom" });
			this->comboBox1->Location = System::Drawing::Point(540, 122);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(187, 37);
			this->comboBox1->TabIndex = 65;
			this->comboBox1->TabStop = false;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox11->Location = System::Drawing::Point(1635, 440);
			this->textBox11->Margin = System::Windows::Forms::Padding(4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(204, 42);
			this->textBox11->TabIndex = 67;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label24->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label24->Location = System::Drawing::Point(1050, 440);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(572, 42);
			this->label24->TabIndex = 66;
			this->label24->Text = L"Nächste Mindest-Normsicherung:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1896, 1022);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown9);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->headline);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		this->comboBox1->SelectedIndex = 0;
		this->comboBox2->SelectedIndex = 4;
		this->comboBox3->SelectedIndex = 0;
		this->comboBox4->SelectedIndex = 0;
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		
		//Varieablen
		double kappa = 0;
		double laengeMeter = 0;
		double ampere = 0;
		double normQuerschnitt = 0;
		double querschnittSpannungsfall = 0;
		double sicherungsgroesseArray[] = { 2.0, 4.0, 6.0, 10.0, 13.0, 16.0, 20.0, 25.0, 32.0, 35.0, 40.0, 50.0, 63.0, 80.0, 100.0, 125.0, 160.0, 200.0, 250.0, 400.0, 630.0, 1000.0, 1250.0 };
		double normQuerschnitteArray[] = { 1.5, 2.5, 4.0, 6.0, 10.0, 16.0, 25.0, 35.0, 50.0, 70.0, 95.0, 120.0 };
		double cosphi = 0;
		double deltaUProzent = 0;
		double fEins = 0;
		double fZwei = 0;
		double fDrei = 0;
		double fVier = 0;
		double iZulaessig = 1;
		double iBemessung = 0;
		double normSicherung = 0;
		double querschnittSbelSpanfall = 0;
		double roundNormQuerschnitt = 0;
		int oberschwingungen = 0;
		int vieladrigBelasteteLeitungen = 0;
		int verlegeArt = 0;
		int stromArt = 0;
		int umgebungstemperatur = 0;
		int counterArrayQuerschnitt = 0;
		int counterArrayNormsicherung = 0;
		int counterStartStromBelastung = 0;
		int leitungshaeufung = 0;
		int verlegung = 0;

		//Typumwandlungen für den Input
		kappa = Convert::ToDouble(numericUpDown4->Text);
		laengeMeter = Convert::ToDouble(numericUpDown3->Text);
		ampere = Convert::ToDouble(numericUpDown1->Text);
		deltaUProzent = Convert::ToDouble(numericUpDown2->Text);
		cosphi = Convert::ToDouble(numericUpDown5->Text);
		stromArt = comboBox1->SelectedIndex;
		umgebungstemperatur = Convert::ToDouble(numericUpDown6->Text);
		leitungshaeufung = Convert::ToInt32(numericUpDown7->Text);
		verlegung = comboBox4->SelectedIndex +1;
		vieladrigBelasteteLeitungen = Convert::ToInt32(numericUpDown8->Text);
		oberschwingungen = Convert::ToInt32(numericUpDown9->Text);
		verlegeArt = comboBox2->SelectedIndex;

		//Berechnungen
		querschnittSpannungsfall = SpannungsfallBerechnung(stromArt, kappa, laengeMeter, ampere, cosphi, deltaUProzent); //Spannungsfallberechnung 

		while (normQuerschnitteArray[counterArrayQuerschnitt] <= querschnittSpannungsfall) //Ermittlung des naechsten Normquerschnittes
		{
			counterArrayQuerschnitt++;
			
		}

		normQuerschnitt = normQuerschnitteArray[counterArrayQuerschnitt]; //Querschnitt nach Spannungsfall
		roundNormQuerschnitt = round(querschnittSpannungsfall * 100)/100;

		fEins = BerechnungFEins(umgebungstemperatur); //f1
		fZwei = BerechnungFZwei(leitungshaeufung, verlegung); //f2
		fDrei = VerlegungVielardrigBelasteterLeitungen(vieladrigBelasteteLeitungen); //f3
		fVier = BerechnungFVier(oberschwingungen); //f4

		while (sicherungsgroesseArray[counterArrayNormsicherung] < ampere) //Naechste Normsicherung
		{
			++counterArrayNormsicherung;

		}
		normSicherung = sicherungsgroesseArray[counterArrayNormsicherung];

		while (iZulaessig < normSicherung) {
			iBemessung = Bemessungstromstaerke(counterStartStromBelastung, verlegeArt, stromArt);

			iZulaessig = ZulaessigeStrombelastbarkeit(fEins, fZwei, fDrei, fVier, iBemessung);
			counterStartStromBelastung++;
		}

		querschnittSbelSpanfall = normQuerschnitteArray[counterStartStromBelastung-1];

		//Output
		textBox2->Text = Convert::ToString(normQuerschnitt) + (" qmm");
		textBox10->Text = Convert::ToString(roundNormQuerschnitt) + (" qmm");
		textBox4->Text = Convert::ToString(fEins);
		textBox5->Text = Convert::ToString(fZwei);
		textBox6->Text = Convert::ToString(fDrei);
		textBox8->Text = Convert::ToString(fVier);
		textBox11->Text = Convert::ToString(normSicherung)+ (" A");
		textBox7->Text = Convert::ToString(iZulaessig)+ (" A");
		textBox9->Text = Convert::ToString(iBemessung)+ (" A");
		textBox3->Text = Convert::ToString(querschnittSbelSpanfall) +(" qmm");


		if (querschnittSbelSpanfall >= normQuerschnitt) {
			textBox1->Text = Convert::ToString(querschnittSbelSpanfall) + (" qmm");
		}

		else {
			textBox1->Text = Convert::ToString(normQuerschnitt) + (" qmm");
		}		 

		// Farbaenderung der Infokoepfe
		if (deltaUProzent <= 3) {
			button4->BackColor = SystemColors::ControlDarkDark;
		}

		if (deltaUProzent > 3 && deltaUProzent < 5) {
			button4->BackColor = Color::DarkKhaki;
		}

		if (deltaUProzent > 5) {
			button4->BackColor = Color::Red;
		}
	}

private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
	textBox5->Clear();
	textBox6->Clear();
	textBox7->Clear();
	textBox8->Clear();
	textBox9->Clear();
	textBox10->Clear();
	textBox11->Clear();
}
};
}


// Spannungsfallberechnung
double SpannungsfallBerechnung(int stromArt, double kappa, double laengeMeter, double ampere, double cosphie, double deltaUProzent) {

	double deltaU;
	double QuerschnittSpannungsfall;

	//Formel Spannungsfall bei Wechselstrom 
	if (stromArt == 0) {
		deltaU = deltaUProzent / 100 * 230;
		QuerschnittSpannungsfall = 2 * laengeMeter * ampere * cosphie / (deltaU * kappa);
	}
	// Formel Spannunsfall bei Drehstrom

	if (stromArt == 1) {
		deltaU = deltaUProzent / 100 * 400;
		QuerschnittSpannungsfall = sqrt(3) * laengeMeter * ampere * cosphie / (deltaU * kappa);
	}

	return QuerschnittSpannungsfall;
}

// Berechnung von dem Faktor f1
double BerechnungFEins(int umgebungstemperatur) {

	double FEins;

	if (umgebungstemperatur <= 10) {
		FEins = 1.22;
	}

	if (umgebungstemperatur > 10 && umgebungstemperatur <= 15) {
		FEins = 1.17;
	}

	if (umgebungstemperatur > 15 && umgebungstemperatur <= 20) {
		FEins = 1.12;
	}

	if (umgebungstemperatur > 20 && umgebungstemperatur <= 25) {
		FEins = 1.06;
	}

	if (umgebungstemperatur > 25 && umgebungstemperatur <= 30) {
		FEins = 1.0;
	}

	if (umgebungstemperatur > 30 && umgebungstemperatur <= 35) {
		FEins = 0.94;
	}

	if (umgebungstemperatur > 35 && umgebungstemperatur <= 40) {
		FEins = 0.87;
	}

	if (umgebungstemperatur > 40 && umgebungstemperatur <= 45) {
		FEins = 0.79;
	}

	if (umgebungstemperatur > 45 && umgebungstemperatur <= 50) {
		FEins = 0.71;
	}

	if (umgebungstemperatur > 50 && umgebungstemperatur <= 55) {
		FEins = 0.61;
	}

	if (umgebungstemperatur > 55 && umgebungstemperatur <= 60) {
		FEins = 0.5;
	}

	if (umgebungstemperatur > 60 && umgebungstemperatur <= 65) {
		FEins = 0.35;
	}

	if (umgebungstemperatur > 65) {
	
		return 0;
	}

	return FEins;
}

// Berechnung von dem Faktor f2
double BerechnungFZwei(int leitungshaeufung, int verlegung) {

	double fZwei;

	if (leitungshaeufung <= 1) {
		fZwei = 1.0;
	}

	if (leitungshaeufung == 2) {
		if (verlegung == 1) {
			fZwei = 0.8;
		}
		if (verlegung == 2) {
			fZwei = 0.85;
		}
		if (verlegung == 3) {
			fZwei = 0.88;
		}
		if (verlegung == 4) {
			fZwei = 0.87;
		}
	}

	if (leitungshaeufung == 3) {
		if (verlegung == 1) {
			fZwei = 0.7;
		}
		if (verlegung == 2) {
			fZwei = 0.79;
		}
		if (verlegung == 3) {
			fZwei = 0.82;
		}
		if (verlegung == 4) {
			fZwei = 0.82;
		}
	}

	if (leitungshaeufung == 4) {
		if (verlegung == 1) {
			fZwei = 0.65;
		}
		if (verlegung == 2) {
			fZwei = 0.75;
		}
		if (verlegung == 3) {
			fZwei = 0.79;
		}
		if (verlegung == 4) {
			fZwei = 0.80;
		}
	}

	if (leitungshaeufung > 4 && leitungshaeufung <= 6) {
		if (verlegung == 1) {
			fZwei = 0.57;
		}
		if (verlegung == 2) {
			fZwei = 0.72;
		}
		if (verlegung == 3) {
			fZwei = 0.76;
		}
		if (verlegung == 4) {
			fZwei = 0.79;
		}
	}
	if (leitungshaeufung > 6 && leitungshaeufung <= 9) {
		if (verlegung == 1) {
			fZwei = 0.5;
		}
		if (verlegung == 2) {
			fZwei = 0.7;
		}
		if (verlegung == 3) {
			fZwei = 0.73;
		}
		if (verlegung == 4) {
			fZwei = 0.78;
		}
	}

	return fZwei;
}

//Berechnung von dem Faktor f3
double VerlegungVielardrigBelasteterLeitungen(int vieladrigBelasteteLeitungen) {

	double fDrei;

	if (vieladrigBelasteteLeitungen >= 0 && vieladrigBelasteteLeitungen <= 3) {
		fDrei = 1.0;
	}

	if (vieladrigBelasteteLeitungen > 3 && vieladrigBelasteteLeitungen <= 5) {
		fDrei = 0.75;
	}

	if (vieladrigBelasteteLeitungen > 5 && vieladrigBelasteteLeitungen <= 7) {
		fDrei = 0.65;
	}

	if (vieladrigBelasteteLeitungen > 7 && vieladrigBelasteteLeitungen <= 10) {
		fDrei = 0.55;
	}

	if (vieladrigBelasteteLeitungen > 10 && vieladrigBelasteteLeitungen <= 14) {
		fDrei = 0.5;
	}

	if (vieladrigBelasteteLeitungen > 14 && vieladrigBelasteteLeitungen <= 19) {
		fDrei = 0.45;
	}

	if (vieladrigBelasteteLeitungen > 19 && vieladrigBelasteteLeitungen <= 24) {
		fDrei = 0.4;
	}

	return fDrei;
}

//Berechnung von dem Faktro f4 
double BerechnungFVier(int oberschwingungen) {

	double fVier;

	if (oberschwingungen >= 0 && oberschwingungen <= 15) {
		fVier = 1.0;
	}

	if (oberschwingungen > 15 && oberschwingungen <= 22) {
		fVier = 0.86;
	}

	if (oberschwingungen > 22 && oberschwingungen <= 30) {
		fVier = 0.70;
	}

	if (oberschwingungen > 30 && oberschwingungen <= 34) {
		fVier = 0.67;
	}

	if (oberschwingungen > 34 && oberschwingungen <= 38) {
		fVier = 0.61;
	}

	if (oberschwingungen > 38 && oberschwingungen <= 41) {
		fVier = 0.56;
	}

	return fVier;
}

//Berechnung von dem Faktor Ir
double Bemessungstromstaerke(int counterStartStromBelastung, int verlegeArt, int stromArt) {

	double iBemessung;

	// x = qmm y = Verlegeart
	double strombelastbarkeitWechselstrom[12][8] =
	{
		{15.5, 15.5, 17.5, 16.5, 19.5, 22.0, -1.0, -1.0},
		{19.5, 18.5, 24.0, 23.0, 27.0, 30.0, -1.0, -1.0},
		{26.0, 25.0, 32.0, 30.0, 36.0, 40.0, -1.0, -1.0},
		{34.0, 32.0, 41.0, 38.0, 46.0, 51.0, -1.0, -1.0},
		{46.0, 43.0, 57.0, 52.0, 63.0, 70.0, -1.0, -1.0},
		{61.0, 57.0, 76.0, 69.0, 85.0, 94.0, -1.0, -1.0},
		{80.0, 75.0, 101.0, 90.0, 112.0, 119.0, 131.0, -1.0},
		{99.0, 92.0, 125.0, 111.0, 138.0, 148.0, 162.0, -1.0},
		{119.0, 110.0, 151.0, 133.0, 168.0, 180.0, 196.0, -1.0},
		{151.0, 139.0, 192.0, 168.0, 213.0, 232.0, 251.0, -1.0},
		{182.0, 157.0, 232.0, 201.0, 258.0, 282.0, 304.0, -1.0},
		{210.0, 192.0, 269.0, 232.0, 299.0, 328.0, 352.0, -1.0},
	};

	double strombelastbarkeitDrehstrom[12][8] =
	{
		{13.5, 13.0, 15.5, 15.0, 17.5, 18.5, -1.0, -1.0},
		{18.0, 17.5, 21.0, 20.0, 24.0, 25.0, -1.0, -1.0},
		{24.0, 23.0, 28.0, 27.0, 32.0, 40.0, -1.0, -1.0},
		{31.0, 29.0, 36.0, 34.0, 41.0, 43.0, -1.0, -1.0},
		{42.0, 39.0, 50.0, 46.0, 57.0, 60.0, -1.0, -1.0},
		{56.0, 52.0, 68.0, 62.0, 76.0, 80.0, -1.0, -1.0},
		{73.0, 68.0, 89.0, 80.0, 96.0, 101.0, 114.0, 146.0},
		{89.0, 83.0, 110.0, 99.0, 119.0, 126.0, 143.0, 181.0},
		{108.0, 99.0, 134.0, 118.0, 144.0, 153.0, 174.0, 219.0},
		{136.0, 125.0, 171.0, 149.0, 184.0, 196.0, 225.0, 281.0},
		{164.0, 150.0, 207.0, 179.0, 223.0, 238.0, 275.0, 341.0},
		{188.0, 172.0, 239.0, 206.0, 259.0, 276.0, 321.0, 396.0},
	};

	if (stromArt == 0) {
		iBemessung = strombelastbarkeitWechselstrom[counterStartStromBelastung][verlegeArt];
	}

	if (stromArt == 1) {
		iBemessung = strombelastbarkeitDrehstrom[counterStartStromBelastung][verlegeArt];
	}
	return iBemessung;
}

//Berechnung von dem Faktor Iz
double ZulaessigeStrombelastbarkeit(double fEins, double fZwei, double fDrei, double fVier, double iBemessung) {

	double iZulaessig;

	iZulaessig = fEins * fZwei * fDrei * fVier * iBemessung;

	return iZulaessig;
}


// this->comboBox1->SelectedIndex = 0;