void tree_example1() {
-------- * --------------------------------- * --------------------------
TFile *f = new TFile("myfile.root", "RECREATE"); // Criando um arquivo TFIle
TTree *T = new TTree ("T", "simple tree");  // “T” é o nome da tree e “simple tree” é seu título
-------- * --------------------------------- * --------------------------
// Declarando as variáveis
TRandom r; // gerador de números aleatórios
Float_t px,py,pt;
Double_t random;
UShort_t i; // intervalo de números inteiros
-------- * --------------------------------- * --------------------------
//Definindo os Branchs
// “px” nome do branch, "&px o endereço da memória” , “px/F a variável e seu tipo". 
T->Branch("px", &px, "px/F");
T->Branch("py", &py, "py/F");
T->Branch("pt", &pt, "pt/F");
T->Branch("random", &random, "random/D");
-------- * --------------------------------- * --------------------------
// Criando um loop para preencher a tree
for (i = 0; i < 10000; i++) {
r.Rannor(px,py); // gera números aleatórios
pt = std::sqrt(px*px + py*py);
random = r.Rndm();
T-> Fill();
}
-------- * --------------------------------- * --------------------------
f->Write();
f->Close();
}

Um TNtuple é um TTree limitado a apenas reter números de ponto flutuante; 
um TTree, por outro lado, pode armazenar todos os tipos de dados, como objetos ou matrizes, além de todos os tipos simples.