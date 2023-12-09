#include "Heli.h"

using namespace System;
using namespace System::Windows::Forms;
[System::STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Preodic::Heli form;
	Application::Run(% form);
}