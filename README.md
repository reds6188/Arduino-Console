# Arduino-console

Evoluzione del monitor seriale di Arduino `Serial.print` che adotta una sintassi simile al `console.log` del Javascript.

Autore: **Daniele Rossi**

Versione: **1.2.0 (22-Dic-2022)**

## Costruttore di Classe

> `Console console;`

La classe viene dichiarata all'inteno del modulo e accessibile dall'esterno

## Metodi

### `line(style_t style, uint8_t length, bool new_line)`

Stampa una linea di lunghezza `length` con il carattere di stile `style` e va a capo se `new_line` è vera.

### `header(String title, style_t style, uint8_t length)`

Stampa un'intestazione che occupa 3 righe e `length` colonne contentente la stringa `title` incorniciata dal carattere di stile specificato da `style`.

I caratteri di stile a disposizione sono:

- `...` (`DOTTED`)
- `---` (`DASHED`)
- `===` (`DOUBLE_DASHED`)
- `___` (`LINE`)
- `~~~` (`WAVE`)
- `###` (`HASH`)
- `***` (`ASTERISK`)

### `writeTag(String tag)`

Stampa la stringa `tag` tra parentesi quadre e aggiunge uno spazio alla fine.

> `[ TAG    ] `

### `write(String tag, String message)`

Stampa una riga di testo `messsage` utilizzando la stringa `tag` come prefisso (tra parentesi quadre).

I tag hanno lunghezza massima di 6 caratteri, alcuni tag standard sono disponiili nell'omonimo file H.

> `[ TAG    ] Messaggio`

### `log(String tag, String message)`

STampa un messaggio con tag (come `write(String tag, String message)`) e posiziona il cursore su una nuova riga.

> `[ TAG    ] Messaggio`

### `void newLine(void)`

Posiziona il cursore su una nuova riga

### `setTagLength(uint8_t length)`

Imposta la lunghezza `length` massima per i tag.

## Cronologia Versioni

- `1.0.0` (13-Ott-2022) - Versione iniziale
- `1.1.0` (14-Ott-2022) - Aggiunto il metodo `setTagLength`
- `1.2.0` (22-Dic-2022) - Aggiunti i metodi `writeTag`, `write` e `newLine`