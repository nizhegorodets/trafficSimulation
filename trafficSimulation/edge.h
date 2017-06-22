#ifndef EDGE_H
#define EDGE_H

#include <vector>

class edge
{
private:
    int startVertex;
    int endVertex;
    // if edge is directed then true
    bool directionFlag;
    double length;
    std::vector<int> nextEdges;
    std::vector<int> prevEdges;
public:
    edge();
    edge(int inStartVertex, int inEndVertex, bool inDirectionFlag, double inLength)
        : startVertex(inStartVertex), endVertex(inEndVertex), directionFlag(inDirectionFlag), length(inLength){}
};

#endif // EDGE_H
