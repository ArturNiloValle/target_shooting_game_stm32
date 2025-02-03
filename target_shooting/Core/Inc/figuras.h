#ifndef __FIGURAS_H__
#define __FIGURAS_H__

#include <stdint.h>

// estrutura para definicao de uma figura simples monocolor
typedef struct {
    const 	uint8_t width;
    		uint8_t height;
    const 	uint16_t *data;
} FigDef;


extern FigDef fig_target_shooting;
extern FigDef fig_gun_shot_title[];
extern FigDef soldado;


#endif
