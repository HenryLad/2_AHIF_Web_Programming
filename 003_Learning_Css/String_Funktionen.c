#include <stdio.h>
gcc String_Funktionen -o app && ./app

// Funktion zum Berechnen der Länge eines Strings
int strlen_custom(const char *str) {
    const char *temp = str;
    while (*temp != '\0') {
        temp++;
    }
    return temp - str;
}

// Funktion zum Kopieren eines Strings
char* strcpy_custom(char *dest, const char *src) {
    char *temp = dest;
    while ((*temp++ = *src++) != '\0');
    return dest;
}
// Funktion zum Vergleichen von zwei Strings
int strcmp_custom(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}
// Funktion zum Verketten von zwei Strings
char* strcat_custom(char *dest, const char *src) {
    char *temp = dest;
    while (*temp != '\0') {
        temp++;
    }
    while ((*temp++ = *src++) != '\0');
    return dest;
}


// Teilstring suchen
const char *strstr_custom(const char *haystack, const char *needle) {
    while (*haystack) {
        const char *h = haystack;
        const char *n = needle;
        
        while (*h && *n && (*h == *n)) {
            h++;
            n++;
        }
        
        if (!*n) {
            return haystack;  // Teilstring gefunden
        }

        haystack++;
    }

    return NULL;  // Teilstring nicht gefunden
}

// Teilstring kopieren
char *strncpy_custom(char *dest, const char *src, size_t n) {
    char *temp = dest;
    while (n && (*temp++ = *src++)) {
        n--;
    }
    return dest;
}

// Teilstring verketten
char *strncat_custom(char *dest, const char *src, size_t n) {
    char *temp = dest;
    while (*temp) {
        temp++;
    }

    while (n && (*temp++ = *src++)) {
        n--;
    }

    return dest;
}

// Teilstring vergleichen
int strncmp_custom(const char *str1, const char *str2, size_t n) {
    while (n && *str1 && (*str1 == *str2)) {
        str1++;
        str2++;
        n--;
    }

    if (n == 0) {
        return 0;  // Die ersten n Zeichen sind gleich
    }

    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

// Leerraum am Anfang und Ende eines Strings entfernen
char *trim_custom(char *str) {
    char *end;

    // Leerzeichen am Ende entfernen
    while (isspace((unsigned char)*str)) {
        str++;
    }

    if (*str == '\0') {
        return str;  // Der gesamte String besteht aus Leerzeichen
    }

    // Leerzeichen am Anfang entfernen
    end = str + strlen_custom(str) - 1;
    while (end > str && isspace((unsigned char)*end)) {
        end--;
    }

    // Null-Zeichen am Ende setzen, um den neuen String zu beenden
    *(end + 1) = '\0';

    return str;
}

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";

    // Länge eines Strings
    size_t length = strlen_custom(str1);
    printf("Length of str1: %zu\n", length);

    // String kopieren
    char copy[20];
    strcpy_custom(copy, str1);
    printf("Copy of str1: %s\n", copy);

    // String vergleichen
    int result = strcmp_custom(str1, str2);
    printf("Comparison result: %d\n", result);

    // Teilstring suchen
    const char *substring = strstr_custom("Hello, World!", "World");
    if (substring != NULL) {
        printf("Substring found: %s\n", substring);
    } else {
        printf("Substring not found\n");
    }

    // Teilstring kopieren
    char copy_sub[20];
    strncpy_custom(copy_sub, str1, 3);
    printf("Copy of first 3 characters of str1: %s\n", copy_sub);

    // Teilstring verketten
    char concat[20] = "Hello";
    strncat_custom(concat, " World", 5);
    printf("After strncat: %s\n", concat);

    // Teilstring vergleichen
    int cmp_result = strncmp_custom("abc", "abcd", 3);
    printf("Comparison result: %d\n", cmp_result);

    // Leerraum am Anfang und Ende entfernen
    char trimmed_str[] = "   Trim me!   ";
    printf("Before trim: \"%s\"\n", trimmed_str);
    trim_custom(trimmed_str);
    printf("After trim: \"%s\"\n", trimmed_str);

    return 0;
