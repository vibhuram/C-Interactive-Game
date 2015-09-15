#pragma once

namespace BikerHeaven {

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
	private: System::Windows::Forms::Button^  Start;
	protected: 
	private: System::Windows::Forms::Button^  Buy;
	private: System::Windows::Forms::TextBox^  Input;
	private: System::Windows::Forms::ListBox^  Bikelist;
	private: System::Windows::Forms::ListBox^  Cash;
	private: System::Windows::Forms::ListBox^  Health;



	private: System::Windows::Forms::ListBox^  KM;
	private: System::Windows::Forms::ListBox^  Dist;
	private: System::Windows::Forms::ListBox^  Instructions;



	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  Next;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  Proceed;
	private: System::Windows::Forms::Timer^  timer2;
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->Start = (gcnew System::Windows::Forms::Button());
			this->Buy = (gcnew System::Windows::Forms::Button());
			this->Input = (gcnew System::Windows::Forms::TextBox());
			this->Bikelist = (gcnew System::Windows::Forms::ListBox());
			this->Cash = (gcnew System::Windows::Forms::ListBox());
			this->Health = (gcnew System::Windows::Forms::ListBox());
			this->KM = (gcnew System::Windows::Forms::ListBox());
			this->Dist = (gcnew System::Windows::Forms::ListBox());
			this->Instructions = (gcnew System::Windows::Forms::ListBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Next = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Proceed = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axWindowsMediaPlayer1))->BeginInit();
			this->SuspendLayout();
			// 
			// Start
			// 
			this->Start->Location = System::Drawing::Point(21, 23);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(151, 48);
			this->Start->TabIndex = 0;
			this->Start->Text = L"Start";
			this->Start->UseVisualStyleBackColor = true;
			this->Start->Visible = false;
			this->Start->Click += gcnew System::EventHandler(this, &Form1::Start_Click);
			// 
			// Buy
			// 
			this->Buy->Location = System::Drawing::Point(21, 94);
			this->Buy->Name = L"Buy";
			this->Buy->Size = System::Drawing::Size(151, 48);
			this->Buy->TabIndex = 1;
			this->Buy->Text = L"Buy";
			this->Buy->UseVisualStyleBackColor = true;
			this->Buy->Visible = false;
			this->Buy->Click += gcnew System::EventHandler(this, &Form1::Buy_Click);
			// 
			// Input
			// 
			this->Input->BackColor = System::Drawing::Color::DarkSalmon;
			this->Input->Location = System::Drawing::Point(229, 51);
			this->Input->Name = L"Input";
			this->Input->Size = System::Drawing::Size(159, 20);
			this->Input->TabIndex = 2;
			// 
			// Bikelist
			// 
			this->Bikelist->BackColor = System::Drawing::Color::DarkSalmon;
			this->Bikelist->FormattingEnabled = true;
			this->Bikelist->Location = System::Drawing::Point(421, 51);
			this->Bikelist->Name = L"Bikelist";
			this->Bikelist->Size = System::Drawing::Size(199, 121);
			this->Bikelist->TabIndex = 3;
			// 
			// Cash
			// 
			this->Cash->BackColor = System::Drawing::Color::DarkSalmon;
			this->Cash->FormattingEnabled = true;
			this->Cash->Location = System::Drawing::Point(640, 51);
			this->Cash->Name = L"Cash";
			this->Cash->Size = System::Drawing::Size(125, 43);
			this->Cash->TabIndex = 4;
			// 
			// Health
			// 
			this->Health->BackColor = System::Drawing::Color::DarkSalmon;
			this->Health->FormattingEnabled = true;
			this->Health->Location = System::Drawing::Point(640, 129);
			this->Health->Name = L"Health";
			this->Health->Size = System::Drawing::Size(125, 43);
			this->Health->TabIndex = 5;
			// 
			// KM
			// 
			this->KM->BackColor = System::Drawing::Color::DarkSalmon;
			this->KM->FormattingEnabled = true;
			this->KM->Location = System::Drawing::Point(421, 3);
			this->KM->Name = L"KM";
			this->KM->Size = System::Drawing::Size(125, 30);
			this->KM->TabIndex = 6;
			// 
			// Dist
			// 
			this->Dist->BackColor = System::Drawing::Color::DarkSalmon;
			this->Dist->FormattingEnabled = true;
			this->Dist->Location = System::Drawing::Point(640, 3);
			this->Dist->Name = L"Dist";
			this->Dist->Size = System::Drawing::Size(125, 30);
			this->Dist->TabIndex = 7;
			// 
			// Instructions
			// 
			this->Instructions->BackColor = System::Drawing::Color::DarkSalmon;
			this->Instructions->FormattingEnabled = true;
			this->Instructions->Location = System::Drawing::Point(21, 216);
			this->Instructions->Name = L"Instructions";
			this->Instructions->Size = System::Drawing::Size(744, 56);
			this->Instructions->TabIndex = 8;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(21, 310);
			this->progressBar1->Maximum = 1000;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(744, 12);
			this->progressBar1->TabIndex = 9;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Form1::progressBar1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(288, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Input";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(500, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Bike";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(463, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"KM";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(683, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Dist";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(683, 97);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Cash";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(683, 175);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Health";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(374, 275);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Instructions";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(385, 325);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Progress";
			// 
			// Next
			// 
			this->Next->Location = System::Drawing::Point(633, 280);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(132, 24);
			this->Next->TabIndex = 18;
			this->Next->Text = L"Start The Game";
			this->Next->UseVisualStyleBackColor = true;
			this->Next->Click += gcnew System::EventHandler(this, &Form1::Next_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Proceed
			// 
			this->Proceed->Location = System::Drawing::Point(233, 100);
			this->Proceed->Name = L"Proceed";
			this->Proceed->Size = System::Drawing::Size(144, 29);
			this->Proceed->TabIndex = 19;
			this->Proceed->Text = L"Proceed";
			this->Proceed->UseVisualStyleBackColor = true;
			this->Proceed->Visible = false;
			this->Proceed->Click += gcnew System::EventHandler(this, &Form1::Proceed_Click);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(229, 3);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(89, 32);
			this->axWindowsMediaPlayer1->TabIndex = 20;
			this->axWindowsMediaPlayer1->Visible = false;
			this->axWindowsMediaPlayer1->Enter += gcnew System::EventHandler(this, &Form1::axWindowsMediaPlayer1_Enter);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSalmon;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(795, 398);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Controls->Add(this->Proceed);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->Instructions);
			this->Controls->Add(this->Dist);
			this->Controls->Add(this->KM);
			this->Controls->Add(this->Health);
			this->Controls->Add(this->Cash);
			this->Controls->Add(this->Bikelist);
			this->Controls->Add(this->Input);
			this->Controls->Add(this->Buy);
			this->Controls->Add(this->Start);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axWindowsMediaPlayer1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int amt, k,Travel, Remain, Travel2, Step,ty;
		char wheel, Choice;
	private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Next_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Instructions->Items->Add("Aim of this gmae is to travel 1000KM in Bike with three of ur frnds. you have been given amount of Rs.10000 and option to choose b/w 3 types of bikes");
			 this->Instructions->Items->Add("Choose t for 2 thunderbirds with free service at 500 KM and 2 extra tubes for Rs.6000");
			 this->Instructions->Items->Add("Choose a for 2 Avengers with free service at 500KM 2 extra tubes, one extra spark plug and 250ml break oil for Rs.8000");
			 this->Instructions->Items->Add("Choose k for 2 KTM with 2 extra tubes and amazing biker gears for Rs.5000");		 
			 Step = 1;
			 this->Buy->Enabled = true;
			 this->Next->Enabled = false;
			 this->Next->Visible = false;
			 this->Buy->Visible = true;
		 }
private: System::Void Buy_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (Step == 1)
			 {
				 wheel = System::Convert::ToChar(this->Input->Text);
			 Remain = 1000;
			 this->Dist->Items->Add(System::Convert::ToString(Remain));
				 switch (wheel)
			 {
				 case 't':
					 amt = 10000 - 6000;
					 this->Bikelist->Items->Clear();
					 this->Cash->Items->Clear();
					 this->Health->Items->Clear();
					 this->Bikelist->Items->Add("2 thunder bird");
					 this->Bikelist->Items->Add("2 extra tubes");
					 this->Bikelist->Items->Add("Full Tank Fuel");
					 this->Health->Items->Add("Good");
					 this->Cash->Items->Add(System::Convert::ToString(amt));
					 //this->Buy->Enabled = false;
					 this->Start->Enabled = true;
					 break;
				 case 'a':
					 amt = 10000 - 8000;
					 this->Bikelist->Items->Clear();
					 this->Cash->Items->Clear();
					 this->Health->Items->Clear();
					 this->Bikelist->Items->Add("2 avenger");
					 this->Bikelist->Items->Add("2 extra tubes");
					 this->Bikelist->Items->Add("1 extra spark plug");
					 this->Bikelist->Items->Add("250ml break oil");
					 this->Health->Items->Add("Good");
					 this->Bikelist->Items->Add("Full Tank Fuel");
					 this->Cash->Items->Add(System::Convert::ToString(amt));
					 //this->Buy->Enabled = false;
					 this->Start->Enabled = true;
					 break;
				 case 'k':
					 amt = 10000 - 5000;
					 this->Bikelist->Items->Clear();
					 this->Cash->Items->Clear();
					 this->Health->Items->Clear();
					 this->Bikelist->Items->Add("2 KTM");
					 this->Bikelist->Items->Add("2 extra tubes");
					 this->Bikelist->Items->Add("Full Biker gears");
					 this->Bikelist->Items->Add("Full Tank Fuel");
					 this->Health->Items->Add("Good");
					 this->Cash->Items->Add(System::Convert::ToString(amt));
					 //this->Buy->Enabled = false;
					 this->Start->Enabled = true;
					 break;
			 default:
				 amt = 10000 - 6000;
					 this->Bikelist->Items->Clear();
					 this->Cash->Items->Clear();
					 this->Health->Items->Clear();
					 this->Bikelist->Items->Add("2 thunder bird");
					 this->Bikelist->Items->Add("2 extra tubes");
					 this->Bikelist->Items->Add("Full Tank Fuel");
					 this->Health->Items->Add("Good");
					 this->Cash->Items->Add(System::Convert::ToString(amt));
					 //this->Buy->Enabled = false;
					 this->Start->Enabled = true;
					 ty = 1;
					 break;
			 } 
		this->Instructions->Items->Clear();
		if (ty == 1){
			this->Instructions->Items->Add("wrong entry.... bikes are given to you randomly");
			this->Instructions->Items->Add("Press Start to Begin Journey");
		}
		else {
			this->Instructions->Items->Add("Press Start to Begin Journey");	
		this->Start->Visible = true;
		this->Buy->Visible = false; }
			 };
		if (Step == 2 && Choice == 'y'){
			this->Instructions->Items->Clear();
			this->Instructions->Items->Add("that would be Rs.10");
			amt = amt - 10;
			this->Cash->Items->Clear();
			this->Cash->Items->Add(System::Convert::ToString(amt));
			this->timer1->Start();
			this->Buy->Visible = false;
			//this->Proceed->Enabled = true;
		}
		else if (Step == 2 && Choice == 'n'){
			this->Instructions->Items->Add("Cool... now rain has stopped u may proceed!");
			this->timer1->Start();
			this->Buy->Visible = false;
			//this->Proceed->Enabled = true;
		}
		 }
private: System::Void Start_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->timer1->Start();	
			 this->Instructions->Items->Clear();
			 this->Instructions->Items->Add("Journey has begun....follow road safety rules...enjoy the ride");
			 this->Start->Visible= false;
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			Travel++;
			this->KM->Items->Clear();
			if (Travel % 10 == 0){
				this->progressBar1->Increment(1);}
			this->KM->Items->Add(System::Convert::ToString(Travel/10));
			if (Travel == 400)
			{
				this->Instructions->Items->Clear();
				this->Instructions->Items->Add("it looks cloudy and it might rain... be carefull");
				this->Instructions->Items->Add("it is suggested u take shelter when raining");
			}
			if (Travel == 500)
			{
				this->Instructions->Items->Clear();
				this->Instructions->Items->Add("it started to rain heavily... u better take shelter");
				this->Instructions->Items->Add("Would u like to stop? y/n");
				this->timer1->Stop();
				this->Proceed->Visible = true;
			}
			if (Travel == 1000)
			{
				this->Instructions->Items->Clear();
				this->timer1->Stop();
				this->Instructions->Items->Add("Congrats u have reached 100 KM.... first check point");
				this->Instructions->Items->Add("U will check in a hotel and take rest...it costs u Rs.1000... travelling is never cheap!");
				this->Instructions->Items->Add("Please Press Proceed");
				this->Proceed->Visible = true;
			}
			if (Travel == 1250)
			{
				this->timer1->Stop();
				this->Instructions->Items->Add("Looks like all are tiered and hungry");
				this->Instructions->Items->Add("would u like to stop for food? y/n");
				this->Proceed->Visible = true;
				this->timer2->Interval = 10;
			}
			if (Travel == 2000){
				//this->timer1->Stop();
				this->Instructions->Items->Clear();
				this->Instructions->Items->Add("u have reached a very good photography location.... enjoy the scene");
				this->Instructions->Items->Add("It seems all are tired.... its time to change drivers");
				this->Instructions->Items->Add("u have taken some nice photos which u may sell for money later");
				Step = 7;
				//this->Proceed->Enabled = true;

				//this->timer2->Interval = 1000;
			}
			if (Travel == 2250){
				this->timer1->Stop();
				this->Instructions->Items->Clear();
				this->Instructions->Items->Add("bikes are low on fuel... u have to fill up fuel at next check point");
				this->Instructions->Items->Add("time to eat");
				amt = amt - 100;
				this->Cash->Items->Clear();
				this->Cash->Items->Add(System::Convert::ToString(amt));
				Step = 8;
				this->Instructions->Items->Add("U may talk the restaurant owner. y/n?");
				this->Proceed->Visible = true;
			}
			if (Step == 9 && Travel == 2750){
				this->timer1->Stop();
				this->Instructions->Items->Add("uh oh! there is a road block");
				this->Instructions->Items->Add("U Should have talked to tat guy..u would have known about this");
				this->Instructions->Items->Add("now u have to travel 200KM more to reach destination and spend more on fuel");
				amt = amt - 200;
				this->Cash->Items->Clear();
				this->Cash->Items->Add(System::Convert::ToString(amt));
				Remain = Remain + 200;
				this->Dist->Items->Clear();
				this->Dist->Items->Add(System::Convert::ToString(Remain));
				this->progressBar1->Increment(-200);
			}
			if (Travel == 3000){
				this->timer1->Stop();
				this->Instructions->Items->Clear();
				this->Instructions->Items->Add("u have reached a check point");
				this->Instructions->Items->Add("there are concerns! one driver has diarrhea and bike is out of fuel");
				this->Instructions->Items->Add("have to take one day rest. book cheap hotel for 1000");
				amt = amt - 1000;
				this->Cash->Items->Add(System::Convert::ToString(amt));
				Step = 10;
				this->Proceed->Visible = true;
			}
			if (Step == 11 && Travel == 4000){
				this->timer1->Stop();
				this->Instructions->Items->Clear();
				this->Instructions->Items->Add("u can sell the photos u took earlier to make money. would u like to? y/n");
				Step = 12;
				this->Proceed->Visible = true;
			}
			if (Travel == 5000){
				this->timer1->Stop();
				this->Instructions->Items->Clear();
				this->Instructions->Items->Add("Congrats u have reached half way!");
				this->Instructions->Items->Add("u have to service ur bike");
				if (wheel == 't' || wheel == 'a'){
				this->Instructions->Items->Add("u have free service");
				} 
				else if (wheel == 'k'){this->timer1->Stop();
				this->Instructions->Items->Clear();
					this->Instructions->Items->Add("u have pay 1000 for service");
					amt = amt - 1000;
					this->Cash->Items->Add(System::Convert::ToString(amt));
				}
				if (amt <= 0){
				this->Instructions->Items->Clear();
					this->Instructions->Items->Add("u loose no money");
				this->Proceed->Visible = false;
				this->Start->Visible = false;
				this->Buy->Visible = false;
				this->timer1->Stop();
				}

				this->Instructions->Items->Add("time to change drivers");
				this->Instructions->Items->Add("do u wish to drive at night? so that u reach destination early? BUT IT IS DANGEROUS y/n");
				Step = 14;
				this->Proceed->Visible = true;
			}
			if (Travel == 7500){
			this->Instructions->Items->Add("the path is full clear and weather is clear too.... u may spped up to reach destination");
			this->timer2->Interval = 100;
			}
			if (Travel == 10000){
				this->Instructions->Items->Add("U have reached BIKERS PARADISE>>> CONGRATS");
				this->Proceed->Visible = false;
				this->Start->Visible = false;
				this->Buy->Visible = false;
				this->timer1->Stop();
			}
		 }
private: System::Void Proceed_Click(System::Object^  sender, System::EventArgs^  e) {
			 Choice = System::Convert::ToChar(this->Input->Text);
				if (Choice == 'n' && Travel == 500){
					this->timer1->Stop();
					this->timer2->Start();
					};
				if (Choice == 'y' && Travel == 500){
					this->Instructions->Items->Clear();
					this->Instructions->Items->Add("good choice!");
					this->Instructions->Items->Add("While u r waiting would u like some tea/coffee at the near by shop? type y/n and press buy");
					Step = 2;
					this->Buy->Visible = true;
					this->Proceed->Visible = false;
					//this->timer1->Start
					
				};
				
				if (Travel == 1000 && Step != 4){
				amt = amt - 1000;
				this->Cash->Items->Clear();
				this->Cash->Items->Add(System::Convert::ToString(amt));
				this->Instructions->Items->Clear();
				this->Instructions->Items->Add("u may earn some money by doing social service. would u like to? y/n");
				this->Instructions->Items->Add("u may keep pressing y and proceed to earn more money");
				Step = 4;
				Choice = 'a';
				};
				if (Step == 4 && Choice == 'y'){
					amt = amt+100;
				this->Cash->Items->Clear();
				this->Cash->Items->Add(System::Convert::ToString(amt));
				/*this->Proceed->Enabled = false;
				this->timer1->Start();*/
				}
				else if (Travel == 1000 && Choice == 'n'){
				this->Instructions->Items->Clear();
				this->Instructions->Items->Add("u may keep track of ur cash in above field");
				this->Proceed->Visible = false;
				this->timer1->Start();
				};
				if (Travel == 1250 && Choice == 'y'){
				this->Instructions->Items->Clear();
				this->Instructions->Items->Add("The food costs Rs.150");
				this->Instructions->Items->Add("Good that u stoped....now everyone is refreshed");
				amt = amt - 150;
				this->Cash->Items->Clear();
				this->Cash->Items->Add(System::Convert::ToString(amt));
				this->Proceed->Visible = false;
				this->timer1->Start();
				};
				if (Travel == 1250 && Choice == 'n'){
				this->Instructions->Items->Clear();
				this->Health->Items->Clear();
				this->Health->Items->Add("Poor");
				this->Instructions->Items->Add("Health is poor because of fetigue");
				this->Proceed->Visible = false;
				this->timer1->Start();
				Step = 5;
				this->timer2->Start();
				};
				/*if (Step == 6){
				this->timer1->Start();
				this->Proceed->Enabled = false;
				}*/
				/*if (Step == 7 && Choice == 'y'){
					this->timer1->Start();
					this->Proceed->Enabled = false;
				}*/
				if (Travel == 2250 && Step == 8 && Choice == 'y')
				{	
					this->timer1->Start();
					this->Instructions->Items->Add("the owner says there is a road block u may have to take detour");
					this->Instructions->Items->Add("U have to travel 100 km more due to detour, ur progress is reduced by 1% and u have to spend 100 extra on fuel");
					amt = amt - 100;
					this->Cash->Items->Clear();
					this->Cash->Items->Add(System::Convert::ToString(amt));
					Remain = Remain + 100;
					this->Dist->Items->Clear();
					this->Dist->Items->Add(System::Convert::ToString(Remain));
					this->progressBar1->Increment(-100);
					this->Proceed->Visible = false;
				
				};
				if (Travel == 2250 && Step == 8 && Choice == 'n')
				{
					this->timer1->Start();
					Step = 9;
					this->Proceed->Visible = false;
				};
				if (Step == 10 && Travel == 3000 && Choice == 'y')
				{
					this->Instructions->Items->Add("too bad.... some one has damaged ur bike in the night. u loose 500 on repairs");
					amt = amt - 500;
					this->Instructions->Items->Add("u have to fill petrol for 1000");
					amt = amt - 1000;
					if (amt <= 0)
					{
						this->Instructions->Items->Clear();
						this->Instructions->Items->Add("test");
						this->Instructions->Items->Add("u loose no money");
						this->Proceed->Visible = false;
						this->Start->Visible = false;
						this->Buy->Visible = false;
						this->timer1->Stop();
					}
					else {Step =11;
					this->timer1->Start();
					this->Proceed->Visible = false;
					}};
				if (Step == 12 && Travel == 4000 && Choice == 'y')
				{
					this->Instructions->Items->Add("u earned 3000");
					amt = amt + 3000;
					this->Cash->Items->Clear();
					this->Cash->Items->Add(System::Convert::ToString(amt));
					this->Proceed->Visible = false;
					this->timer1->Start();
				};
				if (Step == 14 && Choice == 'y')
				{
					this->Instructions->Items->Clear();
					this->Instructions->Items->Add("u were stabbed to death by theifs in the dark. u loose");
					this->Proceed->Visible = false;
					this->Start->Visible = false;
					this->Buy->Visible = false;
					this->timer1->Stop();
				};
				if (Step == 14 && Choice == 'n')
				{
					this->Instructions->Items->Clear();
					this->Instructions->Items->Add("u take rest and have fresh start next day");
					this->timer1->Start();
				}
				}
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 
			 if (Travel < 600){
				Travel++;
				 this->KM->Items->Clear();
			if (Travel % 10 == 0){
				this->progressBar1->Increment(1);}
			this->KM->Items->Add(System::Convert::ToString(Travel/10));
				 
				 if (Travel == 600){
					 this->timer2->Stop();
					 this->Proceed->Visible = false;
					this->Start->Visible = false;
					this->Buy->Visible = false;
					this->Instructions->Items->Clear();
					this->Instructions->Items->Add("you should have stopped...");
					this->Instructions->Items->Add("you guys had a fatal crash and died... you loose");
				 }
			 }
			 if (Step == 5){
			 Travel2++;
			 if (Travel2 == 25){
			 this->Instructions->Items->Add("Drivers fainted... spend 200 for doctor");
			 this->timer1->Stop();
			 amt = amt - 200;
			 this->Cash->Items->Clear();
			 this->Cash->Items->Add(System::Convert::ToString(amt));
			 this->Proceed->Visible = true;
			 Choice = 'a';
			 Step = 6;
			 }
			 }
			 /*Travel2++;
			 if (Travel2 == 10 && Step !=5)
			 {
				 this->Instructions->Items->Add("You Die!!!! :(");			 
			 }*/
		 }
private: System::Void axWindowsMediaPlayer1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

