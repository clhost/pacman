#pragma once

#include <string>

class WaveTracingAlgorithm {
    const static int width = 25;
    const static int height = 25;
    const static int WALL = -1;
    const static int BLANK = -2;

    int length;
    int Grid[height][width];
    int G[height][width] = { // рабочее поле
            {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            {-1,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-1,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-1},
            {-1,-2,-1,-1,-1,-1,-2,-1,-1,-1,-1,-2,-1,-2,-1,-1,-1,-1,-2,-1,-1,-1,-1,-2,-1},
            {-1,-2,-1,-2,-2,-1,-2,-1,-2,-2,-1,-2,-1,-2,-1,-2,-2,-1,-2,-1,-2,-2,-1,-2,-1},
            {-1,-2,-1,-1,-1,-1,-2,-1,-1,-1,-1,-2,-1,-2,-1,-1,-1,-1,-2,-1,-1,-1,-1,-2,-1},
            {-1,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-1},
            {-1,-2,-1,-1,-1,-1,-2,-1,-2,-1,-1,-1,-1,-1,-1,-1,-2,-1,-2,-1,-1,-1,-1,-2,-1},
            {-1,-2,-2,-2,-2,-2,-2,-1,-2,-2,-2,-2,-1,-2,-2,-2,-2,-1,-2,-2,-2,-2,-2,-2,-1},
            {-1,-1,-1,-1,-1,-1,-2,-1,-1,-1,-1,-2,-1,-2,-1,-1,-1,-1,-2,-1,-1,-1,-1,-1,-1},
            {-2,-2,-2,-2,-2,-1,-2,-1,-2,-2,-2,-2,-2,-2,-2,-2,-2,-1,-2,-1,-2,-2,-2,-2,-2},
            {-2,-2,-2,-2,-2,-1,-2,-1,-2,-1,-1,-1,-2,-1,-1,-1,-2,-1,-2,-1,-2,-2,-2,-2,-2},
            {-1,-1,-1,-1,-1,-1,-2,-1,-2,-1,-2,-2,-2,-2,-2,-1,-2,-1,-2,-1,-1,-1,-1,-1,-1},
            {-2,-2,-2,-2,-2,-2,-2,-2,-2,-1,-2,-2,-2,-2,-2,-1,-2,-2,-2,-2,-2,-2,-2,-2,-2},
            {-1,-1,-1,-1,-1,-1,-2,-1,-2,-1,-2,-2,-2,-2,-2,-1,-2,-1,-2,-1,-1,-1,-1,-1,-1},
            {-2,-2,-2,-2,-2,-1,-2,-1,-2,-1,-1,-1,-1,-1,-1,-1,-2,-1,-2,-1,-2,-2,-2,-2,-2},
            {-2,-2,-2,-2,-2,-1,-2,-1,-2,-2,-2,-2,-2,-2,-2,-2,-2,-1,-2,-1,-2,-2,-2,-2,-2},
            {-1,-1,-1,-1,-1,-1,-2,-1,-2,-1,-1,-1,-1,-1,-1,-1,-2,-1,-2,-1,-1,-1,-1,-1,-1},
            {-1,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-1,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-1},
            {-1,-2,-1,-1,-1,-1,-2,-1,-1,-1,-1,-2,-1,-2,-1,-1,-1,-1,-2,-1,-1,-1,-1,-2,-1},
            {-1,-2,-2,-2,-1,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-1,-2,-2,-2,-1},
            {-1,-1,-1,-2,-1,-2,-1,-2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-2,-1,-2,-1,-2,-1,-1,-1},
            {-1,-2,-2,-2,-2,-2,-1,-2,-2,-2,-2,-2,-1,-2,-2,-2,-2,-2,-1,-2,-2,-2,-2,-2,-1},
            {-1,-2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-2,-1,-2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-2,-1},
            {-1,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-1},
            {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}
    };
public:
    int px[width * height], py[width * height]; // координаты ячеек, входящих в путь
    int size;
    bool findPath(int sx, int sy, int ex, int ey);
private:
    void arrayCopy();
};