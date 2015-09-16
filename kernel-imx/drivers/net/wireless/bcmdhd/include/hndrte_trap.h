/*
 * HNDRTE Trap handling.
 *
 * Copyright (C) 2014, Broadcom Corporation
 * All Rights Reserved.
 * 
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Broadcom Corporation;
 * the contents of this file may not be disclosed to third parties, copied
 * or duplicated in any form, in whole or in part, without the prior
 * written permission of Broadcom Corporation.
 *
 * $Id: hndrte_trap.h 241182 2011-02-17 21:50:03Z $
 */

#ifndef	_HNDRTE_TRAP_H
#define	_HNDRTE_TRAP_H


/* Trap handling */


#if defined(__arm__) || defined(__thumb__) || defined(__thumb2__)
#include <hndrte_armtrap.h>
#endif


#ifndef	_LANGUAGE_ASSEMBLY

#include <typedefs.h>

extern uint32 hndrte_set_trap(uint32 hook);
extern void hndrte_die(uint32 line);
extern void hndrte_unimpl(void);

#endif	/* !_LANGUAGE_ASSEMBLY */
#endif	/* _HNDRTE_TRAP_H */
