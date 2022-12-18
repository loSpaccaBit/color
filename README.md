**Color** una libreria sviluppata per la grafica in C++

* I colori utilizzati nelle macro sono Brillanti per scegliere un colore personalizzato basta seguire la seguente sintassi:

> Windows `color.foreground(codiceColore` (int)

***

> Unix `color.foreground(codiceColore)` | `color.background(codiceColore)` (string)

***

Per Windows è disponibile il comando `color.reset()` che resetta il colore della console in bianco, e' possibile anche l'abilitazione UTF-16 con la macro `_UTF_16`.
In oltre e disponibile una funzione `cl()` che permette di pulire la console sia su Win/Unix

***
Per implementare i colori in più sistemi utilizzare il seguente template:


`Color color;`
`#ifdef _WIN32`
  `color.foreground(RED);`
`#elif defined (__APPLE__) || defined(__LINUX__) || defined(__gnu_linux__) || defined(__linux__)`
  `cout<<color.foreground(RED);`
`#endif`
***

**TABELLA COLORI WINDOWS**
<img width="1121" alt="Screenshot 2022-12-16 alle 16 37 10" src="https://user-images.githubusercontent.com/91205851/208135450-931a677b-3ed5-42d3-9c51-e4bacaea0673.png">


***

**TABELLA COLORI UNIX**
![ansiColorTable](https://user-images.githubusercontent.com/91205851/208135542-392327d4-0156-463e-a2b9-aa15f3abf769.png)
