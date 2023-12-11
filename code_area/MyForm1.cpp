#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;
[System::STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Preodic::MyForm form;
	Application::Run(% form);
}
