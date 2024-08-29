// 5 es literal factorial en funcion con recursion  (lit lo que hice antes)
// Entonces voy a hacer un codigo backan en este punto y luego continueare los otros 10 ejercicios

//cortesia de chat gpt
//
// este es un programa que se crea se ejecuta y se borra en tiempo de ejecucion, ta bacan

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Nombre del archivo temporal
    char *filename = "generated_program.c";
    
    // Abrir el archivo para escribir
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error abriendo el archivo");
        return 1;
    }
    
    // Escribir el código C en el archivo
    fprintf(fp, "#include <stdio.h>\n\n");
    fprintf(fp, "int main() {\n");
    fprintf(fp, "    printf(\"Este es un programa generado y ejecutado en tiempo de ejecucion!\\n\");\n");
    fprintf(fp, "    return 0;\n");
    fprintf(fp, "}\n");
    
    // Cerrar el archivo
    fclose(fp);
    
    // Compilar el programa generado
    if (system("gcc generated_program.c -o generated_program") != 0) {
        perror("Error al compilar el programa generado");
        return 1;
    }
    
    // Ejecutar el programa compilado
    printf("Ejecutando el programa generado...\n\n");
    system("generated_program.exe");
    
    // Limpiar los archivos generados
    system("del generated_program.c generated_program.exe");
    
    return 0;
}
