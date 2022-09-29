#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <vector>

namespace py = pybind11;

struct Point {
    long x, y;
};

std::vector<Point> solve(int a, int b, int c, int d) {
    std::vector<Point> vect;
    // Code goes here

    vect.push_back({1, 2});
    vect.push_back({3, 4});
    vect.push_back({5, 6});

    return vect;
}

// NOTE: The name given here must match the one given in CMakeLists.txt
PYBIND11_MODULE(coords, m) {
    // Declare the point class
    py::class_<Point>(m, "Point")
        .def(py::init<long, long>()) // Point takes 2 longs to construct
        .def_readonly("x", &Point::x)
        .def_readonly("y", &Point::y);

    // Declare the solve function
    m.def(
        "solve", // Name in python
        &solve,  // Address of function
        "Returns a vector of points containing the solution");
}
