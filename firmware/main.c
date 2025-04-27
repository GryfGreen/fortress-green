#include <stdio.h>
#include <unistd.h>

// Ваши цвета (RGB)
#define COLOR_GREEN "\x1B[38;2;230;242;230m"
#define COLOR_PURPLE "\x1B[38;2;185;153;212m"
#define COLOR_RESET "\x1B[0m"

int main() {
    printf(COLOR_GREEN "🛡️ Крепость от Green запущена!\n" COLOR_RESET);
    printf(COLOR_PURPLE "• Логотип загружен\n• Цвета настроены\n" COLOR_RESET);
    sleep(2);
    return 0;
}
