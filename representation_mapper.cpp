#include <pybind11/pybind11.h>
#include <glop-2.2/version2.2/src/sprouts/position.h>
#include <glop-2.2/version2.2/src/global.h>
#include <pybind11/stl.h>
#include <list>
namespace py = pybind11;


PYBIND11_MODULE(sprouts, handle){
    py::class_<Position>(
        handle, "Position"
    )
    .def(py::init<const Line&>())
    .def("export_to_string", &Position::exportToString)
    .def("start_position", &Position::startPosition)
    .def("compute_children", &Position::compute_children)
    .def("canonize", &Position::canonize)
    .def("is_terminal_position", &Position::is_terminal_position)
    .def("get_children", [](Position &self){
        list<Line> out;
        for(auto child : self.children){
            out.push_back(child);
        }
        return out;
    })
    ;
}