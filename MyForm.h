#include "Executor.h"

namespace CppWinForm1 {

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
		Executor* exec;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
		   array<Button^>^ buttons;

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ buttonStart;
	private: System::Windows::Forms::Button^ buttonStop;
	protected:


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::DataGridView^ cpuCond;

	private: System::Windows::Forms::Label^ label100;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridView^ queueCond;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;





	private: System::ComponentModel::IContainer^ components;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->buttonStop = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->cpuCond = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->queueCond = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cpuCond))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->queueCond))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(251, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 100);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// buttonStart
			// 
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonStart->Location = System::Drawing::Point(39, 266);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(162, 47);
			this->buttonStart->TabIndex = 1;
			this->buttonStart->Text = L"Старт";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// buttonStop
			// 
			this->buttonStop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonStop->Location = System::Drawing::Point(39, 330);
			this->buttonStop->Name = L"buttonStop";
			this->buttonStop->Size = System::Drawing::Size(162, 47);
			this->buttonStop->TabIndex = 2;
			this->buttonStop->Text = L"Стоп";
			this->buttonStop->UseVisualStyleBackColor = true;
			this->buttonStop->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(251, 172);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 100);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(251, 278);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 100);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(357, 66);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 100);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(357, 172);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 100);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(357, 278);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 100);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(463, 66);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 100);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(463, 172);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 100);
			this->button10->TabIndex = 9;
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(463, 278);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(100, 100);
			this->button11->TabIndex = 10;
			this->button11->UseVisualStyleBackColor = true;
			// 
			// cpuCond
			// 
			this->cpuCond->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->cpuCond->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->cpuCond->ColumnHeadersVisible = false;
			this->cpuCond->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->cpuCond->GridColor = System::Drawing::SystemColors::Control;
			this->cpuCond->Location = System::Drawing::Point(595, 69);
			this->cpuCond->Name = L"cpuCond";
			this->cpuCond->RowHeadersVisible = false;
			this->cpuCond->Size = System::Drawing::Size(103, 308);
			this->cpuCond->TabIndex = 11;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"";
			this->Column1->Name = L"Column1";
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->Location = System::Drawing::Point(610, 53);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(71, 13);
			this->label100->TabIndex = 13;
			this->label100->Text = L"Процессоры";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(729, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Очередь";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Количество CPU на команду до";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(153, 82);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(62, 20);
			this->textBox1->TabIndex = 16;
			this->textBox1->Text = L"7";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Количество тактов на команду до";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(153, 149);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(62, 20);
			this->textBox2->TabIndex = 18;
			this->textBox2->Text = L"20";
			// 
			// timer1
			// 
			this->timer1->Interval = 300;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// queueCond
			// 
			this->queueCond->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->queueCond->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->queueCond->ColumnHeadersVisible = false;
			this->queueCond->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			this->queueCond->GridColor = System::Drawing::SystemColors::Control;
			this->queueCond->Location = System::Drawing::Point(704, 69);
			this->queueCond->Name = L"queueCond";
			this->queueCond->RowHeadersVisible = false;
			this->queueCond->Size = System::Drawing::Size(103, 308);
			this->queueCond->TabIndex = 19;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(36, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(173, 13);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Вероятность добавления задачи";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(153, 213);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(62, 20);
			this->textBox3->TabIndex = 21;
			this->textBox3->Text = L"70";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(840, 449);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->queueCond);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label100);
			this->Controls->Add(this->cpuCond);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->buttonStop);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cpuCond))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->queueCond))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//старт

		int maxCpuCount = Convert::ToInt32(textBox1->Text);
		int maxTactCount = Convert::ToInt32(textBox2->Text);
		int addProbability = Convert::ToInt32(textBox3->Text);

		exec = new Executor(9, maxCpuCount, maxTactCount, addProbability);

		buttons = gcnew array<Button^>(9);
		buttons[0] = button1;
		buttons[1] = button6;
		buttons[2] = button9;
		buttons[3] = button4;
		buttons[4] = button7;
		buttons[5] = button10;
		buttons[6] = button5;
		buttons[7] = button8;
		buttons[8] = button11;
		//updateProc();
		//updateQ();

		timer1->Enabled = true;
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//стоп
		timer1->Enabled = false;
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		//тик
		for (int i = 0; i < 9; i++) {
			buttons[i]->Text = gcnew String(exec->getCpu(i).c_str());
			//Color redColor = Color::FromArgb(9, 9, 9, 9);//Color.FromArgb(120, 255, 0, 0);
			
			buttons[i]->BackColor = Color::FromArgb(round((exec->getTaskID(i))/(exec->getTaskID(i)+30)), 10, 10, 10);
		}

		try {
			exec->addTask();
			updateQ();
			updateProc();
			exec->tick();
			exec->execTask();
		}
		catch (std::string ex) {
			label1->Text = Convert::ToString(ex.c_str());
		}
	}

	private: void updateQ() {
		//обновление виджета с очередью

		std::string* arr = new std::string[100];
		exec->getQ(arr);

		queueCond->Rows->Clear();

		for (int i = 0; i < exec->getCountQTask(); i++) {
			String^ str = gcnew String(arr[i].c_str());
			DataGridViewRow^ r = gcnew DataGridViewRow();

			r->CreateCells(queueCond);
			r->SetValues(str);

			queueCond->Rows->Add(r);
		}
	}

	private: void updateProc() {
		//обновление виджета с задачами на процессоре
		std::string* arr = new std::string[100];
		exec->getProc(arr);

		cpuCond->Rows->Clear();

			//array <String^>^ Values = gcnew array <String^>(10);
			for (int i = 0; i < exec->getCountBusyProc(); i++) {
				String^ str = gcnew String(arr[i].c_str());
				//Values[i] = str;
		
				DataGridViewRow^ r = gcnew DataGridViewRow();
				
				r->CreateCells(cpuCond);
				r->SetValues(str);
				
				cpuCond->Rows->Add(r);
			}
	}
};
}
