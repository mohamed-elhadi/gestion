#pragma once
using namespace System::Data::SqlClient;

namespace gestion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Description résumée de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		Form^ retour;
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		MyForm1(Form^ r)
		{
			retour = r;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}


	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;




	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox2;









	private: System::ComponentModel::IContainer^ components;






























	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(217, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Gestion de Client ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(183, 379);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ajouter ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Info;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label3->Location = System::Drawing::Point(66, 59);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 14);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Nom";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Info;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label4->Location = System::Drawing::Point(14, 372);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 14);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Date du premier achat";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Info;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label5->Location = System::Drawing::Point(19, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 14);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Adresse Livraison";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Info;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label6->Location = System::Drawing::Point(4, 278);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(146, 14);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Adresse de Facturation ";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm1::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Info;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label7->Location = System::Drawing::Point(19, 321);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 14);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Date de Naissance ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Info;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label8->Location = System::Drawing::Point(57, 101);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 14);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Prenom";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(183, 59);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(414, 314);
			this->dataGridView1->TabIndex = 23;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(498, 379);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 30);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(393, 379);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 30);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Afficher";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(288, 379);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 30);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Modifier";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 76);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 20);
			this->textBox1->TabIndex = 27;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(13, 118);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(142, 20);
			this->textBox2->TabIndex = 28;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(7, 206);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(142, 20);
			this->textBox3->TabIndex = 29;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(8, 295);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(142, 20);
			this->textBox4->TabIndex = 30;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(8, 337);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(142, 20);
			this->textBox5->TabIndex = 31;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(7, 389);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(142, 20);
			this->textBox6->TabIndex = 32;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(183, 59);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(414, 314);
			this->dataGridView2->TabIndex = 33;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(442, 33);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(141, 20);
			this->textBox7->TabIndex = 34;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(442, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 13);
			this->label2->TabIndex = 35;
			this->label2->Text = L"ID_Client";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 9);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 23);
			this->button5->TabIndex = 36;
			this->button5->Text = L"afficher tout les clients ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 33);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 37;
			this->button6->Text = L"clear all";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(138, 30);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 38;
			this->button7->Text = L"Retour";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click_1);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(48) {
				L"ADRAR", L"CHLEF", L"LAGHOUAT", L"OUM BOUAGHI",
					L"BATNA", L"BEJAIA", L"BISKRA", L"BECHAR", L"BLIDA", L"BOUIRA", L"TAMANRASSET", L"TEBESSA", L"TLEMCEN", L"TIARET", L"TIZI OUZOU",
					L"ALGER", L"DJELFA", L"JIJEL", L"SETIF", L"SAIDA", L"SKIKDA", L"SIDI BEL ABBES", L"ANNABA", L"GUELMA", L"CONSTANTINE", L"MEDEA",
					L"MOSTAGANEM", L"M\'SILA", L"MASCARA", L"OUARGLA", L"ORAN", L"EL BAYDH", L"ILLIZI", L"BORDJ BOU ARRERIDJ", L"BOUMERDES", L"EL TAREF",
					L"TINDOUF", L"TISSEMSILT", L"EL OUED40", L"KHENCHLA41", L"SOUK AHRASS", L"TIPAZA", L"MILA", L"AÏN DEFLA", L"NÂAMA", L"AÏN TEMOUCHENT",
					L"GHARDAÏA", L"RELIZANE"
			});
			this->comboBox1->Location = System::Drawing::Point(13, 249);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(143, 21);
			this->comboBox1->TabIndex = 39;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Info;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label9->Location = System::Drawing::Point(19, 232);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 14);
			this->label9->TabIndex = 40;
			this->label9->Text = L"la vile Facturation";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Info;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label10->Location = System::Drawing::Point(24, 141);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(96, 14);
			this->label10->TabIndex = 41;
			this->label10->Text = L"la vile Livraison";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(48) {
				L"ADRAR", L"CHLEF", L"LAGHOUAT", L"OUM BOUAGHI",
					L"BATNA", L"BEJAIA", L"BISKRA", L"BECHAR", L"BLIDA", L"BOUIRA", L"TAMANRASSET", L"TEBESSA", L"TLEMCEN", L"TIARET", L"TIZI OUZOU",
					L"ALGER", L"DJELFA", L"JIJEL", L"SETIF", L"SAIDA", L"SKIKDA", L"SIDI BEL ABBES", L"ANNABA", L"GUELMA", L"CONSTANTINE", L"MEDEA",
					L"MOSTAGANEM", L"M\'SILA", L"MASCARA", L"OUARGLA", L"ORAN", L"EL BAYDH", L"ILLIZI", L"BORDJ BOU ARRERIDJ", L"BOUMERDES", L"EL TAREF",
					L"TINDOUF", L"TISSEMSILT", L"EL OUED40", L"KHENCHLA41", L"SOUK AHRASS", L"TIPAZA", L"MILA", L"AÏN DEFLA", L"NÂAMA", L"AÏN TEMOUCHENT",
					L"GHARDAÏA", L"RELIZANE"
			});
			this->comboBox2->Location = System::Drawing::Point(12, 158);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(143, 21);
			this->comboBox2->TabIndex = 42;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(607, 426);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=BDD_PROJET;Integrated Security=True";
		SqlConnection^ condatabase = gcnew SqlConnection(constring);
		if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "") {
			MessageBox::Show("vous devez remplir tous les champs");
		}
		else {
			String^ nom = textBox1->Text;
			String^ prenom = textBox2->Text;
			String^ vileL = comboBox1->Text;
			String^ adresseL = textBox3->Text;
			String^ vileF = comboBox2->Text;
			String^ adresseF = textBox4->Text;
			String^ date = Convert::ToDateTime(textBox5->Text).ToString("yyyy-MM-dd");
			String^ date2 = Convert::ToDateTime(textBox6->Text).ToString("dd-MM-yyyy");

			SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO  client (Nom_c, Prenom_c , Date_De_Naissaince , Date_Premier_Achat, Adresse_Livraison, Adresse_Facturation ) values('" + nom + "','" + prenom + "','" + date + "','" + date2 + "','" +vileL+", "+ adresseL + "','"+vileF+", "+ adresseF + "');", condatabase);
			SqlDataReader^ myReader;


			try {
				condatabase->Open();
				myReader = cmdDataBase->ExecuteReader();
				MessageBox::Show("client  enregistré :'D");
			}
			catch (Exception^ ex) {
				if (textBox1->Text == "" && textBox2->Text == "" && textBox3->Text == "" && textBox4->Text == "" && textBox5->Text == "" && textBox6->Text == "") {
					MessageBox::Show("vous devez remplir tous les champs");
				}

			}




		}



	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Êtes vous sûr de vouloir continuer ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			String^ constring = "Data Source=(local);Initial Catalog=BDD_PROJET;Integrated Security=True";
			SqlConnection^ conDataBase = gcnew SqlConnection(constring);

			String^ ID = textBox7->Text;
			SqlCommand^ cmdDataBase = gcnew SqlCommand("DELETE FROM client WHERE Num_c = '" + ID + "' ", conDataBase);

			conDataBase->Open();
			SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Client  supprimé :'D");
			conDataBase->Close();
		}else{}

		
	}


		  

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


		String^ reference = textBox7->Text;
		String^ constring = "Data Source=(local);Initial Catalog=BDD_PROJET;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM client WHERE Num_c = '" + reference + "' ", conDataBase);
		conDataBase->Open();
		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
		dataGridView1->Hide();
		dataGridView2->Show();

		while (myReader->Read()) {
			textBox1->Text = myReader->GetString(1);
			textBox2->Text = myReader->GetString(2);
			textBox3->Text = myReader->GetString(5);
			textBox4->Text = myReader->GetString(6);
			textBox5->Text = Convert::ToString(myReader->GetDateTime(3).ToString("yyyy - MM - dd"));
			textBox6->Text = Convert::ToString(myReader->GetDateTime(4).ToString("yyyy - MM - dd"));
		}
		myReader->Close();
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM client WHERE Num_c = '" + reference + "' ", conDataBase);
		DataTable^ data = gcnew DataTable();
		data->Clear();
		adapter->Fill(data);
		bindingSource2->DataSource = data;
		dataGridView2->DataSource = bindingSource2;

	}






	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constring = "Data Source=(local);Initial Catalog=BDD_PROJET;Integrated Security=True";
		SqlConnection^ condatabase = gcnew SqlConnection(constring);
		String^ id = textBox7->Text;
		String^ nom = textBox1->Text;
		String^ prenom = textBox2->Text;
		String^ adresseL = textBox3->Text;
		String^ adresseF = textBox4->Text;
		String^ date = Convert::ToDateTime(textBox5->Text).ToString("yyyy-MM-dd");
		String^ date2 = Convert::ToDateTime(textBox6->Text).ToString("dd-MM-yyyy");

		SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE client SET  Nom_c = '" + nom + "', Prenom_c ='" + prenom + "' , Date_De_Naissaince = '" + date + "' , Date_Premier_Achat = '" + date2 + "', Adresse_Livraison = '" + adresseF + "', Adresse_Facturation = '" + adresseL + "' WHERE Num_c = " + id + " ;", condatabase);
		SqlDataReader^ myReader;
		try {
			condatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("client modifié :'D");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}



	}

		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=BDD_PROJET;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM client", conDataBase);
		DataTable^ data = gcnew DataTable();
		dataGridView2->Hide();
		dataGridView1->Show();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataGridView1->DataSource = bindingSource1;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";

	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		retour->Show();
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
	
