//main.c

#include <stdio.h>
#include "perfil.h"

int main() {
    PerfilRedeSocial* perfilUsuario = criarPerfil("Fabio", "Morro bento", "926954724", "Fabiolapp@email.com", 20, 'M');

    printf("Informacoes do Perfil:\n");
    printf("Nome: %s\n", perfilUsuario->nome);
    printf("Localizacao: %s\n", perfilUsuario->localizacao);
    printf("Telefone: %s\n", perfilUsuario->telefone);
    printf("E-mail: %s\n", perfilUsuario->email);
    printf("Idade: %d anos\n", perfilUsuario->idade);
    printf("Sexo: %c\n", perfilUsuario->sexo);

    if (ehMaiorDeIdade(perfilUsuario)) {
        printf("O usuario e maior de idade.\n");
    } else {
        printf("O usuario e menor de idade.\n");
    }

    atualizarLocalizacao(perfilUsuario, "Talatona");
    atualizarTelefone(perfilUsuario, "92738484");
    atualizarEmail(perfilUsuario, "Fabiolaum@email.com");

    printf("\nInformacoes Atualizadas do Perfil:\n");
    printf("Localizacao: %s\n", perfilUsuario->localizacao);
    printf("Telefone: %s\n", perfilUsuario->telefone);
    printf("E-mail: %s\n", perfilUsuario->email);

    liberarPerfil(perfilUsuario);

    return 0;
}

