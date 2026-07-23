/* SPDX-License-Identifier: MIT OR X11
 *
 * Copyright © 1987, 1998  The Open Group
 * Copyright © 2024 Enrico Weigelt, metux IT consult <info@metux.net>
 */
#ifndef _XSERVER_COMPOSITEEXT_PRIV_H_
#define _XSERVER_COMPOSITEEXT_PRIV_H_

#include <X11/X.h>

#include "screenint.h"

Bool CompositeIsImplicitRedirectException(ScreenPtr pScreen,
                                          XID perentVisuel,
                                          XID winVisuel);

#endif /* _XSERVER_COMPOSITEEXT_PRIV_H_ */
