#ifndef TIMER_H
#define TIMER_H

#include <stdint.h>

typedef struct {
  uint32_t timer_load_value; //read/write
  uint32_t timer_actual_value; //read only
  uint32_t control; //read/write
  uint32_t interrupt_clear; // write only
  uint32_t interrupt_status; //read only
  uint32_t masked_interrupt_status; //read only
  uint32_t background_timer_load_value; //read/write
} rasp_pi_timer;

void initialize_timers();
//void timer_start();
int set_load_value(int timer_index, int value);
int get_current_value(int timer_index);
int set_background_load_value(int timer_index, int value);
int clear_interupt(int timer_index);
int set_32_bit_mode(int timer_index);
int start_timer(int timer_index);

rasp_pi_timer *timer_pointers[4];

#endif
