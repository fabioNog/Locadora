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
	/// Sumário para Filmes
	/// </summary>
	public ref class Filmes : public System::Windows::Forms::Form
	{
	public:
		Filmes(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~Filmes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Nome;
	private: System::Windows::Forms::TextBox^ nome_filme;




	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ sinopse;

	private: System::Windows::Forms::DateTimePicker^ ano_criacao;
	private: System::Windows::Forms::ComboBox^ categoria;


	private: System::Windows::Forms::ComboBox^ versao;


	private:







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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Nome = (gcnew System::Windows::Forms::Label());
			this->nome_filme = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->sinopse = (gcnew System::Windows::Forms::TextBox());
			this->ano_criacao = (gcnew System::Windows::Forms::DateTimePicker());
			this->categoria = (gcnew System::Windows::Forms::ComboBox());
			this->versao = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(215, 310);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Filmes::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Data de Criação";
			this->label1->Click += gcnew System::EventHandler(this, &Filmes::label1_Click);
			// 
			// Nome
			// 
			this->Nome->AutoSize = true;
			this->Nome->Location = System::Drawing::Point(37, 36);
			this->Nome->Name = L"Nome";
			this->Nome->Size = System::Drawing::Size(77, 13);
			this->Nome->TabIndex = 2;
			this->Nome->Text = L"Nome do Filme";
			this->Nome->Click += gcnew System::EventHandler(this, &Filmes::Nome_Click);
			// 
			// nome_filme
			// 
			this->nome_filme->Location = System::Drawing::Point(187, 36);
			this->nome_filme->Name = L"nome_filme";
			this->nome_filme->Size = System::Drawing::Size(260, 20);
			this->nome_filme->TabIndex = 3;
			this->nome_filme->TextChanged += gcnew System::EventHandler(this, &Filmes::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(221, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Criar Filmes";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Categoria";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(37, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Versão";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(37, 220);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Sinopse";
			this->label5->Click += gcnew System::EventHandler(this, &Filmes::label5_Click);
			// 
			// sinopse
			// 
			this->sinopse->Location = System::Drawing::Point(187, 189);
			this->sinopse->Multiline = true;
			this->sinopse->Name = L"sinopse";
			this->sinopse->Size = System::Drawing::Size(260, 91);
			this->sinopse->TabIndex = 11;
			// 
			// ano_criacao
			// 
			this->ano_criacao->CustomFormat = L"yyyy-MM-dd";
			this->ano_criacao->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->ano_criacao->Location = System::Drawing::Point(187, 71);
			this->ano_criacao->Name = L"ano_criacao";
			this->ano_criacao->Size = System::Drawing::Size(260, 20);
			this->ano_criacao->TabIndex = 12;
			this->ano_criacao->ValueChanged += gcnew System::EventHandler(this, &Filmes::ano_criacao_ValueChanged);
			// 
			// categoria
			// 
			this->categoria->FormattingEnabled = true;
			this->categoria->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"comedia", L"suspense", L"ficcao", L"terror",
					L"romance", L"policial", L"acao"
			});
			this->categoria->Location = System::Drawing::Point(187, 104);
			this->categoria->Name = L"categoria";
			this->categoria->Size = System::Drawing::Size(260, 21);
			this->categoria->TabIndex = 13;
			// 
			// versao
			// 
			this->versao->FormattingEnabled = true;
			this->versao->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"sem_legenda", L"com_legenda", L"dublado" });
			this->versao->Location = System::Drawing::Point(187, 147);
			this->versao->Name = L"versao";
			this->versao->Size = System::Drawing::Size(260, 21);
			this->versao->TabIndex = 14;
			// 
			// Filmes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(560, 345);
			this->Controls->Add(this->versao);
			this->Controls->Add(this->categoria);
			this->Controls->Add(this->ano_criacao);
			this->Controls->Add(this->sinopse);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->nome_filme);
			this->Controls->Add(this->Nome);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Filmes";
			this->Text = L"Filmes";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("insert into locadora.filme (nome_filme,ano_criacao,categoria,versao,sinopse) values ('" + this->nome_filme->Text + "','" + this->ano_criacao->Text + "','" + this->categoria->Text + "','" + this->versao->Text + "','" + this->sinopse->Text + "'); ", conDatabase);
		MySqlDataReader^ myReader;

		try {
			conDatabase->Open();
			myReader = cmdDatabase->ExecuteReader();
			MessageBox::Show("Salvo Com Sucesso");
			while (myReader->Read()) {
			}
		}
		catch(Exception^ex){
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Nome_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
}
private: System::Void ano_criacao_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
