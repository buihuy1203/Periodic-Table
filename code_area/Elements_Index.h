#pragma once
#include "Ac.h"
#include "Ag.h"
#include "Al.h"
#include "Am.h"
#include "Ar.h"
#include "As.h"
#include "At.h"
#include "Au.h"
#include "B.h"
#include "Ba.h"
#include "Be.h"
#include "Bh.h"
#include "Bi.h"
#include "Bk.h"
#include "Br.h"
#include "C.h"
#include "Ca.h"
#include "Cd.h"
#include "Ce.h"
#include "Cf.h"
#include "Cl.h"
#include "Cm.h"
#include "Cn.h"
#include "Co.h"
#include "Cr.h"
#include "CS.h"
#include "Cu.h"
#include "Db.h"
#include "Ds.h"
#include "Dy.h"
#include "Er.h"
#include "Es.h"
#include "Eu.h"
#include "F.h"
#include "Fe.h"
#include "Fl.h"
#include "Fm.h"
#include "Fr.h"
#include "Ga.h"
#include "Gd.h"
#include "Ge.h"
#include "He.h"
#include "H.h"
#include "Hf.h"
#include "Hg.h"
#include "Ho.h"
#include "Hs.h"
#include "I.h"
#include "In.h"
#include "Ir.h"
#include "Kali.h"
#include "Kr.h"
#include "La.h"
#include "Liti.h"
#include "Lr.h"
#include "Lu.h"
#include "Lv.h"
#include "Mc.h"
#include "Md.h"
#include "Mn.h"
#include "Mo.h"
#include "Mt.h"
#include "N.h"
#include "Natri.h"
#include "Mg.h"
#include "Nb.h"
#include "Nd.h"
#include "Ne.h"
#include "Nh.h"
#include "Ni.h"
#include "No.h"
#include "Np.h"
#include "O.h"
#include "Og.h"
#include "Os.h"
#include "P.h"
#include "Pa.h"
#include "Pb.h"
#include "Pd.h"
#include "Pm.h"
#include "Po.h"
#include "Pr.h"
#include "Pt.h"
#include "Pu.h"
#include "Ra.h"	
#include "Rb.h"
#include "Re.h"
#include "Rf.h"	
#include "Rg.h"
#include "Rh.h"
#include "Rn.h"
#include "Ru.h"
#include "S.h"
#include "Sb.h"
#include "Sc.h"
#include "Se.h"
#include "Sg.h"
#include "Si.h"
#include "Sm.h"
#include "Sn.h"
#include "Sr.h"
#include "Ta.h"
#include "Tb.h"
#include "Tc.h"
#include "Te.h"
#include "Th.h"
#include "Ti.h"
#include "Tl.h"
#include "Tm.h"
#include "Ts.h"
#include "U.h"
#include "V.h"
#include "W.h"
#include "Xe.h"
#include "Y.h"
#include "Yb.h"
#include "Zn.h"
#include "Zr.h"
#include <msclr/marshal_cppstd.h>


namespace Preodic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Elements_Index
	/// </summary>
	public ref class Elements_Index : public System::Windows::Forms::Form
	{
	public:
		Elements_Index(void)
		{
			InitializeComponent(); 
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Elements_Index()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ button48;
	private: System::Windows::Forms::Button^ button49;
	private: System::Windows::Forms::Button^ button84;
	private: System::Windows::Forms::Button^ button85;
	private: System::Windows::Forms::Button^ button86;
	private: System::Windows::Forms::Button^ button87;
	private: System::Windows::Forms::Button^ button88;
	private: System::Windows::Forms::Button^ button89;
	private: System::Windows::Forms::Button^ button90;
	private: System::Windows::Forms::Button^ button78;
	private: System::Windows::Forms::Button^ button79;
	private: System::Windows::Forms::Button^ button80;
	private: System::Windows::Forms::Button^ button81;
	private: System::Windows::Forms::Button^ button82;
	private: System::Windows::Forms::Button^ button83;
	private: System::Windows::Forms::Button^ button72;
	private: System::Windows::Forms::Button^ button73;
	private: System::Windows::Forms::Button^ button74;
	private: System::Windows::Forms::Button^ button75;
	private: System::Windows::Forms::Button^ button76;
	private: System::Windows::Forms::Button^ button77;
	private: System::Windows::Forms::Button^ button66;
	private: System::Windows::Forms::Button^ button67;
	private: System::Windows::Forms::Button^ button68;
	private: System::Windows::Forms::Button^ button69;
	private: System::Windows::Forms::Button^ button70;
	private: System::Windows::Forms::Button^ button71;
	private: System::Windows::Forms::Button^ button60;
	private: System::Windows::Forms::Button^ button61;
	private: System::Windows::Forms::Button^ button62;
	private: System::Windows::Forms::Button^ button63;
	private: System::Windows::Forms::Button^ button64;
	private: System::Windows::Forms::Button^ button65;
	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::Button^ button55;
	private: System::Windows::Forms::Button^ button56;
	private: System::Windows::Forms::Button^ button57;
	private: System::Windows::Forms::Button^ button58;
	private: System::Windows::Forms::Button^ button59;
	private: System::Windows::Forms::Button^ button50;
	private: System::Windows::Forms::Button^ button51;
	private: System::Windows::Forms::Button^ button52;
	private: System::Windows::Forms::Button^ button53;
private: System::Windows::Forms::Button^ button117;
private: System::Windows::Forms::Button^ button118;
private: System::Windows::Forms::Button^ button115;
private: System::Windows::Forms::Button^ button116;
private: System::Windows::Forms::Button^ button113;
private: System::Windows::Forms::Button^ button114;
private: System::Windows::Forms::Button^ button111;
private: System::Windows::Forms::Button^ button112;
private: System::Windows::Forms::Button^ button109;
private: System::Windows::Forms::Button^ button110;
private: System::Windows::Forms::Button^ button107;
private: System::Windows::Forms::Button^ button108;
private: System::Windows::Forms::Button^ button105;
private: System::Windows::Forms::Button^ button106;
private: System::Windows::Forms::Button^ button103;
private: System::Windows::Forms::Button^ button104;
private: System::Windows::Forms::Button^ button101;
private: System::Windows::Forms::Button^ button102;
private: System::Windows::Forms::Button^ button99;
private: System::Windows::Forms::Button^ button100;
private: System::Windows::Forms::Button^ button97;
private: System::Windows::Forms::Button^ button98;
private: System::Windows::Forms::Button^ button95;
private: System::Windows::Forms::Button^ button96;
private: System::Windows::Forms::Button^ button93;
private: System::Windows::Forms::Button^ button94;





private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Button^ button119;










private: System::Windows::Forms::Button^ button91;
private: System::Windows::Forms::Button^ button92;
private: System::Windows::Forms::ListBox^ listBox1;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::CheckBox^ checkBox10;
private: System::Windows::Forms::CheckBox^ checkBox9;
private: System::Windows::Forms::CheckBox^ checkBox8;
private: System::Windows::Forms::CheckBox^ checkBox7;
private: System::Windows::Forms::CheckBox^ checkBox6;
private: System::Windows::Forms::CheckBox^ checkBox5;
private: System::Windows::Forms::CheckBox^ checkBox4;
private: System::Windows::Forms::CheckBox^ checkBox3;
private: System::Windows::Forms::CheckBox^ checkBox2;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::CheckBox^ checkBox11;
private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;
private: System::Windows::Forms::Label^ label1;

private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label3;

private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Label^ label23;

private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
private: System::Windows::Forms::WebBrowser^ webBrowser1;
private: System::Windows::Forms::Label^ label24;















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Elements_Index::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button119 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button117 = (gcnew System::Windows::Forms::Button());
			this->button118 = (gcnew System::Windows::Forms::Button());
			this->button115 = (gcnew System::Windows::Forms::Button());
			this->button116 = (gcnew System::Windows::Forms::Button());
			this->button113 = (gcnew System::Windows::Forms::Button());
			this->button114 = (gcnew System::Windows::Forms::Button());
			this->button111 = (gcnew System::Windows::Forms::Button());
			this->button112 = (gcnew System::Windows::Forms::Button());
			this->button109 = (gcnew System::Windows::Forms::Button());
			this->button110 = (gcnew System::Windows::Forms::Button());
			this->button107 = (gcnew System::Windows::Forms::Button());
			this->button108 = (gcnew System::Windows::Forms::Button());
			this->button105 = (gcnew System::Windows::Forms::Button());
			this->button106 = (gcnew System::Windows::Forms::Button());
			this->button103 = (gcnew System::Windows::Forms::Button());
			this->button104 = (gcnew System::Windows::Forms::Button());
			this->button101 = (gcnew System::Windows::Forms::Button());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->ItemSize = System::Drawing::Size(54, 24);
			this->tabControl1->Location = System::Drawing::Point(10, 11);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1300, 860);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->webBrowser1);
			this->tabPage3->Location = System::Drawing::Point(4, 28);
			this->tabPage3->Margin = System::Windows::Forms::Padding(2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1292, 828);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"About";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser1->Location = System::Drawing::Point(0, 0);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(1292, 828);
			this->webBrowser1->TabIndex = 0;
			this->webBrowser1->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &Elements_Index::webBrowser1_DocumentCompleted);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::Window;
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->checkBox11);
			this->tabPage2->Controls->Add(this->checkBox10);
			this->tabPage2->Controls->Add(this->checkBox9);
			this->tabPage2->Controls->Add(this->checkBox8);
			this->tabPage2->Controls->Add(this->checkBox7);
			this->tabPage2->Controls->Add(this->checkBox6);
			this->tabPage2->Controls->Add(this->checkBox5);
			this->tabPage2->Controls->Add(this->checkBox4);
			this->tabPage2->Controls->Add(this->checkBox3);
			this->tabPage2->Controls->Add(this->checkBox2);
			this->tabPage2->Controls->Add(this->checkBox1);
			this->tabPage2->Controls->Add(this->button119);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Controls->Add(this->button117);
			this->tabPage2->Controls->Add(this->button118);
			this->tabPage2->Controls->Add(this->button115);
			this->tabPage2->Controls->Add(this->button116);
			this->tabPage2->Controls->Add(this->button113);
			this->tabPage2->Controls->Add(this->button114);
			this->tabPage2->Controls->Add(this->button111);
			this->tabPage2->Controls->Add(this->button112);
			this->tabPage2->Controls->Add(this->button109);
			this->tabPage2->Controls->Add(this->button110);
			this->tabPage2->Controls->Add(this->button107);
			this->tabPage2->Controls->Add(this->button108);
			this->tabPage2->Controls->Add(this->button105);
			this->tabPage2->Controls->Add(this->button106);
			this->tabPage2->Controls->Add(this->button103);
			this->tabPage2->Controls->Add(this->button104);
			this->tabPage2->Controls->Add(this->button101);
			this->tabPage2->Controls->Add(this->button102);
			this->tabPage2->Controls->Add(this->button99);
			this->tabPage2->Controls->Add(this->button100);
			this->tabPage2->Controls->Add(this->button97);
			this->tabPage2->Controls->Add(this->button98);
			this->tabPage2->Controls->Add(this->button95);
			this->tabPage2->Controls->Add(this->button96);
			this->tabPage2->Controls->Add(this->button93);
			this->tabPage2->Controls->Add(this->button94);
			this->tabPage2->Controls->Add(this->button91);
			this->tabPage2->Controls->Add(this->button92);
			this->tabPage2->Controls->Add(this->button84);
			this->tabPage2->Controls->Add(this->button85);
			this->tabPage2->Controls->Add(this->button86);
			this->tabPage2->Controls->Add(this->button87);
			this->tabPage2->Controls->Add(this->button88);
			this->tabPage2->Controls->Add(this->button89);
			this->tabPage2->Controls->Add(this->button90);
			this->tabPage2->Controls->Add(this->button78);
			this->tabPage2->Controls->Add(this->button79);
			this->tabPage2->Controls->Add(this->button80);
			this->tabPage2->Controls->Add(this->button81);
			this->tabPage2->Controls->Add(this->button82);
			this->tabPage2->Controls->Add(this->button83);
			this->tabPage2->Controls->Add(this->button72);
			this->tabPage2->Controls->Add(this->button73);
			this->tabPage2->Controls->Add(this->button74);
			this->tabPage2->Controls->Add(this->button75);
			this->tabPage2->Controls->Add(this->button76);
			this->tabPage2->Controls->Add(this->button77);
			this->tabPage2->Controls->Add(this->button66);
			this->tabPage2->Controls->Add(this->button67);
			this->tabPage2->Controls->Add(this->button68);
			this->tabPage2->Controls->Add(this->button69);
			this->tabPage2->Controls->Add(this->button70);
			this->tabPage2->Controls->Add(this->button71);
			this->tabPage2->Controls->Add(this->button60);
			this->tabPage2->Controls->Add(this->button61);
			this->tabPage2->Controls->Add(this->button62);
			this->tabPage2->Controls->Add(this->button63);
			this->tabPage2->Controls->Add(this->button64);
			this->tabPage2->Controls->Add(this->button65);
			this->tabPage2->Controls->Add(this->button54);
			this->tabPage2->Controls->Add(this->button55);
			this->tabPage2->Controls->Add(this->button56);
			this->tabPage2->Controls->Add(this->button57);
			this->tabPage2->Controls->Add(this->button58);
			this->tabPage2->Controls->Add(this->button59);
			this->tabPage2->Controls->Add(this->button50);
			this->tabPage2->Controls->Add(this->button51);
			this->tabPage2->Controls->Add(this->button52);
			this->tabPage2->Controls->Add(this->button53);
			this->tabPage2->Controls->Add(this->button46);
			this->tabPage2->Controls->Add(this->button47);
			this->tabPage2->Controls->Add(this->button48);
			this->tabPage2->Controls->Add(this->button49);
			this->tabPage2->Controls->Add(this->button42);
			this->tabPage2->Controls->Add(this->button43);
			this->tabPage2->Controls->Add(this->button44);
			this->tabPage2->Controls->Add(this->button45);
			this->tabPage2->Controls->Add(this->button38);
			this->tabPage2->Controls->Add(this->button39);
			this->tabPage2->Controls->Add(this->button40);
			this->tabPage2->Controls->Add(this->button41);
			this->tabPage2->Controls->Add(this->button34);
			this->tabPage2->Controls->Add(this->button35);
			this->tabPage2->Controls->Add(this->button36);
			this->tabPage2->Controls->Add(this->button37);
			this->tabPage2->Controls->Add(this->button30);
			this->tabPage2->Controls->Add(this->button31);
			this->tabPage2->Controls->Add(this->button32);
			this->tabPage2->Controls->Add(this->button33);
			this->tabPage2->Controls->Add(this->button26);
			this->tabPage2->Controls->Add(this->button27);
			this->tabPage2->Controls->Add(this->button28);
			this->tabPage2->Controls->Add(this->button29);
			this->tabPage2->Controls->Add(this->button22);
			this->tabPage2->Controls->Add(this->button23);
			this->tabPage2->Controls->Add(this->button24);
			this->tabPage2->Controls->Add(this->button25);
			this->tabPage2->Controls->Add(this->button18);
			this->tabPage2->Controls->Add(this->button19);
			this->tabPage2->Controls->Add(this->button20);
			this->tabPage2->Controls->Add(this->button21);
			this->tabPage2->Controls->Add(this->button14);
			this->tabPage2->Controls->Add(this->button15);
			this->tabPage2->Controls->Add(this->button16);
			this->tabPage2->Controls->Add(this->button17);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->button11);
			this->tabPage2->Controls->Add(this->button12);
			this->tabPage2->Controls->Add(this->button13);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 28);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(1292, 828);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Grid View";
			this->tabPage2->Click += gcnew System::EventHandler(this, &Elements_Index::tabPage2_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(30, 16);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(131, 21);
			this->label24->TabIndex = 135;
			this->label24->Text = L"Thanh tìm kiếm:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(342, 85);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(403, 179);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 134;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Elements_Index::pictureBox1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(623, 284);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 19);
			this->label9->TabIndex = 133;
			this->label9->Text = L"VIIIB";
			this->label9->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(488, 284);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 19);
			this->label8->TabIndex = 133;
			this->label8->Text = L"VIIB";
			this->label8->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(425, 284);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 19);
			this->label7->TabIndex = 133;
			this->label7->Text = L"VIB";
			this->label7->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(362, 284);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 19);
			this->label6->TabIndex = 133;
			this->label6->Text = L"VB";
			this->label6->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(829, 279);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(32, 19);
			this->label12->TabIndex = 133;
			this->label12->Text = L"IIB";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label12->Click += gcnew System::EventHandler(this, &Elements_Index::label12_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(762, 281);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 19);
			this->label10->TabIndex = 133;
			this->label10->Text = L"IB";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(294, 284);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 19);
			this->label5->TabIndex = 133;
			this->label5->Text = L"IVB";
			this->label5->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(194, 284);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 19);
			this->label4->TabIndex = 133;
			this->label4->Text = L"IIIB";
			this->label4->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(1219, 84);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(49, 19);
			this->label23->TabIndex = 133;
			this->label23->Text = L"VIIIA";
			this->label23->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->label23->Click += gcnew System::EventHandler(this, &Elements_Index::label3_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(1156, 144);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(43, 19);
			this->label17->TabIndex = 133;
			this->label17->Text = L"VIIA";
			this->label17->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->label17->Click += gcnew System::EventHandler(this, &Elements_Index::label3_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(1094, 144);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(37, 19);
			this->label16->TabIndex = 133;
			this->label16->Text = L"VIA";
			this->label16->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->label16->Click += gcnew System::EventHandler(this, &Elements_Index::label3_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(1033, 144);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(29, 19);
			this->label15->TabIndex = 133;
			this->label15->Text = L"VA";
			this->label15->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->label15->Click += gcnew System::EventHandler(this, &Elements_Index::label3_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(961, 144);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(35, 19);
			this->label14->TabIndex = 133;
			this->label14->Text = L"IVA";
			this->label14->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->label14->Click += gcnew System::EventHandler(this, &Elements_Index::label3_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(894, 144);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(38, 19);
			this->label13->TabIndex = 133;
			this->label13->Text = L"IIIA";
			this->label13->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->label13->Click += gcnew System::EventHandler(this, &Elements_Index::label3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(127, 151);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 19);
			this->label3->TabIndex = 133;
			this->label3->Text = L"IIA";
			this->label3->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->label3->Click += gcnew System::EventHandler(this, &Elements_Index::label3_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(15, 528);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(17, 19);
			this->label22->TabIndex = 133;
			this->label22->Text = L"7";
			this->label22->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(15, 461);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(17, 19);
			this->label21->TabIndex = 133;
			this->label21->Text = L"6";
			this->label21->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(15, 394);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(17, 19);
			this->label20->TabIndex = 133;
			this->label20->Text = L"5";
			this->label20->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(15, 327);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(17, 19);
			this->label19->TabIndex = 133;
			this->label19->Text = L"4";
			this->label19->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(17, 259);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(17, 19);
			this->label18->TabIndex = 133;
			this->label18->Text = L"3";
			this->label18->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(15, 191);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(17, 19);
			this->label11->TabIndex = 133;
			this->label11->Text = L"2";
			this->label11->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 123);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 19);
			this->label2->TabIndex = 133;
			this->label2->Text = L"1";
			this->label2->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(62, 82);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 19);
			this->label1->TabIndex = 133;
			this->label1->Text = L"IA";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Checked = true;
			this->checkBox11->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBox11->Location = System::Drawing::Point(568, 790);
			this->checkBox11->Margin = System::Windows::Forms::Padding(2);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(165, 35);
			this->checkBox11->TabIndex = 132;
			this->checkBox11->Text = L"Chọn tất cả";
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &Elements_Index::checkBox11_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Checked = true;
			this->checkBox10->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox10->Location = System::Drawing::Point(1017, 759);
			this->checkBox10->Margin = System::Windows::Forms::Padding(2);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(163, 26);
			this->checkBox10->TabIndex = 131;
			this->checkBox10->Text = L"Không Xác Định";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &Elements_Index::checkBox10_CheckedChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Checked = true;
			this->checkBox9->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox9->Location = System::Drawing::Point(553, 759);
			this->checkBox9->Margin = System::Windows::Forms::Padding(2);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(77, 26);
			this->checkBox9->TabIndex = 130;
			this->checkBox9->Text = L"Actini";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &Elements_Index::checkBox9_CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Checked = true;
			this->checkBox8->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox8->Location = System::Drawing::Point(698, 759);
			this->checkBox8->Margin = System::Windows::Forms::Padding(2);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(86, 26);
			this->checkBox8->TabIndex = 129;
			this->checkBox8->Text = L"Lantan";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &Elements_Index::checkBox8_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Checked = true;
			this->checkBox7->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox7->Location = System::Drawing::Point(1017, 722);
			this->checkBox7->Margin = System::Windows::Forms::Padding(2);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(106, 26);
			this->checkBox7->TabIndex = 128;
			this->checkBox7->Text = L"Khí Hiếm";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &Elements_Index::checkBox7_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Checked = true;
			this->checkBox6->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox6->Location = System::Drawing::Point(889, 722);
			this->checkBox6->Margin = System::Windows::Forms::Padding(2);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(95, 26);
			this->checkBox6->TabIndex = 127;
			this->checkBox6->Text = L"Phi Kim";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Elements_Index::checkBox6_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Checked = true;
			this->checkBox5->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox5->Location = System::Drawing::Point(889, 759);
			this->checkBox5->Margin = System::Windows::Forms::Padding(2);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(79, 26);
			this->checkBox5->TabIndex = 126;
			this->checkBox5->Text = L"Á Kim";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Elements_Index::checkBox5_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(553, 722);
			this->checkBox4->Margin = System::Windows::Forms::Padding(2);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(249, 26);
			this->checkBox4->TabIndex = 125;
			this->checkBox4->Text = L"Kim Loại Hậu Chuyển Tiếp";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Elements_Index::checkBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(108, 759);
			this->checkBox3->Margin = System::Windows::Forms::Padding(2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(210, 26);
			this->checkBox3->TabIndex = 124;
			this->checkBox3->Text = L"Kim Loại Chuyển Tiếp";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Elements_Index::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(305, 722);
			this->checkBox2->Margin = System::Windows::Forms::Padding(2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(187, 26);
			this->checkBox2->TabIndex = 123;
			this->checkBox2->Text = L"Kim Loại Kiềm Thổ";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Elements_Index::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(108, 722);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(151, 26);
			this->checkBox1->TabIndex = 122;
			this->checkBox1->Text = L"Kim Loại Kiềm";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Elements_Index::checkBox1_CheckedChanged);
			// 
			// button119
			// 
			this->button119->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button119.BackgroundImage")));
			this->button119->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button119->Location = System::Drawing::Point(1223, 39);
			this->button119->Margin = System::Windows::Forms::Padding(2);
			this->button119->Name = L"button119";
			this->button119->Size = System::Drawing::Size(45, 24);
			this->button119->TabIndex = 121;
			this->button119->UseVisualStyleBackColor = true;
			this->button119->Click += gcnew System::EventHandler(this, &Elements_Index::button119_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->comboBox1->DropDownHeight = 100;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(118) {
				L"Ac Actinium", L"Ag Silver", L"Al Aluminum", L"Am Americium",
					L"Ar Argon", L"As Arsenic", L"At Astatine", L"Au Gold", L"B Boron", L"Ba Barium", L"Be Beryllium", L"Bh Bohrium", L"Bi Bismuth",
					L"Bk Berkelium", L"Br Bromine", L"C Carbon", L"Ca Calcium", L"Cd Cadmium", L"Ce Cerium", L"Cf Californium", L"Cl Chlorine", L"Cm Curium",
					L"Cn Copernicium", L"Co Cobalt", L"Cr Chromium", L"Cs Cesium", L"Cu Copper", L"Db Dubnium", L"Ds Darmstadtium", L"Dy Dysprosium",
					L"Er Erbium", L"Es Einsteinium", L"Eu Europium", L"F Fluorine", L"Fe Iron", L"Fl Flerovium", L"Fm Fermium", L"Fr Francium", L"Ga Gallium",
					L"Gd Gadolinium", L"Ge Germanium", L"H Hydrogen", L"He Helium", L"Hf Hafnium", L"Hg Mercury", L"Ho Holmium", L"Hs Hassium", L"I Iodine",
					L"In Indium", L"Ir Iridium", L"K Potassium", L"Kr Krypton", L"La Lanthanum", L"Li Lithium", L"Lr Lawrencium", L"Lu Lutetium",
					L"Lv Livermorium", L"Mc Moscovium", L"Md Mendelevium", L"Mg Magnesium", L"Mn Manganese", L"Mo Molybdenum", L"Mt Meitnerium",
					L"N Nitrogen", L"Na Sodium", L"Nb Niobium", L"Nd Neodymium", L"Ne Neon", L"Nh Nihonium", L"Ni Nickel", L"No Nobelium", L"Np Neptunium ",
					L"O Oxygen", L"Og Oganesson", L"Os Osmium", L"P Phosphorus", L"Pa Protactinium", L"Pb Lead", L"Pd Palladium", L"Pm Promethium",
					L"Po Polonium", L"Pr Praseodymium", L"Pt Platinum", L"Pu Plutonium", L"Ra Radium", L"Rb Rubidium", L"Re Rhenium", L"Rf Rutherfordium",
					L"Rg Roentgenium", L"Rh Rhodium", L"Rn Radon", L"Ru Ruthenium", L"S Sulfur", L"Sb Antimony", L"Sc Scandium", L"Se Selenium",
					L"Sg Seaborgium", L"Si Silicon", L"Sm Samarium", L"Sn Tin", L"Sr Strontium", L"Ta Tantalum", L"Tb Terbium", L"Tc Technetium",
					L"Te Tellurium", L"Th Thorium", L"Ti Titanium", L"Tl Thallium", L"Tm Thulium", L"Ts Tennessine", L"U Uranium", L"V Vanadium",
					L"W Tungsten", L"Xe Xenon", L"Y Yttrium", L"Yb Ytterbium", L"Zn Zinc", L"Zr Zirconium"
			});
			this->comboBox1->Location = System::Drawing::Point(34, 39);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(1178, 24);
			this->comboBox1->TabIndex = 120;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Elements_Index::comboBox1_SelectedIndexChanged);
			// 
			// button117
			// 
			this->button117->BackColor = System::Drawing::Color::Peru;
			this->button117->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button117.BackgroundImage")));
			this->button117->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button117->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button117->Location = System::Drawing::Point(1084, 650);
			this->button117->Margin = System::Windows::Forms::Padding(2);
			this->button117->Name = L"button117";
			this->button117->Size = System::Drawing::Size(64, 64);
			this->button117->TabIndex = 117;
			this->button117->UseVisualStyleBackColor = true;
			this->button117->Click += gcnew System::EventHandler(this, &Elements_Index::button117_Click);
			// 
			// button118
			// 
			this->button118->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button118->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button118.BackgroundImage")));
			this->button118->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button118->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button118->Location = System::Drawing::Point(1084, 590);
			this->button118->Margin = System::Windows::Forms::Padding(2);
			this->button118->Name = L"button118";
			this->button118->Size = System::Drawing::Size(64, 64);
			this->button118->TabIndex = 116;
			this->button118->UseVisualStyleBackColor = true;
			this->button118->Click += gcnew System::EventHandler(this, &Elements_Index::button118_Click);
			// 
			// button115
			// 
			this->button115->BackColor = System::Drawing::Color::Peru;
			this->button115->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button115.BackgroundImage")));
			this->button115->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button115->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button115->Location = System::Drawing::Point(1017, 650);
			this->button115->Margin = System::Windows::Forms::Padding(2);
			this->button115->Name = L"button115";
			this->button115->Size = System::Drawing::Size(64, 64);
			this->button115->TabIndex = 115;
			this->button115->UseVisualStyleBackColor = true;
			this->button115->Click += gcnew System::EventHandler(this, &Elements_Index::button115_Click);
			// 
			// button116
			// 
			this->button116->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button116->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button116.BackgroundImage")));
			this->button116->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button116->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button116->Location = System::Drawing::Point(1017, 590);
			this->button116->Margin = System::Windows::Forms::Padding(2);
			this->button116->Name = L"button116";
			this->button116->Size = System::Drawing::Size(64, 64);
			this->button116->TabIndex = 114;
			this->button116->UseVisualStyleBackColor = true;
			this->button116->Click += gcnew System::EventHandler(this, &Elements_Index::button116_Click);
			// 
			// button113
			// 
			this->button113->BackColor = System::Drawing::Color::Peru;
			this->button113->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button113.BackgroundImage")));
			this->button113->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button113->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button113->Location = System::Drawing::Point(949, 650);
			this->button113->Margin = System::Windows::Forms::Padding(2);
			this->button113->Name = L"button113";
			this->button113->Size = System::Drawing::Size(64, 64);
			this->button113->TabIndex = 113;
			this->button113->UseVisualStyleBackColor = true;
			this->button113->Click += gcnew System::EventHandler(this, &Elements_Index::button113_Click);
			// 
			// button114
			// 
			this->button114->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button114->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button114.BackgroundImage")));
			this->button114->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button114->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button114->Location = System::Drawing::Point(949, 590);
			this->button114->Margin = System::Windows::Forms::Padding(2);
			this->button114->Name = L"button114";
			this->button114->Size = System::Drawing::Size(64, 64);
			this->button114->TabIndex = 112;
			this->button114->UseVisualStyleBackColor = true;
			this->button114->Click += gcnew System::EventHandler(this, &Elements_Index::button114_Click);
			// 
			// button111
			// 
			this->button111->BackColor = System::Drawing::Color::Peru;
			this->button111->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button111.BackgroundImage")));
			this->button111->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button111->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button111->Location = System::Drawing::Point(882, 650);
			this->button111->Margin = System::Windows::Forms::Padding(2);
			this->button111->Name = L"button111";
			this->button111->Size = System::Drawing::Size(64, 64);
			this->button111->TabIndex = 111;
			this->button111->UseVisualStyleBackColor = true;
			this->button111->Click += gcnew System::EventHandler(this, &Elements_Index::button111_Click);
			// 
			// button112
			// 
			this->button112->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button112->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button112.BackgroundImage")));
			this->button112->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button112->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button112->Location = System::Drawing::Point(882, 590);
			this->button112->Margin = System::Windows::Forms::Padding(2);
			this->button112->Name = L"button112";
			this->button112->Size = System::Drawing::Size(64, 64);
			this->button112->TabIndex = 110;
			this->button112->UseVisualStyleBackColor = true;
			this->button112->Click += gcnew System::EventHandler(this, &Elements_Index::button112_Click);
			// 
			// button109
			// 
			this->button109->BackColor = System::Drawing::Color::Peru;
			this->button109->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button109.BackgroundImage")));
			this->button109->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button109->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button109->Location = System::Drawing::Point(815, 650);
			this->button109->Margin = System::Windows::Forms::Padding(2);
			this->button109->Name = L"button109";
			this->button109->Size = System::Drawing::Size(64, 64);
			this->button109->TabIndex = 109;
			this->button109->UseVisualStyleBackColor = true;
			this->button109->Click += gcnew System::EventHandler(this, &Elements_Index::button109_Click);
			// 
			// button110
			// 
			this->button110->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button110->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button110.BackgroundImage")));
			this->button110->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button110->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button110->Location = System::Drawing::Point(815, 590);
			this->button110->Margin = System::Windows::Forms::Padding(2);
			this->button110->Name = L"button110";
			this->button110->Size = System::Drawing::Size(64, 64);
			this->button110->TabIndex = 108;
			this->button110->UseVisualStyleBackColor = true;
			this->button110->Click += gcnew System::EventHandler(this, &Elements_Index::button110_Click);
			// 
			// button107
			// 
			this->button107->BackColor = System::Drawing::Color::Peru;
			this->button107->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button107.BackgroundImage")));
			this->button107->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button107->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button107->Location = System::Drawing::Point(748, 650);
			this->button107->Margin = System::Windows::Forms::Padding(2);
			this->button107->Name = L"button107";
			this->button107->Size = System::Drawing::Size(64, 64);
			this->button107->TabIndex = 107;
			this->button107->UseVisualStyleBackColor = true;
			this->button107->Click += gcnew System::EventHandler(this, &Elements_Index::button107_Click);
			// 
			// button108
			// 
			this->button108->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button108->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button108.BackgroundImage")));
			this->button108->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button108->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button108->Location = System::Drawing::Point(748, 590);
			this->button108->Margin = System::Windows::Forms::Padding(2);
			this->button108->Name = L"button108";
			this->button108->Size = System::Drawing::Size(64, 64);
			this->button108->TabIndex = 106;
			this->button108->UseVisualStyleBackColor = true;
			this->button108->Click += gcnew System::EventHandler(this, &Elements_Index::button108_Click);
			// 
			// button105
			// 
			this->button105->BackColor = System::Drawing::Color::Peru;
			this->button105->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button105.BackgroundImage")));
			this->button105->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button105->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button105->Location = System::Drawing::Point(681, 650);
			this->button105->Margin = System::Windows::Forms::Padding(2);
			this->button105->Name = L"button105";
			this->button105->Size = System::Drawing::Size(64, 64);
			this->button105->TabIndex = 105;
			this->button105->UseVisualStyleBackColor = true;
			this->button105->Click += gcnew System::EventHandler(this, &Elements_Index::button105_Click);
			// 
			// button106
			// 
			this->button106->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button106->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button106.BackgroundImage")));
			this->button106->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button106->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button106->Location = System::Drawing::Point(681, 590);
			this->button106->Margin = System::Windows::Forms::Padding(2);
			this->button106->Name = L"button106";
			this->button106->Size = System::Drawing::Size(64, 64);
			this->button106->TabIndex = 104;
			this->button106->UseVisualStyleBackColor = true;
			this->button106->Click += gcnew System::EventHandler(this, &Elements_Index::button106_Click);
			// 
			// button103
			// 
			this->button103->BackColor = System::Drawing::Color::Peru;
			this->button103->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button103.BackgroundImage")));
			this->button103->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button103->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button103->Location = System::Drawing::Point(613, 650);
			this->button103->Margin = System::Windows::Forms::Padding(2);
			this->button103->Name = L"button103";
			this->button103->Size = System::Drawing::Size(64, 64);
			this->button103->TabIndex = 103;
			this->button103->UseVisualStyleBackColor = true;
			this->button103->Click += gcnew System::EventHandler(this, &Elements_Index::button103_Click);
			// 
			// button104
			// 
			this->button104->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button104->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button104.BackgroundImage")));
			this->button104->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button104->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button104->Location = System::Drawing::Point(613, 590);
			this->button104->Margin = System::Windows::Forms::Padding(2);
			this->button104->Name = L"button104";
			this->button104->Size = System::Drawing::Size(64, 64);
			this->button104->TabIndex = 102;
			this->button104->UseVisualStyleBackColor = true;
			this->button104->Click += gcnew System::EventHandler(this, &Elements_Index::button104_Click);
			// 
			// button101
			// 
			this->button101->BackColor = System::Drawing::Color::Peru;
			this->button101->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button101.BackgroundImage")));
			this->button101->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button101->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button101->Location = System::Drawing::Point(546, 650);
			this->button101->Margin = System::Windows::Forms::Padding(2);
			this->button101->Name = L"button101";
			this->button101->Size = System::Drawing::Size(64, 64);
			this->button101->TabIndex = 101;
			this->button101->UseVisualStyleBackColor = true;
			this->button101->Click += gcnew System::EventHandler(this, &Elements_Index::button101_Click);
			// 
			// button102
			// 
			this->button102->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button102->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button102.BackgroundImage")));
			this->button102->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button102->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button102->Location = System::Drawing::Point(546, 590);
			this->button102->Margin = System::Windows::Forms::Padding(2);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(64, 64);
			this->button102->TabIndex = 100;
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &Elements_Index::button102_Click);
			// 
			// button99
			// 
			this->button99->BackColor = System::Drawing::Color::Peru;
			this->button99->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button99.BackgroundImage")));
			this->button99->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button99->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button99->Location = System::Drawing::Point(479, 650);
			this->button99->Margin = System::Windows::Forms::Padding(2);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(64, 64);
			this->button99->TabIndex = 99;
			this->button99->UseVisualStyleBackColor = true;
			this->button99->Click += gcnew System::EventHandler(this, &Elements_Index::button99_Click);
			// 
			// button100
			// 
			this->button100->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button100->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button100.BackgroundImage")));
			this->button100->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button100->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button100->Location = System::Drawing::Point(479, 590);
			this->button100->Margin = System::Windows::Forms::Padding(2);
			this->button100->Name = L"button100";
			this->button100->Size = System::Drawing::Size(64, 64);
			this->button100->TabIndex = 98;
			this->button100->UseVisualStyleBackColor = true;
			this->button100->Click += gcnew System::EventHandler(this, &Elements_Index::button100_Click);
			// 
			// button97
			// 
			this->button97->BackColor = System::Drawing::Color::Peru;
			this->button97->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button97.BackgroundImage")));
			this->button97->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button97->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button97->Location = System::Drawing::Point(412, 650);
			this->button97->Margin = System::Windows::Forms::Padding(2);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(64, 64);
			this->button97->TabIndex = 97;
			this->button97->UseVisualStyleBackColor = true;
			this->button97->Click += gcnew System::EventHandler(this, &Elements_Index::button97_Click);
			// 
			// button98
			// 
			this->button98->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button98->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button98.BackgroundImage")));
			this->button98->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button98->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button98->Location = System::Drawing::Point(412, 590);
			this->button98->Margin = System::Windows::Forms::Padding(2);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(64, 64);
			this->button98->TabIndex = 96;
			this->button98->UseVisualStyleBackColor = true;
			this->button98->Click += gcnew System::EventHandler(this, &Elements_Index::button98_Click);
			// 
			// button95
			// 
			this->button95->BackColor = System::Drawing::Color::Peru;
			this->button95->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button95.BackgroundImage")));
			this->button95->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button95->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button95->Location = System::Drawing::Point(345, 650);
			this->button95->Margin = System::Windows::Forms::Padding(2);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(64, 64);
			this->button95->TabIndex = 95;
			this->button95->UseVisualStyleBackColor = true;
			this->button95->Click += gcnew System::EventHandler(this, &Elements_Index::button95_Click);
			// 
			// button96
			// 
			this->button96->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button96->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button96.BackgroundImage")));
			this->button96->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button96->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button96->Location = System::Drawing::Point(345, 590);
			this->button96->Margin = System::Windows::Forms::Padding(2);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(64, 64);
			this->button96->TabIndex = 94;
			this->button96->UseVisualStyleBackColor = true;
			this->button96->Click += gcnew System::EventHandler(this, &Elements_Index::button96_Click);
			// 
			// button93
			// 
			this->button93->BackColor = System::Drawing::Color::Peru;
			this->button93->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button93.BackgroundImage")));
			this->button93->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button93->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button93->Location = System::Drawing::Point(277, 650);
			this->button93->Margin = System::Windows::Forms::Padding(2);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(64, 64);
			this->button93->TabIndex = 93;
			this->button93->UseVisualStyleBackColor = true;
			this->button93->Click += gcnew System::EventHandler(this, &Elements_Index::button93_Click);
			// 
			// button94
			// 
			this->button94->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button94->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button94.BackgroundImage")));
			this->button94->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button94->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button94->Location = System::Drawing::Point(277, 590);
			this->button94->Margin = System::Windows::Forms::Padding(2);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(64, 64);
			this->button94->TabIndex = 92;
			this->button94->UseVisualStyleBackColor = true;
			this->button94->Click += gcnew System::EventHandler(this, &Elements_Index::button94_Click);
			// 
			// button91
			// 
			this->button91->BackColor = System::Drawing::Color::Peru;
			this->button91->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button91.BackgroundImage")));
			this->button91->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button91->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button91->Location = System::Drawing::Point(1148, 650);
			this->button91->Margin = System::Windows::Forms::Padding(2);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(64, 64);
			this->button91->TabIndex = 91;
			this->button91->UseVisualStyleBackColor = true;
			this->button91->Click += gcnew System::EventHandler(this, &Elements_Index::button91_Click);
			// 
			// button92
			// 
			this->button92->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button92->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button92.BackgroundImage")));
			this->button92->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button92->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button92->Location = System::Drawing::Point(1148, 590);
			this->button92->Margin = System::Windows::Forms::Padding(2);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(64, 64);
			this->button92->TabIndex = 90;
			this->button92->UseVisualStyleBackColor = true;
			this->button92->Click += gcnew System::EventHandler(this, &Elements_Index::button92_Click);
			// 
			// button84
			// 
			this->button84->BackColor = System::Drawing::Color::LightGray;
			this->button84->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button84.BackgroundImage")));
			this->button84->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button84->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button84->Location = System::Drawing::Point(1216, 509);
			this->button84->Margin = System::Windows::Forms::Padding(2);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(64, 64);
			this->button84->TabIndex = 89;
			this->button84->UseVisualStyleBackColor = true;
			this->button84->Click += gcnew System::EventHandler(this, &Elements_Index::button84_Click);
			// 
			// button85
			// 
			this->button85->BackColor = System::Drawing::Color::LightPink;
			this->button85->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button85.BackgroundImage")));
			this->button85->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button85->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button85->Location = System::Drawing::Point(1215, 441);
			this->button85->Margin = System::Windows::Forms::Padding(2);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(64, 64);
			this->button85->TabIndex = 88;
			this->button85->UseVisualStyleBackColor = true;
			this->button85->Click += gcnew System::EventHandler(this, &Elements_Index::button85_Click);
			// 
			// button86
			// 
			this->button86->BackColor = System::Drawing::Color::LightPink;
			this->button86->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button86.BackgroundImage")));
			this->button86->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button86->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button86->Location = System::Drawing::Point(1215, 374);
			this->button86->Margin = System::Windows::Forms::Padding(2);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(64, 64);
			this->button86->TabIndex = 87;
			this->button86->UseVisualStyleBackColor = true;
			this->button86->Click += gcnew System::EventHandler(this, &Elements_Index::button86_Click);
			// 
			// button87
			// 
			this->button87->BackColor = System::Drawing::Color::LightPink;
			this->button87->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button87.BackgroundImage")));
			this->button87->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button87->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button87->Location = System::Drawing::Point(1215, 309);
			this->button87->Margin = System::Windows::Forms::Padding(2);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(64, 64);
			this->button87->TabIndex = 86;
			this->button87->UseVisualStyleBackColor = true;
			this->button87->Click += gcnew System::EventHandler(this, &Elements_Index::button87_Click);
			// 
			// button88
			// 
			this->button88->BackColor = System::Drawing::Color::LightPink;
			this->button88->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button88.BackgroundImage")));
			this->button88->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button88->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button88->Location = System::Drawing::Point(1215, 240);
			this->button88->Margin = System::Windows::Forms::Padding(2);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(64, 64);
			this->button88->TabIndex = 85;
			this->button88->UseVisualStyleBackColor = true;
			this->button88->Click += gcnew System::EventHandler(this, &Elements_Index::button88_Click);
			// 
			// button89
			// 
			this->button89->BackColor = System::Drawing::Color::LightPink;
			this->button89->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button89.BackgroundImage")));
			this->button89->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button89->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button89->ForeColor = System::Drawing::Color::Black;
			this->button89->Location = System::Drawing::Point(1215, 172);
			this->button89->Margin = System::Windows::Forms::Padding(2);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(64, 64);
			this->button89->TabIndex = 84;
			this->button89->UseVisualStyleBackColor = true;
			this->button89->Click += gcnew System::EventHandler(this, &Elements_Index::button89_Click);
			// 
			// button90
			// 
			this->button90->BackColor = System::Drawing::Color::LightPink;
			this->button90->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button90.BackgroundImage")));
			this->button90->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button90->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button90->ForeColor = System::Drawing::Color::Black;
			this->button90->Location = System::Drawing::Point(1215, 105);
			this->button90->Margin = System::Windows::Forms::Padding(2);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(64, 64);
			this->button90->TabIndex = 83;
			this->button90->UseVisualStyleBackColor = true;
			this->button90->Click += gcnew System::EventHandler(this, &Elements_Index::button90_Click);
			// 
			// button78
			// 
			this->button78->BackColor = System::Drawing::Color::LightGray;
			this->button78->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button78.BackgroundImage")));
			this->button78->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button78->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button78->Location = System::Drawing::Point(1148, 508);
			this->button78->Margin = System::Windows::Forms::Padding(2);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(64, 64);
			this->button78->TabIndex = 82;
			this->button78->UseVisualStyleBackColor = true;
			this->button78->Click += gcnew System::EventHandler(this, &Elements_Index::button78_Click);
			// 
			// button79
			// 
			this->button79->BackColor = System::Drawing::Color::MediumPurple;
			this->button79->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button79.BackgroundImage")));
			this->button79->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button79->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button79->Location = System::Drawing::Point(1148, 440);
			this->button79->Margin = System::Windows::Forms::Padding(2);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(64, 64);
			this->button79->TabIndex = 81;
			this->button79->UseVisualStyleBackColor = true;
			this->button79->Click += gcnew System::EventHandler(this, &Elements_Index::button79_Click);
			// 
			// button80
			// 
			this->button80->BackColor = System::Drawing::Color::YellowGreen;
			this->button80->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button80.BackgroundImage")));
			this->button80->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button80->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button80->Location = System::Drawing::Point(1148, 374);
			this->button80->Margin = System::Windows::Forms::Padding(2);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(64, 64);
			this->button80->TabIndex = 80;
			this->button80->UseVisualStyleBackColor = true;
			this->button80->Click += gcnew System::EventHandler(this, &Elements_Index::button80_Click);
			// 
			// button81
			// 
			this->button81->BackColor = System::Drawing::Color::YellowGreen;
			this->button81->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button81.BackgroundImage")));
			this->button81->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button81->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button81->Location = System::Drawing::Point(1148, 309);
			this->button81->Margin = System::Windows::Forms::Padding(2);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(64, 64);
			this->button81->TabIndex = 79;
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &Elements_Index::button81_Click);
			// 
			// button82
			// 
			this->button82->BackColor = System::Drawing::Color::YellowGreen;
			this->button82->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button82.BackgroundImage")));
			this->button82->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button82->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button82->Location = System::Drawing::Point(1148, 238);
			this->button82->Margin = System::Windows::Forms::Padding(2);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(64, 64);
			this->button82->TabIndex = 78;
			this->button82->UseVisualStyleBackColor = true;
			this->button82->Click += gcnew System::EventHandler(this, &Elements_Index::button82_Click);
			// 
			// button83
			// 
			this->button83->BackColor = System::Drawing::Color::YellowGreen;
			this->button83->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button83.BackgroundImage")));
			this->button83->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button83->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button83->Location = System::Drawing::Point(1148, 171);
			this->button83->Margin = System::Windows::Forms::Padding(2);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(64, 64);
			this->button83->TabIndex = 77;
			this->button83->UseVisualStyleBackColor = true;
			this->button83->Click += gcnew System::EventHandler(this, &Elements_Index::button83_Click);
			// 
			// button72
			// 
			this->button72->BackColor = System::Drawing::Color::LightGray;
			this->button72->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button72.BackgroundImage")));
			this->button72->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button72->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button72->Location = System::Drawing::Point(1081, 508);
			this->button72->Margin = System::Windows::Forms::Padding(2);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(64, 64);
			this->button72->TabIndex = 76;
			this->button72->UseVisualStyleBackColor = true;
			this->button72->Click += gcnew System::EventHandler(this, &Elements_Index::button72_Click);
			// 
			// button73
			// 
			this->button73->BackColor = System::Drawing::Color::MediumPurple;
			this->button73->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button73.BackgroundImage")));
			this->button73->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button73->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button73->Location = System::Drawing::Point(1081, 442);
			this->button73->Margin = System::Windows::Forms::Padding(2);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(64, 64);
			this->button73->TabIndex = 75;
			this->button73->UseVisualStyleBackColor = true;
			this->button73->Click += gcnew System::EventHandler(this, &Elements_Index::button73_Click);
			// 
			// button74
			// 
			this->button74->BackColor = System::Drawing::Color::Yellow;
			this->button74->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button74.BackgroundImage")));
			this->button74->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button74->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button74->Location = System::Drawing::Point(1081, 376);
			this->button74->Margin = System::Windows::Forms::Padding(2);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(64, 64);
			this->button74->TabIndex = 74;
			this->button74->UseVisualStyleBackColor = true;
			this->button74->Click += gcnew System::EventHandler(this, &Elements_Index::button74_Click);
			// 
			// button75
			// 
			this->button75->BackColor = System::Drawing::Color::YellowGreen;
			this->button75->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button75.BackgroundImage")));
			this->button75->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button75->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button75->Location = System::Drawing::Point(1081, 309);
			this->button75->Margin = System::Windows::Forms::Padding(2);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(64, 64);
			this->button75->TabIndex = 73;
			this->button75->UseVisualStyleBackColor = true;
			this->button75->Click += gcnew System::EventHandler(this, &Elements_Index::button75_Click);
			// 
			// button76
			// 
			this->button76->BackColor = System::Drawing::Color::YellowGreen;
			this->button76->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button76.BackgroundImage")));
			this->button76->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button76->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button76->Location = System::Drawing::Point(1081, 239);
			this->button76->Margin = System::Windows::Forms::Padding(2);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(64, 64);
			this->button76->TabIndex = 72;
			this->button76->UseVisualStyleBackColor = true;
			this->button76->Click += gcnew System::EventHandler(this, &Elements_Index::button76_Click);
			// 
			// button77
			// 
			this->button77->BackColor = System::Drawing::Color::YellowGreen;
			this->button77->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button77.BackgroundImage")));
			this->button77->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button77->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button77->Location = System::Drawing::Point(1081, 171);
			this->button77->Margin = System::Windows::Forms::Padding(2);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(64, 64);
			this->button77->TabIndex = 71;
			this->button77->UseVisualStyleBackColor = true;
			this->button77->Click += gcnew System::EventHandler(this, &Elements_Index::button77_Click);
			// 
			// button66
			// 
			this->button66->BackColor = System::Drawing::Color::LightGray;
			this->button66->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button66.BackgroundImage")));
			this->button66->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button66->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button66->Location = System::Drawing::Point(1017, 508);
			this->button66->Margin = System::Windows::Forms::Padding(2);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(64, 64);
			this->button66->TabIndex = 70;
			this->button66->UseVisualStyleBackColor = true;
			this->button66->Click += gcnew System::EventHandler(this, &Elements_Index::button66_Click);
			// 
			// button67
			// 
			this->button67->BackColor = System::Drawing::Color::MediumPurple;
			this->button67->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button67.BackgroundImage")));
			this->button67->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button67->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button67->Location = System::Drawing::Point(1014, 441);
			this->button67->Margin = System::Windows::Forms::Padding(2);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(64, 64);
			this->button67->TabIndex = 69;
			this->button67->UseVisualStyleBackColor = true;
			this->button67->Click += gcnew System::EventHandler(this, &Elements_Index::button67_Click);
			// 
			// button68
			// 
			this->button68->BackColor = System::Drawing::Color::Yellow;
			this->button68->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button68.BackgroundImage")));
			this->button68->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button68->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button68->Location = System::Drawing::Point(1017, 376);
			this->button68->Margin = System::Windows::Forms::Padding(2);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(64, 64);
			this->button68->TabIndex = 68;
			this->button68->UseVisualStyleBackColor = true;
			this->button68->Click += gcnew System::EventHandler(this, &Elements_Index::button68_Click);
			// 
			// button69
			// 
			this->button69->BackColor = System::Drawing::Color::Yellow;
			this->button69->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button69.BackgroundImage")));
			this->button69->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button69->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button69->Location = System::Drawing::Point(1017, 309);
			this->button69->Margin = System::Windows::Forms::Padding(2);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(64, 64);
			this->button69->TabIndex = 67;
			this->button69->UseVisualStyleBackColor = true;
			this->button69->Click += gcnew System::EventHandler(this, &Elements_Index::button69_Click);
			// 
			// button70
			// 
			this->button70->BackColor = System::Drawing::Color::YellowGreen;
			this->button70->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button70.BackgroundImage")));
			this->button70->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button70->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button70->Location = System::Drawing::Point(1017, 239);
			this->button70->Margin = System::Windows::Forms::Padding(2);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(64, 64);
			this->button70->TabIndex = 66;
			this->button70->UseVisualStyleBackColor = true;
			this->button70->Click += gcnew System::EventHandler(this, &Elements_Index::button70_Click);
			// 
			// button71
			// 
			this->button71->BackColor = System::Drawing::Color::YellowGreen;
			this->button71->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button71.BackgroundImage")));
			this->button71->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button71->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button71->Location = System::Drawing::Point(1017, 172);
			this->button71->Margin = System::Windows::Forms::Padding(2);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(64, 64);
			this->button71->TabIndex = 65;
			this->button71->UseVisualStyleBackColor = true;
			this->button71->Click += gcnew System::EventHandler(this, &Elements_Index::button71_Click);
			// 
			// button60
			// 
			this->button60->BackColor = System::Drawing::Color::LightGray;
			this->button60->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button60.BackgroundImage")));
			this->button60->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button60->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button60->Location = System::Drawing::Point(949, 509);
			this->button60->Margin = System::Windows::Forms::Padding(2);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(64, 64);
			this->button60->TabIndex = 64;
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &Elements_Index::button60_Click);
			// 
			// button61
			// 
			this->button61->BackColor = System::Drawing::Color::MediumPurple;
			this->button61->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button61.BackgroundImage")));
			this->button61->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button61->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button61->Location = System::Drawing::Point(949, 442);
			this->button61->Margin = System::Windows::Forms::Padding(2);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(64, 64);
			this->button61->TabIndex = 63;
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &Elements_Index::button61_Click);
			// 
			// button62
			// 
			this->button62->BackColor = System::Drawing::Color::MediumPurple;
			this->button62->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button62.BackgroundImage")));
			this->button62->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button62->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button62->Location = System::Drawing::Point(949, 376);
			this->button62->Margin = System::Windows::Forms::Padding(2);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(64, 64);
			this->button62->TabIndex = 62;
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Click += gcnew System::EventHandler(this, &Elements_Index::button62_Click);
			// 
			// button63
			// 
			this->button63->BackColor = System::Drawing::Color::Yellow;
			this->button63->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button63.BackgroundImage")));
			this->button63->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button63->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button63->Location = System::Drawing::Point(949, 309);
			this->button63->Margin = System::Windows::Forms::Padding(2);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(64, 64);
			this->button63->TabIndex = 61;
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Click += gcnew System::EventHandler(this, &Elements_Index::button63_Click);
			// 
			// button64
			// 
			this->button64->BackColor = System::Drawing::Color::Yellow;
			this->button64->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button64.BackgroundImage")));
			this->button64->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button64->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button64->Location = System::Drawing::Point(947, 238);
			this->button64->Margin = System::Windows::Forms::Padding(2);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(64, 64);
			this->button64->TabIndex = 60;
			this->button64->UseVisualStyleBackColor = true;
			this->button64->Click += gcnew System::EventHandler(this, &Elements_Index::button64_Click);
			// 
			// button65
			// 
			this->button65->BackColor = System::Drawing::Color::YellowGreen;
			this->button65->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button65.BackgroundImage")));
			this->button65->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button65->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button65->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button65->Location = System::Drawing::Point(947, 171);
			this->button65->Margin = System::Windows::Forms::Padding(2);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(64, 64);
			this->button65->TabIndex = 59;
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Click += gcnew System::EventHandler(this, &Elements_Index::button65_Click);
			// 
			// button54
			// 
			this->button54->BackColor = System::Drawing::Color::LightGray;
			this->button54->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button54.BackgroundImage")));
			this->button54->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button54->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button54->Location = System::Drawing::Point(882, 508);
			this->button54->Margin = System::Windows::Forms::Padding(2);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(64, 64);
			this->button54->TabIndex = 58;
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &Elements_Index::button54_Click);
			// 
			// button55
			// 
			this->button55->BackColor = System::Drawing::Color::MediumPurple;
			this->button55->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button55.BackgroundImage")));
			this->button55->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button55->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button55->Location = System::Drawing::Point(882, 442);
			this->button55->Margin = System::Windows::Forms::Padding(2);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(64, 64);
			this->button55->TabIndex = 57;
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &Elements_Index::button55_Click);
			// 
			// button56
			// 
			this->button56->BackColor = System::Drawing::Color::MediumPurple;
			this->button56->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button56.BackgroundImage")));
			this->button56->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button56->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button56->Location = System::Drawing::Point(882, 376);
			this->button56->Margin = System::Windows::Forms::Padding(2);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(64, 64);
			this->button56->TabIndex = 56;
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &Elements_Index::button56_Click);
			// 
			// button57
			// 
			this->button57->BackColor = System::Drawing::Color::MediumPurple;
			this->button57->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button57.BackgroundImage")));
			this->button57->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button57->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button57->Location = System::Drawing::Point(882, 309);
			this->button57->Margin = System::Windows::Forms::Padding(2);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(64, 64);
			this->button57->TabIndex = 55;
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &Elements_Index::button57_Click);
			// 
			// button58
			// 
			this->button58->BackColor = System::Drawing::Color::MediumPurple;
			this->button58->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button58.BackgroundImage")));
			this->button58->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button58->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button58->Location = System::Drawing::Point(882, 239);
			this->button58->Margin = System::Windows::Forms::Padding(2);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(64, 64);
			this->button58->TabIndex = 54;
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &Elements_Index::button58_Click);
			// 
			// button59
			// 
			this->button59->BackColor = System::Drawing::Color::Yellow;
			this->button59->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button59.BackgroundImage")));
			this->button59->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button59->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button59->Location = System::Drawing::Point(882, 171);
			this->button59->Margin = System::Windows::Forms::Padding(2);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(64, 64);
			this->button59->TabIndex = 53;
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &Elements_Index::button59_Click);
			// 
			// button50
			// 
			this->button50->BackColor = System::Drawing::Color::LightGray;
			this->button50->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button50.BackgroundImage")));
			this->button50->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button50->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button50->Location = System::Drawing::Point(815, 508);
			this->button50->Margin = System::Windows::Forms::Padding(2);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(64, 64);
			this->button50->TabIndex = 52;
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &Elements_Index::button50_Click);
			// 
			// button51
			// 
			this->button51->BackColor = System::Drawing::Color::LightBlue;
			this->button51->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button51.BackgroundImage")));
			this->button51->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button51->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button51->Location = System::Drawing::Point(815, 442);
			this->button51->Margin = System::Windows::Forms::Padding(2);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(64, 64);
			this->button51->TabIndex = 51;
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &Elements_Index::button51_Click);
			// 
			// button52
			// 
			this->button52->BackColor = System::Drawing::Color::LightBlue;
			this->button52->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button52.BackgroundImage")));
			this->button52->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button52->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button52->Location = System::Drawing::Point(815, 376);
			this->button52->Margin = System::Windows::Forms::Padding(2);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(64, 64);
			this->button52->TabIndex = 50;
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &Elements_Index::button52_Click);
			// 
			// button53
			// 
			this->button53->BackColor = System::Drawing::Color::LightBlue;
			this->button53->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button53.BackgroundImage")));
			this->button53->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button53->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button53->Location = System::Drawing::Point(815, 309);
			this->button53->Margin = System::Windows::Forms::Padding(2);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(64, 64);
			this->button53->TabIndex = 49;
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &Elements_Index::button53_Click);
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::LightGray;
			this->button46->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button46.BackgroundImage")));
			this->button46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button46->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button46->Location = System::Drawing::Point(748, 508);
			this->button46->Margin = System::Windows::Forms::Padding(2);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(64, 64);
			this->button46->TabIndex = 48;
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &Elements_Index::button46_Click);
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::LightBlue;
			this->button47->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button47.BackgroundImage")));
			this->button47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button47->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button47->Location = System::Drawing::Point(749, 441);
			this->button47->Margin = System::Windows::Forms::Padding(2);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(64, 64);
			this->button47->TabIndex = 47;
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &Elements_Index::button47_Click);
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::Color::LightBlue;
			this->button48->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button48.BackgroundImage")));
			this->button48->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button48->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button48->Location = System::Drawing::Point(749, 374);
			this->button48->Margin = System::Windows::Forms::Padding(2);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(64, 64);
			this->button48->TabIndex = 46;
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &Elements_Index::button48_Click);
			// 
			// button49
			// 
			this->button49->BackColor = System::Drawing::Color::LightBlue;
			this->button49->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button49.BackgroundImage")));
			this->button49->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button49->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button49->Location = System::Drawing::Point(748, 309);
			this->button49->Margin = System::Windows::Forms::Padding(2);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(64, 64);
			this->button49->TabIndex = 45;
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &Elements_Index::button49_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::LightGray;
			this->button42->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button42.BackgroundImage")));
			this->button42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button42->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button42->Location = System::Drawing::Point(681, 508);
			this->button42->Margin = System::Windows::Forms::Padding(2);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(64, 64);
			this->button42->TabIndex = 44;
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &Elements_Index::button42_Click);
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::LightBlue;
			this->button43->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button43.BackgroundImage")));
			this->button43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button43->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button43->Location = System::Drawing::Point(681, 444);
			this->button43->Margin = System::Windows::Forms::Padding(2);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(64, 64);
			this->button43->TabIndex = 43;
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &Elements_Index::button43_Click);
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::LightBlue;
			this->button44->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button44.BackgroundImage")));
			this->button44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button44->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button44->Location = System::Drawing::Point(681, 376);
			this->button44->Margin = System::Windows::Forms::Padding(2);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(64, 64);
			this->button44->TabIndex = 42;
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &Elements_Index::button44_Click);
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::LightBlue;
			this->button45->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button45.BackgroundImage")));
			this->button45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button45->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button45->Location = System::Drawing::Point(681, 308);
			this->button45->Margin = System::Windows::Forms::Padding(2);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(64, 64);
			this->button45->TabIndex = 41;
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &Elements_Index::button45_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::LightGray;
			this->button38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button38.BackgroundImage")));
			this->button38->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button38->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->Location = System::Drawing::Point(613, 508);
			this->button38->Margin = System::Windows::Forms::Padding(2);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(65, 64);
			this->button38->TabIndex = 40;
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &Elements_Index::button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::LightBlue;
			this->button39->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button39.BackgroundImage")));
			this->button39->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button39->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->Location = System::Drawing::Point(613, 441);
			this->button39->Margin = System::Windows::Forms::Padding(2);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(64, 64);
			this->button39->TabIndex = 39;
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &Elements_Index::button39_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::LightBlue;
			this->button40->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button40.BackgroundImage")));
			this->button40->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button40->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->Location = System::Drawing::Point(613, 376);
			this->button40->Margin = System::Windows::Forms::Padding(2);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(64, 64);
			this->button40->TabIndex = 38;
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &Elements_Index::button40_Click);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::LightBlue;
			this->button41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button41.BackgroundImage")));
			this->button41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button41->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->Location = System::Drawing::Point(613, 309);
			this->button41->Margin = System::Windows::Forms::Padding(2);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(64, 64);
			this->button41->TabIndex = 37;
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &Elements_Index::button41_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::LightBlue;
			this->button34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button34.BackgroundImage")));
			this->button34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button34->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(546, 508);
			this->button34->Margin = System::Windows::Forms::Padding(2);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(64, 64);
			this->button34->TabIndex = 36;
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &Elements_Index::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::LightBlue;
			this->button35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button35.BackgroundImage")));
			this->button35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button35->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(546, 441);
			this->button35->Margin = System::Windows::Forms::Padding(2);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(64, 64);
			this->button35->TabIndex = 35;
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &Elements_Index::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::LightBlue;
			this->button36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button36.BackgroundImage")));
			this->button36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button36->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(546, 376);
			this->button36->Margin = System::Windows::Forms::Padding(2);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(64, 64);
			this->button36->TabIndex = 34;
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &Elements_Index::button36_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::LightBlue;
			this->button37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button37.BackgroundImage")));
			this->button37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button37->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(546, 309);
			this->button37->Margin = System::Windows::Forms::Padding(2);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(64, 64);
			this->button37->TabIndex = 33;
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &Elements_Index::button37_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::LightBlue;
			this->button30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button30.BackgroundImage")));
			this->button30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button30->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(479, 509);
			this->button30->Margin = System::Windows::Forms::Padding(2);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(64, 64);
			this->button30->TabIndex = 32;
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Elements_Index::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::LightBlue;
			this->button31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button31.BackgroundImage")));
			this->button31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button31->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(479, 441);
			this->button31->Margin = System::Windows::Forms::Padding(2);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(64, 64);
			this->button31->TabIndex = 31;
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &Elements_Index::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::LightBlue;
			this->button32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button32.BackgroundImage")));
			this->button32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button32->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(479, 376);
			this->button32->Margin = System::Windows::Forms::Padding(2);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(64, 64);
			this->button32->TabIndex = 30;
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &Elements_Index::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::LightBlue;
			this->button33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button33.BackgroundImage")));
			this->button33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button33->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(479, 309);
			this->button33->Margin = System::Windows::Forms::Padding(2);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(64, 64);
			this->button33->TabIndex = 29;
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &Elements_Index::button33_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::LightBlue;
			this->button26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.BackgroundImage")));
			this->button26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button26->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(412, 509);
			this->button26->Margin = System::Windows::Forms::Padding(2);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(64, 64);
			this->button26->TabIndex = 28;
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Elements_Index::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::LightBlue;
			this->button27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.BackgroundImage")));
			this->button27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(412, 444);
			this->button27->Margin = System::Windows::Forms::Padding(2);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(64, 64);
			this->button27->TabIndex = 27;
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Elements_Index::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::LightBlue;
			this->button28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button28.BackgroundImage")));
			this->button28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button28->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(412, 376);
			this->button28->Margin = System::Windows::Forms::Padding(2);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(64, 64);
			this->button28->TabIndex = 26;
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Elements_Index::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::LightBlue;
			this->button29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button29.BackgroundImage")));
			this->button29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button29->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(412, 308);
			this->button29->Margin = System::Windows::Forms::Padding(2);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(64, 64);
			this->button29->TabIndex = 25;
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Elements_Index::button29_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::LightBlue;
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(345, 509);
			this->button22->Margin = System::Windows::Forms::Padding(2);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(64, 64);
			this->button22->TabIndex = 24;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Elements_Index::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::LightBlue;
			this->button23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.BackgroundImage")));
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(345, 442);
			this->button23->Margin = System::Windows::Forms::Padding(2);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(64, 64);
			this->button23->TabIndex = 23;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Elements_Index::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::LightBlue;
			this->button24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.BackgroundImage")));
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(345, 376);
			this->button24->Margin = System::Windows::Forms::Padding(2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(64, 64);
			this->button24->TabIndex = 22;
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Elements_Index::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::LightBlue;
			this->button25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.BackgroundImage")));
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button25->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(345, 309);
			this->button25->Margin = System::Windows::Forms::Padding(2);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(64, 64);
			this->button25->TabIndex = 21;
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Elements_Index::button25_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::LightBlue;
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(277, 509);
			this->button18->Margin = System::Windows::Forms::Padding(2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(64, 64);
			this->button18->TabIndex = 20;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Elements_Index::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::LightBlue;
			this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(277, 442);
			this->button19->Margin = System::Windows::Forms::Padding(2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(64, 64);
			this->button19->TabIndex = 19;
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Elements_Index::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::LightBlue;
			this->button20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.BackgroundImage")));
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(277, 376);
			this->button20->Margin = System::Windows::Forms::Padding(2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(64, 64);
			this->button20->TabIndex = 18;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Elements_Index::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::LightBlue;
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(277, 308);
			this->button21->Margin = System::Windows::Forms::Padding(2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(64, 64);
			this->button21->TabIndex = 17;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Elements_Index::button21_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Peru;
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(179, 509);
			this->button14->Margin = System::Windows::Forms::Padding(2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(64, 64);
			this->button14->TabIndex = 16;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Elements_Index::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(179, 441);
			this->button15->Margin = System::Windows::Forms::Padding(2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(64, 64);
			this->button15->TabIndex = 15;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Elements_Index::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::LightBlue;
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(179, 374);
			this->button16->Margin = System::Windows::Forms::Padding(2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(64, 64);
			this->button16->TabIndex = 14;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Elements_Index::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::LightBlue;
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(179, 307);
			this->button17->Margin = System::Windows::Forms::Padding(2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(64, 64);
			this->button17->TabIndex = 13;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Elements_Index::button17_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Gold;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(111, 509);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(64, 64);
			this->button8->TabIndex = 12;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Elements_Index::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Gold;
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(111, 441);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(64, 64);
			this->button9->TabIndex = 11;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Elements_Index::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Gold;
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(111, 374);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(64, 64);
			this->button10->TabIndex = 10;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Elements_Index::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Gold;
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(111, 307);
			this->button11->Margin = System::Windows::Forms::Padding(2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(64, 64);
			this->button11->TabIndex = 9;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Elements_Index::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Gold;
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(111, 239);
			this->button12->Margin = System::Windows::Forms::Padding(2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(64, 64);
			this->button12->TabIndex = 8;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Elements_Index::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Gold;
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(111, 171);
			this->button13->Margin = System::Windows::Forms::Padding(2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(64, 64);
			this->button13->TabIndex = 7;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Elements_Index::button13_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Red;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(43, 509);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(64, 64);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Elements_Index::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Red;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(43, 441);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(64, 64);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Elements_Index::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Red;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(43, 374);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(64, 64);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Elements_Index::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(43, 307);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(64, 64);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Elements_Index::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(43, 239);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 64);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Elements_Index::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(43, 171);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 64);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Elements_Index::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::YellowGreen;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(43, 103);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 64);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Elements_Index::button1_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 28);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(1292, 828);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"List View";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->ColumnWidth = 375;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(118) {
				L"Ac Actinium", L"Ag Silver", L"Al Aluminum", L"Am Americium",
					L"Ar Argon", L"As Arsenic", L"At Astatine", L"Au Gold", L"B Boron", L"Ba Barium", L"Be Beryllium", L"Bh Bohrium", L"Bi Bismuth",
					L"Bk Berkelium", L"Br Bromine", L"C Carbon", L"Ca Calcium", L"Cd Cadmium", L"Ce Cerium", L"Cf Californium", L"Cl Chlorine", L"Cm Curium",
					L"Cn Copernicium", L"Co Cobalt", L"Cr Chromium", L"Cs Cesium", L"Cu Copper", L"Db Dubnium", L"Ds Darmstadtium", L"Dy Dysprosium",
					L"Er Erbium", L"Es Einsteinium", L"Eu Europium", L"F Fluorine", L"Fe Iron", L"Fl Flerovium", L"Fm Fermium", L"Fr Francium", L"Ga Gallium",
					L"Gd Gadolinium", L"Ge Germanium", L"H Hydrogen", L"He Helium", L"Hf Hafnium", L"Hg Mercury", L"Ho Holmium", L"Hs Hassium", L"I Iodine",
					L"In Indium", L"Ir Iridium", L"K Potassium", L"Kr Krypton", L"La Lanthanum", L"Li Lithium", L"Lr Lawrencium", L"Lu Lutetium",
					L"Lv Livermorium", L"Mc Moscovium", L"Md Mendelevium", L"Mg Magnesium", L"Mn Manganese", L"Mo Molybdenum", L"Mt Meitnerium",
					L"N Nitrogen", L"Na Sodium", L"Nb Niobium", L"Nd Neodymium", L"Ne Neon", L"Nh Nihonium", L"Ni Nickel", L"No Nobelium", L"Np Neptunium ",
					L"O Oxygen", L"Og Oganesson", L"Os Osmium", L"P Phosphorus", L"Pa Protactinium", L"Pb Lead", L"Pd Palladium", L"Pm Promethium",
					L"Po Polonium", L"Pr Praseodymium", L"Pt Platinum", L"Pu Plutonium", L"Ra Radium", L"Rb Rubidium", L"Re Rhenium", L"Rf Rutherfordium",
					L"Rg Roentgenium", L"Rh Rhodium", L"Rn Radon", L"Ru Ruthenium", L"S Sulfur", L"Sb Antimony", L"Sc Scandium", L"Se Selenium",
					L"Sg Seaborgium", L"Si Silicon", L"Sm Samarium", L"Sn Tin", L"Sr Strontium", L"Ta Tantalum", L"Tb Terbium", L"Tc Technetium",
					L"Te Tellurium", L"Th Thorium", L"Ti Titanium", L"Tl Thallium", L"Tm Thulium", L"Ts Tennessine", L"U Uranium", L"V Vanadium",
					L"W Tungsten", L"Xe Xenon", L"Y Yttrium", L"Yb Ytterbium", L"Zn Zinc", L"Zr Zirconium"
			});
			this->listBox1->Location = System::Drawing::Point(26, 17);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->MultiColumn = true;
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(1256, 804);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Elements_Index::listBox1_SelectedIndexChanged);
			this->listBox1->DoubleClick += gcnew System::EventHandler(this, &Elements_Index::listBox1_SelectedIndexChanged_1);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// Elements_Index
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1321, 880);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"Elements_Index";
			this->Text = L"Periodic Table";
			this->Load += gcnew System::EventHandler(this, &Elements_Index::Elements_Index_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->Text == "Ac Actinium") {
		Ac^ obj = gcnew Ac();
		obj->Show();
	}
	if (listBox1->Text == "Ag Silver") {
		Ag^ obj = gcnew Ag();
		obj->Show();
	}
	if (listBox1->Text == "Al Aluminum") {
		Al^ obj = gcnew Al();
		obj->Show();
	}
	if (listBox1->Text == "Am Americium") {
		Am^ obj = gcnew Am();
		obj->Show();
	}
	if (listBox1->Text == "Ar Argon") {
		Ar^ obj = gcnew Ar();
		obj->Show();
	}
	if (listBox1->Text == "As Arsenic") {
		As^ obj = gcnew As();
		obj->Show();
	}
	if (listBox1->Text == "At Astatine") {
		At^ obj = gcnew At();
		obj->Show();
	}
	if (listBox1->Text == "Au Gold") {
		Au^ obj = gcnew Au();
		obj->Show();
	}
	if (listBox1->Text == "B Boron") {
		B^ obj = gcnew B();
		obj->Show();
	}
	if (listBox1->Text == "Ba Barium") {
		Ba^ obj = gcnew Ba();
		obj->Show();
	}
	if (listBox1->Text == "Be Beryllium") {
		Ba^ obj = gcnew Ba();
		obj->Show();
	}
	if (listBox1->Text == "Bh Bohrium") {
		Bh^ obj = gcnew Bh();
		obj->Show();
	}
	if (listBox1->Text == "Bi Bismuth") {
		Bi^ obj = gcnew Bi();
		obj->Show();
	}
	if (listBox1->Text == "Bk Berkelium") {
		Bk^ obj = gcnew Bk();
		obj->Show();
	}
	if (listBox1->Text == "Br Bromine") {
		Br^ obj = gcnew Br();
		obj->Show();
	}
	if (listBox1->Text == "C Carbon") {
		C^ obj = gcnew C();
		obj->Show();
	}
	if (listBox1->Text == "Ca Calcium") {
		Ca^ obj = gcnew Ca();
		obj->Show();
	}
	if (listBox1->Text == "Cd Cadmium") {
		Cd^ obj = gcnew Cd();
		obj->Show();
	}
	if (listBox1->Text == "Ce Cerium") {
		Ce^ obj = gcnew Ce();
		obj->Show();
	}
	if (listBox1->Text == "Cf Californium") {
		Cf^ obj = gcnew Cf();
		obj->Show();
	}
	if (listBox1->Text == "Cl Chlorine") {
		Cl^ obj = gcnew Cl();
		obj->Show();
	}
	if (listBox1->Text == "Cm Curium") {
		Cm^ obj = gcnew Cm();
		obj->Show();
	}
	if (listBox1->Text == "Cn Copernicium") {
		Cn^ obj = gcnew Cn();
		obj->Show();
	}
	if (listBox1->Text == "Co Cobalt") {
		Co^ obj = gcnew Co();
		obj->Show();
	}
	if (listBox1->Text == "Cr Chromium") {
		Cr^ obj = gcnew Cr();
		obj->Show();
	}
	if (listBox1->Text == "Cs Cesium") {
		CS^ obj = gcnew CS();
		obj->Show();
	}
	if (listBox1->Text == "Cu Copper") {
		Cu^ obj = gcnew Cu();
		obj->Show();
	}
	if (listBox1->Text == "Db Dubnium") {
		Db^ obj = gcnew Db();
		obj->Show();
	}
	if (listBox1->Text == "Ds Darmstadtium") {
		Ds^ obj = gcnew Ds();
		obj->Show();
	}
	if (listBox1->Text == "Dy Dysprosium") {
		Dy^ obj = gcnew Dy();
		obj->Show();
	}
	if (listBox1->Text == "Er Erbium") {
		Er^ obj = gcnew Er();
		obj->Show();
	}
	if (listBox1->Text == "Es Einsteinium") {
		Es^ obj = gcnew Es();
		obj->Show();
	}
	if (listBox1->Text == "Eu Europium") {
		Eu^ obj = gcnew Eu();
		obj->Show();
	}
	if (listBox1->Text == "F Fluorine") {
		F^ obj = gcnew F();
		obj->Show();
	}
	if (listBox1->Text == "Fe Iron") {
		Fe^ obj = gcnew Fe();
		obj->Show();
	}
	if (listBox1->Text == "Fl Flerovium") {
		Fl^ obj = gcnew Fl();
		obj->Show();
	}
	if (listBox1->Text == "Fm Fermium") {
		Fm^ obj = gcnew Fm();
		obj->Show();
	}
	if (listBox1->Text == "Fr Francium") {
		Fr^ obj = gcnew Fr();
		obj->Show();
	}
	if (listBox1->Text == "Ga Gallium") {
		Ga^ obj = gcnew Ga();
		obj->Show();
	}
	if (listBox1->Text == "Gd Gadolinium") {
		Gd^ obj = gcnew Gd();
		obj->Show();
	}
	if (listBox1->Text == "Ge Germanium") {
		Ge^ obj = gcnew Ge();
		obj->Show();
	}
	if (listBox1->Text == "H Hydrogen") {
		H^ obj = gcnew H();
		obj->Show();
	}
	if (listBox1->Text == "He Helium") {
		He^ obj = gcnew He();
		obj->Show();
	}
	if (listBox1->Text == "Hf Hafnium") {
		Hf^ obj = gcnew Hf();
		obj->Show();
	}
	if (listBox1->Text == "Hg Mercury") {
		Hg^ obj = gcnew Hg();
		obj->Show();
	}
	if (listBox1->Text == "Ho Holmium") {
		Ho^ obj = gcnew Ho();
		obj->Show();
	}
	if (listBox1->Text == "Hs Hassium") {
		Hs^ obj = gcnew Hs();
		obj->Show();
	}
	if (listBox1->Text == "I Iodine") {
		I^ obj = gcnew I();
		obj->Show();
	}
	if (listBox1->Text == "In Indium") {
		In^ obj = gcnew In();
		obj->Show();
	}
	if (listBox1->Text == "Ir Iridium") {
		Ir^ obj = gcnew Ir();
		obj->Show();
	}
	if (listBox1->Text == "K Potassium") {
		Kali^ obj = gcnew Kali();
		obj->Show();
	}
	if (listBox1->Text == "Kr Krypton") {
		Kr^ obj = gcnew Kr();
		obj->Show();
	}
	if (listBox1->Text == "La Lanthanum") {
		La^ obj = gcnew La();
		obj->Show();
	}
	if (listBox1->Text == "Li Lithium") {
		Liti^ obj = gcnew Liti();
		obj->Show();
	}
	if (listBox1->Text == "Lu Lutetium") {
		Lu^ obj = gcnew Lu();
		obj->Show();
	}
	if (listBox1->Text == "Lv Livermorium") {
		Lv^ obj = gcnew Lv();
		obj->Show();
	}
	if (listBox1->Text == "Lr Lawrencium") {
		Lr^ obj = gcnew Lr();
		obj->Show();
	}
	if (listBox1->Text == "Mc Moscovium") {
		Mc^ obj = gcnew Mc();
		obj->Show();
	}
	if (listBox1->Text == "Md Mendelevium") {
		Md^ obj = gcnew Md();
		obj->Show();
	}
	if (listBox1->Text == "Mg Magnesium") {
		Mg^ obj = gcnew Mg();
		obj->Show();
	}
	if (listBox1->Text == "Mn Manganese") {
		Mn^ obj = gcnew Mn();
		obj->Show();
	}
	if (listBox1->Text == "Mo Molybdenum") {
		Mo^ obj = gcnew Mo();
		obj->Show();
	}
	if (listBox1->Text == "Mt Meitneriumm") {
		Mt^ obj = gcnew Mt();
		obj->Show();
	}
	if (listBox1->Text == "N Nitrogen") {
		N^ obj = gcnew N();
		obj->Show();
	}
	if (listBox1->Text == "Na Sodium") {
		Natri^ obj = gcnew Natri();
		obj->Show();
	}
	if (listBox1->Text == "Nb Niobium") {
		Nb^ obj = gcnew Nb();
		obj->Show();
	}
	if (listBox1->Text == "Nd Neodymium") {
		Nd^ obj = gcnew Nd();
		obj->Show();
	}
	if (listBox1->Text == "Ne Neon") {
		Ne^ obj = gcnew Ne();
		obj->Show();
	}
	if (listBox1->Text == "Nh Nihonium") {
		Nh^ obj = gcnew Nh();
		obj->Show();
	}
	if (listBox1->Text == "Ni Nickel") {
		Ni^ obj = gcnew Ni();
		obj->Show();
	}
	if (listBox1->Text == "No Nobelium") {
		No^ obj = gcnew No();
		obj->Show();
	}
	if (listBox1->Text == "Np Neptunium") {
		Np^ obj = gcnew Np();
		obj->Show();
	}
	if (listBox1->Text == "O Oxygen") {
		O^ obj = gcnew O();
		obj->Show();
	}
	if (listBox1->Text == "Og Oganesson") {
		Og^ obj = gcnew Og();
		obj->Show();
	}
	if (listBox1->Text == "Os Osmium") {
		Os^ obj = gcnew Os();
		obj->Show();
	}
	if (listBox1->Text == "P Phosphorus") {
		P^ obj = gcnew P();
		obj->Show();
	}
	if (listBox1->Text == "Pa Protactinium") {
		Pa^ obj = gcnew Pa();
		obj->Show();
	}
	if (listBox1->Text == "Pb Lead") {
		Pb^ obj = gcnew Pb();
		obj->Show();
	}
	if (listBox1->Text == "Pd Palladium") {
		Pd^ obj = gcnew Pd();
		obj->Show();
	}
	if (listBox1->Text == "Pm Promethium") {
		Pm^ obj = gcnew Pm();
		obj->Show();
	}
	if (listBox1->Text == "Po Polonium") {
		Po^ obj = gcnew Po();
		obj->Show();
	}
	if (listBox1->Text == "Pr Praseodymium") {
		Pr^ obj = gcnew Pr();
		obj->Show();
	}
	if (listBox1->Text == "Pt Platinum") {
		Pt^ obj = gcnew Pt();
		obj->Show();
	}
	if (listBox1->Text == "Pu Plutonium") {
		Pu^ obj = gcnew Pu();
		obj->Show();
	}
	if (listBox1->Text == "Ra Radium") {
		Ra^ obj = gcnew Ra();
		obj->Show();
	}
	if (listBox1->Text == "Rb Rubidium") {
		Rb^ obj = gcnew Rb();
		obj->Show();
	}
	if (listBox1->Text == "Re Rhenium") {
		Re^ obj = gcnew Re();
		obj->Show();
	}
	if (listBox1->Text == "Rf Rutherfordium") {
		Rf^ obj = gcnew Rf();
		obj->Show();
	}
	if (listBox1->Text == "Rg Roentgenium") {
		Rg^ obj = gcnew Rg();
		obj->Show();
	}
	if (listBox1->Text == "Rh Rhodium") {
		Rh^ obj = gcnew Rh();
		obj->Show();
	}
	if (listBox1->Text == "Rn Radon") {
		Rn^ obj = gcnew Rn();
		obj->Show();
	}
	if (listBox1->Text == "Ru Ruthenium") {
		Ru^ obj = gcnew Ru();
		obj->Show();
	}
	if (listBox1->Text == "S Sulfur") {
		S^ obj = gcnew S();
		obj->Show();
	}
	if (listBox1->Text == "Sb Antimony") {
		Sb^ obj = gcnew Sb();
		obj->Show();
	}
	if (listBox1->Text == "Sc Scandium") {
		Sc^ obj = gcnew Sc();
		obj->Show();
	}
	if (listBox1->Text == "Se Selenium") {
		Se^ obj = gcnew Se();
		obj->Show();
	}
	if (listBox1->Text == "Sg Seaborgium") {
		Sg^ obj = gcnew Sg();
		obj->Show();
	}
	if (listBox1->Text == "Si Silicon") {
		Si^ obj = gcnew Si();
		obj->Show();
	}
	if (listBox1->Text == "Sm Samarium") {
		Sm^ obj = gcnew Sm();
		obj->Show();
	}
	if (listBox1->Text == "Sn Tin") {
		Sn^ obj = gcnew Sn();
		obj->Show();
	}
	if (listBox1->Text == "Sr Strontium") {
		Sr^ obj = gcnew Sr();
		obj->Show();
	}
	if (listBox1->Text == "Ta Tantalum") {
		Ta^ obj = gcnew Ta();
		obj->Show();
	}
	if (listBox1->Text == "Tb Terbium") {
		Tb^ obj = gcnew Tb();
		obj->Show();
	}
	if (listBox1->Text == "Tc Technetium") {
		Tc^ obj = gcnew Tc();
		obj->Show();
	}
	if (listBox1->Text == "Te Tellurium") {
		Te^ obj = gcnew Te();
		obj->Show();
	}
	if (listBox1->Text == "Th Thorium") {
		Th^ obj = gcnew Th();
		obj->Show();
	}
	if (listBox1->Text == "Ti Titanium") {
		Ti^ obj = gcnew Ti();
		obj->Show();
	}
	if (listBox1->Text == "Tl Thallium") {
		Tl^ obj = gcnew Tl();
		obj->Show();
	}
	if (listBox1->Text == "Tm Thulium") {
		Tm^ obj = gcnew Tm();
		obj->Show();
	}
	if (listBox1->Text == "Ts Tennessine") {
		Ts^ obj = gcnew Ts();
		obj->Show();
	}
	if (listBox1->Text == "U Uranium") {
		U^ obj = gcnew U();
		obj->Show();
	}
	if (listBox1->Text == "V Vanadium") {
		V^ obj = gcnew V();
		obj->Show();
	}
	if (listBox1->Text == "W Tungsten") {
		W^ obj = gcnew W();
		obj->Show();
	}
	if (listBox1->Text == "Xe Xenon") {
		Xe^ obj = gcnew Xe();
		obj->Show();
	}
	if (listBox1->Text == "Y Yttrium") {
		Y^ obj = gcnew Y();
		obj->Show();
	}
	if (listBox1->Text == "Yb Ytterbium") {
		Yb^ obj = gcnew Yb();
		obj->Show();
	}
	if (listBox1->Text == "Zn Zinc") {
		Zn^ obj = gcnew Zn();
		obj->Show();
	}
	if (listBox1->Text == "Zr Zirconium") {
		Zr^ obj = gcnew Zr();
		obj->Show();
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Elements_Index_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ pdfFilePath = "HDSD.pdf";

	// Chuyển đổi từ System::String^ sang std::string
	// Tạo URL cho file PDF
	String^ pdfUrl = "file:///" + Application::StartupPath + "/" + pdfFilePath;

	// Load file PDF vào WebBrowser Control
	webBrowser1->Navigate(pdfUrl);
}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void fontDialog1_Apply(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void button119_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->Text == "Ac Actinium") {
		Ac^ obj = gcnew Ac();
		obj->Show();
	}
	if (comboBox1->Text == "Ag Silver") {
		Ag^ obj = gcnew Ag();
		obj->Show();
	}
	if (comboBox1->Text == "Al Aluminum") {
		Al^ obj = gcnew Al();
		obj->Show();
	}
	if (comboBox1->Text == "Am Americium") {
		Am^ obj = gcnew Am();
		obj->Show();
	}
	if (comboBox1->Text == "Ar Argon") {
		Ar^ obj = gcnew Ar();
		obj->Show();
	}
	if (comboBox1->Text == "As Arsenic") {
		As^ obj = gcnew As();
		obj->Show();
	}
	if (comboBox1->Text == "At Astatine") {
		At^ obj = gcnew At();
		obj->Show();
	}
	if (comboBox1->Text == "Au Gold") {
		Au^ obj = gcnew Au();
		obj->Show();
	}
	if (comboBox1->Text == "B Boron") {
		B^ obj = gcnew B();
		obj->Show();
	}
	if (comboBox1->Text == "Ba Barium") {
		Ba^ obj = gcnew Ba();
		obj->Show();
	}
	if (comboBox1->Text == "Be Beryllium") {
		Ba^ obj = gcnew Ba();
		obj->Show();
	}
	if (comboBox1->Text == "Bh Bohrium") {
		Bh^ obj = gcnew Bh();
		obj->Show();
	}
	if (comboBox1->Text == "Bi Bismuth") {
		Bi^ obj = gcnew Bi();
		obj->Show();
	}
	if (comboBox1->Text == "Bk Berkelium") {
		Bk^ obj = gcnew Bk();
		obj->Show();
	}
	if (comboBox1->Text == "Br Bromine") {
		Br^ obj = gcnew Br();
		obj->Show();
	}
	if (comboBox1->Text == "C Carbon") {
		C^ obj = gcnew C();
		obj->Show();
	}
	if (comboBox1->Text == "Ca Calcium") {
		Ca^ obj = gcnew Ca();
		obj->Show();
	}
	if (comboBox1->Text == "Cd Cadmium") {
		Cd^ obj = gcnew Cd();
		obj->Show();
	}
	if (comboBox1->Text == "Ce Cerium") {
		Ce^ obj = gcnew Ce();
		obj->Show();
	}
	if (comboBox1->Text == "Cf Californium") {
		Cf^ obj = gcnew Cf();
		obj->Show();
	}
	if (comboBox1->Text == "Cl Chlorine") {
		Cl^ obj = gcnew Cl();
		obj->Show();
	}
	if (comboBox1->Text == "Cm Curium") {
		Cm^ obj = gcnew Cm();
		obj->Show();
	}
	if (comboBox1->Text == "Cn Copernicium") {
		Cn^ obj = gcnew Cn();
		obj->Show();
	}
	if (comboBox1->Text == "Co Cobalt") {
		Co^ obj = gcnew Co();
		obj->Show();
	}
	if (comboBox1->Text == "Cr Chromium") {
		Cr^ obj = gcnew Cr();
		obj->Show();
	}
	if (comboBox1->Text == "Cs Cesium") {
		CS^ obj = gcnew CS();
		obj->Show();
	}
	if (comboBox1->Text == "Cu Copper") {
		Cu^ obj = gcnew Cu();
		obj->Show();
	}
	if (comboBox1->Text == "Db Dubnium") {
		Db^ obj = gcnew Db();
		obj->Show();
	}
	if (comboBox1->Text == "Ds Darmstadtium") {
		Ds^ obj = gcnew Ds();
		obj->Show();
	}
	if (comboBox1->Text == "Dy Dysprosium") {
		Dy^ obj = gcnew Dy();
		obj->Show();
	}
	if (comboBox1->Text == "Er Erbium") {
		Er^ obj = gcnew Er();
		obj->Show();
	}
	if (comboBox1->Text == "Es Einsteinium") {
		Es^ obj = gcnew Es();
		obj->Show();
	}
	if (comboBox1->Text == "Eu Europium") {
		Eu^ obj = gcnew Eu();
		obj->Show();
	}
	if (comboBox1->Text == "F Fluorine") {
		F^ obj = gcnew F();
		obj->Show();
	}
	if (comboBox1->Text == "Fe Iron") {
		Fe^ obj = gcnew Fe();
		obj->Show();
	}
	if (comboBox1->Text == "Fl Flerovium") {
		Fl^ obj = gcnew Fl();
		obj->Show();
	}
	if (comboBox1->Text == "Fm Fermium") {
		Fm^ obj = gcnew Fm();
		obj->Show();
	}
	if (comboBox1->Text == "Fr Francium") {
		Fr^ obj = gcnew Fr();
		obj->Show();
	}
	if (comboBox1->Text == "Ga Gallium") {
		Ga^ obj = gcnew Ga();
		obj->Show();
	}
	if (comboBox1->Text == "Gd Gadolinium") {
		Gd^ obj = gcnew Gd();
		obj->Show();
	}
	if (comboBox1->Text == "Ge Germanium") {
		Ge^ obj = gcnew Ge();
		obj->Show();
	}
	if (comboBox1->Text == "H Hydrogen") {
		H^ obj = gcnew H();
		obj->Show();
	}
	if (comboBox1->Text == "He Helium") {
		He^ obj = gcnew He();
		obj->Show();
	}
	if (comboBox1->Text == "Hf Hafnium") {
		Hf^ obj = gcnew Hf();
		obj->Show();
	}
	if (comboBox1->Text == "Hg Mercury") {
		Hg^ obj = gcnew Hg();
		obj->Show();
	}
	if (comboBox1->Text == "Ho Holmium") {
		Ho^ obj = gcnew Ho();
		obj->Show();
	}
	if (comboBox1->Text == "Hs Hassium") {
		Hs^ obj = gcnew Hs();
		obj->Show();
	}
	if (comboBox1->Text == "I Iodine") {
		I^ obj = gcnew I();
		obj->Show();
	}
	if (comboBox1->Text == "In Indium") {
		In^ obj = gcnew In();
		obj->Show();
	}
	if (comboBox1->Text == "Ir Iridium") {
		Ir^ obj = gcnew Ir();
		obj->Show();
	}
	if (comboBox1->Text == "K Potassium") {
		Kali^ obj = gcnew Kali();
		obj->Show();
	}
	if (comboBox1->Text == "Kr Krypton") {
		Kr^ obj = gcnew Kr();
		obj->Show();
	}
	if (comboBox1->Text == "La Lanthanum") {
		La^ obj = gcnew La();
		obj->Show();
	}
	if (comboBox1->Text == "Li Lithium") {
		Liti^ obj = gcnew Liti();
		obj->Show();
	}
	if (comboBox1->Text == "Lu Lutetium") {
		Lu^ obj = gcnew Lu();
		obj->Show();
	}
	if (comboBox1->Text == "Lv Livermorium") {
		Lv^ obj = gcnew Lv();
		obj->Show();
	}
	if (comboBox1->Text == "Lr Lawrencium") {
		Lr^ obj = gcnew Lr();
		obj->Show();
	}
	if (comboBox1->Text == "Mc Moscovium") {
		Mc^ obj = gcnew Mc();
		obj->Show();
	}
	if (comboBox1->Text == "Md Mendelevium") {
		Md^ obj = gcnew Md();
		obj->Show();
	}
	if (comboBox1->Text == "Mg Magnesium") {
		Mg^ obj = gcnew Mg();
		obj->Show();
	}
	if (comboBox1->Text == "Mn Manganese") {
		Mn^ obj = gcnew Mn();
		obj->Show();
	}
	if (comboBox1->Text == "Mo Molybdenum") {
		Mo^ obj = gcnew Mo();
		obj->Show();
	}
	if (comboBox1->Text == "Mt Meitneriumm") {
		Mt^ obj = gcnew Mt();
		obj->Show();
	}
	if (comboBox1->Text == "N Nitrogen") {
		N^ obj = gcnew N();
		obj->Show();
	}
	if (comboBox1->Text == "Na Sodium") {
		Natri^ obj = gcnew Natri();
		obj->Show();
	}
	if (comboBox1->Text == "Nb Niobium") {
		Nb^ obj = gcnew Nb();
		obj->Show();
	}
	if (comboBox1->Text == "Nd Neodymium") {
		Nd^ obj = gcnew Nd();
		obj->Show();
	}
	if (comboBox1->Text == "Ne Neon") {
		Ne^ obj = gcnew Ne();
		obj->Show();
	}
	if (comboBox1->Text == "Nh Nihonium") {
		Nh^ obj = gcnew Nh();
		obj->Show();
	}
	if (comboBox1->Text == "Ni Nickel") {
		Ni^ obj = gcnew Ni();
		obj->Show();
	}
	if (comboBox1->Text == "No Nobelium") {
		No^ obj = gcnew No();
		obj->Show();
	}
	if (comboBox1->Text == "Np Neptunium") {
		Np^ obj = gcnew Np();
		obj->Show();
	}
	if (comboBox1->Text == "O Oxygen") {
		O^ obj = gcnew O();
		obj->Show();
	}
	if (comboBox1->Text == "Og Oganesson") {
		Og^ obj = gcnew Og();
		obj->Show();
	}
	if (comboBox1->Text == "Os Osmium") {
		Os^ obj = gcnew Os();
		obj->Show();
	}
	if (comboBox1->Text == "P Phosphorus") {
		P^ obj = gcnew P();
		obj->Show();
	}
	if (comboBox1->Text == "Pa Protactinium") {
		Pa^ obj = gcnew Pa();
		obj->Show();
	}
	if (comboBox1->Text == "Pb Lead") {
		Pb^ obj = gcnew Pb();
		obj->Show();
	}
	if (comboBox1->Text == "Pd Palladium") {
		Pd^ obj = gcnew Pd();
		obj->Show();
	}
	if (comboBox1->Text == "Pm Promethium") {
		Pm^ obj = gcnew Pm();
		obj->Show();
	}
	if (comboBox1->Text == "Po Polonium") {
		Po^ obj = gcnew Po();
		obj->Show();
	}
	if (comboBox1->Text == "Pr Praseodymium") {
		Pr^ obj = gcnew Pr();
		obj->Show();
	}
	if (comboBox1->Text == "Pt Platinum") {
		Pt^ obj = gcnew Pt();
		obj->Show();
	}
	if (comboBox1->Text == "Pu Plutonium") {
		Pu^ obj = gcnew Pu();
		obj->Show();
	}
	if (comboBox1->Text == "Ra Radium") {
		Ra^ obj = gcnew Ra();
		obj->Show();
	}
	if (comboBox1->Text == "Rb Rubidium") {
		Rb^ obj = gcnew Rb();
		obj->Show();
	}
	if (comboBox1->Text == "Re Rhenium") {
		Re^ obj = gcnew Re();
		obj->Show();
	}
	if (comboBox1->Text == "Rf Rutherfordium") {
		Rf^ obj = gcnew Rf();
		obj->Show();
	}
	if (comboBox1->Text == "Rg Roentgenium") {
		Rg^ obj = gcnew Rg();
		obj->Show();
	}
	if (comboBox1->Text == "Rh Rhodium") {
		Rh^ obj = gcnew Rh();
		obj->Show();
	}
	if (comboBox1->Text == "Rn Radon") {
		Rn^ obj = gcnew Rn();
		obj->Show();
	}
	if (comboBox1->Text == "Ru Ruthenium") {
		Ru^ obj = gcnew Ru();
		obj->Show();
	}
	if (comboBox1->Text == "S Sulfur") {
		S^ obj = gcnew S();
		obj->Show();
	}
	if (comboBox1->Text == "Sb Antimony") {
		Sb^ obj = gcnew Sb();
		obj->Show();
	}
	if (comboBox1->Text == "Sc Scandium") {
		Sc^ obj = gcnew Sc();
		obj->Show();
	}
	if (comboBox1->Text == "Se Selenium") {
		Se^ obj = gcnew Se();
		obj->Show();
	}
	if (comboBox1->Text == "Sg Seaborgium") {
		Sg^ obj = gcnew Sg();
		obj->Show();
	}
	if (comboBox1->Text == "Si Silicon") {
		Si^ obj = gcnew Si();
		obj->Show();
	}
	if (comboBox1->Text == "Sm Samarium") {
		Sm^ obj = gcnew Sm();
		obj->Show();
	}
	if (comboBox1->Text == "Sn Tin") {
		Sn^ obj = gcnew Sn();
		obj->Show();
	}
	if (comboBox1->Text == "Sr Strontium") {
		Sr^ obj = gcnew Sr();
		obj->Show();
	}
	if (comboBox1->Text == "Ta Tantalum") {
		Ta^ obj = gcnew Ta();
		obj->Show();
	}
	if (comboBox1->Text == "Tb Terbium") {
		Tb^ obj = gcnew Tb();
		obj->Show();
	}
	if (comboBox1->Text == "Tc Technetium") {
		Tc^ obj = gcnew Tc();
		obj->Show();
	}
	if (comboBox1->Text == "Te Tellurium") {
		Te^ obj = gcnew Te();
		obj->Show();
	}
	if (comboBox1->Text == "Th Thorium") {
		Th^ obj = gcnew Th();
		obj->Show();
	}
	if (comboBox1->Text == "Ti Titanium") {
		Ti^ obj = gcnew Ti();
		obj->Show();
	}
	if (comboBox1->Text == "Tl Thallium") {
		Tl^ obj = gcnew Tl();
		obj->Show();
	}
	if (comboBox1->Text == "Tm Thulium") {
		Tm^ obj = gcnew Tm();
		obj->Show();
	}
	if (comboBox1->Text == "Ts Tennessine") {
		Ts^ obj = gcnew Ts();
		obj->Show();
	}
	if (comboBox1->Text == "U Uranium") {
		U^ obj = gcnew U();
		obj->Show();
	}
	if (comboBox1->Text == "V Vanadium") {
		V^ obj = gcnew V();
		obj->Show();
	}
	if (comboBox1->Text == "W Tungsten") {
		W^ obj = gcnew W();
		obj->Show();
	}
	if (comboBox1->Text == "Xe Xenon") {
		Xe^ obj = gcnew Xe();
		obj->Show();
	}
	if (comboBox1->Text == "Y Yttrium") {
		Y^ obj = gcnew Y();
		obj->Show();
	}
	if (comboBox1->Text == "Yb Ytterbium") {
		Yb^ obj = gcnew Yb();
		obj->Show();
	}
	if (comboBox1->Text == "Zn Zinc") {
		Zn^ obj = gcnew Zn();
		obj->Show();
	}
	if (comboBox1->Text == "Zr Zirconium") {
		Zr^ obj = gcnew Zr();
		obj->Show();
	}
	
}
private: System::Void listBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->CheckState == CheckState::Checked) {
		button2->Show();
		button3->Show();
		button4->Show();
		button5->Show();
		button6->Show();
		button7->Show();
	}
	else {
		button2->Hide();
		button3->Hide();
		button4->Hide();
		button5->Hide();
		button6->Hide();
		button7->Hide();
	}
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->CheckState == CheckState::Checked) {
			   button8->Show();
			   button9->Show();
			   button10->Show();
			   button11->Show();
			   button12->Show();
			   button13->Show();
		   }
	else {
			   button8->Hide();
			   button9->Hide();
			   button10->Hide();
			   button11->Hide();
			   button12->Hide();
			   button13->Hide();
		   }
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox3->CheckState == CheckState::Checked) {
		button16->Show();
		button17->Show();
		button18->Show();
		button19->Show();
		button20->Show();
		button21->Show();
		button22->Show();
		button23->Show();
		button24->Show();
		button25->Show();
		button26->Show();
		button27->Show();
		button28->Show();
		button29->Show();
		button30->Show();
		button31->Show();
		button32->Show();
		button33->Show();
		button34->Show();
		button35->Show();
		button36->Show();
		button37->Show();
		button39->Show();
		button40->Show();
		button41->Show();
		button43->Show();
		button44->Show();
		button45->Show();
		button47->Show();
		button48->Show();
		button49->Show();
		button51->Show();
		button52->Show();
		button53->Show();
	}
	else {
		button16->Hide();
		button17->Hide();
		button18->Hide();
		button19->Hide();
		button20->Hide();
		button21->Hide();
		button22->Hide();
		button23->Hide();
		button24->Hide();
		button25->Hide();
		button26->Hide();
		button27->Hide();
		button28->Hide();
		button29->Hide();
		button30->Hide();
		button31->Hide();
		button32->Hide();
		button33->Hide();
		button34->Hide();
		button35->Hide();
		button36->Hide();
		button37->Hide();
		button39->Hide();
		button40->Hide();
		button41->Hide();
		button43->Hide();
		button44->Hide();
		button45->Hide();
		button47->Hide();
		button48->Hide();
		button49->Hide();
		button51->Hide();
		button52->Hide();
		button53->Hide();
	}
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox4->CheckState == CheckState::Checked) {
		button79->Show();
		button55->Show();
		button56->Show();
		button57->Show();
		button58->Show();
		button61->Show();
		button62->Show();
		button67->Show();
		button73->Show();
	}
	else {
		button79->Hide();
		button55->Hide();
		button56->Hide();
		button57->Hide();
		button58->Hide();
		button61->Hide();
		button62->Hide();
		button67->Hide();
		button73->Hide();
	}
}
private: System::Void checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox7->CheckState == CheckState::Checked) {
		button85->Show();
		button86->Show();
		button87->Show();
		button88->Show();
		button89->Show();
		button90->Show();
	}
	else {
		button85->Hide();
		button86->Hide();
		button87->Hide();
		button88->Hide();
		button89->Hide();
		button90->Hide();
	}
}
private: System::Void checkBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox9->CheckState == CheckState::Checked) {
		button14->Show();
		button91->Show();
		button93->Show();
		button95->Show();
		button97->Show();
		button99->Show();
		button101->Show();
		button103->Show();
		button105->Show();
		button107->Show();
		button109->Show();
		button111->Show();
		button113->Show();
		button115->Show();
		button117->Show();
	}
	else {
		button14->Hide();
		button91->Hide();
		button93->Hide();
		button95->Hide();
		button97->Hide();
		button99->Hide();
		button101->Hide();
		button103->Hide();
		button105->Hide();
		button107->Hide();
		button109->Hide();
		button111->Hide();
		button113->Hide();
		button115->Hide();
		button117->Hide();
	}
}
private: System::Void checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox8->CheckState == CheckState::Checked) {
		button15->Show();
		button92->Show();
		button94->Show();
		button96->Show();
		button98->Show();
		button100->Show();
		button102->Show();
		button104->Show();
		button106->Show();
		button108->Show();
		button110->Show();
		button112->Show();
		button114->Show();
		button116->Show();
		button118->Show();
		   }
		   else {
		button15->Hide();
		button92->Hide();
		button94->Hide();
		button96->Hide();
		button98->Hide();
		button100->Hide();
		button102->Hide();
		button104->Hide();
		button106->Hide();
		button108->Hide();
		button110->Hide();
		button112->Hide();
		button114->Hide();
		button116->Hide();
		button118->Hide();
		   }
	 }
private: System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox6->CheckState == CheckState::Checked) {
		button1->Show();
		button65->Show();
		button70->Show();
		button71->Show();
		button75->Show();
		button76->Show();
		button77->Show();
		button80->Show();
		button81->Show();
		button82->Show();
		button83->Show();
	}
	else {
		button1->Hide();
		button65->Hide();
		button70->Hide();
		button71->Hide();
		button75->Hide();
		button76->Hide();
		button77->Hide();
		button80->Hide();
		button81->Hide();
		button82->Hide();
		button83->Hide();
	}
}
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox5->CheckState == CheckState::Checked) {
		button59->Show();
		button63->Show();
		button64->Show();
		button68->Show();
		button69->Show();
		button74->Show();
	}
	else {
		button59->Hide();
		button63->Hide();
		button64->Hide();
		button68->Hide();
		button69->Hide();
		button74->Hide();
	}
}
private: System::Void checkBox10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox10->CheckState == CheckState::Checked) {
		button38->Show();
		button42->Show();
		button46->Show();
		button50->Show();
		button54->Show();
		button60->Show();
		button66->Show();
		button72->Show();
		button78->Show();
		button84->Show();
	}
	else {
		button38->Hide();
		button42->Hide();
		button46->Hide();
		button50->Hide();
		button54->Hide();
		button60->Hide();
		button66->Hide();
		button72->Hide();
		button78->Hide();
		button84->Hide();
	}
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	H^ obj = gcnew H();
	obj->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Liti^ obj = gcnew Liti();
	obj->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Natri^ obj = gcnew Natri();
	obj->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Kali^ obj = gcnew Kali();
	obj->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Rb^ obj = gcnew Rb();
	obj->Show();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	CS^ obj = gcnew CS();
	obj->Show();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Fr^ obj = gcnew Fr();
	obj->Show();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Ra^ obj = gcnew Ra();
	obj->Show();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	Ba^ obj = gcnew Ba();
	obj->Show();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Sr^ obj = gcnew Sr();
	obj->Show();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	Ca^ obj = gcnew Ca();
	obj->Show();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	Mg^ obj = gcnew Mg();
	obj->Show();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	Be^ obj = gcnew Be();
	obj->Show();
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	Ac^ obj = gcnew Ac();
	obj->Show();
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	La^ obj = gcnew La();
	obj->Show();
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	Y^ obj = gcnew Y();
	obj->Show();
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	Sc^ obj = gcnew Sc();
	obj->Show();
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	Rf^ obj = gcnew Rf();
	obj->Show();
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	Hf^ obj = gcnew Hf();
	obj->Show();
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	Zr^ obj = gcnew Zr();
	obj->Show();
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	Ti^ obj = gcnew Ti();
	obj->Show();
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	Db^ obj = gcnew Db();
	obj->Show();
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	Ta^ obj = gcnew Ta();
	obj->Show();
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	Nb^ obj = gcnew Nb();
	obj->Show();
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	V^ obj = gcnew V();
	obj->Show();
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	Sg^ obj = gcnew Sg();
	obj->Show();
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	W^ obj = gcnew W();
	obj->Show();
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	Mo^ obj = gcnew Mo();
	obj->Show();
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	Cr^ obj = gcnew Cr();
	obj->Show();
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	Bh^ obj = gcnew Bh();
	obj->Show();
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	Re^ obj = gcnew Re();
	obj->Show();
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	Tc^ obj = gcnew Tc();
	obj->Show();
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	Mn^ obj = gcnew Mn();
	obj->Show();
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	Hs^ obj = gcnew Hs();
	obj->Show();
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	Os^ obj = gcnew Os();
	obj->Show();
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	Ru^ obj = gcnew Ru();
	obj->Show();
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
	Fe^ obj = gcnew Fe();
	obj->Show();
}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	Mt^ obj = gcnew Mt();
	obj->Show();
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
	Ir^ obj = gcnew Ir();
	obj->Show();
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
	Rh^ obj = gcnew Rh();
	obj->Show();
}
private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
	Co^ obj = gcnew Co();
	obj->Show();
}
private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
	Ds^ obj = gcnew Ds();
	obj->Show();
}
private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
	Pt^ obj = gcnew Pt();
	obj->Show();
}
private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
	Pd^ obj = gcnew Pd();
	obj->Show();
}
private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
	Ni^ obj = gcnew Ni();
	obj->Show();
}
private: System::Void button46_Click(System::Object^ sender, System::EventArgs^ e) {
	Rg^ obj = gcnew Rg();
	obj->Show();
}
private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {
	Au^ obj = gcnew Au();
	obj->Show();
}
private: System::Void button48_Click(System::Object^ sender, System::EventArgs^ e) {
	Ag^ obj = gcnew Ag();
	obj->Show();
}
private: System::Void button49_Click(System::Object^ sender, System::EventArgs^ e) {
	Cu^ obj = gcnew Cu();
	obj->Show();
}
private: System::Void button50_Click(System::Object^ sender, System::EventArgs^ e) {
	Cn^ obj = gcnew Cn();
	obj->Show();
}
private: System::Void button51_Click(System::Object^ sender, System::EventArgs^ e) {
	Hg^ obj = gcnew Hg();
	obj->Show();
}
private: System::Void button52_Click(System::Object^ sender, System::EventArgs^ e) {
	Cd^ obj = gcnew Cd();
	obj->Show();
}
private: System::Void button53_Click(System::Object^ sender, System::EventArgs^ e) {
	Zn^ obj = gcnew Zn();
	obj->Show();
}
private: System::Void button54_Click(System::Object^ sender, System::EventArgs^ e) {
	Nh^ obj = gcnew Nh();
	obj->Show();
}
private: System::Void button55_Click(System::Object^ sender, System::EventArgs^ e) {
	Tl^ obj = gcnew Tl();
	obj->Show();
}
private: System::Void button56_Click(System::Object^ sender, System::EventArgs^ e) {
	In^ obj = gcnew In();
	obj->Show();
}
private: System::Void button57_Click(System::Object^ sender, System::EventArgs^ e) {
	Ga^ obj = gcnew Ga();
	obj->Show();
}
private: System::Void button58_Click(System::Object^ sender, System::EventArgs^ e) {
	Al^ obj = gcnew Al();
	obj->Show();
}
private: System::Void button59_Click(System::Object^ sender, System::EventArgs^ e) {
	B^ obj = gcnew B();
	obj->Show();
}
private: System::Void button60_Click(System::Object^ sender, System::EventArgs^ e) {
	Fl^ obj = gcnew Fl();
	obj->Show();
}
private: System::Void button61_Click(System::Object^ sender, System::EventArgs^ e) {
	Pb^ obj = gcnew Pb();
	obj->Show();
}
private: System::Void button62_Click(System::Object^ sender, System::EventArgs^ e) {
	Sn^ obj = gcnew Sn();
	obj->Show();
}
private: System::Void button63_Click(System::Object^ sender, System::EventArgs^ e) {
	Ge^ obj = gcnew Ge();
	obj->Show();
}
private: System::Void button64_Click(System::Object^ sender, System::EventArgs^ e) {
	Si^ obj = gcnew Si();
	obj->Show();
}
private: System::Void button65_Click(System::Object^ sender, System::EventArgs^ e) {
	C^ obj = gcnew C();
	obj->Show();
}
private: System::Void button66_Click(System::Object^ sender, System::EventArgs^ e) {
	Mc^ obj = gcnew Mc();
	obj->Show();
}
private: System::Void button67_Click(System::Object^ sender, System::EventArgs^ e) {
	Bi^ obj = gcnew Bi();
	obj->Show();
}
private: System::Void button68_Click(System::Object^ sender, System::EventArgs^ e) {
	Sb^ obj = gcnew Sb();
	obj->Show();
}
private: System::Void button69_Click(System::Object^ sender, System::EventArgs^ e) {
	As^ obj = gcnew As();
	obj->Show();
}
private: System::Void button70_Click(System::Object^ sender, System::EventArgs^ e) {
	P^ obj = gcnew P();
	obj->Show();
}
private: System::Void button71_Click(System::Object^ sender, System::EventArgs^ e) {
	N^ obj = gcnew N();
	obj->Show();
}
private: System::Void button72_Click(System::Object^ sender, System::EventArgs^ e) {
	Lv^ obj = gcnew Lv();
	obj->Show();
}
private: System::Void button73_Click(System::Object^ sender, System::EventArgs^ e) {
	Po^ obj = gcnew Po();
	obj->Show();
}
private: System::Void button74_Click(System::Object^ sender, System::EventArgs^ e) {
	Te^ obj = gcnew Te();
	obj->Show();
}
private: System::Void button75_Click(System::Object^ sender, System::EventArgs^ e) {
	Se^ obj = gcnew Se();
	obj->Show();
}
private: System::Void button76_Click(System::Object^ sender, System::EventArgs^ e) {
	S^ obj = gcnew S();
	obj->Show();
}
private: System::Void button77_Click(System::Object^ sender, System::EventArgs^ e) {
	O^ obj = gcnew O();
	obj->Show();
}
private: System::Void button78_Click(System::Object^ sender, System::EventArgs^ e) {
	Ts^ obj = gcnew Ts();
	obj->Show();
}
private: System::Void button79_Click(System::Object^ sender, System::EventArgs^ e) {
	At^ obj = gcnew At();
	obj->Show();
}
private: System::Void button80_Click(System::Object^ sender, System::EventArgs^ e) {
	I^ obj = gcnew I();
	obj->Show();
}
private: System::Void button81_Click(System::Object^ sender, System::EventArgs^ e) {
	Br^ obj = gcnew Br();
	obj->Show();
}
private: System::Void button82_Click(System::Object^ sender, System::EventArgs^ e) {
	Cl^ obj = gcnew Cl();
	obj->Show();//
}
private: System::Void button83_Click(System::Object^ sender, System::EventArgs^ e) {
	F^ obj = gcnew F();
	obj->Show();
}
private: System::Void button84_Click(System::Object^ sender, System::EventArgs^ e) {
	Og^ obj = gcnew Og();
	obj->Show();
}
private: System::Void button85_Click(System::Object^ sender, System::EventArgs^ e) {
	Rn^ obj = gcnew Rn();
	obj->Show();
}
private: System::Void button86_Click(System::Object^ sender, System::EventArgs^ e) {
	Xe^ obj = gcnew Xe();
	obj->Show();
}
private: System::Void button87_Click(System::Object^ sender, System::EventArgs^ e) {
	Kr^ obj = gcnew Kr();
	obj->Show();
}
private: System::Void button88_Click(System::Object^ sender, System::EventArgs^ e) {
	Ar^ obj = gcnew Ar();
	obj->Show();
}
private: System::Void button89_Click(System::Object^ sender, System::EventArgs^ e) {
	Ne^ obj = gcnew Ne();
	obj->Show();
}
private: System::Void button90_Click(System::Object^ sender, System::EventArgs^ e) {
	He^ obj = gcnew He();
	obj->Show();
}
private: System::Void button91_Click(System::Object^ sender, System::EventArgs^ e) {
	Lr^ obj = gcnew Lr();
	obj->Show();
}
private: System::Void button92_Click(System::Object^ sender, System::EventArgs^ e) {
	Lu^ obj = gcnew Lu();
	obj->Show();
}
private: System::Void button93_Click(System::Object^ sender, System::EventArgs^ e) {
	Th^ obj = gcnew Th();
	obj->Show();
}
private: System::Void button94_Click(System::Object^ sender, System::EventArgs^ e) {
	Ce^ obj = gcnew Ce();
	obj->Show();
}
private: System::Void button95_Click(System::Object^ sender, System::EventArgs^ e) {
	Pa^ obj = gcnew Pa();
	obj->Show();
}
private: System::Void button96_Click(System::Object^ sender, System::EventArgs^ e) {
	Pr^ obj = gcnew Pr();
	obj->Show();
}
private: System::Void button97_Click(System::Object^ sender, System::EventArgs^ e) {
	U^ obj = gcnew U();
	obj->Show();
}
private: System::Void button98_Click(System::Object^ sender, System::EventArgs^ e) {
	Nd^ obj = gcnew Nd();
	obj->Show();
}
private: System::Void button99_Click(System::Object^ sender, System::EventArgs^ e) {
	Np^ obj = gcnew Np();
	obj->Show();
}
private: System::Void button100_Click(System::Object^ sender, System::EventArgs^ e) {
	Pm^ obj = gcnew Pm();
	obj->Show();
}
private: System::Void button101_Click(System::Object^ sender, System::EventArgs^ e) {
	Pu^ obj = gcnew Pu();
	obj->Show();
}
private: System::Void button102_Click(System::Object^ sender, System::EventArgs^ e) {
	Sm^ obj = gcnew Sm();
	obj->Show();
}
private: System::Void button103_Click(System::Object^ sender, System::EventArgs^ e) {
	Am^ obj = gcnew Am();
	obj->Show();
}
private: System::Void button104_Click(System::Object^ sender, System::EventArgs^ e) {
	Eu^ obj = gcnew Eu();
	obj->Show();
}
private: System::Void button105_Click(System::Object^ sender, System::EventArgs^ e) {
	Cm^ obj = gcnew Cm();
	obj->Show();
}
private: System::Void button106_Click(System::Object^ sender, System::EventArgs^ e) {
	Gd^ obj = gcnew Gd();
	obj->Show();
}
private: System::Void button107_Click(System::Object^ sender, System::EventArgs^ e) {
	Bk^ obj = gcnew Bk();
	obj->Show();
}
private: System::Void button108_Click(System::Object^ sender, System::EventArgs^ e) {
	Tb^ obj = gcnew Tb();
	obj->Show();
}
private: System::Void button109_Click(System::Object^ sender, System::EventArgs^ e) {
	Cf^ obj = gcnew Cf();
	obj->Show();	
}
private: System::Void button110_Click(System::Object^ sender, System::EventArgs^ e) {
	Dy^ obj = gcnew Dy();
	obj->Show();
}
private: System::Void button111_Click(System::Object^ sender, System::EventArgs^ e) {
	Es^ obj = gcnew Es();
	obj->Show();
}
private: System::Void button112_Click(System::Object^ sender, System::EventArgs^ e) {
	Ho^ obj = gcnew Ho();
	obj->Show();
}
private: System::Void button113_Click(System::Object^ sender, System::EventArgs^ e) {
	Fm^ obj = gcnew Fm();
	obj->Show();
}
private: System::Void button114_Click(System::Object^ sender, System::EventArgs^ e) {
	Er^ obj = gcnew Er();
	obj->Show();
}
private: System::Void button115_Click(System::Object^ sender, System::EventArgs^ e) {
	Md^ obj = gcnew Md();
	obj->Show();
}
private: System::Void button116_Click(System::Object^ sender, System::EventArgs^ e) {
	Tm^ obj = gcnew Tm();
	obj->Show();
}
private: System::Void button117_Click(System::Object^ sender, System::EventArgs^ e) {
	No^ obj = gcnew No();
	obj->Show();
}
private: System::Void button118_Click(System::Object^ sender, System::EventArgs^ e) {
	Yb^ obj = gcnew Yb();
	obj->Show();
}
private: System::Void checkBox11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox11->CheckState == CheckState::Checked) {
		checkBox1->Checked = true;
		checkBox2->Checked = true;
		checkBox3->Checked = true;
		checkBox4->Checked = true;
		checkBox5->Checked = true;
		checkBox6->Checked = true;
		checkBox7->Checked = true;
		checkBox8->Checked = true;
		checkBox9->Checked = true;
		checkBox10->Checked = true;
	}
	else {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
	}
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
}
};
}
