#include "pch.h"
#include "FormularioInicio.h"
using namespace System;
using namespace Fase01Final;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew FormularioInicio());
  return 0;
}