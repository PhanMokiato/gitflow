#include "TXLib.h"

void girl(int x, int y, double sizeX, double sizeY, int leftHand, int rightHand, COLORREF colorDress, COLORREF colorHead);

void fox(int x, int y, double sizeX, double sizeY, int leftHand, int rightHand, COLORREF color1, COLORREF color2, COLORREF color3);

void house(int x, int y, double sizeX, double sizeY, COLORREF color4, COLORREF color5, COLORREF color6);

int main()

{
txCreateWindow (1800, 900);

txClear();

txSetColor (TX_BLACK, 5);

girl(400, 200, 0.7, 0.7, 0, 0, RGB(130, 251, 255), RGB(227, 146, 89));

girl(650, 200, 0.5, 0.5, 0, 0, RGB(255, 105, 180), RGB(255, 218, 185));

fox(900, 350, 1, 1, 0, 0, RGB(255, 69, 0), RGB(255, 127, 80), RGB(255, 69, 0));

house(1400, 500, 1, 1, RGB(139, 62, 47), RGB(255, 218, 185), RGB(95, 158, 160));


return 0;

}

void girl(int x, int y, double sizeX, double sizeY, int leftHand, int rightHand, COLORREF colorDress, COLORREF colorHead)


{

txCircle (x + 0 * sizeX, y + 0 * sizeY, 100 * sizeX);

txCircle (x - 75 * sizeX, y + 550 * sizeY, 25 * sizeX);

txCircle (x + 75 * sizeX, y + 550 * sizeY, 25 * sizeX);

txLine(x + 0 * sizeX, y + 100 * sizeY, x - (200 - leftHand) * sizeX, y + 300 * sizeY);

txLine(x + 0 * sizeX, y + 100 * sizeY, x + (200 - rightHand) * sizeX, y + 300 * sizeY);

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

