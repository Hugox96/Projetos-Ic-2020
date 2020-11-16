### Projetos-Ic-2020
Projetos desenvolvidos na iniciação durante o ano de 2020 para a apresentação da iniciação cientifica

### Introdução ao ROOT

 O ROOT é um software de análise de dados desenvolvido pelo CERN (Organização Europeia para pesquisa Nuclear). 
 Com a sua utilização é possível gerar histogramas e gráficos das partículas que estão sujeitas à análise, permitindo assim, a reconstrução do histograma massa   invariante da partícula de interesse.
 Para o armazenamento de grandes quantidades de objetos da mesma classe, ROOT projetou as classes TTree e TNtuple especificamente para esse propósito. 
 A classe TTree é otimizada para reduzir o espaço em disco e aumentar a velocidade de acesso. Um TNtuple é um TTree limitado a conter apenas números de ponto  flutuante. A TTree, por outro lado, pode conter todos os tipos de dados, como objetos ou matrizes por exemplo. 

## Passos iniciais do estudo

### Introducao a analise de particulas

Criar códigos que são capazes de extrair dados e  gerar histogramas é uma função muito importante para o estudo em física de partículas. Por isso, o estudo inicial foi na criação dos códigos que possibilitam a geração de gráficos para a análise de dados.

<p align="center">
  <img width="400" height="350" src= "https://user-images.githubusercontent.com/62472486/97094186-e2880500-1628-11eb-887d-b417e1750433.png">
</p>                                                            

Podemos acessar o código acima para gerar histogramas das nossa variaves de interesse, vejamos abaixo:

<p align="center">
  <img width="300" height="270" src= "https://user-images.githubusercontent.com/62472486/97369067-edda6b00-188a-11eb-985b-c10c2fb1180d.jpg">
</p>
 
O histograma acima representa variavel Pt (Momemtum Transversal), o momentum transversal esta presente na trajetoria das particulas dentro dos aceleradores. 
                                                             
### Gerando histogramas de particulas reais

Apos entender como criar codigos com dados artificiais para gerar o histograma de nosso interesse, podemos utilizar os dados oficias de particulas para criarmos um codigo e gerar o histograma da massa invariante que procuramos. Para comecar, vamos gerar um codigo para recriar a massa invariante da Kaon, que decai em 2 pions de pares opostos.




