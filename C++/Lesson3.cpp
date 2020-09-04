#include "TXLib.h"

void girl();

void fox();

void house();

int main()

{
txCreateWindow (1800, 900);

txClear();

txSetColor (TX_BLACK, 5);

girl();

fox();

house();

return 0;

}

void girl()

{

txCircle (500, 200, 100);

txCircle (500 - 75, 200 + 550, 25);

txCircle (500 + 75, 200 + 550, 25);

txLine(500, 200 + 100, 500 - 200, 200 + 300);

txLine(500, 200 + 100, 500 + 200, 200 + 300);

txLine(500, 200 + 100, 500 - 100, 200 + 400);

txLine(500, 200 + 100, 500 + 100, 200 + 400);

txLine(500 - 100, 200 + 400, 500 + 100, 200 + 400);

txLine(500 - 50, 200 + 400, 500-50, 200 + 550);

txLine(500 + 50, 200 + 400, 500 + 50, 200 + 550);

txSetFillColor(RGB(255, 105, 180));

txFloodFill(500, 200 + 300);

txFloodFill(500 - 75, 200 + 550);

txFloodFill(500 + 75, 200 + 550);

txSetFillColor(RGB(255, 218, 185));

txFloodFill (500, 200);

}

void fox()

{

txEllipse (900 - 100, 350 - 50, 900 + 100, 350 + 50);

txLine (900 - 100, 350 - 100, 900 - 100, 350);

txLine (900 - 100, 350 - 100, 900, 350 - 50);

txLine (900 + 100, 350 - 100, 900 + 100, 350);

txLine (900 + 100, 350 - 100, 900, 350 - 50);

txEllipse (900 - 50, 350 + 50, 900 + 50, 350 + 250);

txLine (900, 350 + 250, 900 - 50, 350 + 300);

txLine (900, 350 + 50, 900 - 100, 350 + 150);

txLine (900, 350+250, 900+50, 350+300);

txLine (900, 350 + 50, 900 + 100, 350 + 150);

txPie (900 - 100, 350 + 300, 900, 350 + 400, 90, 90);

txPie (900, 350 + 300, 900 + 100, 350 + 400, 0, 90);

txSetFillColor(RGB(255, 69, 0));

txFloodFill (900 - 75, 350 - 50);

txFloodFill (900 + 75, 350 - 50);

txSetFillColor(RGB(255, 127, 80));

txFloodFill (900, 350);

txFloodFill (900, 350 + 150);

txSetFillColor(RGB(255, 69, 0));

txFloodFill (900 - 75, 350 + 325);

txFloodFill (900 + 75, 350 + 325);

}

void house()

{

txRectangle(1400 - 200, 500 - 200, 1400 + 200, 500 + 200);

txRectangle(1400 - 100, 500 - 100, 1400 + 100, 500 + 100 );

txLine(1400, 500 - 400, 1400 - 200, 500 - 200);

txLine(1400, 500 - 400, 1400 + 200, 500 - 200);

txLine(1400, 500 - 100, 1400, 500 + 100);

txLine(1400 - 100, 500, 1400 + 100, 500);

txSetFillColor(RGB(139, 62, 47));

txFloodFill (1400, 500 - 300);

txSetFillColor(RGB(255, 218, 185));

txFloodFill (1400, 500 - 150);

txSetFillColor(RGB(95, 158, 160));

txFloodFill (1400 - 50, 500 + 50);

txFloodFill (1400 + 50, 500 + 50);

txFloodFill (1400 - 50, 500 - 50);

txFloodFill (1400 + 50, 500 - 50);


}

