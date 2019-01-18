/************************************************************************ *
* Goma - Multiphysics finite element software                             *
* Sandia National Laboratories                                            *
*                                                                         *
* Copyright (c) 2014 Sandia Corporation.                                  *
*                                                                         *
* Under the terms of Contract DE-AC04-94AL85000 with Sandia Corporation,  *
* the U.S. Government retains certain rights in this software.            *
*                                                                         *
* This software is distributed under the GNU General Public License.      *
\************************************************************************/
 
/*
 * mm_prob_def.h -- prototype declarations for mm_prob_def.c
 */

#ifndef _MM_PROB_DEF_H
#define _MM_PROB_DEF_H

#ifdef EXTERN
#undef EXTERN
#endif

#ifdef _MM_PROB_DEF_C
#define EXTERN
#
#endif

#ifndef _MM_PROB_DEF_C
#define EXTERN extern
#endif

EXTERN int setup_pd		/* mm_prob_def.c */
(void );			/* nada. */

#endif /* _MM_PROB_DEF_H */
