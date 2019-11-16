#pragma once
#include "Solitary.h"
#include "Deck.h"
#include "Slack.h"
#include "Card.h"

namespace SolitaryVictorHernandez1301219 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RadioButton^ Slack7Inicial;
	private: System::Windows::Forms::RadioButton^ Slack6Inicial;
	private: System::Windows::Forms::RadioButton^ Slack5Inicial;
	private: System::Windows::Forms::RadioButton^ Slack4Inicial;
	private: System::Windows::Forms::RadioButton^ Slack3Inicial;
	private: System::Windows::Forms::RadioButton^ Slack2Inicial;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ Slack1Inicial;
	private: System::Windows::Forms::RadioButton^ mazoInicial;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::RadioButton^ Slack7Final;
	private: System::Windows::Forms::RadioButton^ Slack6Final;
	private: System::Windows::Forms::RadioButton^ Slack5Final;
	private: System::Windows::Forms::RadioButton^ Slack4Final;
	private: System::Windows::Forms::RadioButton^ Slack3Final;
	private: System::Windows::Forms::RadioButton^ Slack2Final;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ Slack1Final;
	private: System::Windows::Forms::Button^ moverBtn;
	private: System::Windows::Forms::Button^ bajarBtn;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Slack7_Lbl;
	private: System::Windows::Forms::Label^ Slack6_Lbl;
	private: System::Windows::Forms::Label^ Slack5_Lbl;
	private: System::Windows::Forms::Label^ Slack4_Lbl;
	private: System::Windows::Forms::Label^ Slack3_Lbl;
	private: System::Windows::Forms::Label^ Slack2_Lbl;
	private: System::Windows::Forms::Label^ Slack1_Lbl;
	private: System::Windows::Forms::Label^ mazo_Lbl;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel3;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Slack7Inicial = (gcnew System::Windows::Forms::RadioButton());
			this->Slack6Inicial = (gcnew System::Windows::Forms::RadioButton());
			this->Slack5Inicial = (gcnew System::Windows::Forms::RadioButton());
			this->Slack4Inicial = (gcnew System::Windows::Forms::RadioButton());
			this->Slack3Inicial = (gcnew System::Windows::Forms::RadioButton());
			this->Slack2Inicial = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Slack1Inicial = (gcnew System::Windows::Forms::RadioButton());
			this->mazoInicial = (gcnew System::Windows::Forms::RadioButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Slack7Final = (gcnew System::Windows::Forms::RadioButton());
			this->Slack6Final = (gcnew System::Windows::Forms::RadioButton());
			this->Slack5Final = (gcnew System::Windows::Forms::RadioButton());
			this->Slack4Final = (gcnew System::Windows::Forms::RadioButton());
			this->Slack3Final = (gcnew System::Windows::Forms::RadioButton());
			this->Slack2Final = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Slack1Final = (gcnew System::Windows::Forms::RadioButton());
			this->moverBtn = (gcnew System::Windows::Forms::Button());
			this->bajarBtn = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Slack7_Lbl = (gcnew System::Windows::Forms::Label());
			this->Slack6_Lbl = (gcnew System::Windows::Forms::Label());
			this->Slack5_Lbl = (gcnew System::Windows::Forms::Label());
			this->Slack4_Lbl = (gcnew System::Windows::Forms::Label());
			this->Slack3_Lbl = (gcnew System::Windows::Forms::Label());
			this->Slack2_Lbl = (gcnew System::Windows::Forms::Label());
			this->Slack1_Lbl = (gcnew System::Windows::Forms::Label());
			this->mazo_Lbl = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->Slack7Inicial);
			this->panel1->Controls->Add(this->Slack6Inicial);
			this->panel1->Controls->Add(this->Slack5Inicial);
			this->panel1->Controls->Add(this->Slack4Inicial);
			this->panel1->Controls->Add(this->Slack3Inicial);
			this->panel1->Controls->Add(this->Slack2Inicial);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->Slack1Inicial);
			this->panel1->Controls->Add(this->mazoInicial);
			this->panel1->Location = System::Drawing::Point(10, 59);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(579, 42);
			this->panel1->TabIndex = 14;
			// 
			// Slack7Inicial
			// 
			this->Slack7Inicial->AutoSize = true;
			this->Slack7Inicial->Location = System::Drawing::Point(509, 13);
			this->Slack7Inicial->Name = L"Slack7Inicial";
			this->Slack7Inicial->Size = System::Drawing::Size(61, 17);
			this->Slack7Inicial->TabIndex = 18;
			this->Slack7Inicial->Text = L"Slack 7";
			this->Slack7Inicial->UseVisualStyleBackColor = true;
			// 
			// Slack6Inicial
			// 
			this->Slack6Inicial->AutoSize = true;
			this->Slack6Inicial->Location = System::Drawing::Point(452, 13);
			this->Slack6Inicial->Name = L"Slack6Inicial";
			this->Slack6Inicial->Size = System::Drawing::Size(61, 17);
			this->Slack6Inicial->TabIndex = 17;
			this->Slack6Inicial->Text = L"Slack 6";
			this->Slack6Inicial->UseVisualStyleBackColor = true;
			// 
			// Slack5Inicial
			// 
			this->Slack5Inicial->AutoSize = true;
			this->Slack5Inicial->Location = System::Drawing::Point(395, 13);
			this->Slack5Inicial->Name = L"Slack5Inicial";
			this->Slack5Inicial->Size = System::Drawing::Size(61, 17);
			this->Slack5Inicial->TabIndex = 16;
			this->Slack5Inicial->Text = L"Slack 5";
			this->Slack5Inicial->UseVisualStyleBackColor = true;
			// 
			// Slack4Inicial
			// 
			this->Slack4Inicial->AutoSize = true;
			this->Slack4Inicial->Location = System::Drawing::Point(338, 13);
			this->Slack4Inicial->Name = L"Slack4Inicial";
			this->Slack4Inicial->Size = System::Drawing::Size(61, 17);
			this->Slack4Inicial->TabIndex = 15;
			this->Slack4Inicial->Text = L"Slack 4";
			this->Slack4Inicial->UseVisualStyleBackColor = true;
			// 
			// Slack3Inicial
			// 
			this->Slack3Inicial->AutoSize = true;
			this->Slack3Inicial->Location = System::Drawing::Point(281, 13);
			this->Slack3Inicial->Name = L"Slack3Inicial";
			this->Slack3Inicial->Size = System::Drawing::Size(61, 17);
			this->Slack3Inicial->TabIndex = 14;
			this->Slack3Inicial->Text = L"Slack 3";
			this->Slack3Inicial->UseVisualStyleBackColor = true;
			// 
			// Slack2Inicial
			// 
			this->Slack2Inicial->AutoSize = true;
			this->Slack2Inicial->Location = System::Drawing::Point(224, 13);
			this->Slack2Inicial->Name = L"Slack2Inicial";
			this->Slack2Inicial->Size = System::Drawing::Size(61, 17);
			this->Slack2Inicial->TabIndex = 13;
			this->Slack2Inicial->Text = L"Slack 2";
			this->Slack2Inicial->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Mover desde:";
			// 
			// Slack1Inicial
			// 
			this->Slack1Inicial->AutoSize = true;
			this->Slack1Inicial->Location = System::Drawing::Point(167, 13);
			this->Slack1Inicial->Name = L"Slack1Inicial";
			this->Slack1Inicial->Size = System::Drawing::Size(61, 17);
			this->Slack1Inicial->TabIndex = 12;
			this->Slack1Inicial->Text = L"Slack 1";
			this->Slack1Inicial->UseVisualStyleBackColor = true;
			// 
			// mazoInicial
			// 
			this->mazoInicial->AutoSize = true;
			this->mazoInicial->Checked = true;
			this->mazoInicial->Location = System::Drawing::Point(81, 13);
			this->mazoInicial->Name = L"mazoInicial";
			this->mazoInicial->Size = System::Drawing::Size(51, 17);
			this->mazoInicial->TabIndex = 11;
			this->mazoInicial->TabStop = true;
			this->mazoInicial->Text = L"Mazo";
			this->mazoInicial->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->Slack7Final);
			this->panel2->Controls->Add(this->Slack6Final);
			this->panel2->Controls->Add(this->Slack5Final);
			this->panel2->Controls->Add(this->Slack4Final);
			this->panel2->Controls->Add(this->Slack3Final);
			this->panel2->Controls->Add(this->Slack2Final);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->Slack1Final);
			this->panel2->Location = System::Drawing::Point(10, 107);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(579, 42);
			this->panel2->TabIndex = 20;
			// 
			// Slack7Final
			// 
			this->Slack7Final->AutoSize = true;
			this->Slack7Final->Location = System::Drawing::Point(509, 13);
			this->Slack7Final->Name = L"Slack7Final";
			this->Slack7Final->Size = System::Drawing::Size(61, 17);
			this->Slack7Final->TabIndex = 18;
			this->Slack7Final->Text = L"Slack 7";
			this->Slack7Final->UseVisualStyleBackColor = true;
			// 
			// Slack6Final
			// 
			this->Slack6Final->AutoSize = true;
			this->Slack6Final->Location = System::Drawing::Point(452, 13);
			this->Slack6Final->Name = L"Slack6Final";
			this->Slack6Final->Size = System::Drawing::Size(61, 17);
			this->Slack6Final->TabIndex = 17;
			this->Slack6Final->Text = L"Slack 6";
			this->Slack6Final->UseVisualStyleBackColor = true;
			// 
			// Slack5Final
			// 
			this->Slack5Final->AutoSize = true;
			this->Slack5Final->Location = System::Drawing::Point(395, 13);
			this->Slack5Final->Name = L"Slack5Final";
			this->Slack5Final->Size = System::Drawing::Size(61, 17);
			this->Slack5Final->TabIndex = 16;
			this->Slack5Final->Text = L"Slack 5";
			this->Slack5Final->UseVisualStyleBackColor = true;
			// 
			// Slack4Final
			// 
			this->Slack4Final->AutoSize = true;
			this->Slack4Final->Location = System::Drawing::Point(338, 13);
			this->Slack4Final->Name = L"Slack4Final";
			this->Slack4Final->Size = System::Drawing::Size(61, 17);
			this->Slack4Final->TabIndex = 15;
			this->Slack4Final->Text = L"Slack 4";
			this->Slack4Final->UseVisualStyleBackColor = true;
			// 
			// Slack3Final
			// 
			this->Slack3Final->AutoSize = true;
			this->Slack3Final->Location = System::Drawing::Point(281, 13);
			this->Slack3Final->Name = L"Slack3Final";
			this->Slack3Final->Size = System::Drawing::Size(61, 17);
			this->Slack3Final->TabIndex = 14;
			this->Slack3Final->Text = L"Slack 3";
			this->Slack3Final->UseVisualStyleBackColor = true;
			// 
			// Slack2Final
			// 
			this->Slack2Final->AutoSize = true;
			this->Slack2Final->Location = System::Drawing::Point(224, 13);
			this->Slack2Final->Name = L"Slack2Final";
			this->Slack2Final->Size = System::Drawing::Size(61, 17);
			this->Slack2Final->TabIndex = 13;
			this->Slack2Final->Text = L"Slack 2";
			this->Slack2Final->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Mover hacia:";
			// 
			// Slack1Final
			// 
			this->Slack1Final->AutoSize = true;
			this->Slack1Final->Checked = true;
			this->Slack1Final->Location = System::Drawing::Point(167, 13);
			this->Slack1Final->Name = L"Slack1Final";
			this->Slack1Final->Size = System::Drawing::Size(61, 17);
			this->Slack1Final->TabIndex = 12;
			this->Slack1Final->TabStop = true;
			this->Slack1Final->Text = L"Slack 1";
			this->Slack1Final->UseVisualStyleBackColor = true;
			// 
			// moverBtn
			// 
			this->moverBtn->Enabled = false;
			this->moverBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->moverBtn->Location = System::Drawing::Point(10, 155);
			this->moverBtn->Name = L"moverBtn";
			this->moverBtn->Size = System::Drawing::Size(130, 23);
			this->moverBtn->TabIndex = 21;
			this->moverBtn->Text = L"Realizar movimiento";
			this->moverBtn->UseVisualStyleBackColor = true;
			this->moverBtn->Click += gcnew System::EventHandler(this, &MyForm::moverBtn_Click);
			// 
			// bajarBtn
			// 
			this->bajarBtn->Enabled = false;
			this->bajarBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bajarBtn->Location = System::Drawing::Point(146, 155);
			this->bajarBtn->Name = L"bajarBtn";
			this->bajarBtn->Size = System::Drawing::Size(103, 23);
			this->bajarBtn->TabIndex = 22;
			this->bajarBtn->Text = L"Obtener carta";
			this->bajarBtn->UseVisualStyleBackColor = true;
			this->bajarBtn->Click += gcnew System::EventHandler(this, &MyForm::bajarBtn_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(468, 14);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(46, 13);
			this->label10->TabIndex = 45;
			this->label10->Text = L"Slack 7:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(411, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 13);
			this->label9->TabIndex = 44;
			this->label9->Text = L"Slack 6:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(354, 14);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 13);
			this->label8->TabIndex = 43;
			this->label8->Text = L"Slack 5:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(297, 14);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Slack 4:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(240, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 13);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Slack 3:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(183, 14);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Slack 2:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(126, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 13);
			this->label4->TabIndex = 39;
			this->label4->Text = L"Slack 1:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Mazo:";
			// 
			// Slack7_Lbl
			// 
			this->Slack7_Lbl->AutoSize = true;
			this->Slack7_Lbl->Location = System::Drawing::Point(468, 39);
			this->Slack7_Lbl->Name = L"Slack7_Lbl";
			this->Slack7_Lbl->Size = System::Drawing::Size(13, 13);
			this->Slack7_Lbl->TabIndex = 37;
			this->Slack7_Lbl->Text = L"--";
			// 
			// Slack6_Lbl
			// 
			this->Slack6_Lbl->AutoSize = true;
			this->Slack6_Lbl->Location = System::Drawing::Point(411, 39);
			this->Slack6_Lbl->Name = L"Slack6_Lbl";
			this->Slack6_Lbl->Size = System::Drawing::Size(13, 13);
			this->Slack6_Lbl->TabIndex = 36;
			this->Slack6_Lbl->Text = L"--";
			// 
			// Slack5_Lbl
			// 
			this->Slack5_Lbl->AutoSize = true;
			this->Slack5_Lbl->Location = System::Drawing::Point(354, 39);
			this->Slack5_Lbl->Name = L"Slack5_Lbl";
			this->Slack5_Lbl->Size = System::Drawing::Size(13, 13);
			this->Slack5_Lbl->TabIndex = 35;
			this->Slack5_Lbl->Text = L"--";
			// 
			// Slack4_Lbl
			// 
			this->Slack4_Lbl->AutoSize = true;
			this->Slack4_Lbl->Location = System::Drawing::Point(297, 39);
			this->Slack4_Lbl->Name = L"Slack4_Lbl";
			this->Slack4_Lbl->Size = System::Drawing::Size(13, 13);
			this->Slack4_Lbl->TabIndex = 34;
			this->Slack4_Lbl->Text = L"--";
			// 
			// Slack3_Lbl
			// 
			this->Slack3_Lbl->AutoSize = true;
			this->Slack3_Lbl->Location = System::Drawing::Point(240, 39);
			this->Slack3_Lbl->Name = L"Slack3_Lbl";
			this->Slack3_Lbl->Size = System::Drawing::Size(13, 13);
			this->Slack3_Lbl->TabIndex = 33;
			this->Slack3_Lbl->Text = L"--";
			// 
			// Slack2_Lbl
			// 
			this->Slack2_Lbl->AutoSize = true;
			this->Slack2_Lbl->Location = System::Drawing::Point(183, 39);
			this->Slack2_Lbl->Name = L"Slack2_Lbl";
			this->Slack2_Lbl->Size = System::Drawing::Size(13, 13);
			this->Slack2_Lbl->TabIndex = 32;
			this->Slack2_Lbl->Text = L"--";
			// 
			// Slack1_Lbl
			// 
			this->Slack1_Lbl->AutoSize = true;
			this->Slack1_Lbl->Location = System::Drawing::Point(126, 39);
			this->Slack1_Lbl->Name = L"Slack1_Lbl";
			this->Slack1_Lbl->Size = System::Drawing::Size(13, 13);
			this->Slack1_Lbl->TabIndex = 31;
			this->Slack1_Lbl->Text = L"--";
			// 
			// mazo_Lbl
			// 
			this->mazo_Lbl->AutoSize = true;
			this->mazo_Lbl->Location = System::Drawing::Point(40, 33);
			this->mazo_Lbl->Name = L"mazo_Lbl";
			this->mazo_Lbl->Size = System::Drawing::Size(13, 13);
			this->mazo_Lbl->TabIndex = 30;
			this->mazo_Lbl->Text = L"--";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Corbel", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(229, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(181, 33);
			this->label11->TabIndex = 46;
			this->label11->Text = L"Solitary Game";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->mazo_Lbl);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->Slack1_Lbl);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->Slack2_Lbl);
			this->panel3->Controls->Add(this->Slack3_Lbl);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->Slack4_Lbl);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->Slack5_Lbl);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->Slack6_Lbl);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->Slack7_Lbl);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(10, 184);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(579, 355);
			this->panel3->TabIndex = 47;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(604, 551);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->bajarBtn);
			this->Controls->Add(this->moverBtn);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Solitary Game";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Solitary* newSolitary;
		bool newGame;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		newSolitary = new Solitary();
		getCards();
		newGame = true;
		moverBtn->Enabled = true;
		bajarBtn->Enabled = true;
	}
	private: System::Void moverBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Slack* SlackInicio = new Slack();
		Slack* SlackFinal = new Slack();
		if (mazoInicial->Checked) {
			SlackInicio = newSolitary->Slacks[0];
		}
		else if (Slack1Inicial->Checked) {
			SlackInicio = newSolitary->Slacks[1];
		}
		else if (Slack2Inicial->Checked) {
			SlackInicio = newSolitary->Slacks[2];
		}
		else if (Slack3Inicial->Checked) {
			SlackInicio = newSolitary->Slacks[3];
		}
		else if (Slack4Inicial->Checked) {
			SlackInicio = newSolitary->Slacks[4];
		}
		else if (Slack5Inicial->Checked) {
			SlackInicio = newSolitary->Slacks[5];
		}
		else if (Slack6Inicial->Checked) {
			SlackInicio = newSolitary->Slacks[6];
		}
		else {
			SlackInicio = newSolitary->Slacks[7];
		}
		if (Slack1Final->Checked) {
			SlackFinal = newSolitary->Slacks[1];
		}
		else if (Slack2Final->Checked) {
			SlackFinal = newSolitary->Slacks[2];
		}
		else if (Slack3Final->Checked) {
			SlackFinal = newSolitary->Slacks[3];
		}
		else if (Slack4Final->Checked) {
			SlackFinal = newSolitary->Slacks[4];
		}
		else if (Slack5Final->Checked) {
			SlackFinal = newSolitary->Slacks[5];
		}
		else if (Slack6Final->Checked) {
			SlackFinal = newSolitary->Slacks[6];
		}
		else {
			SlackFinal = newSolitary->Slacks[7];
		}
		if (SlackInicio->head != nullptr) {
			Card tempo = newSolitary->Mover(SlackInicio, SlackFinal);
			Card* temporal = &tempo;
			SlackFinal->head = new Card(temporal->numero, temporal->color, temporal->volteado, temporal->sig);
			getCards();
		}
		else {
			MessageBox::Show("El movimiento no es válido", "Error");
		}
		if (newSolitary->Slacks[0]->head == nullptr) {
			bajarBtn->Enabled = false;
		}
		if (SlackFinal->CantidadCardsVolteadas() >= 5 && newGame) {
			newGame = false;
			MessageBox::Show("¡Felicidades! Usted ha ganado", "Fin del Solitary");
		}
	}
	
	private: System::Void getCards() {
		mazo_Lbl->Text = newSolitary->Slacks[0]->String();
		Slack1_Lbl->Text = newSolitary->Slacks[1]->String();
		Slack2_Lbl->Text = newSolitary->Slacks[2]->String();
		Slack3_Lbl->Text = newSolitary->Slacks[3]->String();
		Slack4_Lbl->Text = newSolitary->Slacks[4]->String();
		Slack5_Lbl->Text = newSolitary->Slacks[5]->String();
		Slack6_Lbl->Text = newSolitary->Slacks[6]->String();
		Slack7_Lbl->Text = newSolitary->Slacks[7]->String();
	}
	private: System::Void bajarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (newSolitary->Slacks[0]->head != nullptr) {
			newSolitary->Slacks[0]->Pop();
			if (newSolitary->Slacks[0]->head != nullptr) {
				newSolitary->Slacks[0]->head->Voltear();
			}
			else {
				bajarBtn->Enabled = false;
			}
			getCards();
		}
	}
private: System::Void repartirBtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
