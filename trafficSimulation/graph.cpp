#include "graph.h"

graph::graph()
{

}

void graph::init(std::string &path)
{
    this->readFromFile(path);
}


void graph::readFromFile(std::string &path)
{
    std::ifstream fileGraph(path);

    int startVertex = -1;
    int endVertex = -1;
    double length = -1;
    bool directed;

    while(fileGraph >> startVertex >> endVertex >> length >> directed)
    {
        std::cout << startVertex << endVertex << length << directed << std::endl;
    }
}
