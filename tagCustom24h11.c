#include <stdlib.h>
#include "tagCustom24h11.h"

static uint64_t codedata[6] = {
   0x0000000000ab624eUL,
   0x0000000000df099fUL,
   0x0000000000659fa1UL,
   0x0000000000201957UL,
   0x00000000003d4f7bUL,
   0x00000000008e3f12UL,
};
apriltag_family_t *tagCustom24h11_create()
{
   apriltag_family_t *tf = calloc(1, sizeof(apriltag_family_t));
   tf->name = strdup("tagCustom24h11");
   tf->h = 11;
   tf->ncodes = 6;
   tf->codes = codedata;
   tf->nbits = 24;
   tf->bit_x = calloc(24, sizeof(uint32_t));
   tf->bit_y = calloc(24, sizeof(uint32_t));
   tf->bit_x[0] = 1;
   tf->bit_y[0] = 1;
   tf->bit_x[1] = 2;
   tf->bit_y[1] = 1;
   tf->bit_x[2] = 3;
   tf->bit_y[2] = 1;
   tf->bit_x[3] = 4;
   tf->bit_y[3] = 1;
   tf->bit_x[4] = 5;
   tf->bit_y[4] = 1;
   tf->bit_x[5] = 2;
   tf->bit_y[5] = 2;
   tf->bit_x[6] = 6;
   tf->bit_y[6] = 1;
   tf->bit_x[7] = 6;
   tf->bit_y[7] = 2;
   tf->bit_x[8] = 6;
   tf->bit_y[8] = 3;
   tf->bit_x[9] = 6;
   tf->bit_y[9] = 4;
   tf->bit_x[10] = 6;
   tf->bit_y[10] = 5;
   tf->bit_x[11] = 5;
   tf->bit_y[11] = 2;
   tf->bit_x[12] = 6;
   tf->bit_y[12] = 6;
   tf->bit_x[13] = 5;
   tf->bit_y[13] = 6;
   tf->bit_x[14] = 4;
   tf->bit_y[14] = 6;
   tf->bit_x[15] = 3;
   tf->bit_y[15] = 6;
   tf->bit_x[16] = 2;
   tf->bit_y[16] = 6;
   tf->bit_x[17] = 5;
   tf->bit_y[17] = 5;
   tf->bit_x[18] = 1;
   tf->bit_y[18] = 6;
   tf->bit_x[19] = 1;
   tf->bit_y[19] = 5;
   tf->bit_x[20] = 1;
   tf->bit_y[20] = 4;
   tf->bit_x[21] = 1;
   tf->bit_y[21] = 3;
   tf->bit_x[22] = 1;
   tf->bit_y[22] = 2;
   tf->bit_x[23] = 2;
   tf->bit_y[23] = 5;
   tf->width_at_border = 8;
   tf->total_width = 10;
   tf->reversed_border = false;
   return tf;
}

void tagCustom24h11_destroy(apriltag_family_t *tf)
{
   free(tf->bit_x);
   free(tf->bit_y);
   free(tf->name);
   free(tf);
}
