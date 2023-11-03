// perfil.c

#include "perfil.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

PerfilRedeSocial* criarPerfil(const char* nome, const char* localizacao, const char* telefone, const char* email, int idade, char sexo) {
    PerfilRedeSocial* novoPerfil = (PerfilRedeSocial*)malloc(sizeof(PerfilRedeSocial));
    if (novoPerfil == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        exit(1);
    }

    strcpy(novoPerfil->nome, nome);
    strcpy(novoPerfil->localizacao, localizacao);
    strcpy(novoPerfil->telefone, telefone);
    strcpy(novoPerfil->email, email);
    novoPerfil->idade = idade;
    novoPerfil->sexo = sexo;

    return novoPerfil;
}

int ehMaiorDeIdade(const PerfilRedeSocial* perfil) {
    return perfil->idade >= 18;
}

char verificarSexo(const PerfilRedeSocial* perfil) {
    return perfil->sexo;
}

void atualizarLocalizacao(PerfilRedeSocial* perfil, const char* novaLocalizacao) {
    strcpy(perfil->localizacao, novaLocalizacao);
}

void atualizarTelefone(PerfilRedeSocial* perfil, const char* novoTelefone) {
    strcpy(perfil->telefone, novoTelefone);
}

void atualizarEmail(PerfilRedeSocial* perfil, const char* novoEmail) {
    strcpy(perfil->email, novoEmail);
}

void liberarPerfil(PerfilRedeSocial* perfil) {
    free(perfil);
}

