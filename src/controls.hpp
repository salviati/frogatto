#ifndef CONTROLS_HPP_INCLUDED
#define CONTROLS_HPP_INCLUDED

#include <vector>

namespace controls {

enum CONTROL_ITEM {
	CONTROL_UP,
	CONTROL_DOWN,
	CONTROL_LEFT,
	CONTROL_RIGHT,
	CONTROL_ATTACK,
	CONTROL_JUMP,
	NUM_CONTROLS,
};

void new_level(int starting_cycle, int nplayers, int local_player);
void read_local_controls();

void get_control_status(int cycle, int player, bool* output);

void read_control_packet(const char* buf, size_t len);
void write_control_packet(std::vector<char>& v);

int first_invalid_cycle();
void mark_valid();

int num_players();
int num_errors();
int packets_received();
int cycles_behind();

int their_highest_confirmed();
int last_packet_size();

void debug_dump_controls();

}

#endif
