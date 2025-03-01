#include <iostream>

using namespace std;

int main()
{
    //  entrando de variavel
    float peso, altura, imc;

    //entrada de dados
    cout << "informe o seu peso";
    cin >> peso;

    cout << "informe a sua altura";
    cin >> altura;

    //processamento
    imc = peso / (altura * altura);

    if (imc < 20){
        cout << "voce esta abaixo do peso";
    }else if(imc >= 20 && imc < 25){
        cout << "voce esta no peso ideal";
    }else{
        cout << "voce esta acima do peso";
    }

}
