
#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TBrowser.h"
#include "TH2.h"
#include "TRandom.h"
void tree1r(){
    // Note que usamos "new" para criar os objetos TFile e TTree!
    // Porque queremos manter esses objetos vivos quando deixamos essa função.
 -----------------------------------------------------------------*----------------------------------------*--------------------------------------------------  
   TFile *f = new TFile("tree1.root");
   TTree *t1 = (TTree*)f->Get("t1");
   Float_t px, py, pz;
   Double_t random;
   Int_t ev;
   t1->SetBranchAddress("px",&px);
   t1->SetBranchAddress("py",&py);
   t1->SetBranchAddress("pz",&pz);
   t1->SetBranchAddress("random",&random);
   t1->SetBranchAddress("ev",&ev);
   //Criamos dois histogramas
   TH1F *hpx   = new TH1F("hpx","px distribution",100,-3,3);
   TH2F *hpxpy = new TH2F("hpxpy","py vs px",30,-3,3,30,-3,3);
   //Lerá todas as entradas e preencherá os histogramas de uma tree já criada
   Long64_t nentries = t1->GetEntries();
   for (Long64_t i=0;i<nentries;i++) {
     t1->GetEntry(i);
     hpx->Fill(px);
   hpxpy->Fill(px,py); }
   // Não fechamos o arquivo. Queremos manter os histogramas gerados
  // Abrimos um navegador e o TreeViewer
  if (gROOT->IsBatch()) return;
  new TBrowser();
  t1->StartViewer();
}
void tree1() {
   tree1w();
   tree1r();
}
