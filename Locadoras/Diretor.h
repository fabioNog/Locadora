#pragma once

namespace Locadoras {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Sumário para Diretor
	/// </summary>
	public ref class Diretor : public System::Windows::Forms::Form
	{
	public:
		Diretor(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			FillCombo();
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~Diretor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBoxFilme;

	private: System::Windows::Forms::NumericUpDown^ cpfNumber;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ NameForm;
	private: System::Windows::Forms::DateTimePicker^ dateForm;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBoxAddFilme;
	private: System::Windows::Forms::Button^ button2;


	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBoxFilme = (gcnew System::Windows::Forms::ComboBox());
			this->cpfNumber = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->NameForm = (gcnew System::Windows::Forms::TextBox());
			this->dateForm = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBoxAddFilme = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cpfNumber))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 164);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nome do Diretor";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CPF";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(283, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Criar Diretor";
			// 
			// comboBoxFilme
			// 
			this->comboBoxFilme->FormattingEnabled = true;
			this->comboBoxFilme->Location = System::Drawing::Point(493, 138);
			this->comboBoxFilme->Name = L"comboBoxFilme";
			this->comboBoxFilme->Size = System::Drawing::Size(195, 21);
			this->comboBoxFilme->TabIndex = 3;
			this->comboBoxFilme->SelectedIndexChanged += gcnew System::EventHandler(this, &Diretor::comboBox1_SelectedIndexChanged);
			// 
			// cpfNumber
			// 
			this->cpfNumber->Location = System::Drawing::Point(205, 100);
			this->cpfNumber->Name = L"cpfNumber";
			this->cpfNumber->Size = System::Drawing::Size(231, 20);
			this->cpfNumber->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 222);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(179, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Data de Nascimento";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(512, 201);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 24);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Filmes Criados";
			// 
			// NameForm
			// 
			this->NameForm->Location = System::Drawing::Point(205, 164);
			this->NameForm->Name = L"NameForm";
			this->NameForm->Size = System::Drawing::Size(231, 20);
			this->NameForm->TabIndex = 7;
			// 
			// dateForm
			// 
			this->dateForm->CustomFormat = L"yyyy-MM-dd";
			this->dateForm->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateForm->Location = System::Drawing::Point(219, 226);
			this->dateForm->Name = L"dateForm";
			this->dateForm->Size = System::Drawing::Size(231, 20);
			this->dateForm->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(289, 354);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 28);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Criar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(512, 96);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(151, 24);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Adicionar Filmes";
			// 
			// comboBoxAddFilme
			// 
			this->comboBoxAddFilme->FormattingEnabled = true;
			this->comboBoxAddFilme->Location = System::Drawing::Point(493, 256);
			this->comboBoxAddFilme->Name = L"comboBoxAddFilme";
			this->comboBoxAddFilme->Size = System::Drawing::Size(180, 21);
			this->comboBoxAddFilme->TabIndex = 11;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(535, 296);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Adicionar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Diretor::button2_Click);
			// 
			// Diretor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 421);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBoxAddFilme);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateForm);
			this->Controls->Add(this->NameForm);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cpfNumber);
			this->Controls->Add(this->comboBoxFilme);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Diretor";
			this->Text = L"Diretor";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cpfNumber))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
		private: void FillCombo(void) {

			String^ DiretorString = L"datasource=localhost;port=3306;username=root;password=";
			MySqlConnection^ DiretorDatabase = gcnew MySqlConnection(DiretorString);
			MySqlCommand^ cmdDiretorDatabase = gcnew MySqlCommand("select * from locadora.filme;", DiretorDatabase);
			MySqlDataReader^ DiretorReader;

			try {
				DiretorDatabase->Open();
				DiretorReader = cmdDiretorDatabase->ExecuteReader();
				while (DiretorReader->Read()) {
					String^ lName;
					lName = DiretorReader->GetString("nome_filme");
					comboBoxFilme->Items->Add(lName);
				}
			}
			catch (Exception ^ ex) {
				MessageBox::Show(ex->Message);
			}

		}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	comboBoxAddFilme->Items->Add(comboBoxFilme->Items->Add("nome_filme"));
}
};
}
