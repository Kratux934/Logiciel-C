#include <stdio.h>
#include "help.h"
#include "open_zip.h"
#include "bruteforce.h"
#include "decrypt_zip.h"
#include "explore_zip.h"
#include "extract_file.h"
#include <zip.h>

int main(int argc, char *argv[]) {
    // Ton code principal ici
    
    // Exemple d'utilisation de la fonction show_help()
    show_help();

    // Exemple d'utilisation de la fonction open_zip()
    open_zip("archive.zip");
    
    // Exemple d'utilisation de la fonction bruteforce_zip()
    bruteforce_zip("protected.zip", "dictionary.txt");
    
    // Exemple d'utilisation de la fonction decrypt_zip()
    decrypt_zip("encrypted.zip", "password123");
    
    // Exemple d'utilisation de la fonction explore_zip()
    explore_zip("decrypted.zip", "password123");
    
    // Exemple d'utilisation de la fonction extract_file()
    int extractionResult = extract_file("archive.zip", "password123", "file.txt", "output_directory");

    if (extractionResult) {
        printf("File extracted successfully.\n");
    } else {
        printf("Failed to extract the file.\n");
    }

    return 0;
}
