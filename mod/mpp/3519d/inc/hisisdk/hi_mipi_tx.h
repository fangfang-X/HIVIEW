/*
  Copyright (c), 2001-2024, Shenshu Tech. Co., Ltd.
 */

#ifndef HI_MIPI_TX_H
#define HI_MIPI_TX_H

#include "osal_ioctl.h"
#include "ot_mipi_tx.h"

#ifdef __cplusplus
extern "C" {
#endif

#define HI_ALIGN_NUM OT_ALIGN_NUM
#define HI_MIPI_TX_IOC_MAGIC OT_MIPI_TX_IOC_MAGIC
#define HI_MIPI_TX_SET_DEV_CFG OT_MIPI_TX_SET_DEV_CFG
#define HI_MIPI_TX_SET_CMD OT_MIPI_TX_SET_CMD
#define HI_MIPI_TX_ENABLE OT_MIPI_TX_ENABLE
#define HI_MIPI_TX_GET_CMD OT_MIPI_TX_GET_CMD
#define HI_MIPI_TX_DISABLE OT_MIPI_TX_DISABLE
#define HI_MIPI_TX_SET_PN_SWAP OT_MIPI_TX_SET_PN_SWAP

#ifdef __cplusplus
}
#endif
#endif /* HI_MIPI_TX_H */
