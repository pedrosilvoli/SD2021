var valor;
var resultado;
function botao(num){
    valor = document.calc.visor.value += num; //concatena os números para formar números com múltiplos algarismos
}

function reseta(){
    document.calc.visor.value = ''; 
}

function calcula(){
    resultado = eval(valor); //a funçãp eval avalia a string para detectar expressões e retorna o resultado da expressão
    document = calc.visor.value = resultado.toLocaleString('pt-BR'); //coloca a variável em notação de . separando milhares e , separando decimais
}