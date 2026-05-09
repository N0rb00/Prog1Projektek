#include <stdio.h>
#include <string.h>

// Segédfüggvény a súgó kiírásához
void print_help() {

    printf("Program használata: ./a.out <nyelv> [opciók]\n\n");
    printf("Támogatott nyelvek:\n");
    printf("  c       - Alap C program generálása (alap.c)\n");
    printf("  py      - Alap Python program generálása (alap.py)\n");
    printf("  rust    - Alap Rust program generálása (alap.rs)\n");
    printf("  bash    - Alap Bash program generálása (alap.sh)\n\n");
    printf("Opciók:\n");
    printf("  -h, --help    - Megjeleníti ezt a súgót\n");
    printf("  --stdout      - Nem hoz létre fájlt, a kódot a képernyőre írja ki\n");

}

//-------------------------------------------------------------------
//Ez egy alap C program
void c_alap(const char* filenev, int use_stdout) {
    FILE *f = use_stdout ? stdout : fopen(filenev, "w");
    if (f == NULL) {
        printf("Hiba a fájl megnyitásakor!\n");
        return;
    }

    fprintf(f, "#include <stdio.h>\n");
    fprintf(f, "int main()\n");
    fprintf(f, "{\n");     
    fprintf(f, "    printf(\"Hello Világ!\\n\");\n");
    fprintf(f, "    return 0;\n");
    fprintf(f, "}\n");

    if (!use_stdout) {
        fclose(f);
        printf("Fájl sikeresen létrehozva: %s\n", filenev);
    }
}

//-------------------------------------------------------------------
//Ez egy alap Python program
void py_alap(const char* filenev, int use_stdout) {
    FILE *f = use_stdout ? stdout : fopen(filenev, "w");
    if (f == NULL) {
        printf("Hiba a fájl megnyitásakor!\n");
        return;
    }

    fprintf(f, "print(\"Hello Világ!\")\n");

    if (!use_stdout) {
        fclose(f);
        printf("Fájl sikeresen létrehozva: %s\n", filenev);
    }
}

//-------------------------------------------------------------------
//Ez egy alap Rust program
void rust_alap(const char* filenev, int use_stdout) {
    FILE *f = use_stdout ? stdout : fopen(filenev, "w");
    if (f == NULL) {
        printf("Hiba a fájl megnyitásakor!\n");
        return;
    }

    fprintf(f, "fn main() {\n");
    fprintf(f, "    println!(\"Hello Világ!\");\n");
    fprintf(f, "}\n");
    
    if (!use_stdout) {
        fclose(f);
        printf("Fájl sikeresen létrehozva: %s\n", filenev);
    }
}

//-------------------------------------------------------------------
//Ez egy alap Bash program
void bash_alap(const char* filenev, int use_stdout) {
    // "wb" mód, hogy Windowsról futtatva se kerüljön bele \r a WSL miatt!
    FILE *f = use_stdout ? stdout : fopen(filenev, "wb");
    if (f == NULL) {
        printf("Hiba a fájl megnyitásakor!\n");
        return;
    }

    fprintf(f, "#!/bin/bash\n");
    fprintf(f, "echo \"Hello Világ!\"\n");
    
    if (!use_stdout) {
        fclose(f);
        printf("Fájl sikeresen létrehozva: %s\n", filenev);
    }
}

//-------------------------------------------------------------------




int main(int argc, char *argv[]) {
    // Nincsen argumentum ellenőrzése
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            print_help();
            return 0; // Súgó kiírása után kilépünk
        }
    }

    // Melyik nyelv lett kiválasztva
    if (argc < 2) {
        printf("Hiba: Nincs megadva programnyelv!\n");
        printf("Segítségért használd a -h vagy --help paramétert.\n");
        return 1;
    }

    // 2. Argumentum ellenőrzése
    int use_stdout = 0;
    if (argc >= 3) {
        if (strcmp(argv[2], "--stdout") == 0) {
            use_stdout = 1;
        } else {
            printf("Hiba: Ismeretlen opció: %s\n", argv[2]);
            return 1;
        }
    }

    char *nyelv = argv[1];

    if (strcmp(nyelv, "c") == 0) {
        c_alap("alap.c", use_stdout);
    } 
    else if (strcmp(nyelv, "py") == 0) {
        py_alap("alap.py", use_stdout);
    } 
    else if (strcmp(nyelv, "rust") == 0) {
        rust_alap("alap.rs", use_stdout);
    } 
    else if (strcmp(nyelv, "bash") == 0) {
        bash_alap("alap.sh", use_stdout);
    } 
    else {
        printf("Hiba: Ismeretlen nyelv lett megadva: '%s'\n", nyelv);
        printf("A támogatott nyelvekért használd a --help paramétert.\n");
        return 1;
    }

    return 0;
}