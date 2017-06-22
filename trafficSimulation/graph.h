#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <string>
#include "edge.h"
#include <fstream>
#include <iostream>

class graph
{
private:
    std::vector<edge*> edges;
    int numberOfVertex;
public:
    graph();
    void init(std::string &path);
    void readFromFile(std::string &path);
};

#endif // GRAPH_H
