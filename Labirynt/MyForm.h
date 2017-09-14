#pragma once

namespace Labirynt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class MyForm : public System::Windows::Forms::Form
	{

		
		
		
		
		
		
		
		static int sila1 = 1;
		static int sila2 = 1;
		static int moc1 = 1;
		static int moc2 = 1;
		static int pz1 = 4;
		static int pz2 = 4;
		static int punkty1 = 4;
		static int punkty2 = 4;
		static int tura = 1;
		static int gracz = 1;
		static int Sekundy = 60;
		static int Minuty = 59;
		String^ Sec;
		String^ Min;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  lsila1;
	private: System::Windows::Forms::Label^  lsila2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lTura;
	private: System::Windows::Forms::Label^  lGracz;


	private: System::Windows::Forms::Label^  lGracztxt;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  lmoc2;
	private: System::Windows::Forms::Label^  lmoc1;
	private: System::Windows::Forms::Label^  lzycie2;
	private: System::Windows::Forms::Label^  lzycie1;
	private: System::Windows::Forms::Label^  lpunkty2;
	private: System::Windows::Forms::Label^  lpunkty1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
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
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Label^  lCzas;
	
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


	private: System::ComponentModel::IContainer^  components;
	

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lTura = (gcnew System::Windows::Forms::Label());
			this->lGracz = (gcnew System::Windows::Forms::Label());
			this->lGracztxt = (gcnew System::Windows::Forms::Label());
			this->lCzas = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lsila1 = (gcnew System::Windows::Forms::Label());
			this->lsila2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->lmoc2 = (gcnew System::Windows::Forms::Label());
			this->lmoc1 = (gcnew System::Windows::Forms::Label());
			this->lzycie2 = (gcnew System::Windows::Forms::Label());
			this->lzycie1 = (gcnew System::Windows::Forms::Label());
			this->lpunkty2 = (gcnew System::Windows::Forms::Label());
			this->lpunkty1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
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
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(339, 554);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(357, 98);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Nastêpny gracz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(983, 559);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(283, 98);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(449, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 55);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Tura:";
			// 
			// lTura
			// 
			this->lTura->AutoSize = true;
			this->lTura->BackColor = System::Drawing::Color::Transparent;
			this->lTura->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lTura->Location = System::Drawing::Point(596, 12);
			this->lTura->Name = L"lTura";
			this->lTura->Size = System::Drawing::Size(52, 55);
			this->lTura->TabIndex = 4;
			this->lTura->Text = L"1";
			// 
			// lGracz
			// 
			this->lGracz->AutoSize = true;
			this->lGracz->BackColor = System::Drawing::Color::Transparent;
			this->lGracz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lGracz->Location = System::Drawing::Point(596, 67);
			this->lGracz->Name = L"lGracz";
			this->lGracz->Size = System::Drawing::Size(52, 55);
			this->lGracz->TabIndex = 6;
			this->lGracz->Text = L"1";
			// 
			// lGracztxt
			// 
			this->lGracztxt->AutoSize = true;
			this->lGracztxt->BackColor = System::Drawing::Color::Transparent;
			this->lGracztxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lGracztxt->Location = System::Drawing::Point(419, 67);
			this->lGracztxt->Name = L"lGracztxt";
			this->lGracztxt->Size = System::Drawing::Size(171, 55);
			this->lGracztxt->TabIndex = 5;
			this->lGracztxt->Text = L"Gracz:";
			// 
			// lCzas
			// 
			this->lCzas->AutoSize = true;
			this->lCzas->BackColor = System::Drawing::Color::Transparent;
			this->lCzas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lCzas->Location = System::Drawing::Point(940, 64);
			this->lCzas->Name = L"lCzas";
			this->lCzas->Size = System::Drawing::Size(94, 55);
			this->lCzas->TabIndex = 7;
			this->lCzas->Text = L"0:0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(940, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(152, 55);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Czas:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(447, 192);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(199, 55);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Gracz 1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(669, 192);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(199, 55);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Gracz 2";
			// 
			// lsila1
			// 
			this->lsila1->AutoSize = true;
			this->lsila1->BackColor = System::Drawing::Color::Transparent;
			this->lsila1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lsila1->Location = System::Drawing::Point(507, 255);
			this->lsila1->Name = L"lsila1";
			this->lsila1->Size = System::Drawing::Size(52, 55);
			this->lsila1->TabIndex = 11;
			this->lsila1->Text = L"0";
			// 
			// lsila2
			// 
			this->lsila2->AutoSize = true;
			this->lsila2->BackColor = System::Drawing::Color::Transparent;
			this->lsila2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lsila2->Location = System::Drawing::Point(738, 255);
			this->lsila2->Name = L"lsila2";
			this->lsila2->Size = System::Drawing::Size(52, 55);
			this->lsila2->TabIndex = 12;
			this->lsila2->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->Location = System::Drawing::Point(115, 258);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(121, 55);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Si³a:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(118, 313);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(132, 55);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Moc:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->Location = System::Drawing::Point(118, 368);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(157, 55);
			this->label11->TabIndex = 15;
			this->label11->Text = L"¯ycie:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->Location = System::Drawing::Point(118, 423);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(191, 55);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Punkty:";
			// 
			// lmoc2
			// 
			this->lmoc2->AutoSize = true;
			this->lmoc2->BackColor = System::Drawing::Color::Transparent;
			this->lmoc2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lmoc2->Location = System::Drawing::Point(738, 310);
			this->lmoc2->Name = L"lmoc2";
			this->lmoc2->Size = System::Drawing::Size(52, 55);
			this->lmoc2->TabIndex = 18;
			this->lmoc2->Text = L"0";
			// 
			// lmoc1
			// 
			this->lmoc1->AutoSize = true;
			this->lmoc1->BackColor = System::Drawing::Color::Transparent;
			this->lmoc1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lmoc1->Location = System::Drawing::Point(507, 310);
			this->lmoc1->Name = L"lmoc1";
			this->lmoc1->Size = System::Drawing::Size(52, 55);
			this->lmoc1->TabIndex = 17;
			this->lmoc1->Text = L"0";
			// 
			// lzycie2
			// 
			this->lzycie2->AutoSize = true;
			this->lzycie2->BackColor = System::Drawing::Color::Transparent;
			this->lzycie2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lzycie2->Location = System::Drawing::Point(738, 365);
			this->lzycie2->Name = L"lzycie2";
			this->lzycie2->Size = System::Drawing::Size(52, 55);
			this->lzycie2->TabIndex = 20;
			this->lzycie2->Text = L"0";
			// 
			// lzycie1
			// 
			this->lzycie1->AutoSize = true;
			this->lzycie1->BackColor = System::Drawing::Color::Transparent;
			this->lzycie1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lzycie1->Location = System::Drawing::Point(507, 365);
			this->lzycie1->Name = L"lzycie1";
			this->lzycie1->Size = System::Drawing::Size(52, 55);
			this->lzycie1->TabIndex = 19;
			this->lzycie1->Text = L"0";
			// 
			// lpunkty2
			// 
			this->lpunkty2->AutoSize = true;
			this->lpunkty2->BackColor = System::Drawing::Color::Transparent;
			this->lpunkty2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lpunkty2->Location = System::Drawing::Point(738, 420);
			this->lpunkty2->Name = L"lpunkty2";
			this->lpunkty2->Size = System::Drawing::Size(52, 55);
			this->lpunkty2->TabIndex = 22;
			this->lpunkty2->Text = L"0";
			// 
			// lpunkty1
			// 
			this->lpunkty1->AutoSize = true;
			this->lpunkty1->BackColor = System::Drawing::Color::Transparent;
			this->lpunkty1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lpunkty1->Location = System::Drawing::Point(507, 420);
			this->lpunkty1->Name = L"lpunkty1";
			this->lpunkty1->Size = System::Drawing::Size(52, 55);
			this->lpunkty1->TabIndex = 21;
			this->lpunkty1->Text = L"0";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(841, 22);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(93, 87);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 23;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(53, 267);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(61, 55);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 24;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.InitialImage")));
			this->pictureBox4->Location = System::Drawing::Point(53, 316);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(59, 56);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 25;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(53, 368);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(61, 55);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 26;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(53, 426);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(61, 50);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 27;
			this->pictureBox6->TabStop = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(339, 255);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 55);
			this->button2->TabIndex = 28;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(409, 255);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 55);
			this->button3->TabIndex = 29;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(409, 313);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(64, 55);
			this->button4->TabIndex = 31;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(339, 313);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(64, 55);
			this->button5->TabIndex = 30;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(409, 371);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(64, 55);
			this->button6->TabIndex = 33;
			this->button6->Text = L"+";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(339, 371);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(64, 55);
			this->button7->TabIndex = 32;
			this->button7->Text = L"-";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(409, 429);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(64, 55);
			this->button8->TabIndex = 35;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(339, 429);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(64, 55);
			this->button9->TabIndex = 34;
			this->button9->Text = L"-";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(897, 429);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(64, 55);
			this->button10->TabIndex = 43;
			this->button10->Text = L"+";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(827, 429);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(64, 55);
			this->button11->TabIndex = 42;
			this->button11->Text = L"-";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(897, 371);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(64, 55);
			this->button12->TabIndex = 41;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(827, 371);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(64, 55);
			this->button13->TabIndex = 40;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(897, 313);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(64, 55);
			this->button14->TabIndex = 39;
			this->button14->Text = L"+";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->Location = System::Drawing::Point(827, 313);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(64, 55);
			this->button15->TabIndex = 38;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->Location = System::Drawing::Point(897, 255);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(64, 55);
			this->button16->TabIndex = 37;
			this->button16->Text = L"+";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->Location = System::Drawing::Point(827, 255);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(64, 55);
			this->button17->TabIndex = 36;
			this->button17->Text = L"-";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 50;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(695, 554);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(166, 98);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 44;
			this->pictureBox7->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1104, 697);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->lpunkty2);
			this->Controls->Add(this->lpunkty1);
			this->Controls->Add(this->lzycie2);
			this->Controls->Add(this->lzycie1);
			this->Controls->Add(this->lmoc2);
			this->Controls->Add(this->lmoc1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->lsila2);
			this->Controls->Add(this->lsila1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->lCzas);
			this->Controls->Add(this->lGracz);
			this->Controls->Add(this->lGracztxt);
			this->Controls->Add(this->lTura);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"Labirynt";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		gracz++;
		if (gracz==3)
		{
			gracz = 1;
			tura++;
//			if (tura>5) koniec gry
		}
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		Sekundy--;
		if (Sekundy == 0)
		{
			Sekundy = 60;
			Minuty--;
		}
		Sec = Convert::ToString(Sekundy);
		Min = Convert::ToString(Minuty);

		lCzas->Text = Min + ":" + Sec;
	}

	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {

		lsila1->Text = Convert::ToString(sila1);
		lsila2->Text = Convert::ToString(sila2);
		lmoc1->Text = Convert::ToString(moc1);
		lmoc2->Text = Convert::ToString(moc2);
		lzycie1->Text = Convert::ToString(pz1);
		lzycie2->Text = Convert::ToString(pz2);
		lpunkty1->Text = Convert::ToString(punkty1);
		lpunkty2->Text = Convert::ToString(punkty2);
		lTura->Text = Convert::ToString(tura);
		lGracz->Text = Convert::ToString(gracz);
	}


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (sila1) sila1--;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	sila1++;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (moc1) moc1--;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	moc1++;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (pz1) pz1--;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	pz1++;
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (punkty1) punkty1--;
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	punkty1++;
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	if (sila2) sila2--;
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	sila2++;
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	if (moc2) moc2--;
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	moc2++;
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (pz2) pz2--;
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	pz2++;
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (punkty2) punkty2--;
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	punkty2++;
}
};
}
