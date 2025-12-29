#ifndef COLOUREDCONSOLE_COLOUREDCONSOLE_H
#define COLOUREDCONSOLE_COLOUREDCONSOLE_H

#ifdef _WIN32
  #ifdef BUILD_DLL
    #define API __declspec(dllexport)
  #else
    #define API __declspec(dllimport)
  #endif
#else
  #define API
#endif

typedef enum {
    CONSOLECOLOR_BLACK = 0,
    CONSOLECOLOR_RED = 1,
    CONSOLECOLOR_GREEN = 2,
    CONSOLECOLOR_YELLOW = 3,
    CONSOLECOLOR_BLUE = 4,
    CONSOLECOLOR_PURPLE = 5,
    CONSOLECOLOR_CYAN = 6,
    CONSOLECOLOR_LIGHT_GREY = 7,
    CONSOLECOLOR_GREY = 8,
    CONSOLECOLOR_LIGHT_RED = 9,
    CONSOLECOLOR_LIGHT_GREEN = 10,
    CONSOLECOLOR_LIGHT_YELLOW = 11,
    CONSOLECOLOR_LIGHT_BLUE = 12,
    CONSOLECOLOR_LIGHT_PURPLE = 13,
    CONSOLECOLOR_LIGHT_CYAN = 14,
    CONSOLECOLOR_WHITE = 15
} ConsoleColor;

API void setForeColor(ConsoleColor foreColor);
API void setBackColor(ConsoleColor backColor);
API void resetColor();
API void resetForeColor();
API void resetBackColor();

#endif