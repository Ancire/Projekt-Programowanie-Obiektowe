//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;


int kon_g_1=0, krowa_g_1=0, swinia_g_1=0, owca_g_1=0, krolik_g_1=0;
int kon_g_2=0, krowa_g_2=0, swinia_g_2=0, owca_g_2=0, krolik_g_2=0;
int m_pies_g_1=0, d_pies_g_1=0;
int m_pies_g_2=0, d_pies_g_2=0;
char kto = '1';
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addKon1Click(TObject *Sender)
{
     kon_g_1++;
     AnsiString napis(kon_g_1);
     Form1->kon_1->Caption = napis;
}
//---------------------------------------------------------------------------


                                      //MOJE FUNKCJE



void __fastcall TForm1::dropKon1Click(TObject *Sender)
{
     kon_g_1--;
     AnsiString napis(kon_g_1);
     Form1->kon_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addKrowa1Click(TObject *Sender)
{
     krowa_g_1++;
     AnsiString napis(krowa_g_1);
     Form1->krowa_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropKrowa1Click(TObject *Sender)
{
     krowa_g_1--;
     AnsiString napis(krowa_g_1);
     Form1->krowa_1->Caption = napis;
}

//---------------------------------------------------------------------------
void __fastcall TForm1::addSwinia1Click(TObject *Sender)
{
     swinia_g_1++;
     AnsiString napis(swinia_g_1);
     Form1->swinia_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropSwinia1Click(TObject *Sender)
{
     swinia_g_1--;
     AnsiString napis(swinia_g_1);
     Form1->swinia_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropOwcaClick(TObject *Sender)
{
     owca_g_1--;
     AnsiString napis(owca_g_1);
     Form1->owca_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addOwcaClick(TObject *Sender)
{
     owca_g_1++;
     AnsiString napis(owca_g_1);
     Form1->owca_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropMpies1Click(TObject *Sender)
{
     m_pies_g_1--;
     AnsiString napis(m_pies_g_1);
     Form1->m_pies_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addMpies1Click(TObject *Sender)
{
     m_pies_g_1++;
     AnsiString napis(m_pies_g_1);
     Form1->m_pies_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropKon2Click(TObject *Sender)
{
     kon_g_2--;
     AnsiString napis(kon_g_2);
     Form1->kon_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addKon2Click(TObject *Sender)
{
     kon_g_2++;
     AnsiString napis(kon_g_2);
     Form1->kon_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropKrowa2Click(TObject *Sender)
{
     krowa_g_2--;
     AnsiString napis(krowa_g_2);
     Form1->krowa_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addKrowa2Click(TObject *Sender)
{
     krowa_g_2++;
     AnsiString napis(krowa_g_2);
     Form1->krowa_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropSwinia2Click(TObject *Sender)
{
     swinia_g_2--;
     AnsiString napis(swinia_g_2);
     Form1->swinia_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addSwinia2Click(TObject *Sender)
{
     swinia_g_2++;
     AnsiString napis(swinia_g_2);
     Form1->swinia_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropOwca2Click(TObject *Sender)
{
     owca_g_2--;
     AnsiString napis(owca_g_2);
     Form1->owca_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addOwca2Click(TObject *Sender)
{
     owca_g_2++;
     AnsiString napis(owca_g_2);
     Form1->owca_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropKrolik2Click(TObject *Sender)
{
     krolik_g_2--;
     AnsiString napis(krolik_g_2);
     Form1->krolik_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addKrolik2Click(TObject *Sender)
{
     krolik_g_2++;
     AnsiString napis(krolik_g_2);
     Form1->krolik_2->Caption = napis;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::addKrolik1Click(TObject *Sender)
{
     krolik_g_1++;
     AnsiString napis(krolik_g_1);
     Form1->krolik_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropKrolik1Click(TObject *Sender)
{
     krolik_g_1--;
     AnsiString napis(krolik_g_1);
     Form1->krolik_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropDpies1Click(TObject *Sender)
{
     d_pies_g_1--;
     AnsiString napis(d_pies_g_1);
     Form1->d_pies_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addDpies1Click(TObject *Sender)
{
     d_pies_g_1++;
     AnsiString napis(d_pies_g_1);
     Form1->d_pies_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropMpies2Click(TObject *Sender)
{
     m_pies_g_2--;
     AnsiString napis(m_pies_g_2);
     Form1->m_pies_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addMpies2Click(TObject *Sender)
{
     m_pies_g_2++;
     AnsiString napis(m_pies_g_2);
     Form1->m_pies_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropDpies2Click(TObject *Sender)
{
     d_pies_g_2--;
     AnsiString napis(d_pies_g_2);
     Form1->d_pies_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addDpies2Click(TObject *Sender)
{
     d_pies_g_2++;
     AnsiString napis(d_pies_g_2);
     Form1->d_pies_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RzutClick(TObject *Sender)
{
        if(kto=='1'){
        Form1->tura->Picture->LoadFromFile("t_2.jpg");
        }else{
        Form1->tura->Picture->LoadFromFile("t_1.jpg");
        }
}
//---------------------------------------------------------------------------

