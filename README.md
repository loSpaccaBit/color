<h1 align="center">Color 👋</h1>
<p>
  <img alt="Version" src="https://img.shields.io/badge/version-1.0.0-blue.svg?cacheSeconds=2592000" />
  <a href="https://github.com/kefranabg/readme-md-generator/graphs/commit-activity" target="_blank">
    <img alt="Maintenance" src="https://img.shields.io/badge/Maintained%3F-yes-green.svg" />
  </a>
</p>

> Libreria di supporto grafico C/C++

### 🏠 [Homepage](https://www.github.com/KekkoDev/color)
### ✅ [Esempi](https://github.com/KekkoDev/color#esempi)

## Prerequisites

- Compilatore C/C++

## Install

```sh
Installa .zip | tar.gz
```

## Usage Windows

Per utilizzare i colori è possibile sotituire il codice del colore con le MACRO già sviluppate.
```sh
color.foreground(10) 
color.foreground(GREEN)

color.resize_console(80,49); // ridimensionamento console
```
Per Windows è stato sviluppato anche la conversione dei caratteri UNICODE in UTF-16 ```_UF_16``` 
.resize_console(int,int); 
<br>

**TABELLA COLORI WINDOWS**
<img width="1121" alt="Screenshot 2022-12-16 alle 16 37 10" src="https://user-images.githubusercontent.com/91205851/208135450-931a677b-3ed5-42d3-9c51-e4bacaea0673.png">

## Usage MacOS/Linux

Per utilizzare i colori è possibile sotituire il codice del colore con le MACRO già sviluppate.
```sh
color.foreground("10"); 
color.foreground(GREEN);

color.resize_console("80","49"); // ridimensiona la console 
```
.resize_console(string,string);

**TABELLA COLORI UNIX**
![ansiColorTable](https://user-images.githubusercontent.com/91205851/208135542-392327d4-0156-463e-a2b9-aa15f3abf769.png)


## Esempi
Si consiglia di sviluppare un'interfaccia che si adatti per tutti i SO, e quindi di utilizzare tale sintassi
```sh
Color color;
#ifdef _WIN32
color.foreground(RED);
cout<<"Hello World\n";
color.reset();
#elif defined (__APPLE__) || defined(__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
 cout<<color.foreground(RED,"Hello World\n");
#endif
```


```sh
Color color;
#ifdef _WIN32
color.resize_console(800,600);
#elif defined (__APPLE__) || defined(__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
 color.resize_console("80","49");
#endif
cout<<"Hello Wordl!\n";
```

## Run 

Compilare il file src/main.cpp e far partire l'eseguibile
```sh
g++ main.cpp -o main 
```

## Author

👤 **Francesco Pio Nocerino**

* Website: https://www.github.com/KekkoDev
* Github: [@KekkoDEv](https://github.com/KekkoDEv)

## 🤝 Contributing

Contributions, issues and feature requests are welcome!<br />Feel free to check [issues page](https://github.com/kefranabg/readme-md-generator/issues). You can also take a look at the [contributing guide](https://github.com/kefranabg/readme-md-generator/blob/master/CONTRIBUTING.md).

## Show your support

Give a ⭐️ if this project helped you!

## 📝 License

Copyright © 2023 [Francesco Pio Nocerino](https://github.com/KekkoDEv).<br />
This project is [MIT](https://github.com/kefranabg/readme-md-generator/blob/master/LICENSE) licensed.





