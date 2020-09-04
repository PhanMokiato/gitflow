#include "TXLib.h"

void OpenTitles();

void Movegirl ();

void Movefox ();

void Movefoxgirl2 ();

void EndTitles();

void Dialog (int x, int y, char text[], COLORREF color);

void Background (COLORREF colorSky, COLORREF colorGrass);

void girl(int x, int y, double sizeX, double sizeY, int leftHand, int rightHand, COLORREF colorDress, COLORREF colorHead);

void fox(int x, int y, double sizeX, double sizeY, int leftHand, int rightHand, COLORREF color1, COLORREF color2, COLORREF color3);

void house(int x, int y, double sizeX, double sizeY, COLORREF color4, COLORREF color5, COLORREF color6);

int main()

{
txCreateWindow (1700, 900);

//txClear();

txSetColor (TX_BLACK, 5);

OpenTitles();

Movegirl ();

Movefox ();

Movefoxgirl2 ();

EndTitles();

return 0;

}

void Movegirl ()

{

int t = 0;

while (t<=60)

{

Background (RGB(135, 206, 250), RGB(150, 255, 21));

txSetFillColor (TX_WHITE);

txClear();

Dialog (200, 50, "Помогите, спасите!\n Моя сестра упала", RGB(130, 251, 255));

Dialog (800, 170, "Я помогу!", RGB(255, 69, 0));

txSetColor (TX_BLACK, 5);

girl(400, 200 + 10*sin(t), 0.7, 0.7, t%30*10 ,t%30*10, RGB(130, 251, 255), RGB(227, 146, 89));

fox(900, 350, 1, 1, 0, 0, RGB(255, 69, 0), RGB(255, 127, 80), RGB(255, 69, 0));

fox(1100, 350, 0.6, 0.6, 0, 0, RGB(255, 60, 20), RGB(255, 140, 100), RGB(255, 60, 20));

house(1400, 500, 1, 1, RGB(139, 62, 47), RGB(255, 218, 185), RGB(95, 158, 160));

girl(650, 200 + 10 * t, 0.5, 0.5, t%30*10, t%30*10, RGB(255, 105, 180), RGB(255, 218, 185));

t++;

txSleep (1);
}

}


void Movefox ()

{

int t = 0;

while (t<=60)

{

Background (RGB(135, 206, 250), RGB(150, 255, 21));

txSetFillColor (TX_WHITE);

txClear();

Dialog (200, 50, "Спасибо", RGB(130, 251, 255));

Dialog (1060, 170, "Папа, ты молодец!", RGB(255, 60, 20));

Dialog (800, 170 + 8 * t, "Не за что!", RGB(255, 60, 20));

txSetColor (TX_BLACK, 5);

girl(400, 200 + 10*sin(t), 0.7, 0.7, t%30*10 ,t%30*10, RGB(130, 251, 255), RGB(227, 146, 89));

fox(900, 350 + 8 * t, 1, 1, 0, 0, RGB(255, 69, 0), RGB(255, 127, 80), RGB(255, 69, 0));

fox(1100, 350, 0.6, 0.6, 0, 0, RGB(255, 60, 20), RGB(255, 140, 100), RGB(255, 60, 20));

house(1400, 500, 1, 1, RGB(139, 62, 47), RGB(255, 218, 185), RGB(95, 158, 160));

girl(650, 850, 0.5, 0.5, 0, 0, RGB(255, 105, 180), RGB(255, 218, 185));

t++;

txSleep (1);
}

}

void Movefoxgirl2 ()

{

int t = 0;

while (t<=60)

{

Background (RGB(135, 206, 250), RGB(150, 255, 21));

txSetFillColor (TX_WHITE);

txClear();

girl(400, 200 + 10*sin(t), 0.7, 0.7, t%30*10 ,t%30*10, RGB(130, 251, 255), RGB(227, 146, 89));

fox(900, 800 - 10 * t, 1, 1, 0, 0, RGB(255, 69, 0), RGB(255, 127, 80), RGB(255, 69, 0));

fox(1100, 350, 0.6, 0.6, 0, 0, RGB(255, 60, 20), RGB(255, 140, 100), RGB(255, 60, 20));

house(1400, 500, 1, 1, RGB(139, 62, 47), RGB(255, 218, 185), RGB(95, 158, 160));

girl(650, 850 - 10 * t, 0.5, 0.5, 0, 0, RGB(255, 105, 180), RGB(255, 218, 185));

t++;

txSleep (1);
}

}

void OpenTitles()

{

int t = 0;

int y = 450;

while (t < 110)

{

txSetFillColor (RGB (255, 51, 92));

txClear();

txSetColor (RGB (255, 89, 0));

txSelectFont ("Arial", 100, 25, true, false, false, false, 0);

txTextOut (450, y - 100, "Сказка о храбром лисе");

txSetColor (RGB (255, 255, 255));

txSelectFont ("Century Gothic", 70, 15, false, false, true, false, 0);

txTextOut (450, y + 100, "Автор - Дарья Мокиевец");

txSetColor (TX_BLACK, 5);

y -= 10;

t++;

txSleep (5);

}

}

void EndTitles()

{

int t = 0;

int y = 950;

while (t < 110)

{

txSetFillColor (RGB (255, 51, 92));

txClear();

txSetColor (RGB (0, 0, 0));

txSelectFont ("Arial", 100, 20, true, false, false, false, 0);

txTextOut (350, y - 100, "Вот и сказке конец, а кто слушал - молодец!");

txSetColor (TX_BLACK, 5);

y -= 10;

t++;

txSleep (5);

}

}

void Dialog (int x, int y, char text[], COLORREF color)

{

txSetColor (color);

txSelectFont ("Comic Sans MS", 40, 8, false, false, false, false, 0);

txDrawText (x, y, x + 200, y + 100, text, DT_CENTER);

}

void Background (COLORREF colorSky, COLORREF colorGrass)

{

txSetFillColor (colorSky);

txRectangle (0, 0, 1700, 450);

txSetFillColor (colorGrass);

txRectangle (0, 450, 1700, 900);

}

void girl(int x, int y, double sizeX, double sizeY, int leftHand, int rightHand, COLORREF colorDress, COLORREF colorHead)

{

txCircle (x + 0 * sizeX, y + 0 * sizeY, 100 * sizeX);

txCircle (x - 75 * sizeX, y + 550 * sizeY, 25 * sizeX);

txCircle (x + 75 * sizeX, y + 550 * sizeY, 25 * sizeX);

txLine(x + 0 * sizeX, y + 100 * sizeY, x - 200  * sizeX, y + (300 - leftHand) * sizeY);//левая рука

txLine(x + 0 * sizeX, y + 100 * sizeY, x + 200  * sizeX, y + (300 - rightHand) * sizeY);

txLine(x + 0 * sizeX, y + 100 * sizeY, x - 100 * sizeX, y + 400 * sizeY);

txLine(x + 0 * sizeX, y + 100 * sizeY, x + 100 * sizeX, y + 400 * sizeY);

txLine(x - 100 * sizeX, y + 400 * sizeY, x + 100 * sizeX, y + 400 * sizeY);

txLine(x - 50 * sizeX, y + 400 * sizeY, x - 50 * sizeX, y + 550 * sizeY);

txLine(x + 50 * sizeX, y + 400 * sizeY, x + 50 * sizeX, y + 550 * sizeY);

txSetFillColor(colorDress);

txFloodFill(x + 0 * sizeX, y + 300 * sizeY);

txFloodFill(x - 75 * sizeX, y + 550 * sizeY);

txFloodFill(x + 75 * sizeX, y + 550 * sizeY);

txSetFillColor(colorHead);

txFloodFill (x + 0 * sizeX, y + 0 * sizeY);

}

void fox(int x, int y, double sizeX, double sizeY, int leftHand, int rightHand, COLORREF color1, COLORREF color2, COLORREF color3)

{

txEllipse (x - 100 * sizeX, y - 50 * sizeY, x + 100 * sizeX, y + 50 * sizeY);

txLine (x - 100 * sizeX, y - 100 * sizeY, x - 100 * sizeX, y + 0 * sizeY);

txLine (x - 100 * sizeX, y - 100 * sizeY, x + 0 * sizeX, y - 50 * sizeY);

txLine (x + 100 * sizeX, y - 100 * sizeY, x + 100 * sizeX, y + 0 * sizeY);

txLine (x + 100 * sizeX, y - 100 * sizeY, x + 0 * sizeX, y - 50 * sizeY);

txEllipse (x - 50 * sizeX, y + 50 * sizeY, x + 50 * sizeX, y + 250 * sizeY);

txLine (x + 0 * sizeX, y + 250 * sizeY, x - 50 * sizeX, y + 300 * sizeY);

txLine (x + 0 * sizeX, y + 50 * sizeY, x - 100 * sizeX, y + (150 - leftHand) * sizeY);

txLine (x + 0 * sizeX, y + 250 * sizeY, x + 50 * sizeX, y + 300 * sizeY);

txLine (x + 0 * sizeX, y + 50 * sizeY, x + 100 * sizeX, y + (150 - rightHand) * sizeY);

txPie (x - 100 * sizeX, y + 300 * sizeY, x + 0 * sizeX, y + 400 * sizeY, 90, 90);

txPie (x + 0 * sizeX, y + 300 * sizeY, x + 100 * sizeX, y + 400 * sizeY, 0, 90);

txSetFillColor(color1);

txFloodFill (x - 75 * sizeX, y - 50 * sizeY);

txFloodFill (x + 75 * sizeX, y - 50 * sizeY);

txSetFillColor(color2);

txFloodFill (x + 0 * sizeX, y + 0 * sizeY);

txFloodFill (x + 0 * sizeX, y + 150 * sizeY);

txSetFillColor(color3);

txFloodFill (x - 75 * sizeX, y + 325 * sizeY);

txFloodFill (x + 75 * sizeX, y + 325 * sizeY);

}

void house(int x, int y, double sizeX, double sizeY, COLORREF color4, COLORREF color5, COLORREF color6)

{

txRectangle(x - 200 * sizeX, y - 200 * sizeY, x + 200 * sizeX, y + 200 * sizeY);

txRectangle(x - 100 * sizeX, y - 100 * sizeY, x + 100 * sizeX, y + 100 * sizeY);

txLine(x + 0 * sizeX, y - 400 * sizeY, x - 200 * sizeX, y - 200 * sizeY);

txLine(x + 0 * sizeX, y - 400 * sizeY, x + 200 * sizeX, y - 200 * sizeY);

txLine(x + 0 * sizeX, y - 100 * sizeY, x + 0 * sizeX, y + 100 * sizeY);

txLine(x - 100 * sizeX, y + 0 * sizeY, x + 100 * sizeX, y + 0 * sizeY);

txSetFillColor(color4);

txFloodFill (x + 0 * sizeX, y - 300 * sizeY);

txSetFillColor(color5);

txFloodFill (x + 0 * sizeX, y - 150 * sizeY);

txSetFillColor(color6);

txFloodFill (x - 50 * sizeX, y + 50 * sizeY);

txFloodFill (x + 50 * sizeX, y + 50 * sizeY);

txFloodFill (x - 50 * sizeX, y - 50 * sizeY);

txFloodFill (x + 50 * sizeX, y - 50 * sizeY);


}

