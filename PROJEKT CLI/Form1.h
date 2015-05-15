#pragma once

#include "stdafx.h"
#include "wyniki.h"
#include "zapytanie.h"
#include "wczytaj.h"

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{


	public:
		Form1(void)
		{
			InitializeComponent();

			//vector<BazaInO>baza;

			////////////////////////////
			//WCZYTYWANIE DANYCH Z PLIKU

			//wczytaj(baza);

			////////////////////////////

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  typBox;
	protected:
	private: System::Windows::Forms::RadioButton^  nocnaButton;
	private: System::Windows::Forms::RadioButton^  dziennaButton;
	private: System::Windows::Forms::GroupBox^  dataBox;
	private: System::Windows::Forms::HScrollBar^  dystansScroll1;








	private: System::Windows::Forms::GroupBox^  srodekBox;
	private: System::Windows::Forms::RadioButton^  mieszanaButton;
	private: System::Windows::Forms::RadioButton^  rowerowaButton;
	private: System::Windows::Forms::RadioButton^  pieszaButton;
	private: System::Windows::Forms::GroupBox^  dystansBox;
	private: System::Windows::Forms::Label^  dystansLabel1;

	private: System::Windows::Forms::Label^  dataLabel2;
	private: System::Windows::Forms::Label^  dataLabel1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Button^  szukaj;
	private: System::Windows::Forms::GroupBox^  poziomBox;
	private: System::Windows::Forms::ComboBox^  poziomList;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  dystansLabel2;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::HScrollBar^  dystansScroll2;
	private: System::Windows::Forms::RadioButton^  caloButton;
	private: System::Windows::Forms::GroupBox^  kolejnoscBox;
	private: System::Windows::Forms::RadioButton^  dowolnaButton;
	private: System::Windows::Forms::RadioButton^  obowiazkowaButton;




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
			this->typBox = (gcnew System::Windows::Forms::GroupBox());
			this->nocnaButton = (gcnew System::Windows::Forms::RadioButton());
			this->caloButton = (gcnew System::Windows::Forms::RadioButton());
			this->dziennaButton = (gcnew System::Windows::Forms::RadioButton());
			this->dataBox = (gcnew System::Windows::Forms::GroupBox());
			this->dataLabel2 = (gcnew System::Windows::Forms::Label());
			this->dataLabel1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dystansScroll1 = (gcnew System::Windows::Forms::HScrollBar());
			this->srodekBox = (gcnew System::Windows::Forms::GroupBox());
			this->mieszanaButton = (gcnew System::Windows::Forms::RadioButton());
			this->rowerowaButton = (gcnew System::Windows::Forms::RadioButton());
			this->pieszaButton = (gcnew System::Windows::Forms::RadioButton());
			this->dystansBox = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dystansLabel2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dystansScroll2 = (gcnew System::Windows::Forms::HScrollBar());
			this->dystansLabel1 = (gcnew System::Windows::Forms::Label());
			this->szukaj = (gcnew System::Windows::Forms::Button());
			this->poziomBox = (gcnew System::Windows::Forms::GroupBox());
			this->poziomList = (gcnew System::Windows::Forms::ComboBox());
			this->kolejnoscBox = (gcnew System::Windows::Forms::GroupBox());
			this->dowolnaButton = (gcnew System::Windows::Forms::RadioButton());
			this->obowiazkowaButton = (gcnew System::Windows::Forms::RadioButton());
			this->typBox->SuspendLayout();
			this->dataBox->SuspendLayout();
			this->srodekBox->SuspendLayout();
			this->dystansBox->SuspendLayout();
			this->poziomBox->SuspendLayout();
			this->kolejnoscBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// typBox
			// 
			this->typBox->Controls->Add(this->nocnaButton);
			this->typBox->Controls->Add(this->caloButton);
			this->typBox->Controls->Add(this->dziennaButton);
			this->typBox->Location = System::Drawing::Point(55, 22);
			this->typBox->Name = L"typBox";
			this->typBox->Size = System::Drawing::Size(301, 44);
			this->typBox->TabIndex = 0;
			this->typBox->TabStop = false;
			this->typBox->Text = L"Typ";
			// 
			// nocnaButton
			// 
			this->nocnaButton->AutoSize = true;
			this->nocnaButton->Location = System::Drawing::Point(13, 17);
			this->nocnaButton->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->nocnaButton->Name = L"nocnaButton";
			this->nocnaButton->Size = System::Drawing::Size(69, 21);
			this->nocnaButton->TabIndex = 1;
			this->nocnaButton->TabStop = true;
			this->nocnaButton->Text = L"Nocna";
			this->nocnaButton->UseVisualStyleBackColor = true;
			// 
			// caloButton
			// 
			this->caloButton->AutoSize = true;
			this->caloButton->Location = System::Drawing::Point(171, 17);
			this->caloButton->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->caloButton->Name = L"caloButton";
			this->caloButton->Size = System::Drawing::Size(108, 21);
			this->caloButton->TabIndex = 2;
			this->caloButton->TabStop = true;
			this->caloButton->Text = L"Ca³odobowa";
			this->caloButton->UseVisualStyleBackColor = true;
			// 
			// dziennaButton
			// 
			this->dziennaButton->AutoSize = true;
			this->dziennaButton->Location = System::Drawing::Point(84, 17);
			this->dziennaButton->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->dziennaButton->Name = L"dziennaButton";
			this->dziennaButton->Size = System::Drawing::Size(80, 21);
			this->dziennaButton->TabIndex = 0;
			this->dziennaButton->TabStop = true;
			this->dziennaButton->Text = L"Dzienna";
			this->dziennaButton->UseVisualStyleBackColor = true;
			// 
			// dataBox
			// 
			this->dataBox->Controls->Add(this->dataLabel2);
			this->dataBox->Controls->Add(this->dataLabel1);
			this->dataBox->Controls->Add(this->dateTimePicker2);
			this->dataBox->Controls->Add(this->dateTimePicker1);
			this->dataBox->Location = System::Drawing::Point(55, 240);
			this->dataBox->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->dataBox->Name = L"dataBox";
			this->dataBox->Padding = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->dataBox->Size = System::Drawing::Size(620, 71);
			this->dataBox->TabIndex = 2;
			this->dataBox->TabStop = false;
			this->dataBox->Text = L"Data";
			// 
			// dataLabel2
			// 
			this->dataLabel2->AutoSize = true;
			this->dataLabel2->BackColor = System::Drawing::Color::Transparent;
			this->dataLabel2->Location = System::Drawing::Point(342, 30);
			this->dataLabel2->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->dataLabel2->Name = L"dataLabel2";
			this->dataLabel2->Size = System::Drawing::Size(24, 17);
			this->dataLabel2->TabIndex = 3;
			this->dataLabel2->Text = L"do";
			// 
			// dataLabel1
			// 
			this->dataLabel1->AutoSize = true;
			this->dataLabel1->BackColor = System::Drawing::Color::Transparent;
			this->dataLabel1->Location = System::Drawing::Point(20, 31);
			this->dataLabel1->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->dataLabel1->Name = L"dataLabel1";
			this->dataLabel1->Size = System::Drawing::Size(24, 17);
			this->dataLabel1->TabIndex = 2;
			this->dataLabel1->Text = L"od";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(422, 24);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(179, 25);
			this->dateTimePicker2->TabIndex = 1;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarForeColor = System::Drawing::SystemColors::Window;
			this->dateTimePicker1->Location = System::Drawing::Point(100, 24);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(179, 25);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// dystansScroll1
			// 
			this->dystansScroll1->LargeChange = 5;
			this->dystansScroll1->Location = System::Drawing::Point(66, 31);
			this->dystansScroll1->Maximum = 200;
			this->dystansScroll1->Name = L"dystansScroll1";
			this->dystansScroll1->Size = System::Drawing::Size(335, 21);
			this->dystansScroll1->TabIndex = 3;
			this->dystansScroll1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Form1::dystansScroll1_Scroll);
			// 
			// srodekBox
			// 
			this->srodekBox->Controls->Add(this->mieszanaButton);
			this->srodekBox->Controls->Add(this->rowerowaButton);
			this->srodekBox->Controls->Add(this->pieszaButton);
			this->srodekBox->Location = System::Drawing::Point(369, 22);
			this->srodekBox->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->srodekBox->Name = L"srodekBox";
			this->srodekBox->Padding = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->srodekBox->Size = System::Drawing::Size(339, 44);
			this->srodekBox->TabIndex = 1;
			this->srodekBox->TabStop = false;
			this->srodekBox->Text = L"Œrodek lokomocji";
			// 
			// mieszanaButton
			// 
			this->mieszanaButton->AutoSize = true;
			this->mieszanaButton->Location = System::Drawing::Point(236, 17);
			this->mieszanaButton->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->mieszanaButton->Name = L"mieszanaButton";
			this->mieszanaButton->Size = System::Drawing::Size(87, 21);
			this->mieszanaButton->TabIndex = 2;
			this->mieszanaButton->TabStop = true;
			this->mieszanaButton->Text = L"Mieszana";
			this->mieszanaButton->UseVisualStyleBackColor = true;
			// 
			// rowerowaButton
			// 
			this->rowerowaButton->AutoSize = true;
			this->rowerowaButton->Location = System::Drawing::Point(112, 18);
			this->rowerowaButton->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->rowerowaButton->Name = L"rowerowaButton";
			this->rowerowaButton->Size = System::Drawing::Size(98, 21);
			this->rowerowaButton->TabIndex = 1;
			this->rowerowaButton->TabStop = true;
			this->rowerowaButton->Text = L"Rowerowa";
			this->rowerowaButton->UseVisualStyleBackColor = true;
			// 
			// pieszaButton
			// 
			this->pieszaButton->AutoSize = true;
			this->pieszaButton->Location = System::Drawing::Point(15, 17);
			this->pieszaButton->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->pieszaButton->Name = L"pieszaButton";
			this->pieszaButton->Size = System::Drawing::Size(69, 21);
			this->pieszaButton->TabIndex = 0;
			this->pieszaButton->TabStop = true;
			this->pieszaButton->Text = L"Piesza";
			this->pieszaButton->UseVisualStyleBackColor = true;
			// 
			// dystansBox
			// 
			this->dystansBox->Controls->Add(this->label2);
			this->dystansBox->Controls->Add(this->dystansLabel2);
			this->dystansBox->Controls->Add(this->label3);
			this->dystansBox->Controls->Add(this->dystansScroll2);
			this->dystansBox->Controls->Add(this->dystansLabel1);
			this->dystansBox->Controls->Add(this->dystansScroll1);
			this->dystansBox->Location = System::Drawing::Point(55, 90);
			this->dystansBox->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->dystansBox->Name = L"dystansBox";
			this->dystansBox->Padding = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->dystansBox->Size = System::Drawing::Size(513, 127);
			this->dystansBox->TabIndex = 4;
			this->dystansBox->TabStop = false;
			this->dystansBox->Text = L"Dystans";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(23, 82);
			this->label2->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"do";
			// 
			// dystansLabel2
			// 
			this->dystansLabel2->BackColor = System::Drawing::Color::White;
			this->dystansLabel2->Font = (gcnew System::Drawing::Font(L"Rod", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dystansLabel2->Location = System::Drawing::Point(418, 73);
			this->dystansLabel2->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->dystansLabel2->Name = L"dystansLabel2";
			this->dystansLabel2->Size = System::Drawing::Size(78, 32);
			this->dystansLabel2->TabIndex = 6;
			this->dystansLabel2->Text = L"km";
			this->dystansLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(23, 31);
			this->label3->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"od";
			// 
			// dystansScroll2
			// 
			this->dystansScroll2->LargeChange = 5;
			this->dystansScroll2->Location = System::Drawing::Point(66, 80);
			this->dystansScroll2->Maximum = 200;
			this->dystansScroll2->Name = L"dystansScroll2";
			this->dystansScroll2->Size = System::Drawing::Size(335, 21);
			this->dystansScroll2->TabIndex = 5;
			this->dystansScroll2->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Form1::dystansScroll2_Scroll);
			// 
			// dystansLabel1
			// 
			this->dystansLabel1->BackColor = System::Drawing::Color::White;
			this->dystansLabel1->Font = (gcnew System::Drawing::Font(L"Rod", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dystansLabel1->Location = System::Drawing::Point(418, 21);
			this->dystansLabel1->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->dystansLabel1->Name = L"dystansLabel1";
			this->dystansLabel1->Size = System::Drawing::Size(78, 32);
			this->dystansLabel1->TabIndex = 4;
			this->dystansLabel1->Text = L"km";
			this->dystansLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// szukaj
			// 
			this->szukaj->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->szukaj->Location = System::Drawing::Point(556, 432);
			this->szukaj->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->szukaj->Name = L"szukaj";
			this->szukaj->Size = System::Drawing::Size(119, 40);
			this->szukaj->TabIndex = 5;
			this->szukaj->Text = L"Szukaj";
			this->szukaj->UseVisualStyleBackColor = true;
			this->szukaj->Click += gcnew System::EventHandler(this, &Form1::szukaj_Click);
			// 
			// poziomBox
			// 
			this->poziomBox->Controls->Add(this->poziomList);
			this->poziomBox->Location = System::Drawing::Point(55, 347);
			this->poziomBox->Name = L"poziomBox";
			this->poziomBox->Size = System::Drawing::Size(182, 75);
			this->poziomBox->TabIndex = 6;
			this->poziomBox->TabStop = false;
			this->poziomBox->Text = L"Poziom zaawansowania";
			// 
			// poziomList
			// 
			this->poziomList->FormattingEnabled = true;
			this->poziomList->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"pocz¹tkuj¹cy", L"œredni", L"zaawansowany", L"ekstremalny" });
			this->poziomList->Location = System::Drawing::Point(37, 35);
			this->poziomList->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->poziomList->Name = L"poziomList";
			this->poziomList->Size = System::Drawing::Size(108, 25);
			this->poziomList->TabIndex = 0;
			this->poziomList->Text = L"wybierz poziom";
			// 
			// kolejnoscBox
			// 
			this->kolejnoscBox->Controls->Add(this->dowolnaButton);
			this->kolejnoscBox->Controls->Add(this->obowiazkowaButton);
			this->kolejnoscBox->Location = System::Drawing::Point(300, 347);
			this->kolejnoscBox->Name = L"kolejnoscBox";
			this->kolejnoscBox->Size = System::Drawing::Size(200, 75);
			this->kolejnoscBox->TabIndex = 7;
			this->kolejnoscBox->TabStop = false;
			this->kolejnoscBox->Text = L"Kolejnoœæ potwierdzania PK";
			// 
			// dowolnaButton
			// 
			this->dowolnaButton->AutoSize = true;
			this->dowolnaButton->Location = System::Drawing::Point(22, 52);
			this->dowolnaButton->Name = L"dowolnaButton";
			this->dowolnaButton->Size = System::Drawing::Size(84, 21);
			this->dowolnaButton->TabIndex = 1;
			this->dowolnaButton->TabStop = true;
			this->dowolnaButton->Text = L"dowolna";
			this->dowolnaButton->UseVisualStyleBackColor = true;
			// 
			// obowiazkowaButton
			// 
			this->obowiazkowaButton->AutoSize = true;
			this->obowiazkowaButton->Location = System::Drawing::Point(22, 25);
			this->obowiazkowaButton->Name = L"obowiazkowaButton";
			this->obowiazkowaButton->Size = System::Drawing::Size(118, 21);
			this->obowiazkowaButton->TabIndex = 0;
			this->obowiazkowaButton->TabStop = true;
			this->obowiazkowaButton->Text = L"obowi¹zkowa";
			this->obowiazkowaButton->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::OliveDrab;
			this->ClientSize = System::Drawing::Size(718, 501);
			this->Controls->Add(this->kolejnoscBox);
			this->Controls->Add(this->poziomBox);
			this->Controls->Add(this->szukaj);
			this->Controls->Add(this->srodekBox);
			this->Controls->Add(this->dataBox);
			this->Controls->Add(this->typBox);
			this->Controls->Add(this->dystansBox);
			this->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Name = L"Form1";
			this->Text = L"Szukacz InO";
			this->typBox->ResumeLayout(false);
			this->typBox->PerformLayout();
			this->dataBox->ResumeLayout(false);
			this->dataBox->PerformLayout();
			this->srodekBox->ResumeLayout(false);
			this->srodekBox->PerformLayout();
			this->dystansBox->ResumeLayout(false);
			this->dystansBox->PerformLayout();
			this->poziomBox->ResumeLayout(false);
			this->kolejnoscBox->ResumeLayout(false);
			this->kolejnoscBox->PerformLayout();
			this->ResumeLayout(false);




		}
#pragma endregion

private: System::Void dystansScroll1_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {

	dystansLabel1->Text = (dystansScroll1->Value).ToString() + " km";
}
private: System::Void dystansScroll2_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {

	dystansLabel2->Text = (dystansScroll2->Value).ToString() + " km";
}
private: System::Void szukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	
	vector<BazaInO>baza;
	wczytaj(baza);




	char t, s, p, k; //typ, srodek, poziom, kolejnosc
	int dmin, dmax; //dystans
	//string d; 
	DateTime d1, d2;//data?

	//TYP
	if (dziennaButton->Checked)
		t = 'D';
	else if (nocnaButton->Checked)
		t = 'N';
	else if (caloButton->Checked)
		t = 'C';
	else
		t = 'U';//undefined

	//SRODEK LOKOMOCJI
	if (pieszaButton->Checked)
		t = 'P';
	else if (rowerowaButton->Checked)
		t = 'R';
	else if (mieszanaButton->Checked)
		t = 'M';
	else
		t = 'U';//undefined

	//POZIOM
	if (poziomList->SelectedIndex == 0)
		p = 'P';
	else if (poziomList->SelectedIndex == 1)
		p = 'S';
	else if (poziomList->SelectedIndex == 2)
		p = 'Z';
	else if (poziomList->SelectedIndex == 3)
		p = 'E';
	else
		p = 'U';//undefined

	//KOLEJNOSC
	if (obowiazkowaButton->Checked)
		k = 'O';
	else if (dowolnaButton->Checked)
		k = 'D';
	else
		k = 'U';//undefined

	//DYSTANS
	dmin = dystansScroll1->Value;
	dmax = dystansScroll2->Value;
	if (dmin > dmax){
		int d = dmin;
		dmin = dmax;
		dmax = d;
	}

	//DATA
	d1 = dateTimePicker1->Value;
	d2 = dateTimePicker2->Value;

	Zapytanie q(t, s, dmin, dmax, p, k);



	Form^ okno2 = gcnew PROJEKT_CLI::wyniki();
	TextBox^ wyn = gcnew TextBox;
	wyn->Text = baza.size().ToString();
	okno2->Controls->Add(wyn);

	for (size_t i = 0; i < baza.size(); i++)
	{
		if (!porownaj(baza[i], q)){
			//wyn->Text += "cos ";
			TextBox^ wyn = gcnew TextBox;
			wyn->Text = "cps ";
			okno2->Controls->Add(wyn);
		}
		TextBox^ wyn = gcnew TextBox;
		wyn->Text = "cps ";
		okno2->Controls->Add(wyn);
	}
	







	//Form^ okno2 = gcnew Form1();


	//Form^ okno2 = gcnew Form;

	okno2->Show();
}
};
}
