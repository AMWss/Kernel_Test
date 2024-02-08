/*
 * Copyright (c) 2017 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/**
 * DOC: contains nan definitions exposed to other modules
 */

#ifndef _WLAN_NAN_API_H_
#define _WLAN_NAN_API_H_

#include "qdf_status.h"

struct wlan_objmgr_psoc;

/**
 * nan_init: initializes NAN component, called by dispatcher init
 *
 * Return: status of operation
 */
QDF_STATUS nan_init(void);

/**
 * nan_deinit: de-initializes NAN component, called by dispatcher init
 *
 * Return: status of operation
 */
QDF_STATUS nan_deinit(void);

/**
* nan_is_ndp_active: is NAN peer attached to NDI
* @pdev: pointer to pdev object
*
* Return: ndp peer attached or not.
*/

bool nan_is_ndp_active(struct wlan_objmgr_pdev *pdev);

/**
 * nan_psoc_enable: psoc enable API for NANitioning component
 * @psoc: pointer to PSOC
 *
 * Return: status of operation
 */
QDF_STATUS nan_psoc_enable(struct wlan_objmgr_psoc *psoc);

/**
 * nan_psoc_disable: psoc disable API for NANitioning component
 * @psoc: pointer to PSOC
 *
 * Return: status of operation
 */
QDF_STATUS nan_psoc_disable(struct wlan_objmgr_psoc *psoc);

#endif
