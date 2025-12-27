struct OperationData {
    const char * operation;
    const int start[2];
    const int end[2];
};

bool ** initialize_lights(bool initial_state);

struct OperationData parse_operation_string(const string[]);

void turn_on(int start[2], int end[2], bool * lights[]);

void toggle(int start[2], int end[2], bool * lights[]);

void turn_off(int start[2], int end[2], bool * lights[]);

int get_number_of_lit_lights(bool * lights[]);

int ** initialize_lights_with_brightness_controls(int initial_state);

int turn_on_ancient_nordic_elvish(int start[2], int end[2], int * lights[]);

int toggle_ancient_nordic_elvish(int start[2], int end[2], int * lights[]);

int turn_off_ancient_nordic_elvish(int start[2], int end[2], int * lights[]);

int calculate_total_brightness(int * lights[]);