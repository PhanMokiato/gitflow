#include "TXLib.h"

void girl(int x, int y);

void fox(int x, int y);

void house(int x, int y);

int main()

{
txCreateWindow (1800, 900);

txClear();

txSetColor (TX_BLACK, 5);

girl(400, 200);

girl(700, 200);

fox(900, 350);

house(1400, 500);


return 0;

}

void girl(int x, int y)

{

txCircle (x, y, 100);

txCircle (x - 75, y + 550, 25);

txCircle (x + 75, y + 550, 25);

txLine(x, y + 100, x - 200, y + 300);

txLine(x, y + 100, x + 200, y + 300);

txLine(x, y + 100, x - 100, y + 400);

txLine(x, y + 100, x + 100, y + 400);

txLine(x - 100, y + 400, x + 100, y + 400);

txLine(x - 50, y + 400, x - 50, y + 550);

txLine(x + 50, y + 400, x + 50, y + 550);

txSetFillColor(RGB(255, 105, 180));

txFloodFill(x, y + 300);

txFloodFill(x - 75, y + 550);

txFloodFill(x + 75, y + 550);

txSetFillColor(RGB(255, 218, 185));

txFloodFill (x, y);

}

void fox(int x, int y)

{

txEllipse (x - 100, y - 50, x + 100, y + 50);

txLine (x - 100, y - 100, x - 100, y);

txLine (x - 100, y - 100, x, y - 50);

txLine (x + 100, y - 100, x + 100, y);

txLine (x + 100, y - 100, x, y - 50);

txEllipse (x - 50, y + 50, x + 50, y + 250);

txLine (x, y + 250, x - 50, y + 300);

txLine (x, y + 50, x - 100, y + 150);

txLine (x, y + 250, x + 50, y + 300);

txLine (x, y + 50, x + 100, y + 150);

txPie (x - 100, y + 300, x, y + 400, 90, 90);

txPie (x, y + 300, x + 100, y + 400, 0, 90);

txSetFillColor(RGB(255, 69, 0));

txFloodFill (x - 75, y - 50);

txFloodFill (x + 75, y - 50);

txSetFillColor(RGB(255, 127, 80));

txFloodFill (x, y);

txFloodFill (x, y + 150);

txSetFillColor(RGB(255, 69, 0));

txFloodFill (x - 75, y + 325);

txFloodFill (x + 75, y + 325);

}

void house(int x, int y)

{

txRectangle(x - 200, y - 200, x + 200, y + 200);

txRectangle(x - 100, y - 100, x + 100, y + 100 );

txLine(x, y - 400, x - 200, y - 200);

txLine(x, y - 400, x + 200, y - 200);

txLine(x, y - 100, x, y + 100);

txLine(x - 100, y, x + 100, y);

txSetFillColor(RGB(139, 62, 47));

txFloodFill (x, y - 300);

txSetFillColor(RGB(255, 218, 185));

txFloodFill (x, y - 150);

txSetFillColor(RGB(95, 158, 160));

txFloodFill (x - 50, y + 50);

txFloodFill (x + 50, y + 50);

txFloodFill (x - 50, y - 50);

txFloodFill (x + 50, y - 50);


}

