/*
VROOM (Vehicle Routing Open-source Optimization Machine)
Copyright (C) 2015, Julien Coupey

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef TSP_SYM_H
#define TSP_SYM_H
#include <list>
#include <unordered_map>
#include "./typedefs.h"
#include "./tsp.h"
#include "./undirected_graph.h"
#include "./edge.h"
#include "./matrix.h"

class tsp_sym: public tsp{
  
private:
  undirected_graph<distance_t> _graph;
  
public:
  tsp_sym(const matrix<distance_t>& m);

  undirected_graph<distance_t> get_graph() const;
};

#endif
