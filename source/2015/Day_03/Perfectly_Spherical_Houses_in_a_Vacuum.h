typedef struct Node {
    int position[2];
    struct Node * child;
} Node;

int calculate_number_of_visited_houses(const char * instructions);

int calculate_number_of_visited_houses_with_robo_santa(const char * instructions);