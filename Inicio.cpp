//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Inicio.h"
#include "MetodoMontante.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
ShowMessage("Esto es una prueba");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::INICIARClick(TObject *Sender)
{
	Form1->DestroyWindowHandle();
	Form1->Destroying();
	Form2->Visible=true;
}
//---------------------------------------------------------------------------
