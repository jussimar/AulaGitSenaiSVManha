#include<iostream>

using namespace std;

int main(){
	
	string nome;
	double valorVenda;
	double taxaComissao = 0.05;
	double comissao;
	
	cout << "Digite o nome do Vendedor: "<<endl;
	cin >> nome;
	
	cout << "Digite o valor de venda "<<endl;
	cin >> valorVenda;
	
	comissao = valorVenda * taxaComissao;
	
	cout <<"Vendedor: "<<nome<<endl;
	cout <<"Comissao: R$ "<< comissao <<endl;
	
	return 0;
}
