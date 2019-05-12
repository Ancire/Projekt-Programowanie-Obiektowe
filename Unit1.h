//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *kon_img;
        TBitBtn *addKon1;
        TBitBtn *dropKon1;
        TLabel *kon_1;
        TImage *krowa_img;
        TBitBtn *addKrowa1;
        TBitBtn *dropKrowa1;
        TLabel *krowa_1;
        TImage *swinia_img;
        TBitBtn *addSwinia1;
        TBitBtn *dropSwinia1;
        TLabel *swinia_1;
        TImage *owca_img;
        TBitBtn *addOwca;
        TBitBtn *dropOwca;
        TLabel *owca_1;
        TImage *krolik_img;
        TBitBtn *addMpies1;
        TBitBtn *dropMpies1;
        TLabel *m_pies_1;
        TLabel *Player1;
        TImage *Image1;
        TBitBtn *addKon2;
        TBitBtn *dropKon2;
        TLabel *kon_2;
        TImage *Image2;
        TBitBtn *addKrowa2;
        TBitBtn *dropKrowa2;
        TLabel *krowa_2;
        TImage *Image3;
        TBitBtn *addSwinia2;
        TBitBtn *dropSwinia2;
        TLabel *swinia_2;
        TImage *Image4;
        TBitBtn *addOwca2;
        TBitBtn *dropOwca2;
        TLabel *owca_2;
        TImage *Image5;
        TBitBtn *addKrolik2;
        TBitBtn *dropKrolik2;
        TLabel *krolik_2;
        TLabel *Player2;
        TImage *K1;
        TImage *K2;
        TBitBtn *Rzut;
        TImage *mpies1;
        TImage *Image7;
        TImage *Image6;
        TImage *Image8;
        TLabel *d_pies_1;
        TBitBtn *addDpies1;
        TBitBtn *dropDpies1;
        TLabel *m_pies_2;
        TBitBtn *addMpies2;
        TBitBtn *dropMpies2;
        TLabel *d_pies_2;
        TBitBtn *addDpies2;
        TBitBtn *dropDpies2;
        TLabel *krolik_1;
        TBitBtn *addKrolik1;
        TBitBtn *dropKrolik1;
        TImage *tura;
        TLabel *Label1;
        void __fastcall addKon1Click(TObject *Sender);
        void __fastcall dropKon1Click(TObject *Sender);
        void __fastcall addKrowa1Click(TObject *Sender);
        void __fastcall dropKrowa1Click(TObject *Sender);
        void __fastcall addSwinia1Click(TObject *Sender);
        void __fastcall dropSwinia1Click(TObject *Sender);
        void __fastcall dropOwcaClick(TObject *Sender);
        void __fastcall addOwcaClick(TObject *Sender);
        void __fastcall dropMpies1Click(TObject *Sender);
        void __fastcall addMpies1Click(TObject *Sender);
        void __fastcall dropKon2Click(TObject *Sender);
        void __fastcall addKon2Click(TObject *Sender);
        void __fastcall dropKrowa2Click(TObject *Sender);
        void __fastcall addKrowa2Click(TObject *Sender);
        void __fastcall dropSwinia2Click(TObject *Sender);
        void __fastcall addSwinia2Click(TObject *Sender);
        void __fastcall dropOwca2Click(TObject *Sender);
        void __fastcall addOwca2Click(TObject *Sender);
        void __fastcall dropKrolik2Click(TObject *Sender);
        void __fastcall addKrolik2Click(TObject *Sender);
        void __fastcall addKrolik1Click(TObject *Sender);
        void __fastcall dropKrolik1Click(TObject *Sender);
        void __fastcall dropDpies1Click(TObject *Sender);
        void __fastcall addDpies1Click(TObject *Sender);
        void __fastcall dropMpies2Click(TObject *Sender);
        void __fastcall addMpies2Click(TObject *Sender);
        void __fastcall dropDpies2Click(TObject *Sender);
        void __fastcall addDpies2Click(TObject *Sender);
        void __fastcall RzutClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
 