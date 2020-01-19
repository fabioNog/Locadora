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
	/// Sumário para CriarFilme
	/// </summary>
	public ref class CriarFilme : public System::Windows::Forms::Form
	{
	public:
		CriarFilme(void)
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
		~CriarFilme()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ versao;
	protected:
	private: System::Windows::Forms::ComboBox^ categoria;
	private: System::Windows::Forms::DateTimePicker^ ano_criacao;
	private: System::Windows::Forms::TextBox^ sinopse;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ nome_filme;
	private: System::Windows::Forms::Label^ Nome;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
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
			this->versao = (gcnew System::Windows::Forms::ComboBox());
			this->categoria = (gcnew System::Windows::Forms::ComboBox());
			this->ano_criacao = (gcnew System::Windows::Forms::DateTimePicker());
			this->sinopse = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nome_filme = (gcnew System::Windows::Forms::TextBox());
			this->Nome = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// versao
			// 
			this->versao->FormattingEnabled = true;
			this->versao->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"sem_legenda", L"com_legenda", L"dublado" });
			this->versao->Location = System::Drawing::Point(248, 220);
			this->versao->Name = L"versao";
			this->versao->Size = System::Drawing::Size(260, 21);
			this->versao->TabIndex = 26;
			// 
			// categoria
			// 
			this->categoria->FormattingEnabled = true;
			this->categoria->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"comedia", L"suspense", L"ficcao", L"terror",
					L"romance", L"policial", L"acao"
			});
			this->categoria->Location = System::Drawing::Point(248, 182);
			this->categoria->Name = L"categoria";
			this->categoria->Size = System::Drawing::Size(260, 21);
			this->categoria->TabIndex = 25;
			// 
			// ano_criacao
			// 
			this->ano_criacao->CustomFormat = L"yyyy-MM-dd";
			this->ano_criacao->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->ano_criacao->Location = System::Drawing::Point(248, 145);
			this->ano_criacao->Name = L"ano_criacao";
			this->ano_criacao->Size = System::Drawing::Size(260, 20);
			this->ano_criacao->TabIndex = 24;
			// 
			// sinopse
			// 
			this->sinopse->Location = System::Drawing::Point(248, 261);
			this->sinopse->Multiline = true;
			this->sinopse->Name = L"sinopse";
			this->sinopse->Size = System::Drawing::Size(260, 91);
			this->sinopse->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(93, 299);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 13);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Sinopse";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(93, 228);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Versão";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(93, 190);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Categoria";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(276, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 29);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Criar Filmes";
			// 
			// nome_filme
			// 
			this->nome_filme->Location = System::Drawing::Point(248, 107);
			this->nome_filme->Name = L"nome_filme";
			this->nome_filme->Size = System::Drawing::Size(260, 20);
			this->nome_filme->TabIndex = 18;
			// 
			// Nome
			// 
			this->Nome->AutoSize = true;
			this->Nome->Location = System::Drawing::Point(93, 107);
			this->Nome->Name = L"Nome";
			this->Nome->Size = System::Drawing::Size(77, 13);
			this->Nome->TabIndex = 17;
			this->Nome->Text = L"Nome do Filme";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(93, 152);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Data de Criação";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(306, 383);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 38);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Criar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CriarFilme::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(2, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 38);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Voltar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CriarFilme::button2_Click);
			// 
			// CriarFilme
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 447);
			this->Controls->Add(this->button2);
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
			this->Name = L"CriarFilme";
			this->Text = L"CriarFilme";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
