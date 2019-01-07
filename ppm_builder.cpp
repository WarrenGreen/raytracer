#include <iostream>
#include "vec3.h"

int main() {
    int nx = 800;
    int ny = 400;
    std::cout << "P3\n" << nx << " " << ny << "\n255\n";
    for (int j = ny-1; j>=0; j--){ 
        for (int i = 0; i< nx; i++) {
            vec3 color_vector(float(i) / float(nx), float(j) / float(ny), 0.2); // r,g,b
            int ir = int(255.99 * color_vector[0]);
            int ig = int(255.99 * color_vector[1]);
            int ib = int(255.99 * color_vector[2]);
            std::cout << ir << " " << ig << " " << ib << "\n";
        }
    }
}