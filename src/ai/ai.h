#ifndef __AI__
#define __AI__

#include <stdint.h>
#include <unistd.h>
#include "node.h"
#include "priority_queue.h"

void solve(char const *path, bool show_solution);
void freeNode(sokoban_t* init_data, node_t* node);

#endif
