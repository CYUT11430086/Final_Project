// 五邊形（填滿） — 改為方形格子以避免變形
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    const int W = 61;
    const int H = 61; // 改為與 W 相同，避免縱向被壓扁
    vector<string> grid(H, string(W, ' '));

    const double PI = acos(-1.0);
    double cx = (W - 1) / 2.0;
    double cy = (H - 1) / 2.0;
    double r = min(cx, cy) - 2.0;

    // 計算五個頂點
    vector<double> vx(5), vy(5);
    for (int i = 0; i < 5; ++i) {
        double ang = -PI/2.0 + i * 2.0 * PI / 5.0;
        vx[i] = cx + cos(ang) * r;
        vy[i] = cy + sin(ang) * r;
    }

    // 掃描線填滿多邊形 (scanline)
    for (int y = 0; y < H; ++y) {
        double yscan = y + 0.5;
        vector<int> interxs;
        for (int i = 0; i < 5; ++i) {
            int j = (i + 1) % 5;
            double x0 = vx[i], y0 = vy[i];
            double x1 = vx[j], y1 = vy[j];
            if (y0 == y1) continue;
            double ymin = min(y0, y1);
            double ymax = max(y0, y1);
            if (yscan >= ymin && yscan < ymax) {
                double x = x0 + (yscan - y0) * (x1 - x0) / (y1 - y0);
                interxs.push_back((int)round(x));
            }
        }
        sort(interxs.begin(), interxs.end());
        for (size_t k = 0; k + 1 < interxs.size(); k += 2) {
            int xstart = interxs[k];
            int xend = interxs[k+1];
            if (xstart < 0) xstart = 0;
            if (xend >= W) xend = W - 1;
            for (int x = xstart; x <= xend; ++x) grid[y][x] = '*';
        }
    }

    // 印出結果
    for (int y = 0; y < H; ++y) {
        for (int x = 0; x < W; ++x) cout << grid[y][x];
        cout << '\n';
    }
    return 0;
}