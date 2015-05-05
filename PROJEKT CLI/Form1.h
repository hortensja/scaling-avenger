#pragma once

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
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::HScrollBar^  dystansScroll;







	private: System::Windows::Forms::GroupBox^  srodekBox;
	private: System::Windows::Forms::RadioButton^  mieszanaButton;
	private: System::Windows::Forms::RadioButton^  rowerowaButton;
	private: System::Windows::Forms::RadioButton^  pieszaButton;
	private: System::Windows::Forms::GroupBox^  dystansBox;
	private: System::Windows::Forms::Label^  dystansLabel;
	private: System::Windows::Forms::Label^  dataLabel2;
	private: System::Windows::Forms::Label^  dataLabel1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Button^  szukaj;
	private: System::Windows::Forms::GroupBox^  poziomBox;
	private: System::Windows::Forms::ComboBox^  poziomList;



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
			this->dziennaButton = (gcnew System::Windows::Forms::RadioButton());
			this->dataBox = (gcnew System::Windows::Forms::GroupBox());
			this->dataLabel2 = (gcnew System::Windows::Forms::Label());
			this->dataLabel1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dystansScroll = (gcnew System::Windows::Forms::HScrollBar());
			this->srodekBox = (gcnew System::Windows::Forms::GroupBox());
			this->mieszanaButton = (gcnew System::Windows::Forms::RadioButton());
			this->rowerowaButton = (gcnew System::Windows::Forms::RadioButton());
			this->pieszaButton = (gcnew System::Windows::Forms::RadioButton());
			this->dystansBox = (gcnew System::Windows::Forms::GroupBox());
			this->dystansLabel = (gcnew System::Windows::Forms::Label());
			this->szukaj = (gcnew System::Windows::Forms::Button());
			this->poziomBox = (gcnew System::Windows::Forms::GroupBox());
			this->poziomList = (gcnew System::Windows::Forms::ComboBox());
			this->typBox->SuspendLayout();
			this->dataBox->SuspendLayout();
			this->srodekBox->SuspendLayout();
			this->dystansBox->SuspendLayout();
			this->poziomBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// typBox
			// 
			this->typBox->Controls->Add(this->nocnaButton);
			this->typBox->Controls->Add(this->dziennaButton);
			this->typBox->Location = System::Drawing::Point(55, 22);
			this->typBox->Name = L"typBox";
			this->typBox->Size = System::Drawing::Size(255, 44);
			this->typBox->TabIndex = 0;
			this->typBox->TabStop = false;
			this->typBox->Text = L"Typ";
			// 
			// nocnaButton
			// 
			this->nocnaButton->AutoSize = true;
			this->nocnaButton->Location = System::Drawing::Point(39, 18);
			this->nocnaButton->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->nocnaButton->Name = L"nocnaButton";
			this->nocnaButton->Size = System::Drawing::Size(69, 21);
			this->nocnaButton->TabIndex = 1;
			this->nocnaButton->TabStop = true;
			this->nocnaButton->Text = L"Nocna";
			this->nocnaButton->UseVisualStyleBackColor = true;
			// 
			// dziennaButton
			// 
			this->dziennaButton->AutoSize = true;
			this->dziennaButton->Location = System::Drawing::Point(137, 18);
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
			this->dataBox->Location = System::Drawing::Point(55, 307);
			this->dataBox->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->dataBox->Name = L"dataBox";
			this->dataBox->Padding = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->dataBox->Size = System::Drawing::Size(319, 120);
			this->dataBox->TabIndex = 2;
			this->dataBox->TabStop = false;
			this->dataBox->Text = L"Data";
			// 
			// dataLabel2
			// 
			this->dataLabel2->AutoSize = true;
			this->dataLabel2->BackColor = System::Drawing::Color::Transparent;
			this->dataLabel2->Location = System::Drawing::Point(23, 93);
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
			this->dataLabel1->Location = System::Drawing::Point(23, 42);
			this->dataLabel1->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->dataLabel1->Name = L"dataLabel1";
			this->dataLabel1->Size = System::Drawing::Size(24, 17);
			this->dataLabel1->TabIndex = 2;
			this->dataLabel1->Text = L"od";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(103, 87);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(179, 25);
			this->dateTimePicker2->TabIndex = 1;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(103, 35);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(179, 25);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// dystansScroll
			// 
			this->dystansScroll->LargeChange = 5;
			this->dystansScroll->Location = System::Drawing::Point(24, 27);
			this->dystansScroll->Maximum = 200;
			this->dystansScroll->Name = L"dystansScroll";
			this->dystansScroll->Size = System::Drawing::Size(335, 21);
			this->dystansScroll->TabIndex = 3;
			this->dystansScroll->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Form1::dystansScroll_Scroll);
			// 
			// srodekBox
			// 
			this->srodekBox->Controls->Add(this->mieszanaButton);
			this->srodekBox->Controls->Add(this->rowerowaButton);
			this->srodekBox->Controls->Add(this->pieszaButton);
			this->srodekBox->Location = System::Drawing::Point(55, 92);
			this->srodekBox->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->srodekBox->Name = L"srodekBox";
			this->srodekBox->Padding = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->srodekBox->Size = System::Drawing::Size(359, 101);
			this->srodekBox->TabIndex = 1;
			this->srodekBox->TabStop = false;
			this->srodekBox->Text = L"�rodek lokomocji";
			// 
			// mieszanaButton
			// 
			this->mieszanaButton->AutoSize = true;
			this->mieszanaButton->Location = System::Drawing::Point(25, 74);
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
			this->rowerowaButton->Location = System::Drawing::Point(171, 41);
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
			this->pieszaButton->Location = System::Drawing::Point(25, 41);
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
			this->dystansBox->Controls->Add(this->dystansLabel);
			this->dystansBox->Controls->Add(this->dystansScroll);
			this->dystansBox->Location = System::Drawing::Point(55, 210);
			this->dystansBox->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->dystansBox->Name = L"dystansBox";
			this->dystansBox->Padding = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->dystansBox->Size = System::Drawing::Size(457, 77);
			this->dystansBox->TabIndex = 4;
			this->dystansBox->TabStop = false;
			this->dystansBox->Text = L"Dystans";
			// 
			// dystansLabel
			// 
			this->dystansLabel->BackColor = System::Drawing::Color::White;
			this->dystansLabel->Font = (gcnew System::Drawing::Font(L"Rod", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dystansLabel->Location = System::Drawing::Point(376, 20);
			this->dystansLabel->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->dystansLabel->Name = L"dystansLabel";
			this->dystansLabel->Size = System::Drawing::Size(78, 32);
			this->dystansLabel->TabIndex = 4;
			this->dystansLabel->Text = L"km";
			this->dystansLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// szukaj
			// 
			this->szukaj->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->szukaj->Location = System::Drawing::Point(573, 501);
			this->szukaj->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->szukaj->Name = L"szukaj";
			this->szukaj->Size = System::Drawing::Size(119, 40);
			this->szukaj->TabIndex = 5;
			this->szukaj->Text = L"Szukaj";
			this->szukaj->UseVisualStyleBackColor = true;
			// 
			// poziomBox
			// 
			this->poziomBox->Controls->Add(this->poziomList);
			this->poziomBox->Location = System::Drawing::Point(55, 449);
			this->poziomBox->Name = L"poziomBox";
			this->poziomBox->Size = System::Drawing::Size(182, 75);
			this->poziomBox->TabIndex = 6;
			this->poziomBox->TabStop = false;
			this->poziomBox->Text = L"Poziom zaawansowania";
			// 
			// poziomList
			// 
			this->poziomList->FormattingEnabled = true;
			this->poziomList->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"pocz�tkuj�cy", L"�redni", L"zaawansowany", L"ekstremalny" });
			this->poziomList->Location = System::Drawing::Point(37, 35);
			this->poziomList->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->poziomList->Name = L"poziomList";
			this->poziomList->Size = System::Drawing::Size(108, 25);
			this->poziomList->TabIndex = 0;
			this->poziomList->Text = L"wybierz poziom";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::OliveDrab;
			this->ClientSize = System::Drawing::Size(718, 552);
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
			this->poziomBox->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void dystansScroll_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {

	dystansLabel->Text = (dystansScroll->Value).ToString() + " km";
}
};
}

