#include <QCoreApplication>
#include <iostream>
#include <string>

#include "edge.h"
#include "graph.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::string pathGraph = "data//graph";

    graph *objGraph = new graph();
    objGraph->init(pathGraph);

    return a.exec();
}
