void tree_example3() {
	
TFile *f = new TFile("myfile.root", "RECREATE"); // Criando o arquivo
TTree *T = new TFile("T", "tree with fixed array"); // Criando a tree
TRandom r;
Float_t px[5],py[5],pt[5];  // Declarando variaveis com array fixas

// Criando os Branchs
T-> Branch("px",px,"px[5]/F");
T-> Branch("py",py,"py[5]/F");
T-> Branch("pt",pt,"pt[5]/F");

// Criando um Loop
for (Int_t i = 0; i < 10000; i++) ;
Float_t x,y;
for (Int_t j=0; j < 5; j++){
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