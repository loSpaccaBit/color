#ifndef SUPPORTO_GRAFICA_H
#define SUPPORTO_GRAFICA_H
/**================================================================================================
 * *                                           INFO
 *  Autore    : Francesco Pio Nocerino
 *  @email    : kekko.dev16@gmail.com
 *  File      : supporto_grafica.h
 *  Versione  : 1.0
 *  Data      : 08/12/2022
 *  Descr     :
 * ? Libreria di supporto per la grafica in Win/Unix like e non
 *================================================================================================**/
#ifdef _WIN32
#include <windows.h>
#include <stdlib.h>
#endif
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#ifdef _WIN32 //! colori per console Win
#define _UTF_16 SetConsoleOutputCP(65001);

#define BLUE 1
#define BLUE_INTESE 9
#define BLUE_BLACK 144
#define BLUE_BLUE 145
#define BLUE_GREEN 146
#define BLUE_SKY 147
#define BLUE_RED 148
#define BLUE_PINK 149
#define BLUE_BROWN 150
#define BLUE_WHITE 151
#define BLUE_GREY 152
#define BLUE_BLUE_INTESE 153
#define BLUE_GREEN_INTENSE 154
#define BLUE_SKY_INTENSE 155
#define BLUE_RED_INTENSE 156
#define BLUE_PINK_INTENSE 157
#define BLUE_YELLOW_INTENSE 158
#define BLUE_WHITE_INTENSE 159

#define GREEN 2
#define GREEN_INTESE 10
#define GREEN_BLACK 160
#define GREEN_BLUE 161
#define GREEN_GREEN 162
#define GREEN_SKY 163
#define GREEN_RED 164
#define GREEN_PINK 165
#define GREEN_BROWN 166
#define GREEN_WHITE 167
#define GREEN_GREY 168
#define GREEN_BLUE_INTESE 169
#define GREEN_GREEN_INTENSE 170
#define GREEN_SKY_INTENSE 171
#define GREEN_RED_INTENSE 172
#define GREEN_PINK_INTENSE 173
#define GREEN_YELLOW_INTENSE 174
#define GREEN_WHITE_INTENSE 175

#define SKY 3
#define SKY_INTENSE 11
#define SKY_BLACK 176
#define SKY_BLUE 177
#define SKY_GREEN 178
#define SKY_SKY 179
#define SKY_RED 180
#define SKY_PINK 181
#define SKY_BROWN 182
#define SKY_WHITE 183
#define SKY_GREY 184
#define SKY_BLUE_INTESE 185
#define SKY_GREEN_INTENSE 186
#define SKY_SKY_INTENSE 187
#define SKY_RED_INTENSE 188
#define SKY_PINK_INTENSE 189
#define SKY_YELLOW_INTENSE 190
#define SKY_WHITE_INTENSE 191

#define RED 4
#define RED_INTENSE 12
#define RED_BLACK 192
#define RED_BLUE 193
#define RED_GREEN 194
#define RED_SKY 195
#define RED_RED 196
#define RED_PINK 197
#define RED_BROWN 198
#define RED_WHITE 199
#define RED_GREY 200
#define RED_BLUE_INTESE 201
#define RED_GREEN_INTENSE 202
#define RED_SKY_INTENSE 203
#define RED_RED_INTENSE 204
#define RED_PINK_INTENSE 205
#define RED_YELLOW_INTENSE 206
#define RED_WHITE_INTENSE 207

#define PINK 5
#define PINK_INTENSE 13
#define PINK_BLACK 208
#define PINK_BLUE 209
#define PINK_GREEN 210
#define PINK_SKY 211
#define PINK_RED 212
#define PINK_PINK 213
#define PINK_BROWN 214
#define PINK_WHITE 215
#define PINK_GREY 216
#define PINK_BLUE_INTESE 217
#define PINK_GREEN_INTENSE 218
#define PINK_SKY_INTENSE 219
#define PINK_RED_INTENSE 220
#define PINK_PINK_INTENSE 221
#define PINK_YELLOW_INTENSE 222
#define PINK_WHITE_INTENSE 223

#define YELLOW 6
#define YELLOW_INTENSE 14
#define YELLOW_BLACK 224
#define YELLOW_BLUE 225
#define YELLOW_GREEN 226
#define YELLOW_SKY 227
#define YELLOW_RED 228
#define YELLOW_PINK 229
#define YELLOW_BROWN 230
#define YELLOW_WHITE 231
#define YELLOW_GREY 232
#define YELLOW_BLUE_INTESE 233
#define YELLOW_GREEN_INTENSE 234
#define YELLOW_SKY_INTENSE 235
#define YELLOW_RED_INTENSE 236
#define YELLOW_PINK_INTENSE 237
#define YELLOW_YELLOW_INTENSE 238
#define YELLOW_WHITE_INTENSE 239

#define WHITE 7
#define WHITE_INTENSE 15
#define WHITE_BLACK 240
#define WHITE_BLUE 241
#define WHITE_GREEN 242
#define WHITE_SKY 243
#define WHITE_RED 244
#define WHITE_PINK 245
#define WHITE_BROWN 246
#define WHITE_WHITE 247
#define WHITE_GREY 248
#define WHITE_BLUE_INTESE 249
#define WHITE_GREEN_INTENSE 250
#define WHITE_SKY_INTENSE 251
#define WHITE_RED_INTENSE 252
#define WHITE_PINK_INTENSE 253
#define WHITE_YELLOW_INTENSE 254
#define WHITE_WHITE_INTENSE 255

#define GREY 8
#define GREY_BLACK 128
#define GREY_BLUE 129
#define GREY_GREEN 130
#define GREY_SKY 131
#define GREY_RED 132
#define GREY_PINK 133
#define GREY_BROWN 134
#define GREY_WHITE 135
#define GREY_GREY 136
#define GREY_BLUE_INTESE 137
#define GREY_GREEN_INTENSE 138
#define GREY_SKY_INTENSE 139
#define GREY_RED_INTENSE 140
#define GREY_PINK_INTENSE 141
#define GREY_YELLOW_INTENSE 142
#define GREY_WHITE_INTENSE 143

#elif defined(__APPLE__) || defined(__LINUX__) || defined(__gnu_linux__) || defined(__linux__) //! colori per console Unix (basate su ANSI-color)
#define BLUE "4"
#define BLUE_INTESE "12"
#define BLUE_DARK "18"
#define BLUE_LIGHT "21"
#define BLUE_ULTRA_LIGHT "27"
#define BLUE_LIGHT_SUPER "33"

#define GREEN "2"
#define GREEN_INTESE "10"
#define GREEN_DARK "22"
#define GREEN_LIGHT "28"
#define GREEN_ULTRA_LIGHT "40"
#define GREEN_LIGHT_SUPER "46"

#define SKY "14"
#define SKY_BLACK "39"
#define SKY_LIGHT "45"
#define SKY_ULTRA_LIGHT "81"
#define SKY_LIGHT_SUPER "51"

#define RED "1"
#define RED_INTENSE "9"
#define RED_BLACK "124"
#define RED_LIGHT "196"

#define PINK "5"
#define PINK_INTENSE "13"
#define PINK_DARK "164"
#define PINK_ULTRA_LIGHT "201"
#define PINK_LIGHT_SUPER "213"

#define YELLOW "3"
#define YELLOW_INTENSE "11"
#define YELLOW_DARK "220"
#define YELLOW_LIGHT "226"

#define WHITE "245"
#define WHITE_INTENSE "15"

#define GREY "7"

#define BLACK "8"
#define ULTRA_BLACK "232"
#endif

void cl(); // pulisce console

class Color // classe color
{
public:
#ifdef _WIN32
    void foreground(int cl) // permette di colorare il testo e non, e sia di applicare uno "sfondo" al testo
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, cl);
    }
    void reset()
    {
        foreground(WHITE); // resetta il colore della console in bianco
    }
    void resize_console(int h, int w)
    {
        HWND console = GetConsoleWindow();
        RECT ConsoleRect;
        GetWindowRect(console, &ConsoleRect);

        MoveWindow(console, ConsoleRect.left, ConsoleRect.top, h, w, TRUE);
    }
#elif defined(__APPLE__) || defined(__LINUX__) || defined(__gnu_linux__) || defined(__linux__)

    string foreground(string t, string out) // permette di colorare solo il testo e non
    {
        string r = "\033[38;5;" + t + "m" + out + "\033[0m";
        return r;
    }
    string foreground(string t, int o)
    {
        string out = to_string(o);
        string r = "\033[38;5;" + t + "m" + out + "\033[0m";
        return r;
    }
    string foreground(string t, float o)
    {
        string out = to_string(o);
        string r = "\033[38;5;" + t + "m" + out + "\033[0m";
        return r;
    }
    string foreground(string t, char o)
    {
        string out(1, o);
        string r = "\033[38;5;" + t + "m" + out + "\033[0m";
        return r;
    }
    string background(string t, string bg, string out) // permette di colorare il testo(e non) ed aggiungendo anche uno sfondo
    {
        string r = "\033[38;5;" + t + ";48;5;" + bg + "m" + out + "\033[0m";
        return r;
    }
    string background(string t, string bg, int o)
    {
        string out = to_string(o);
        string r = "\033[38;5;" + t + ";48;5;" + bg + "m" + out + "\033[0m";
        return r;
    }
    string background(string t, string bg, float o)
    {
        string out = to_string(o);
        string r = "\033[38;5;" + t + ";48;5;" + bg + "m" + out + "\033[0m";
        return r;
    }
    string background(string t, string bg, char o)
    {
        string out(1, o);
        string r = "\033[38;5;" + t + ";48;5;" + bg + "m" + out + "\033[0m";
        return r;
    }
    void resize_console(string h, string w)
    {
        cout.flush();
        cout << "\e[8;" + w + ";" + h + "t";
    }
#endif
};

void cl()
{
#ifdef _WIN32
    system("cls");
#elif defined(__APPLE__) || defined(__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
#endif
}

#endif /* SUPPORTO_GRAFICA_H */
