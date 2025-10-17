#include <stdio.h>
#include <string.h>

#define CORREO_ELECTRONICO "Rivero@gmail.com"
#define PASS_VALIDA "91218"
#define LARGO_MAXIMO 50

int validarCredenciales(char emailIngresado[], char passIngresada[]) {
    int coincidencia_mail;
    int coincidencia_pass;

    coincidencia_mail = strcmp(emailIngresado, CORREO_ELECTRONICO);
    coincidencia_pass = strcmp(passIngresada, PASS_VALIDA);

    if (coincidencia_mail == 0 && coincidencia_pass == 0) {
        return 1; 

    } else {
        return 0; 
    }
}

int main() {
    char mail_usuario[LARGO_MAXIMO];
    char clave_usuario[LARGO_MAXIMO];
    int acceso_permitido = 0; 

    printf("\nSistema de Autenticacion Simple\n");
    printf("--------------------------------\n");

    printf("Correo: ");

    if (scanf("%s", mail_usuario) != 1) {
        printf("Error de lectura.\n");
        return 1;
    }

    printf("Clave: ");
    if (scanf("%s", clave_usuario) != 1) {
        printf("Error de lectura.\n");
        return 1;
    }
    
    acceso_permitido = validarCredenciales(mail_usuario, clave_usuario);

    printf("\n");
    if (acceso_permitido == 1) {
        printf("ACCESO CONCEDIDO: Credenciales correctas. Bienvenido!\n");
    } else {
        printf("ACCESO DENEGADO: El correo o la clave no coinciden.\n");
    }

    return 0;
}
