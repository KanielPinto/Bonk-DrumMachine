#pragma once
#include <windows.h>
#include <iostream>

int interval = 60;
int step_no = 0;
bool start;
void drum();

bool h1;
bool h2;
bool h3;
bool h4;
bool h5;
bool h6;
bool h7;
bool h8;
bool h9;
bool h10;
bool h11;
bool h12;
bool h13;
bool h14;
bool h15;
bool h16;


namespace Bonk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
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
	private: System::Windows::Forms::Button^ Kick;
	private: System::Windows::Forms::Button^ HiHat;

	private: System::Windows::Forms::Button^ Snare;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::CheckBox^ H1;
	private: System::Windows::Forms::CheckBox^ H2;
	private: System::Windows::Forms::CheckBox^ H3;
	private: System::Windows::Forms::CheckBox^ H4;
	private: System::Windows::Forms::CheckBox^ H5;
	private: System::Windows::Forms::CheckBox^ H6;
	private: System::Windows::Forms::CheckBox^ H7;
	private: System::Windows::Forms::CheckBox^ H8;
	private: System::Windows::Forms::CheckBox^ H9;
	private: System::Windows::Forms::CheckBox^ H10;
	private: System::Windows::Forms::CheckBox^ H11;

















	private: System::Windows::Forms::CheckBox^ H12;
	private: System::Windows::Forms::CheckBox^ H13;
	private: System::Windows::Forms::CheckBox^ H14;
	private: System::Windows::Forms::CheckBox^ H15;
	private: System::Windows::Forms::CheckBox^ H16;





	private: System::Windows::Forms::Button^ PlayButton;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::CheckBox^ S16;
	private: System::Windows::Forms::CheckBox^ S15;
	private: System::Windows::Forms::CheckBox^ S14;
	private: System::Windows::Forms::CheckBox^ S13;
	private: System::Windows::Forms::CheckBox^ S12;
	private: System::Windows::Forms::CheckBox^ S11;
	private: System::Windows::Forms::CheckBox^ S10;
	private: System::Windows::Forms::CheckBox^ S9;
	private: System::Windows::Forms::CheckBox^ S8;
	private: System::Windows::Forms::CheckBox^ S7;
	private: System::Windows::Forms::CheckBox^ S6;
	private: System::Windows::Forms::CheckBox^ S5;
	private: System::Windows::Forms::CheckBox^ S4;
	private: System::Windows::Forms::CheckBox^ S3;
	private: System::Windows::Forms::CheckBox^ S2;
	private: System::Windows::Forms::CheckBox^ S1;
	private: System::Windows::Forms::CheckBox^ K16;
	private: System::Windows::Forms::CheckBox^ K15;
	private: System::Windows::Forms::CheckBox^ K14;
	private: System::Windows::Forms::CheckBox^ K13;
	private: System::Windows::Forms::CheckBox^ K12;
	private: System::Windows::Forms::CheckBox^ K11;
	private: System::Windows::Forms::CheckBox^ K10;
	private: System::Windows::Forms::CheckBox^ K9;
	private: System::Windows::Forms::CheckBox^ K8;
	private: System::Windows::Forms::CheckBox^ K7;
	private: System::Windows::Forms::CheckBox^ K6;
	private: System::Windows::Forms::CheckBox^ K5;
	private: System::Windows::Forms::CheckBox^ K4;
	private: System::Windows::Forms::CheckBox^ K3;
	private: System::Windows::Forms::CheckBox^ K2;
	private: System::Windows::Forms::CheckBox^ K1;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::ProgressBar^ progressBar1;
private: System::Windows::Forms::CheckBox^ C16;

private: System::Windows::Forms::CheckBox^ C15;

private: System::Windows::Forms::CheckBox^ C14;

private: System::Windows::Forms::CheckBox^ C13;

private: System::Windows::Forms::CheckBox^ C12;

private: System::Windows::Forms::CheckBox^ C11;

private: System::Windows::Forms::CheckBox^ C10;

private: System::Windows::Forms::CheckBox^ C9;

private: System::Windows::Forms::CheckBox^ C8;

private: System::Windows::Forms::CheckBox^ C7;

private: System::Windows::Forms::CheckBox^ C6;

private: System::Windows::Forms::CheckBox^ C5;

private: System::Windows::Forms::CheckBox^ C4;

private: System::Windows::Forms::CheckBox^ C3;

private: System::Windows::Forms::CheckBox^ C2;

private: System::Windows::Forms::CheckBox^ C1;

private: System::Windows::Forms::Button^ Clap;


	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Kick = (gcnew System::Windows::Forms::Button());
			this->HiHat = (gcnew System::Windows::Forms::Button());
			this->Snare = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->H1 = (gcnew System::Windows::Forms::CheckBox());
			this->H2 = (gcnew System::Windows::Forms::CheckBox());
			this->H3 = (gcnew System::Windows::Forms::CheckBox());
			this->H4 = (gcnew System::Windows::Forms::CheckBox());
			this->H5 = (gcnew System::Windows::Forms::CheckBox());
			this->H6 = (gcnew System::Windows::Forms::CheckBox());
			this->H7 = (gcnew System::Windows::Forms::CheckBox());
			this->H8 = (gcnew System::Windows::Forms::CheckBox());
			this->H9 = (gcnew System::Windows::Forms::CheckBox());
			this->H10 = (gcnew System::Windows::Forms::CheckBox());
			this->H11 = (gcnew System::Windows::Forms::CheckBox());
			this->H12 = (gcnew System::Windows::Forms::CheckBox());
			this->H13 = (gcnew System::Windows::Forms::CheckBox());
			this->H14 = (gcnew System::Windows::Forms::CheckBox());
			this->H15 = (gcnew System::Windows::Forms::CheckBox());
			this->H16 = (gcnew System::Windows::Forms::CheckBox());
			this->PlayButton = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->S16 = (gcnew System::Windows::Forms::CheckBox());
			this->S15 = (gcnew System::Windows::Forms::CheckBox());
			this->S14 = (gcnew System::Windows::Forms::CheckBox());
			this->S13 = (gcnew System::Windows::Forms::CheckBox());
			this->S12 = (gcnew System::Windows::Forms::CheckBox());
			this->S11 = (gcnew System::Windows::Forms::CheckBox());
			this->S10 = (gcnew System::Windows::Forms::CheckBox());
			this->S9 = (gcnew System::Windows::Forms::CheckBox());
			this->S8 = (gcnew System::Windows::Forms::CheckBox());
			this->S7 = (gcnew System::Windows::Forms::CheckBox());
			this->S6 = (gcnew System::Windows::Forms::CheckBox());
			this->S5 = (gcnew System::Windows::Forms::CheckBox());
			this->S4 = (gcnew System::Windows::Forms::CheckBox());
			this->S3 = (gcnew System::Windows::Forms::CheckBox());
			this->S2 = (gcnew System::Windows::Forms::CheckBox());
			this->S1 = (gcnew System::Windows::Forms::CheckBox());
			this->K16 = (gcnew System::Windows::Forms::CheckBox());
			this->K15 = (gcnew System::Windows::Forms::CheckBox());
			this->K14 = (gcnew System::Windows::Forms::CheckBox());
			this->K13 = (gcnew System::Windows::Forms::CheckBox());
			this->K12 = (gcnew System::Windows::Forms::CheckBox());
			this->K11 = (gcnew System::Windows::Forms::CheckBox());
			this->K10 = (gcnew System::Windows::Forms::CheckBox());
			this->K9 = (gcnew System::Windows::Forms::CheckBox());
			this->K8 = (gcnew System::Windows::Forms::CheckBox());
			this->K7 = (gcnew System::Windows::Forms::CheckBox());
			this->K6 = (gcnew System::Windows::Forms::CheckBox());
			this->K5 = (gcnew System::Windows::Forms::CheckBox());
			this->K4 = (gcnew System::Windows::Forms::CheckBox());
			this->K3 = (gcnew System::Windows::Forms::CheckBox());
			this->K2 = (gcnew System::Windows::Forms::CheckBox());
			this->K1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->C16 = (gcnew System::Windows::Forms::CheckBox());
			this->C15 = (gcnew System::Windows::Forms::CheckBox());
			this->C14 = (gcnew System::Windows::Forms::CheckBox());
			this->C13 = (gcnew System::Windows::Forms::CheckBox());
			this->C12 = (gcnew System::Windows::Forms::CheckBox());
			this->C11 = (gcnew System::Windows::Forms::CheckBox());
			this->C10 = (gcnew System::Windows::Forms::CheckBox());
			this->C9 = (gcnew System::Windows::Forms::CheckBox());
			this->C8 = (gcnew System::Windows::Forms::CheckBox());
			this->C7 = (gcnew System::Windows::Forms::CheckBox());
			this->C6 = (gcnew System::Windows::Forms::CheckBox());
			this->C5 = (gcnew System::Windows::Forms::CheckBox());
			this->C4 = (gcnew System::Windows::Forms::CheckBox());
			this->C3 = (gcnew System::Windows::Forms::CheckBox());
			this->C2 = (gcnew System::Windows::Forms::CheckBox());
			this->C1 = (gcnew System::Windows::Forms::CheckBox());
			this->Clap = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Kick
			// 
			this->Kick->BackColor = System::Drawing::SystemColors::Desktop;
			this->Kick->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Kick->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Kick->Location = System::Drawing::Point(26, 337);
			this->Kick->Name = L"Kick";
			this->Kick->Size = System::Drawing::Size(66, 60);
			this->Kick->TabIndex = 0;
			this->Kick->Text = L"&Kick";
			this->Kick->UseVisualStyleBackColor = false;
			this->Kick->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->Kick->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::k);
			// 
			// HiHat
			// 
			this->HiHat->BackColor = System::Drawing::SystemColors::Desktop;
			this->HiHat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->HiHat->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->HiHat->Location = System::Drawing::Point(26, 144);
			this->HiHat->Name = L"HiHat";
			this->HiHat->Size = System::Drawing::Size(69, 60);
			this->HiHat->TabIndex = 1;
			this->HiHat->Text = L"&Hi-Hat";
			this->HiHat->UseVisualStyleBackColor = false;
			this->HiHat->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			this->HiHat->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::h);
			// 
			// Snare
			// 
			this->Snare->BackColor = System::Drawing::SystemColors::Desktop;
			this->Snare->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Snare->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Snare->Location = System::Drawing::Point(26, 209);
			this->Snare->Name = L"Snare";
			this->Snare->Size = System::Drawing::Size(66, 60);
			this->Snare->TabIndex = 2;
			this->Snare->Text = L"&Snare";
			this->Snare->UseVisualStyleBackColor = false;
			this->Snare->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->Snare->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::s);
			// 
			// timer1
			// 
			this->timer1->Interval = 300;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(386, 41);
			this->trackBar1->Maximum = 250;
			this->trackBar1->Minimum = 60;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(118, 56);
			this->trackBar1->TabIndex = 3;
			this->trackBar1->Tag = L"tempo";
			this->trackBar1->Value = 60;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(361, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(28, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"60";
			// 
			// H1
			// 
			this->H1->Location = System::Drawing::Point(101, 164);
			this->H1->Name = L"H1";
			this->H1->Size = System::Drawing::Size(18, 24);
			this->H1->TabIndex = 5;
			this->H1->Text = L"H1";
			this->H1->UseVisualStyleBackColor = true;
			// 
			// H2
			// 
			this->H2->Location = System::Drawing::Point(125, 164);
			this->H2->Name = L"H2";
			this->H2->Size = System::Drawing::Size(18, 24);
			this->H2->TabIndex = 6;
			this->H2->Text = L"H2";
			this->H2->UseVisualStyleBackColor = true;
			// 
			// H3
			// 
			this->H3->Location = System::Drawing::Point(149, 164);
			this->H3->Name = L"H3";
			this->H3->Size = System::Drawing::Size(18, 24);
			this->H3->TabIndex = 7;
			this->H3->Text = L"H3";
			this->H3->UseVisualStyleBackColor = true;
			// 
			// H4
			// 
			this->H4->Location = System::Drawing::Point(173, 164);
			this->H4->Name = L"H4";
			this->H4->Size = System::Drawing::Size(18, 24);
			this->H4->TabIndex = 8;
			this->H4->Text = L"H4";
			this->H4->UseVisualStyleBackColor = true;
			// 
			// H5
			// 
			this->H5->Location = System::Drawing::Point(197, 164);
			this->H5->Name = L"H5";
			this->H5->Size = System::Drawing::Size(18, 24);
			this->H5->TabIndex = 9;
			this->H5->Text = L"H5";
			this->H5->UseVisualStyleBackColor = true;
			// 
			// H6
			// 
			this->H6->Location = System::Drawing::Point(221, 164);
			this->H6->Name = L"H6";
			this->H6->Size = System::Drawing::Size(18, 24);
			this->H6->TabIndex = 10;
			this->H6->Text = L"H6";
			this->H6->UseVisualStyleBackColor = true;
			// 
			// H7
			// 
			this->H7->Location = System::Drawing::Point(245, 164);
			this->H7->Name = L"H7";
			this->H7->Size = System::Drawing::Size(18, 24);
			this->H7->TabIndex = 11;
			this->H7->Text = L"H7";
			this->H7->UseVisualStyleBackColor = true;
			// 
			// H8
			// 
			this->H8->Location = System::Drawing::Point(269, 164);
			this->H8->Name = L"H8";
			this->H8->Size = System::Drawing::Size(18, 24);
			this->H8->TabIndex = 12;
			this->H8->Text = L"H8";
			this->H8->UseVisualStyleBackColor = true;
			// 
			// H9
			// 
			this->H9->Location = System::Drawing::Point(293, 164);
			this->H9->Name = L"H9";
			this->H9->Size = System::Drawing::Size(18, 24);
			this->H9->TabIndex = 13;
			this->H9->Text = L"H9";
			this->H9->UseVisualStyleBackColor = true;
			// 
			// H10
			// 
			this->H10->Location = System::Drawing::Point(317, 164);
			this->H10->Name = L"H10";
			this->H10->Size = System::Drawing::Size(18, 24);
			this->H10->TabIndex = 14;
			this->H10->Text = L"H10";
			this->H10->UseVisualStyleBackColor = true;
			// 
			// H11
			// 
			this->H11->Location = System::Drawing::Point(341, 164);
			this->H11->Name = L"H11";
			this->H11->Size = System::Drawing::Size(18, 24);
			this->H11->TabIndex = 15;
			this->H11->Text = L"H11";
			this->H11->UseVisualStyleBackColor = true;
			// 
			// H12
			// 
			this->H12->Location = System::Drawing::Point(365, 164);
			this->H12->Name = L"H12";
			this->H12->Size = System::Drawing::Size(18, 24);
			this->H12->TabIndex = 16;
			this->H12->Text = L"H12";
			this->H12->UseVisualStyleBackColor = true;
			// 
			// H13
			// 
			this->H13->Location = System::Drawing::Point(389, 164);
			this->H13->Name = L"H13";
			this->H13->Size = System::Drawing::Size(18, 24);
			this->H13->TabIndex = 17;
			this->H13->Text = L"H13";
			this->H13->UseVisualStyleBackColor = true;
			// 
			// H14
			// 
			this->H14->Location = System::Drawing::Point(413, 164);
			this->H14->Name = L"H14";
			this->H14->Size = System::Drawing::Size(18, 24);
			this->H14->TabIndex = 18;
			this->H14->Text = L"H14";
			this->H14->UseVisualStyleBackColor = true;
			// 
			// H15
			// 
			this->H15->Location = System::Drawing::Point(437, 164);
			this->H15->Name = L"H15";
			this->H15->Size = System::Drawing::Size(18, 24);
			this->H15->TabIndex = 19;
			this->H15->Text = L"H15";
			this->H15->UseVisualStyleBackColor = true;
			// 
			// H16
			// 
			this->H16->Location = System::Drawing::Point(461, 164);
			this->H16->Name = L"H16";
			this->H16->Size = System::Drawing::Size(18, 24);
			this->H16->TabIndex = 20;
			this->H16->Text = L"H16";
			this->H16->UseVisualStyleBackColor = true;
			// 
			// PlayButton
			// 
			this->PlayButton->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->PlayButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->PlayButton->Location = System::Drawing::Point(24, 107);
			this->PlayButton->Name = L"PlayButton";
			this->PlayButton->Size = System::Drawing::Size(77, 31);
			this->PlayButton->TabIndex = 21;
			this->PlayButton->Text = L"Play";
			this->PlayButton->UseVisualStyleBackColor = false;
			this->PlayButton->Click += gcnew System::EventHandler(this, &MyForm::PlayButton_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(112, 107);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(77, 31);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Stop";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// S16
			// 
			this->S16->Location = System::Drawing::Point(461, 227);
			this->S16->Name = L"S16";
			this->S16->Size = System::Drawing::Size(18, 24);
			this->S16->TabIndex = 38;
			this->S16->Text = L"S16";
			this->S16->UseVisualStyleBackColor = true;
			// 
			// S15
			// 
			this->S15->Location = System::Drawing::Point(437, 227);
			this->S15->Name = L"S15";
			this->S15->Size = System::Drawing::Size(18, 24);
			this->S15->TabIndex = 37;
			this->S15->Text = L"S15";
			this->S15->UseVisualStyleBackColor = true;
			// 
			// S14
			// 
			this->S14->Location = System::Drawing::Point(413, 227);
			this->S14->Name = L"S14";
			this->S14->Size = System::Drawing::Size(18, 24);
			this->S14->TabIndex = 36;
			this->S14->Text = L"S14";
			this->S14->UseVisualStyleBackColor = true;
			// 
			// S13
			// 
			this->S13->Location = System::Drawing::Point(389, 227);
			this->S13->Name = L"S13";
			this->S13->Size = System::Drawing::Size(18, 24);
			this->S13->TabIndex = 35;
			this->S13->Text = L"S13";
			this->S13->UseVisualStyleBackColor = true;
			// 
			// S12
			// 
			this->S12->Location = System::Drawing::Point(365, 227);
			this->S12->Name = L"S12";
			this->S12->Size = System::Drawing::Size(18, 24);
			this->S12->TabIndex = 34;
			this->S12->Text = L"S12";
			this->S12->UseVisualStyleBackColor = true;
			// 
			// S11
			// 
			this->S11->Location = System::Drawing::Point(341, 227);
			this->S11->Name = L"S11";
			this->S11->Size = System::Drawing::Size(18, 24);
			this->S11->TabIndex = 33;
			this->S11->Text = L"S11";
			this->S11->UseVisualStyleBackColor = true;
			// 
			// S10
			// 
			this->S10->Location = System::Drawing::Point(317, 227);
			this->S10->Name = L"S10";
			this->S10->Size = System::Drawing::Size(18, 24);
			this->S10->TabIndex = 32;
			this->S10->Text = L"S10";
			this->S10->UseVisualStyleBackColor = true;
			// 
			// S9
			// 
			this->S9->Location = System::Drawing::Point(293, 227);
			this->S9->Name = L"S9";
			this->S9->Size = System::Drawing::Size(18, 24);
			this->S9->TabIndex = 31;
			this->S9->Text = L"S9";
			this->S9->UseVisualStyleBackColor = true;
			// 
			// S8
			// 
			this->S8->Location = System::Drawing::Point(269, 227);
			this->S8->Name = L"S8";
			this->S8->Size = System::Drawing::Size(18, 24);
			this->S8->TabIndex = 30;
			this->S8->Text = L"S8";
			this->S8->UseVisualStyleBackColor = true;
			// 
			// S7
			// 
			this->S7->Location = System::Drawing::Point(245, 227);
			this->S7->Name = L"S7";
			this->S7->Size = System::Drawing::Size(18, 24);
			this->S7->TabIndex = 29;
			this->S7->Text = L"S7";
			this->S7->UseVisualStyleBackColor = true;
			// 
			// S6
			// 
			this->S6->Location = System::Drawing::Point(221, 227);
			this->S6->Name = L"S6";
			this->S6->Size = System::Drawing::Size(18, 24);
			this->S6->TabIndex = 28;
			this->S6->Text = L"S6";
			this->S6->UseVisualStyleBackColor = true;
			// 
			// S5
			// 
			this->S5->Location = System::Drawing::Point(197, 227);
			this->S5->Name = L"S5";
			this->S5->Size = System::Drawing::Size(18, 24);
			this->S5->TabIndex = 27;
			this->S5->Text = L"S5";
			this->S5->UseVisualStyleBackColor = true;
			// 
			// S4
			// 
			this->S4->Location = System::Drawing::Point(173, 227);
			this->S4->Name = L"S4";
			this->S4->Size = System::Drawing::Size(18, 24);
			this->S4->TabIndex = 26;
			this->S4->Text = L"S4";
			this->S4->UseVisualStyleBackColor = true;
			// 
			// S3
			// 
			this->S3->Location = System::Drawing::Point(149, 227);
			this->S3->Name = L"S3";
			this->S3->Size = System::Drawing::Size(18, 24);
			this->S3->TabIndex = 25;
			this->S3->Text = L"S3";
			this->S3->UseVisualStyleBackColor = true;
			// 
			// S2
			// 
			this->S2->Location = System::Drawing::Point(125, 227);
			this->S2->Name = L"S2";
			this->S2->Size = System::Drawing::Size(18, 24);
			this->S2->TabIndex = 24;
			this->S2->Text = L"S2";
			this->S2->UseVisualStyleBackColor = true;
			// 
			// S1
			// 
			this->S1->Location = System::Drawing::Point(101, 227);
			this->S1->Name = L"S1";
			this->S1->Size = System::Drawing::Size(18, 24);
			this->S1->TabIndex = 23;
			this->S1->Text = L"S1";
			this->S1->UseVisualStyleBackColor = true;
			// 
			// K16
			// 
			this->K16->Location = System::Drawing::Point(461, 354);
			this->K16->Name = L"K16";
			this->K16->Size = System::Drawing::Size(18, 24);
			this->K16->TabIndex = 54;
			this->K16->Text = L"K16";
			this->K16->UseVisualStyleBackColor = true;
			// 
			// K15
			// 
			this->K15->Location = System::Drawing::Point(437, 354);
			this->K15->Name = L"K15";
			this->K15->Size = System::Drawing::Size(18, 24);
			this->K15->TabIndex = 53;
			this->K15->Text = L"K15";
			this->K15->UseVisualStyleBackColor = true;
			// 
			// K14
			// 
			this->K14->Location = System::Drawing::Point(413, 354);
			this->K14->Name = L"K14";
			this->K14->Size = System::Drawing::Size(18, 24);
			this->K14->TabIndex = 52;
			this->K14->Text = L"K14";
			this->K14->UseVisualStyleBackColor = true;
			// 
			// K13
			// 
			this->K13->Location = System::Drawing::Point(389, 354);
			this->K13->Name = L"K13";
			this->K13->Size = System::Drawing::Size(18, 24);
			this->K13->TabIndex = 51;
			this->K13->Text = L"K13";
			this->K13->UseVisualStyleBackColor = true;
			// 
			// K12
			// 
			this->K12->Location = System::Drawing::Point(365, 354);
			this->K12->Name = L"K12";
			this->K12->Size = System::Drawing::Size(18, 24);
			this->K12->TabIndex = 50;
			this->K12->Text = L"K12";
			this->K12->UseVisualStyleBackColor = true;
			// 
			// K11
			// 
			this->K11->Location = System::Drawing::Point(341, 354);
			this->K11->Name = L"K11";
			this->K11->Size = System::Drawing::Size(18, 24);
			this->K11->TabIndex = 49;
			this->K11->Text = L"K11";
			this->K11->UseVisualStyleBackColor = true;
			// 
			// K10
			// 
			this->K10->Location = System::Drawing::Point(317, 354);
			this->K10->Name = L"K10";
			this->K10->Size = System::Drawing::Size(18, 24);
			this->K10->TabIndex = 48;
			this->K10->Text = L"K10";
			this->K10->UseVisualStyleBackColor = true;
			// 
			// K9
			// 
			this->K9->Location = System::Drawing::Point(293, 354);
			this->K9->Name = L"K9";
			this->K9->Size = System::Drawing::Size(18, 24);
			this->K9->TabIndex = 47;
			this->K9->Text = L"K9";
			this->K9->UseVisualStyleBackColor = true;
			// 
			// K8
			// 
			this->K8->Location = System::Drawing::Point(269, 354);
			this->K8->Name = L"K8";
			this->K8->Size = System::Drawing::Size(18, 24);
			this->K8->TabIndex = 46;
			this->K8->Text = L"K8";
			this->K8->UseVisualStyleBackColor = true;
			// 
			// K7
			// 
			this->K7->Location = System::Drawing::Point(245, 354);
			this->K7->Name = L"K7";
			this->K7->Size = System::Drawing::Size(18, 24);
			this->K7->TabIndex = 45;
			this->K7->Text = L"K7";
			this->K7->UseVisualStyleBackColor = true;
			// 
			// K6
			// 
			this->K6->Location = System::Drawing::Point(221, 354);
			this->K6->Name = L"K6";
			this->K6->Size = System::Drawing::Size(18, 24);
			this->K6->TabIndex = 44;
			this->K6->Text = L"K6";
			this->K6->UseVisualStyleBackColor = true;
			// 
			// K5
			// 
			this->K5->Location = System::Drawing::Point(197, 354);
			this->K5->Name = L"K5";
			this->K5->Size = System::Drawing::Size(18, 24);
			this->K5->TabIndex = 43;
			this->K5->Text = L"K5";
			this->K5->UseVisualStyleBackColor = true;
			// 
			// K4
			// 
			this->K4->Location = System::Drawing::Point(173, 354);
			this->K4->Name = L"K4";
			this->K4->Size = System::Drawing::Size(18, 24);
			this->K4->TabIndex = 42;
			this->K4->Text = L"K4";
			this->K4->UseVisualStyleBackColor = true;
			// 
			// K3
			// 
			this->K3->Location = System::Drawing::Point(149, 354);
			this->K3->Name = L"K3";
			this->K3->Size = System::Drawing::Size(18, 24);
			this->K3->TabIndex = 41;
			this->K3->Text = L"K3";
			this->K3->UseVisualStyleBackColor = true;
			// 
			// K2
			// 
			this->K2->Location = System::Drawing::Point(125, 354);
			this->K2->Name = L"K2";
			this->K2->Size = System::Drawing::Size(18, 24);
			this->K2->TabIndex = 40;
			this->K2->Text = L"K2";
			this->K2->UseVisualStyleBackColor = true;
			// 
			// K1
			// 
			this->K1->Location = System::Drawing::Point(101, 354);
			this->K1->Name = L"K1";
			this->K1->Size = System::Drawing::Size(18, 24);
			this->K1->TabIndex = 39;
			this->K1->Text = L"K1";
			this->K1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(421, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 17);
			this->label1->TabIndex = 55;
			this->label1->Text = L"Tempo";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Black;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(21, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(232, 92);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 56;
			this->pictureBox1->TabStop = false;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(101, 406);
			this->progressBar1->MarqueeAnimationSpeed = 5;
			this->progressBar1->Maximum = 16;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(378, 10);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 57;
			// 
			// C16
			// 
			this->C16->Location = System::Drawing::Point(461, 290);
			this->C16->Name = L"C16";
			this->C16->Size = System::Drawing::Size(18, 24);
			this->C16->TabIndex = 74;
			this->C16->Text = L"C16";
			this->C16->UseVisualStyleBackColor = true;
			// 
			// C15
			// 
			this->C15->Location = System::Drawing::Point(437, 290);
			this->C15->Name = L"C15";
			this->C15->Size = System::Drawing::Size(18, 24);
			this->C15->TabIndex = 73;
			this->C15->Text = L"C15";
			this->C15->UseVisualStyleBackColor = true;
			// 
			// C14
			// 
			this->C14->Location = System::Drawing::Point(413, 290);
			this->C14->Name = L"C14";
			this->C14->Size = System::Drawing::Size(18, 24);
			this->C14->TabIndex = 72;
			this->C14->Text = L"C14";
			this->C14->UseVisualStyleBackColor = true;
			// 
			// C13
			// 
			this->C13->Location = System::Drawing::Point(389, 290);
			this->C13->Name = L"C13";
			this->C13->Size = System::Drawing::Size(18, 24);
			this->C13->TabIndex = 71;
			this->C13->Text = L"C13";
			this->C13->UseVisualStyleBackColor = true;
			// 
			// C12
			// 
			this->C12->Location = System::Drawing::Point(365, 290);
			this->C12->Name = L"C12";
			this->C12->Size = System::Drawing::Size(18, 24);
			this->C12->TabIndex = 70;
			this->C12->Text = L"C12";
			this->C12->UseVisualStyleBackColor = true;
			// 
			// C11
			// 
			this->C11->Location = System::Drawing::Point(341, 290);
			this->C11->Name = L"C11";
			this->C11->Size = System::Drawing::Size(18, 24);
			this->C11->TabIndex = 69;
			this->C11->Text = L"C11";
			this->C11->UseVisualStyleBackColor = true;
			// 
			// C10
			// 
			this->C10->Location = System::Drawing::Point(317, 290);
			this->C10->Name = L"C10";
			this->C10->Size = System::Drawing::Size(18, 24);
			this->C10->TabIndex = 68;
			this->C10->Text = L"C10";
			this->C10->UseVisualStyleBackColor = true;
			// 
			// C9
			// 
			this->C9->Location = System::Drawing::Point(293, 290);
			this->C9->Name = L"C9";
			this->C9->Size = System::Drawing::Size(18, 24);
			this->C9->TabIndex = 67;
			this->C9->Text = L"C9";
			this->C9->UseVisualStyleBackColor = true;
			// 
			// C8
			// 
			this->C8->Location = System::Drawing::Point(269, 290);
			this->C8->Name = L"C8";
			this->C8->Size = System::Drawing::Size(18, 24);
			this->C8->TabIndex = 66;
			this->C8->Text = L"C8";
			this->C8->UseVisualStyleBackColor = true;
			// 
			// C7
			// 
			this->C7->Location = System::Drawing::Point(245, 290);
			this->C7->Name = L"C7";
			this->C7->Size = System::Drawing::Size(18, 24);
			this->C7->TabIndex = 65;
			this->C7->Text = L"C7";
			this->C7->UseVisualStyleBackColor = true;
			// 
			// C6
			// 
			this->C6->Location = System::Drawing::Point(221, 290);
			this->C6->Name = L"C6";
			this->C6->Size = System::Drawing::Size(18, 24);
			this->C6->TabIndex = 64;
			this->C6->Text = L"C6";
			this->C6->UseVisualStyleBackColor = true;
			// 
			// C5
			// 
			this->C5->Location = System::Drawing::Point(197, 290);
			this->C5->Name = L"C5";
			this->C5->Size = System::Drawing::Size(18, 24);
			this->C5->TabIndex = 63;
			this->C5->Text = L"C5";
			this->C5->UseVisualStyleBackColor = true;
			// 
			// C4
			// 
			this->C4->Location = System::Drawing::Point(173, 290);
			this->C4->Name = L"C4";
			this->C4->Size = System::Drawing::Size(18, 24);
			this->C4->TabIndex = 62;
			this->C4->Text = L"C4";
			this->C4->UseVisualStyleBackColor = true;
			// 
			// C3
			// 
			this->C3->Location = System::Drawing::Point(149, 290);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(18, 24);
			this->C3->TabIndex = 61;
			this->C3->Text = L"C3";
			this->C3->UseVisualStyleBackColor = true;
			// 
			// C2
			// 
			this->C2->Location = System::Drawing::Point(125, 290);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(18, 24);
			this->C2->TabIndex = 60;
			this->C2->Text = L"C2";
			this->C2->UseVisualStyleBackColor = true;
			// 
			// C1
			// 
			this->C1->Location = System::Drawing::Point(101, 290);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(18, 24);
			this->C1->TabIndex = 59;
			this->C1->Text = L"C1";
			this->C1->UseVisualStyleBackColor = true;
			// 
			// Clap
			// 
			this->Clap->BackColor = System::Drawing::SystemColors::Desktop;
			this->Clap->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Clap->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Clap->Location = System::Drawing::Point(26, 273);
			this->Clap->Name = L"Clap";
			this->Clap->Size = System::Drawing::Size(66, 60);
			this->Clap->TabIndex = 58;
			this->Clap->Text = L"&Clap";
			this->Clap->UseVisualStyleBackColor = false;
			this->Clap->Click += gcnew System::EventHandler(this, &MyForm::Clap_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InfoText;
			this->ClientSize = System::Drawing::Size(516, 456);
			this->Controls->Add(this->C16);
			this->Controls->Add(this->C15);
			this->Controls->Add(this->C14);
			this->Controls->Add(this->C13);
			this->Controls->Add(this->C12);
			this->Controls->Add(this->C11);
			this->Controls->Add(this->C10);
			this->Controls->Add(this->C9);
			this->Controls->Add(this->C8);
			this->Controls->Add(this->C7);
			this->Controls->Add(this->C6);
			this->Controls->Add(this->C5);
			this->Controls->Add(this->C4);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->Clap);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->K16);
			this->Controls->Add(this->K15);
			this->Controls->Add(this->K14);
			this->Controls->Add(this->K13);
			this->Controls->Add(this->K12);
			this->Controls->Add(this->K11);
			this->Controls->Add(this->K10);
			this->Controls->Add(this->K9);
			this->Controls->Add(this->K8);
			this->Controls->Add(this->K7);
			this->Controls->Add(this->K6);
			this->Controls->Add(this->K5);
			this->Controls->Add(this->K4);
			this->Controls->Add(this->K3);
			this->Controls->Add(this->K2);
			this->Controls->Add(this->K1);
			this->Controls->Add(this->S16);
			this->Controls->Add(this->S15);
			this->Controls->Add(this->S14);
			this->Controls->Add(this->S13);
			this->Controls->Add(this->S12);
			this->Controls->Add(this->S11);
			this->Controls->Add(this->S10);
			this->Controls->Add(this->S9);
			this->Controls->Add(this->S8);
			this->Controls->Add(this->S7);
			this->Controls->Add(this->S6);
			this->Controls->Add(this->S5);
			this->Controls->Add(this->S4);
			this->Controls->Add(this->S3);
			this->Controls->Add(this->S2);
			this->Controls->Add(this->S1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->PlayButton);
			this->Controls->Add(this->H16);
			this->Controls->Add(this->H15);
			this->Controls->Add(this->H14);
			this->Controls->Add(this->H13);
			this->Controls->Add(this->H12);
			this->Controls->Add(this->H11);
			this->Controls->Add(this->H10);
			this->Controls->Add(this->H9);
			this->Controls->Add(this->H8);
			this->Controls->Add(this->H7);
			this->Controls->Add(this->H6);
			this->Controls->Add(this->H5);
			this->Controls->Add(this->H4);
			this->Controls->Add(this->H3);
			this->Controls->Add(this->H2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->Snare);
			this->Controls->Add(this->HiHat);
			this->Controls->Add(this->Kick);
			this->Controls->Add(this->H1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm";
			this->Text = L"Bonk";
			this->TransparencyKey = System::Drawing::Color::Red;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		bool play = PlaySound(L"Kick.wav", NULL, SND_ASYNC);
	
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		bool play = PlaySound(L"Snare.wav", NULL, SND_ASYNC);
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

		bool play = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);
	}
	private: System::Void Clap_Click(System::Object^ sender, System::EventArgs^ e) {
	
		bool play = PlaySound(L"Clap.wav", NULL, SND_ASYNC);
	}
	private: System::Void k(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		
		bool play = PlaySound(L"Kick.wav", NULL, SND_ASYNC);
	}
	private: System::Void s(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	
		bool play = PlaySound(L"Snare.wav", NULL, SND_ASYNC);
	}
	
	private: System::Void h(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	
		bool play = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);

	}

	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {


		textBox1->Text = "" + trackBar1->Value;
		interval = int(60000 / (trackBar1->Value * 4));
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		if (step_no>0)
			progressBar1->Value = step_no;

		step_no += 1;
		

		if (step_no == 1)
		{
			if (H1->Checked == true)
			{
				bool play1 = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);
			}
			if (S1->Checked == true)
			{
				bool play2 = PlaySound(L"Snare.wav", NULL, SND_ASYNC);

			}
			if (K1->Checked == true)
			{
				bool play3 = PlaySound(L"Kick.wav", NULL, SND_ASYNC);

			}
			if (C1->Checked == true)
			{
				bool play3 = PlaySound(L"Clap.wav", NULL, SND_ASYNC);

			}
		}

		if (step_no == 2)
		{
			if (H2->Checked == true)
			{
				bool play1 = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);
			}
			if (S2->Checked == true)
			{
				bool play2 = PlaySound(L"Snare.wav", NULL, SND_ASYNC);

			}
			if (K2->Checked == true)
			{
				bool play3 = PlaySound(L"Kick.wav", NULL, SND_ASYNC);

			}
			if (C2->Checked == true)
			{
				bool play3 = PlaySound(L"Clap.wav", NULL, SND_ASYNC);

			}
		}

		if (step_no == 3)
		{
			if (H3->Checked == true)
			{
				bool play1 = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);
			}
			if (S3->Checked == true)
			{
				bool play2 = PlaySound(L"Snare.wav", NULL, SND_ASYNC);

			}
			if (K3->Checked == true)
			{
				bool play3 = PlaySound(L"Kick.wav", NULL, SND_ASYNC);

			}
			if (C3->Checked == true)
			{
				bool play3 = PlaySound(L"Clap.wav", NULL, SND_ASYNC);

			}
		}

		if (step_no == 4)
		{
			if (H4->Checked == true)
			{
				bool play1 = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);
			}
			if (S4->Checked == true)
			{
				bool play2 = PlaySound(L"Snare.wav", NULL, SND_ASYNC);

			}
			if (K4->Checked == true)
			{
				bool play3 = PlaySound(L"Kick.wav", NULL, SND_ASYNC);

			}
			if (C4->Checked == true)
			{
				bool play3 = PlaySound(L"Clap.wav", NULL, SND_ASYNC);

			}
		}

		if (step_no == 5)
		{
			if (H5->Checked == true)
			{
				bool play1 = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);
			}
			if (S5->Checked == true)
			{
				bool play2 = PlaySound(L"Snare.wav", NULL, SND_ASYNC);

			}
			if (K5->Checked == true)
			{
				bool play3 = PlaySound(L"Kick.wav", NULL, SND_ASYNC);

			}
			if (C5->Checked == true)
			{
				bool play3 = PlaySound(L"Clap.wav", NULL, SND_ASYNC);

			}
		}

		if (step_no == 6)
		{
			if (H6->Checked == true)
			{
				bool play1 = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);
			}
			if (S6->Checked == true)
			{
				bool play2 = PlaySound(L"Snare.wav", NULL, SND_ASYNC);

			}
			if (K6->Checked == true)
			{
				bool play3 = PlaySound(L"Kick.wav", NULL, SND_ASYNC);

			}
			if (C6->Checked == true)
			{
				bool play3 = PlaySound(L"Clap.wav", NULL, SND_ASYNC);

			}
		}

		if (step_no == 7)
		{
			if (H7->Checked == true)
			{
				bool play1 = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);
			}
			if (S7->Checked == true)
			{
				bool play2 = PlaySound(L"Snare.wav", NULL, SND_ASYNC);

			}
			if (K7->Checked == true)
			{
				bool play3 = PlaySound(L"Kick.wav", NULL, SND_ASYNC);

			}
			if (C7->Checked == true)
			{
				bool play3 = PlaySound(L"Clap.wav", NULL, SND_ASYNC);

			}
		}

		if (step_no == 8)
		{
			if (H8->Checked == true)
			{
				bool play1 = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);
			}
			if (S8->Checked == true)
			{
				bool play2 = PlaySound(L"Snare.wav", NULL, SND_ASYNC);

			}
			if (K8->Checked == true)
			{
				bool play3 = PlaySound(L"Kick.wav", NULL, SND_ASYNC);

			}
			if (C8->Checked == true)
			{
				bool play3 = PlaySound(L"Clap.wav", NULL, SND_ASYNC);

			}
		}

		if (step_no == 9)
		{
			if (H9->Checked == true)
			{
				bool play1 = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);
			}
			if (S9->Checked == true)
			{
				bool play2 = PlaySound(L"Snare.wav", NULL, SND_ASYNC);

			}
			if (K9->Checked == true)
			{
				bool play3 = PlaySound(L"Kick.wav", NULL, SND_ASYNC);

			}
			if (C9->Checked == true)
			{
				bool play3 = PlaySound(L"Clap.wav", NULL, SND_ASYNC);

			}
		}

		if (step_no == 10)
		{
			if (H10->Checked == true)
			{
				bool play1 = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);
			}
			if (S10->Checked == true)
			{
				bool play2 = PlaySound(L"Snare.wav", NULL, SND_ASYNC);

			}
			if (K10->Checked == true)
			{
				bool play3 = PlaySound(L"Kick.wav", NULL, SND_ASYNC);

			}
			if (C10->Checked == true)
			{
				bool play3 = PlaySound(L"Clap.wav", NULL, SND_ASYNC);

			}

		}

		if (step_no == 11)
		{
			if (H11->Checked == true)
			{
				bool play1 = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);
			}
			if (S11->Checked == true)
			{
				bool play2 = PlaySound(L"Snare.wav", NULL, SND_ASYNC);

			}
			if (K11->Checked == true)
			{
				bool play3 = PlaySound(L"Kick.wav", NULL, SND_ASYNC);

			}
			if (C11->Checked == true)
			{
				bool play3 = PlaySound(L"Clap.wav", NULL, SND_ASYNC);

			}
		}

		if (step_no == 12)
		{
			if (H12->Checked == true)
			{
				bool play1 = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);
			}
			if (S12->Checked == true)
			{
				bool play2 = PlaySound(L"Snare.wav", NULL, SND_ASYNC);

			}
			if (K12->Checked == true)
			{
				bool play3 = PlaySound(L"Kick.wav", NULL, SND_ASYNC);

			}
			if (C12->Checked == true)
			{
				bool play3 = PlaySound(L"Clap.wav", NULL, SND_ASYNC);

			}
		}


		if (step_no == 13)
		{
			if (H13->Checked == true)
			{
				bool play1 = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);
			}
			if (S13->Checked == true)
			{
				bool play2 = PlaySound(L"Snare.wav", NULL, SND_ASYNC);

			}
			if (K13->Checked == true)
			{
				bool play3 = PlaySound(L"Kick.wav", NULL, SND_ASYNC);

			}
			if (C13->Checked == true)
			{
				bool play3 = PlaySound(L"Clap.wav", NULL, SND_ASYNC);

			}
		}


		if (step_no == 14)
		{
			if (H14->Checked == true)
			{
				bool play1 = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);
			}
			if (S14->Checked == true)
			{
				bool play2 = PlaySound(L"Snare.wav", NULL, SND_ASYNC);

			}
			if (K14->Checked == true)
			{
				bool play3 = PlaySound(L"Kick.wav", NULL, SND_ASYNC);

			}
			if (C14->Checked == true)
			{
				bool play3 = PlaySound(L"Clap.wav", NULL, SND_ASYNC);

			}
		}


		if (step_no == 15)
		{
			if (H15->Checked == true)
			{
				bool play1 = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);
			}
			if (S15->Checked == true)
			{
				bool play2 = PlaySound(L"Snare.wav", NULL, SND_ASYNC);

			}
			if (K15->Checked == true)
			{
				bool play3 = PlaySound(L"Kick.wav", NULL, SND_ASYNC);

			}
			if (C15->Checked == true)
			{
				bool play3 = PlaySound(L"Clap.wav", NULL, SND_ASYNC);

			}
		}


		if (step_no == 16)
		{
			if (H16->Checked == true)
			{
				bool play1 = PlaySound(L"HiHat.wav", NULL, SND_ASYNC);
			}
			if (S16->Checked == true)
			{
				bool play2 = PlaySound(L"Snare.wav", NULL, SND_ASYNC);

			}
			if (K16->Checked == true)
			{
				bool play3 = PlaySound(L"Kick.wav", NULL, SND_ASYNC);

			}
			if (C16->Checked == true)
			{
				bool play3 = PlaySound(L"Clap.wav", NULL, SND_ASYNC);

			}

			step_no = 0;
		}

	}

	private: System::Void PlayButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		start = true;
		timer1->Enabled = true;
		timer1->Interval = interval;
	}
	
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		start = false;
		timer1->Enabled = false;

	}

};
}
