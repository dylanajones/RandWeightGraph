using namespace std;

#include "node.h"

struct cost
{
    double mean;
    double var;
}

class rand_weight_graph
{
    public:
    
        rand_weight_graph();
    
    private:
    
        int num_nodes;
    
        Node* vert_list;
        
        int** cost_mat;
}
