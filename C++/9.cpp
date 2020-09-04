#include "TXLib.h"

void MoveMosquito();

void MoveFrog();

void MoveFrogScooterMosquito();

void MoveFrogMosquito();

void OpenTitles();

void EndTitles();

void Dialog (int x, int y, char text[], COLORREF color);

void Background (COLORREF colorSky, COLORREF colorGround, int amtTree, int t);

void forest (int x, int y, int amtTree, int t);

void scooter (int x, int y, double sizeX, double sizeY, COLORREF colorWheal, COLORREF colorFrame);

void frog (int x, int y, double sizeX, double sizeY, double zoomEye, int leftHand, int rightHand,

COLORREF color);

void tree (int x, int y, double sizeX, double sizeY, int leftEye, int rightEye, COLORREF color);

void mosquito (int x, int y, double sizeX, double sizeY, double zoomEye, int Dwings, int turn,

COLORREF color);

int main()

{

txCreateWindow (800, 600);

OpenTitles();

MoveMosquito();

MoveFrog();

MoveFrogScooterMosquito();

MoveFrogMosquito();

EndTitles();

return 0;

}

void MoveMosquito()

{

int t = 0;

while (t <= 160)

{

Background (RGB (190, 240, 240), RGB (200, 250, 200), 6, t);

mosquito (100 + 5*t, 240, 1, 1, t%2, t%15 - 5, 1, RGB (190, 190, 190));

Dialog (100 + 5*t, 180, "Как плохо быть\n голодным!", TX_RED);

t++;

txSleep (80);

}

}

void MoveFrog()

{

int t = 0;

while (t <= 130)

{

Background (RGB (190, 240, 240), RGB (200, 250, 200), 6, t);

frog (10 + 10*t, 485 - 2*t + 10*sin(t), 0.6, 0.6, t%3, t%20 * 5, t%10 * 10, RGB ( 30, 190, 50));

Dialog(20 + 10*t, 395 - 2*t + 10*sin(t), "Какая прекрасная\n погодка!", TX_RED);

t++;

txSleep (80);

}

}

void MoveFrogScooterMosquito()

{

int t = 0;

while (t <= 100)

{

Background (RGB (90, 140, 220), RGB (10, 90, 15), 8, t);

frog (695 - 10*t, 485 - 3*t, 0.6, 0.6, t%3, t%10 * 15, t%8 * 15, RGB ( 30, 190, 50));

mosquito (750 - 11*t, 480 - 4*t, 1, 1, t%2, t%15 - 5, -1, RGB (190, 190, 190));

scooter (635 - 10*t, 510 - 3*t, 0.8, 0.8, TX_BLUE, TX_RED);

t++;

txSleep (80);

}

}

void MoveFrogMosquito()

{

int t = 0;

while (t <= 171)

{

Background (RGB (90, 140, 220), RGB (10, 90, 15), 4, t);

mosquito ( 0 + 2*t, 380 + 1*t, 1, 1, t%2, t%15 - 5, 1, TX_RED);

Dialog (-35 + 2*t, 320 + 1*t, "Беги, лягушка,\n беги!", TX_LIGHTRED);

frog (0 + 3*t, 385 + 2*t + 20*sin(t), 0.3, 0.6, t%3, t%10 * 15, t%10 * 15, RGB ( 30, 190, 50));

Dialog (5 + 3*t, 315 + 2*t + 20*sin(t), "Прыг! Скок!", RGB ( 30, 190, 50));

t++;

txSleep (80);

}

}

void OpenTitles()

{

int t = 0;

int y = 700;



while (t < 110)

{

txSetFillColor (RGB (190, 250, 115));

txClear();

txSetColor (RGB (150, 35, 135));

txSelectFont ("Arial", 100, 25, 5);

txTextOut (100, y, "Приключения лягушки");

txSetColor (RGB (70, 50, 210));

txSelectFont ("Calibri", 60, 15, true, false, false, false, 30);

txTextOut (150, y + 200, "Автор: Комар");

txSetColor (RGB (225, 60, 115));

txSelectFont ("Comic Sans MS", 50, 16, false, true, false, false, -10);

txTextOut (350, y + 200, "Продюсеры: Елки");

y -= 10;

t++;

txSleep (50);

}

}

void EndTitles()

{

int t = 0;

int y = 700;

while (t < 110)

{

txSetFillColor (RGB (190, 250, 115));

txClear();

txSetColor (RGB (150, 35, 135));

txSelectFont ("Arial", 100, 25, 5);

txTextOut (300, y, "КОНЕЦ");

txSetColor (RGB (50, 50, 210));

txSelectFont ("Calibri", 60, 15);

txTextOut (100, y + 200, "При создании мультфильма никто не пострадал!");

y -= 10;

t++;

txSleep (50);

}

}

void Dialog (int x, int y, char text[], COLORREF color)

{

txSetColor (color);

txSelectFont ("Calibri", 20);

txDrawText (x, y, x + 100, y + 50, text, DT_CENTER);

}

void Background (COLORREF colorSky, COLORREF colorGround, int amtTree, int t)

{

txSetFillColor (colorSky);

txClear();

txSetFillColor (colorGround);

txRectangle (0, 300, 800, 600);

forest (50, 50, amtTree, t);

}

void forest (int x, int y, int amtTree, int t)

{

int step = 800/amtTree;

while (x <= 800)

{

tree (x, y, 1, 1, t%7, t%7, RGB (145, 210, 80));

x += step;

}

}

void scooter (int x, int y, double sizeX, double sizeY, COLORREF colorWheal, COLORREF colorFrame)

{

txSetColor (colorFrame, 2);

txSetFillColor (colorWheal);

txCircle (x - 5 * sizeX, y + 45 * sizeY, 25 * sizeX);

txCircle (x + 145 * sizeX, y + 45 * sizeY, 25 * sizeX);

txLine (x - 5 * sizeX, y + 45 * sizeY, x + 20 * sizeX, y - 80 * sizeY);

txLine (x - 5 * sizeX, y - 70 * sizeY, x + 40 * sizeX, y - 90 * sizeY);

txLine (x + 0 * sizeX, y + 0 * sizeY, x + 45 * sizeX, y + 45 * sizeY);

txLine (x + 45 * sizeX, y + 45 * sizeY, x + 145 * sizeX, y + 45 * sizeY);

}

void frog (int x, int y, double sizeX, double sizeY, double zoomEye, int leftHand, int rightHand,

COLORREF color)

{

txSetColor (RGB (220, 110, 0), 2);

txSetFillColor (color);

txEllipse (x - 50 * sizeX, y + 75 * sizeY, x + 0 * sizeX, y + 100 * sizeY);

txEllipse (x + 0 * sizeX, y + 75 * sizeY, x + 50 * sizeX, y + 100 * sizeY);

txEllipse (x - 50 * sizeX, y - 50 * sizeY, x + 50 * sizeX, y + 100 * sizeY);

txEllipse (x - 40 * sizeX, y - 110 * sizeY, x - 10 * sizeX, y - 60 * sizeY);

txEllipse (x + 40 * sizeX, y - 110 * sizeY, x + 10 * sizeX, y - 60 * sizeY);

txEllipse (x - 50 * sizeX, y - 80 * sizeY, x + 50 * sizeX, y - 30 * sizeY);

txLine (x - 100 * sizeX, y + (50 - rightHand) * sizeY, x - 45 * sizeX, y + 0 * sizeY);

txLine (x + 100 * sizeX, y + (50 - leftHand) * sizeY, x + 45 * sizeX, y + 0 * sizeY);

txArc (x - 40 * sizeX, y - 80 * sizeY, x + 40 * sizeX, y - 40 * sizeY, 180, 180);

txSetColor (TX_BLACK);

txSetFillColor (TX_BLACK);

txCircle (x - 25 * sizeX, y - 100 * sizeY, 5 * sizeX * zoomEye);

txCircle (x + 25 * sizeX, y - 100 * sizeY, 5 * sizeX * zoomEye);

}

void mosquito (int x, int y, double sizeX, double sizeY, double zoomEye, int Dwings, int turn,

COLORREF color)

{

txSetColor (TX_BLACK);

txSetFillColor (color);

txEllipse (x - 60 * sizeX*turn, y + 0 * sizeY, x - 5 * sizeX*turn, y + 20 * sizeY);

txEllipse (x - 14 * sizeX*turn, y - 10 * sizeY, x + 14 * sizeX*turn, y + 10 * sizeY);

txSetFillColor (TX_WHITE);

txCircle (x - 5 * sizeX*turn, y - 10 * sizeY, 5 * sizeX * zoomEye);

txCircle (x + 5 * sizeX*turn, y - 10 * sizeY, 5 * sizeX * zoomEye);

txSetFillColor (TX_BLACK);

txCircle (x - 5 * sizeX*turn, y - 10 * sizeY, 2 * sizeX * zoomEye);

txCircle (x + 5 * sizeX*turn, y - 10 * sizeY, 2 * sizeX * zoomEye);

txSetColor (TX_BLACK, 2);

txLine (x, y, x + 25 * sizeX*turn, y + 5 * sizeY);

txLine (x - 25 * sizeX*turn, y + 20 * sizeY, x - 27 * sizeX*turn, y + 30 * sizeY);

txLine (x - 30 * sizeX*turn, y + 20 * sizeY, x - 32 * sizeX*turn, y + 30 * sizeY);

txLine (x - 40 * sizeX*turn, y + 20 * sizeY, x - 42 * sizeX*turn, y + 30 * sizeY);

txLine (x - 45 * sizeX*turn, y + 20 * sizeY, x - 47 * sizeX*turn, y + 30 * sizeY);

txSetColor (TX_BLACK);

txSetFillColor (RGB (200, 250, 250));

const POINT wings[9] = {{x - 25 * sizeX*turn, y + 5 * sizeY},

{x - 15 * sizeX*turn, y - 15 * sizeY + Dwings},

{x - 20 * sizeX*turn, y - 20 * sizeY + Dwings},

{x - 30 * sizeX*turn, y - 17 * sizeY + Dwings},

{x - 35 * sizeX*turn, y - 5 * sizeY + Dwings},

{x - 40 * sizeX*turn, y - 16 * sizeY + Dwings},

{x - 55 * sizeX*turn, y - 20 * sizeY + Dwings},

{x - 45 * sizeX*turn, y - 10 * sizeY + Dwings},

{x - 35 * sizeX*turn, y + 5 * sizeY}};

txPolygon (wings, 9);

}

void tree (int x, int y, double sizeX, double sizeY, int leftEye, int rightEye, COLORREF color)

{

txSetColor (RGB ( 75, 70, 40), 2);

txSetFillColor (RGB (170, 145, 20));

txRectangle (x - 10 * sizeX, y + 260 * sizeY, x + 10 * sizeX, y + 300 * sizeY);

txSetColor (RGB ( 60, 115, 5), 2);

txSetFillColor (color);

const POINT crown[11] = {{x + 0 * sizeX, y + 0 * sizeY},

{x + 75 * sizeX, y + 100 * sizeY},

{x + 10 * sizeX, y + 100 * sizeY},

{x + 75 * sizeX, y + 190 * sizeY},

{x + 10 * sizeX, y + 190 * sizeY},

{x + 75 * sizeX, y + 280 * sizeY},

{x - 75 * sizeX, y + 280 * sizeY},

{x - 10 * sizeX, y + 190 * sizeY},

{x - 75 * sizeX, y + 190 * sizeY},

{x - 10 * sizeX, y + 100 * sizeY},

{x - 75 * sizeX, y + 100 * sizeY}};

txPolygon (crown, 11);

txSetColor (TX_BLACK);

txSetFillColor (TX_WHITE);

txEllipse (x - 28 * sizeX, y + 70 * sizeY,

x - 2 * sizeX, y + 30 * sizeY);

txEllipse (x + 28 * sizeX, y + 70 * sizeY,

x + 2 * sizeX, y + 30 * sizeY);

txSetFillColor (TX_BLACK);

txCircle (x - 15 * sizeX + rightEye, y + 48 * sizeY, 5 * sizeX);

txCircle (x + 15 * sizeX + leftEye, y + 48 * sizeY, 5 * sizeX);

}
