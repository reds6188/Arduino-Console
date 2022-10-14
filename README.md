# Arduino-console

Evoluzione del monitor seriale di Arduino `Serial.print` che adotta una sintassi simile al `console.log` del Javascript.

Autore: **Daniele Rossi**

Versione: **1.1.0 (14-Ott-2022)**

## Costruttore di Classe

> `Console console;`

La classe viene dichiarata all'inteno del modulo e accessibile dall'esterno

## Metodi

### `line(style_t style, uint8_t length, bool newLine)`

Stampa una linea di lunghezza `length` con il carattere di stile `style` e va a capo se `newLine` è vera.

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

### `log(String tag, String message)`

Stampa una riga di testo `messsage` utilizzando la stringa `tag` come prefisso (tra parentesi quadre).

I tag hanno lunghezza massima di 6 caratteri, alcuni tag standard sono disponiili nell'omonimo file H.

### `setTagLength(uint8_t length)`

Imposta la lunghezza `length` massima per i tag.

> `[ TAG    ] Messaggio`

## Cronologia Versioni

- `1.0.0` (13-Ott-2022) - Versione iniziale
- `1.1.0` (14-Ott-2022) - Aggiunto il metodo `setTagLength`