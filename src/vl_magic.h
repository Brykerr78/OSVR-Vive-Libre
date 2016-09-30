/*
 * OpenHMD
 *
 * Copyright (C) 2013 Fredrik Hultin
 * Copyright (C) 2013 Jakob Bornecrantz
 *
 * Vive Libre
 *
 * Copyright (C) 2016 Lubosz Sarnecki <lubosz.sarnecki@collabora.co.uk>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Suite 500,
 * Boston, MA 02110-1335, USA.
 */

#pragma once

#include <cstdint>
#include <vector>

static const std::vector<uint8_t> vive_magic_power_on = {
	0x04, 0x78, 0x29, 0x38, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01,
	0xa8, 0x0d, 0x76, 0x00, 0x40, 0xfc, 0x01, 0x05, 0xfa, 0xec, 0xd1, 0x6d, 0x00,
	0x00, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa8, 0x0d, 0x76, 0x00, 0x68, 0xfc,
	0x01, 0x05, 0x2c, 0xb0, 0x2e, 0x65, 0x7a, 0x0d, 0x76, 0x00, 0x68, 0x54, 0x72,
	0x00, 0x18, 0x54, 0x72, 0x00, 0x00, 0x6a, 0x72, 0x00, 0x00, 0x00, 0x00,
};

static const std::vector<uint8_t> vive_magic_power_off1 = {
	0x04, 0x78, 0x29, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
	0x30, 0x05, 0x77, 0x00, 0x30, 0x05, 0x77, 0x00, 0x6c, 0x4d, 0x37, 0x65, 0x40,
	0xf9, 0x33, 0x00, 0x04, 0xf8, 0xa3, 0x04, 0x04, 0x00, 0x00, 0x00, 0x70, 0xb0,
	0x72, 0x00, 0xf4, 0xf7, 0xa3, 0x04, 0x7c, 0xf8, 0x33, 0x00, 0x0c, 0xf8, 0xa3,
	0x04, 0x0a, 0x6e, 0x29, 0x65, 0x24, 0xf9, 0x33, 0x00, 0x00, 0x00, 0x00,
};

static const std::vector<uint8_t> vive_magic_power_off2 = {
	0x04, 0x78, 0x29, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
	0x30, 0x05, 0x77, 0x00, 0xe4, 0xf7, 0x33, 0x00, 0xe4, 0xf7, 0x33, 0x00, 0x60,
	0x6e, 0x72, 0x00, 0xb4, 0xf7, 0x33, 0x00, 0x04, 0x00, 0x00, 0x00, 0x70, 0xb0,
	0x72, 0x00, 0x90, 0xf7, 0x33, 0x00, 0x7c, 0xf8, 0x33, 0x00, 0xd0, 0xf7, 0x33,
	0x00, 0x3c, 0x68, 0x29, 0x65, 0x24, 0xf9, 0x33, 0x00, 0x00, 0x00, 0x00,
};

static const std::vector<uint8_t> vive_magic_enable_lighthouse = {
	0x04
};


static const std::vector<uint8_t> vive_controller_haptic_pulse = {
    255, 0x8f, 7, 0, 0, 0, 0, 0, 0, 0
};


static const std::vector<uint8_t> vive_controller_power_off = {
    255, 0x9f, 4, 'o', 'f', 'f', '!'
};
