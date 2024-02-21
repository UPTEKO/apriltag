#include <stdlib.h>
#include "tagCustom12h6.h"

static uint64_t codedata[1] = {
   0x0000000000000feaUL,
};
apriltag_family_t *tagCustom12h6_create()
{
   apriltag_family_t *tf = calloc(1, sizeof(apriltag_family_t));
   tf->name = strdup("tagCustom12h6");
   tf->h = 6;
   tf->ncodes = 1;
   tf->codes = codedata;
   tf->nbits = 12;
   tf->bit_x = calloc(12, sizeof(uint32_t));
   tf->bit_y = calloc(12, sizeof(uint32_t));
   tf->bit_x[0] = 1;
   tf->bit_y[0] = 1;
   tf->bit_x[1] = 2;
   tf->bit_y[1] = 1;
   tf->bit_x[2] = 3;
   tf->bit_y[2] = 1;
   tf->bit_x[3] = 4;
   tf->bit_y[3] = 1;
   tf->bit_x[4] = 4;
   tf->bit_y[4] = 2;
   tf->bit_x[5] = 4;
   tf->bit_y[5] = 3;
   tf->bit_x[6] = 4;
   tf->bit_y[6] = 4;
   tf->bit_x[7] = 3;
   tf->bit_y[7] = 4;
   tf->bit_x[8] = 2;
   tf->bit_y[8] = 4;
   tf->bit_x[9] = 1;
   tf->bit_y[9] = 4;
   tf->bit_x[10] = 1;
   tf->bit_y[10] = 3;
   tf->bit_x[11] = 1;
   tf->bit_y[11] = 2;
   tf->width_at_border = 6;
   tf->total_width = 8;
   tf->reversed_border = false;
   return tf;
}

void tagCustom12h6_destroy(apriltag_family_t *tf)
{
   free(tf->bit_x);
   free(tf->bit_y);
   free(tf->name);
   free(tf);
}
