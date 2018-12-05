//
// Created by 张国梁 on 2018/8/9.
//

#ifndef TU_EDGE_H
#define TU_EDGE_H


class Edge {
public:
    Edge(int nodeIndexA = 0, int nodeIndexB = 0, int weightValue = 0);
    int m_iNodeIndexA;
    int m_iNodeIndexB;
    int m_iWeightValue;
    bool m_bSelected;

};


#endif //TU_EDGE_H
