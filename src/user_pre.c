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
 *$Id: user_pre.c,v 5.1 2007-09-18 18:53:49 prschun Exp $
 */

#ifdef USE_RCSID
static char rcsid[] = "$Id: user_pre.c,v 5.1 2007-09-18 18:53:49 prschun Exp $";
#endif

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* GOMA include files */

#include "std.h"
#include "rf_fem_const.h"
#include "rf_fem.h"
#include "rf_masks.h"
#include "rf_io_const.h"
#include "rf_io_structs.h"
#include "rf_io.h"
#include "rf_mp.h"
#include "el_elm.h"
#include "el_geom.h"
#include "rf_bc_const.h"
#include "rf_solver_const.h"
#include "rf_fill_const.h"
#include "rf_vars_const.h"
#include "mm_as_const.h"
#include "mm_as_structs.h"
#include "mm_as.h"

#include "mm_mp_const.h"
#include "mm_mp_structs.h"
#include "mm_mp.h"

#include "mm_eh.h"

#define GOMA_USER_PRE_C
#include "goma.h"

/*********** R O U T I N E S   I N   T H I S   F I L E ************************
*
*       NAME            TYPE            CALLED_BY
*    user_init_object                    object_distance
*    ------------             ---------               --------------
*************************/
double 
user_surf_object (int *int_params, dbl *param, dbl *r )	
{
  double distance = 0;
  static int warning = 0;

  /*
  int num_params;

  num_params = int_params[0];
  */

 /**********************************************************/

 /* Comment out our remove this line if using this routine */
  if (warning == 0)
    {
      fprintf(stderr,"\n\n#############\n"
	    "# WARNING!! #  No user_defined post processing model implemented"
	      "\n#############\n");
      warning = 1;
    }


  return distance;
} /* End of routine user_init_object */
/*****************************************************************************/
/* End of file user_pre.c*/
/*****************************************************************************/
