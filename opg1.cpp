#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cmath>
#include <tuple>
#include <iomanip>
#include <cstdlib>
#include "opg1.h"
#include <vulkan/vulkan.h>

#define M_PI 3.14159265358979323846

using namespace std;

double f(double x) {
    return sin(x);
}

double deriv(double x, double h) {
    double ans;
    ans = (f(x + h) - f(x));
          return ans / h;
}

std::vector<Vertex> getVertices1() {
    double a = 0.0;
    double b = 2 * M_PI;
    int n = 100;
    double h = (b - a) / n;
    vector<tuple<int, float, float, float, string>> data;
    vector<Vertex> Vertices;

    for (int i = 0; i < n; ++i) {
        float x = a + i * h;
        float y = f(x);
        float dy = deriv(x, h);
        float z=0;
        string color = (dy >= 0) ? "red" : "green";
        Vertices.push_back(Vertex{x,y,z,1,0,0,0});

        data.emplace_back(i, x, y, dy, color);
    }

    ofstream file("graph_data.txt");
    if (file.is_open()) {
        int i = 0;
        for (const auto& tup : data) {
            file << fixed << setprecision(6);
            file << " "
                 << " n: " << get<0>(tup)
                 << " x: " << get<1>(tup)
                 << " y: " << get<2>(tup)
                 << " dy: " << get<3>(tup)
                 << " " << get<4>(tup) << "\n";
        }

        file.close();
        cout << "Lagret graf i 'graph_data.txt'" << endl << "Filen aapnes- :" << endl;

        //system("notepad.exe graph_data.txt && echo Filen ble lukket.");

    }
    else {
        cerr << "Filen kan ikke aapnes!" << endl;
    }

    return Vertices;
}
