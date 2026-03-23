
void teste() {
    Postagem* p1 = new Postagem();
    p1->legenda = "tocando Raul Seixas";
    p1->visualizacoes = 0; 

    // b. Chame o método assistir de "tocando Raul Seixas" 4 vezes
    for(int i = 0; i < 4; i++) {
        p1->assistir(); 
    }
    // Se você tivesse o objeto na mão, usaria p1.legenda.
   // Como você tem apenas o endereço (ponteiro), você usa a seta.

    // c. Crie uma postagem de legenda "Faroeste Caboclo"
    Postagem* p2 = new Postagem();
    p2->legenda = "Faroeste Caboclo";
    p2->visualizacoes = 0;

    // d. Chame o método assistir de "Faroeste Caboclo" 2 vezes
    p2->assistir();
    p2->assistir();

    // e. Crie um perfil chamado "cifra club" e adicione as postagens
    Perfil* cifraClub = new Perfil();
    cifraClub->nome = "cifra club";
    
    // Adicionando na ordem pedida
    cifraClub->postar(p1);
    cifraClub->postar(p2);

    // f. Por fim, imprima o objeto “cifra club”
    cifraClub->imprimir();
}

int main() {
    teste();
    return 0;
}
