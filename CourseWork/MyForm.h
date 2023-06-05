#pragma once
#include <math.h>
#define NOMINMAX
#include <iostream>
#include <cmath>
#include <Windows.h>
#include <conio.h>

using namespace std;

namespace CourseWorkWindow
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(71, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Коэффициенты\r\n уравнения:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Location = System::Drawing::Point(571, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(239, 29);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Корни уравнения:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(76, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 30);
			this->textBox1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(23, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"C =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(24, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 25);
			this->label4->TabIndex = 2;
			this->label4->Text = L"A =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(23, 140);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 25);
			this->label5->TabIndex = 2;
			this->label5->Text = L"B =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(361, 82);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 25);
			this->label6->TabIndex = 2;
			this->label6->Text = L"X1 =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(626, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 25);
			this->label7->TabIndex = 2;
			this->label7->Text = L"X2 =";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(76, 137);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(170, 30);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(76, 194);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(170, 30);
			this->textBox3->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(425, 79);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(170, 30);
			this->textBox4->TabIndex = 1;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(690, 79);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(170, 30);
			this->textBox5->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(329, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(236, 82);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(690, 332);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 53);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(29, 332);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(174, 53);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Сбросить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label8->Location = System::Drawing::Point(420, 193);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(358, 29);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Программа готова к работе";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(892, 427);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Калькулятор квадратных уравнений";
			this->ResumeLayout(false);
			this->PerformLayout();

		}



#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		double A, B, C, x1, x2;

		textBox4->Text = L"";
		textBox5->Text = L"";
		A = System::Convert::ToDouble(textBox1->Text);
		B = System::Convert::ToDouble(textBox2->Text);
		C = System::Convert::ToDouble(textBox3->Text);

		if (A == 0) {
			if (B == 0) {
				if (C == 0)
				{
					label8->Text = L"Уравнение 0 = 0,\nответом является\nлюбое значение Х";
				}
				else
				{
					label8->Text = L"Уравнение C = 0, корней нет";
				}
			}
			else {
				if (C == 0) {
					label8->Text = L"Уравнение B*X = 0\nкорень уравнения X = 0";
				}
				else
				{
					label8->Text = L"Уравнение B*X + C = 0";
					double ch = (-1) * (C / B);
					textBox4->Text = Convert::ToString(ch);
				}
			}
		}
		else {
			if (B == 0) {
				if (C == 0) {
					label8->Text = L"Уравнение A*X^2 = 0,\nответом является X = 0";
				}
				else {
					label8->Text = L"Уравнение A*X^2 + C = 0";
					double k = ((-1) * C) / A;
					if (k >= 0) {
						double x1 = sqrt(k);
						double x2 = sqrt(k) * (-1);
						textBox4->Text = Convert::ToString(x1);
						textBox5->Text = Convert::ToString(x2);
					}
					else {
						label8->Text = L"Корней нет";
					}
					if ((((-1) * C) / A) < 0) {
						label8->Text = L"Корней методом подбора нет";
					}
					else {
						double min = abs(0 - A * (-20) * (-20) - C);
						double x = -20;
						for (double i = -20; i < 20.01; i = i + 0.01) {
							double temp = abs(0 - A * (i) * (i)-C);
							if (temp < min) {
								min = temp;
								x = i;
							}
						}
						label8->Text = L"Приближённый результат";
						/*label8->Text = Convert::ToString(x);*/
					}
				}
			}
			else {
				if (C == 0) {
					label8->Text = L"Уравнение A*X^2 + B*X = 0"; //show
					double x = ((-1) * B) / A;
					textBox4->Text = L"0"; //answer
					textBox5->Text = Convert::ToString(x);
					double min = abs(0 - A * (-20) * (-20) - B * (-20)); //podbor
					double xx = -20;
					for (double i = -20; i < 20.01; i = i + 0.01) {
						if (i != 0) {
							double temp = abs(0 - A * i * i - B * (i));
							if (temp < min) {
								min = temp;
								xx = i;
							}
						}
					}
					label8->Text = L"Приближённый результат";
					textBox4->Text = Convert::ToString(xx);
				}
				else {
					label8->Text = L"Уравнение A*X^2 + B*X + C = 0"; //show
					double D = B * B - 4 * A * C; //answer
					if (D < 0) {
						label8->Text = L"Уравнение не имеет \nдействительных корней";
					}
					else {
						if (D == 0) {
							double x = ((-1) * B - sqrt(D)) / (2 * A);
							label8->Text = L"Корень уравнения: ", Convert::ToString(x);
							textBox4->Text = Convert::ToString(x);
						}
						else {
							double x1 = ((-1) * B - sqrt(D)) / (2 * A);
							double x2 = ((-1) * B + sqrt(D)) / (2 * A);
							textBox4->Text = Convert::ToString(x1);
							textBox5->Text = Convert::ToString(x2);
						}
					}
				}
				double D = B * B - 4 * A * C; //podbor
				if (D < 0) {
					label8->Text = L"Уравнение не имеет \nдействительных корней";
				}
				else {
					double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
					double x = -20;
					for (double i = -20; i < 20.01; i = i + 0.01) {
						double temp = abs(0 - A * (i) * (i)-B * i - C);
						if (temp < min) {
							min = temp;
							x = i;
						}
					}
					label8->Text = L"Приближённый результат";
				}
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = L"";
		textBox2->Text = L"";
		textBox3->Text = L"";
		textBox4->Text = L"";
		textBox5->Text = L"";
		label8->Text = L"Программа готова к работе";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}

