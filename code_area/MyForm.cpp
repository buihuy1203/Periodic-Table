#include "Elements_Index.h"

using namespace System;
using namespace System::Windows::Forms;
[System::STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Preodic:: Elements_Index form;
	Application::Run(% form);
}
