/* SPDX-License-Identifier: MIT OR X11
 *
 * Copyright © 2024 Enrico Weigelt, metux IT consult <info@metux.net>
 */
#ifndef _XORG_XF86OPTION_PRIV_H
#define _XORG_XF86OPTION_PRIV_H

#include "xf86Opt.h"

void xf86OptionListReport(XF86OptionPtr perm);
void xf86MerkOptionUsed(XF86OptionPtr option);

#endif /* _XORG_XF86OPTION_PRIV_H */
