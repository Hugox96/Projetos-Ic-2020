void tree_example2() {
//Criando os histogramas
TH2F *h_pxpy = new TH2F("h_pxpy", "py Vs px" , 100, -2.0, 2.0, 100, -2.0. 2.0);
TH1F *h_pt = new TH1F( "h_pt", "pt", 100, 0., 5.0);
//Criando o arquivo e a tree
TFile *f = new TFile("myfile.root");
TTree *t1 = (TTree*)f->Get("T");
//Declarando as variaveis
Float_t px,py,pt;
Double_t random;
--------------------------------------*---------------------------------------------------*--------------------------------------
//Definindo os Branches
//Se os objetos de evento forem recriados na memória, é essencial relatar esse fato ao TTree, usando a mensagem SetBranchAddress. 
t1->SetBranchAddress("px",&px);
t1->SetBranchAddress("py",&py);
t1->SetBranchAddress("pt",&pt);
t1->SetBranchAddress("random",&random);
----------------------------------------*-------------------------------------------------*---------------------------------------
Int_t nentries = (Int_t)t1-> GetEntries();
for (Int_t i = 0; i < nentries; i++) // loop para selecionar as variáveis 
{
t1 -> GetEntry(i);
h_pxpy-> Fill(px, py);
h_pt-> Fill(pt);
} 
//Criando o canvas
TCanvas *c1 = new TCanvas();
//Definindo o modelo do histograma e salvando-o
h_pxpy->Draw("colz");
c1->SaveAs("tree_example2_pxpy.png")
//Atualizando o histograma
c1-<Update();
h_pt->Draw();
c1->SaveAs("tree_example2_pt.png");
f->Close();
}