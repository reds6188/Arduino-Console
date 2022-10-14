#ifndef CONSOLE_H_
#define CONSOLE_H_

#include <Arduino.h>
#include "tag.h"

typedef enum {
    DOTTED,             // ...
    DASHED,             // ---
    DOUBLE_DASHED,      // ===
    LINE,               // ___
    WAVE,               // ~~~
    HASH,               // ###
    ASTERISK,           // ***
} style_t;

class Console {
	public:
		Console(void);
        void line(style_t style, uint8_t length, bool newLine);
        void header(String title, style_t style, uint8_t length);
		void log(String tag, String str) ;
};

extern Console console;

#endif  /* CONSOLE_H_ */