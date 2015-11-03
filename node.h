

using namespace std;

struct coord
{
    int x;
    int y;
}

class Node
{
    public:
        Node();
        Node(int x_g, int y_g, float score_g);
        
        coord get_position();
        
        float get_score();
    
    private:
        // Simple for now but class structure allows for growth
        //  -Could add in cost of goals at a node
        coord place;
        
        float score;
};
