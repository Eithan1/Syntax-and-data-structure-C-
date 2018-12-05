//
// Created by 张国梁 on 2018/8/9.
//

#include "Edge.h"

Edge::Edge(int nodeIndexA, int nodeIndexB, int weightValue) {
    m_iNodeIndexA = nodeIndexA;
    m_iNodeIndexB = nodeIndexB;
    m_iWeightValue = weightValue;
    m_bSelected = false;
}