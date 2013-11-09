/*
	DMAEX Hybrid-HRTF Additions by p5yc0runn3r founder of
	Armed, Pissed & Dangerous clan.
*/

#ifndef __SND_DMAHD_H__
#define __SND_DMAHD_H__

#ifndef NO_DMAHD

//qboolean dmaHD_LoadSound(sfx_t *sfx);
qboolean dmaHD_Enabled();
qboolean dmaHD_Init();
void dmaHD_ResampleSfx( sfx_t *sfx, int inrate, int inwidth, byte *data, qboolean compressed);

void dmaHD_SoundInfo(void);
void dmaHD_Respatialize( int entityNum, const vec3_t head, vec3_t axis[3], int inwater );
void dmaHD_Update( void );
void dmaHD_SoundList(void);

#endif

#endif//__SND_DMAEX_H__
