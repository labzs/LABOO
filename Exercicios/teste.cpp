
void teste() {
    // Criando postagens
    Postagem post1;
    post1.legenda = "Intro Faroeste Caboclo";
    post1.assistir(); // 1 view

    Postagem post2;
    post2.legenda = "Top 10 musicas do Legiao";
    post2.assistir();
    post2.assistir(); // 2 views

    // Criando perfil
    Perfil meuPerfil;
    meuPerfil.nome = "Usuario USP";

    // Testando postagens
    if (meuPerfil.postar(&post1)) cout << "Post 1 publicado!" << endl;
    if (meuPerfil.postar(&post2)) cout << "Post 2 publicado!" << endl;
    
    // Tentando postar a mesma novamente (deve falhar)
    if (!meuPerfil.postar(&post1)) cout << "Erro: Postagem repetida ou Perfil cheio." << endl;

    // Resultados
    post1.imprimir();
    post2.imprimir();
    cout << "Total de Views no Perfil: " << meuPerfil.getTotalDeVisualizacoes() << endl;
}

int main() {
    teste();
    return 0;
}
