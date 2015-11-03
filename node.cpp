#include "node.h"

Node::Node()
{
    place.x = -1;
    place.y = -1;
    score = -1;
}

Node::Node(int x_g, int y_g, float score_g)
{
    place.x = x_g;
    place.y = y_g;
    score = score_g;
}

coord Node::get_position()
{
    return place;
}

float Node::get_score()
{
    return score;
}
