// perfil.h

#ifndef PERFIL_H
#define PERFIL_H

typedef struct {
    char nome[50];
    char localizacao[50];
    char telefone[15];
    char email[100];
    int idade;
    char sexo;
} PerfilRedeSocial;

PerfilRedeSocial* criarPerfil(const char* nome, const char* localizacao, const char* telefone, const char* email, int idade, char sexo);
int ehMaiorDeIdade(const PerfilRedeSocial* perfil);
char verificarSexo(const PerfilRedeSocial* perfil);
void atualizarLocalizacao(PerfilRedeSocial* perfil, const char* novaLocalizacao);
void atualizarTelefone(PerfilRedeSocial* perfil, const char* novoTelefone);
void atualizarEmail(PerfilRedeSocial* perfil, const char* novoEmail);
void liberarPerfil(PerfilRedeSocial* perfil);

#endif

