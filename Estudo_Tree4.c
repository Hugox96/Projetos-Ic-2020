void tree_example4() {
//Tree com tamanhos variados de array
TFile *f = new TFile("myfile.root", "RECREATE"); // Criando o arquivo
TTree *T = new TTree("T", "tree with fixed array"); // Criando a tree
TRandom r;
Float_t px[10],py[10],pt[10]; 
Int_t np;

// Declarando os branchs com array variaveis
T-> Branch("np",&np,"np/I");
T-> Branch("px",px,"px[np]/F");
T-> Branch("py",py,"py[np]/F");
T-> Branch("pt",pt,"pt[np]/F");

for (Int_t i = 0; i < 10000; i++) {
	
Float_t x,y;
np = (Int_t)(r.Rndm()*10);
for (Int_t j=0; j < np; j++){
	r.Rannor(x,y);
	px[j] = x;
	px[j]=  y;
	pt[j] = std::sqrt(x*x +y*y);
}
T-> Fill();
}
f->Write();
f->Close();
}
