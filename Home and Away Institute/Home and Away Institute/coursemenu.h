#pragma once
#include "addcourse.h"
#include "viewcourse.h"
#include "updatecourse.h"
#include "deletecourse.h"
#include "sortlisting.h"

namespace HomeandAwayInstitute {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for coursemenu
	/// </summary>
	public ref class coursemenu : public System::Windows::Forms::Form
	{
	public:
		coursemenu(void)
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
		~coursemenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(coursemenu::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(374, 122);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Course Menu";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(446, 201);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Add Course";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &coursemenu::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(446, 315);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Update Course";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &coursemenu::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(446, 261);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 34);
			this->button3->TabIndex = 3;
			this->button3->Text = L"View Course";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &coursemenu::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->ForeColor = System::Drawing::Color::Maroon;
			this->button4->Location = System::Drawing::Point(446, 378);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 34);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Sort Listing";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &coursemenu::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->ForeColor = System::Drawing::Color::Maroon;
			this->button5->Location = System::Drawing::Point(446, 436);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(84, 34);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Delete Course";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &coursemenu::button5_Click);
			// 
			// coursemenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1011, 547);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"coursemenu";
			this->Text = L"Home and Away Institute";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 addcourse^ add = gcnew addcourse;
				 add->ShowDialog();

			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				viewcourse^ view = gcnew viewcourse;
				view->ShowDialog();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				updatecourse^ update = gcnew updatecourse;
				update->ShowDialog();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				deletecourse^ delete1 = gcnew deletecourse;
				delete1->ShowDialog();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				sortlisting^ sort = gcnew sortlisting;
				sort->ShowDialog();
		 }
};
}
