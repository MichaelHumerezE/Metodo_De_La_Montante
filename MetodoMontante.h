//---------------------------------------------------------------------------

#ifndef MetodoMontanteH
#define MetodoMontanteH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TButton *BtnSalir;
	TLabel *LbMatrizPrincipal;
	TButton *BtnDimensionar;
	TLabel *Label1;
	TLabel *Label2;
	TButton *BtnResolver;
	TStringGrid *V;
	TStringGrid *Matriz1;
	TStringGrid *V1;
	TStringGrid *Matriz2;
	TStringGrid *V2;
	TStringGrid *Matriz;
	TStringGrid *Inversa;
	TLabel *Label3;
	TEdit *EditDetermintante;
	TButton *BtnInverza;
	TLabel *Label4;
	void __fastcall BtnSalirClick(TObject *Sender);
	void __fastcall BtnDimensionarClick(TObject *Sender);
	void __fastcall BtnResolverClick(TObject *Sender);
	void __fastcall BtnInverzaClick(TObject *Sender);
	void __fastcall InversaClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
