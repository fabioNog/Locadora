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
	/// Sumário para AlterarFilme
	/// </summary>
	public ref class AlterarFilme : public System::Windows::Forms::Form
	{
	public:
		AlterarFilme(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
			FillCombo();
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~AlterarFilme()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBoxName;
	private: System::Windows::Forms::ComboBox^ comboBoxCategoria;


	private: System::Windows::Forms::ComboBox^ comboBoxVersao;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ dateTimeData;
	private: System::Windows::Forms::TextBox^ textBox1Sinopse;



	protected:












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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBoxName = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxVersao = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTimeData = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox1Sinopse = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(306, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Alterar Filme";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(117, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Selecionar Nome";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(117, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Editar Data";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(119, 300);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Editar Sinopse";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(117, 241);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 24);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Editar Categoria";
			// 
			// comboBoxName
			// 
			this->comboBoxName->FormattingEnabled = true;
			this->comboBoxName->Location = System::Drawing::Point(311, 105);
			this->comboBoxName->Name = L"comboBoxName";
			this->comboBoxName->Size = System::Drawing::Size(291, 21);
			this->comboBoxName->TabIndex = 5;
			this->comboBoxName->SelectedIndexChanged += gcnew System::EventHandler(this, &AlterarFilme::comboBox1_SelectedIndexChanged);
			// 
			// comboBoxCategoria
			// 
			this->comboBoxCategoria->FormattingEnabled = true;
			this->comboBoxCategoria->Location = System::Drawing::Point(311, 233);
			this->comboBoxCategoria->Name = L"comboBoxCategoria";
			this->comboBoxCategoria->Size = System::Drawing::Size(291, 21);
			this->comboBoxCategoria->TabIndex = 6;
			// 
			// comboBoxVersao
			// 
			this->comboBoxVersao->FormattingEnabled = true;
			this->comboBoxVersao->Location = System::Drawing::Point(311, 193);
			this->comboBoxVersao->Name = L"comboBoxVersao";
			this->comboBoxVersao->Size = System::Drawing::Size(291, 21);
			this->comboBoxVersao->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(117, 201);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 24);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Editar Versão";
			// 
			// dateTimeData
			// 
			this->dateTimeData->CustomFormat = L"yyyy-MM-dd";
			this->dateTimeData->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimeData->Location = System::Drawing::Point(311, 146);
			this->dateTimeData->Name = L"dateTimeData";
			this->dateTimeData->Size = System::Drawing::Size(291, 20);
			this->dateTimeData->TabIndex = 9;
			// 
			// textBox1Sinopse
			// 
			this->textBox1Sinopse->Location = System::Drawing::Point(311, 279);
			this->textBox1Sinopse->Multiline = true;
			this->textBox1Sinopse->Name = L"textBox1Sinopse";
			this->textBox1Sinopse->Size = System::Drawing::Size(291, 118);
			this->textBox1Sinopse->TabIndex = 10;
			// 
			// AlterarFilme
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(745, 443);
			this->Controls->Add(this->textBox1Sinopse);
			this->Controls->Add(this->dateTimeData);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBoxVersao);
			this->Controls->Add(this->comboBoxCategoria);
			this->Controls->Add(this->comboBoxName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AlterarFilme";
			this->Text = L"AlterarFilme";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {		
	}
	private: void FillCombo(void) {
		String^ AlterString = L"datasource=localhost;port=3306;username=root;password=";
		MySqlConnection^ AlterDatabase = gcnew MySqlConnection(AlterString);
		MySqlCommand^ cmdAlterDatabase = gcnew MySqlCommand("select * from locadora.filme;", AlterDatabase);
		MySqlDataReader^ AlterReader;

		try {
			AlterDatabase->Open();
			AlterReader = cmdAlterDatabase->ExecuteReader();
			while (AlterReader->Read()) {
				String^ lName;
				lName = AlterReader->GetString("nome_filme");
				comboBoxName->Items->Add(lName);
			}
		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
};
}
