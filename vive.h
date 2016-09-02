#ifndef VIVE_H
#define VIVE_H

#include <stdint.h>
#include <stdbool.h>
#include <hidapi.h>

#include "openhmdi.h"
#include "magic.h"

typedef enum
{
	VIVE_IRQ_SENSORS = 32,
} vive_irq_cmd;

typedef struct 
{
	int16_t acc[3];
	int16_t rot[3];
	int32_t	time_ticks;
	uint8_t seq;
} vive_sensor_sample;

typedef struct
{
	uint8_t report_id;
	vive_sensor_sample samples[3];
} vive_sensor_packet;

typedef struct {
    ohmd_device base;

    hid_device* hmd_handle;
    hid_device* imu_handle;
} vive_priv;

bool vive_decode_sensor_packet(vive_sensor_packet* pkt, const unsigned char* buffer, int size);

#endif
