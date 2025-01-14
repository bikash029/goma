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
 
#ifndef GOMA_EL_ELM_INFO_H
#define GOMA_EL_ELM_INFO_H


#ifdef EXTERN
#undef EXTERN
#endif

#ifdef GOMA_EL_ELM_INFO_C
#define EXTERN /* do nothing */
#endif

#ifndef GOMA_EL_ELM_INFO_C
#define EXTERN extern
#endif

EXTERN int elem_info
(const int ,		/* info                                      */
       const int );		/* ielem_type                                */

#ifdef DEBUG_HKM
EXTERN int node_info
(const int  ,		/* n                                         */
       const int  ,		/* Element_Type                              */
       const int  ,		/* var                                       */
       const int   );		/* I - global node number                    */
#endif

extern int dof_lnode_interp_type
(const int ,              /* n                                         */
       const int ,              /* Element_Type                              */
       const int ,              /* interp_type                               */
       const int);	        /* edge                                      */
      
EXTERN int type2shape
(const int );		/* element_type                              */

EXTERN int shape2sides
(const int );		/* element_shape                             */

EXTERN int getdofs
(const int ,		/* element_shape                             */
       const int );		/* interpolation                             */

EXTERN void find_stu
(const int ,		/* iquad - current GQ index                  */
       const int ,		/* ielem_type - element type                 */
       dbl   *,			/* s - local                                 */
       dbl   *,			/* t - GQ coordinates                        */
       dbl   *);		/* u - (returned)                            */

EXTERN void find_surf_st
(const int ,		/* iquad - current GQ index                  */
       const int ,		/* ielem_type - element type                 */
       const int ,		/* iside - current side of element           */
       const int ,		/* dim - dimension of element                */
       double [DIM],		/* xi - (returned) local GQ coordinates for 
				 * surface integral                          */
       double *,		/* s - Gaussian-quadrature points (s, t)     */
       double *,                /* t -                                       */
       double *);		/* u -                                       */

EXTERN int find_edge_s
(const int ,		/* iquad - current GQ index                  */
       const int ,		/* ielem_type - element type                 */
       const int ,		/* iedge - current edge of element           */
       const int ,		/* dim - dimensions of element               */
       double [DIM],		/* xi - local GQ coordinates for surface 
				 * integral (these are returned)             */
       double *);		/* s                                         */

EXTERN void find_surf_center_st
(const int ,		/* ielem_type - element type                 */
       const int ,		/* iside - current side of element           */
       const int ,		/* dim - dimensions of element               */
       double [DIM],		/* xi - (returned) local GQ coordinates for 
				 * surface integral                          */
       double *,		/* s - Gaussian-quadrature points (s, t)     */
       double *);		/* t                                         */

EXTERN void find_nodal_stu
(const int ,		/* inode - current node index                */
       const int ,		/* ielem_type - element type                 */
       double  *,		/* s - local GQ coordinates                  */
       double  *,		/* t - (returned                             */
       double  *);		/* u - values )                              */

EXTERN double Gq_weight
(const int ,		/* iquad - current GQ index                  */
       const int );		/* ielem_type - element type                 */

EXTERN double Gq_surf_weight
(const int ,		/* iquad - current GQ index                  */
       const int );		/* ielem_type - element type                 */

EXTERN double Gq_edge_weight
(const int ,		/* iquad - current GQ index                  */
       const int );            /* ielem_type - element type                 */

EXTERN int in_list
(const int ,		/* ivalue - what are we looking for          */
       const int ,		/* i - where to start looking                */
       const int ,		/* iend - where to stop looking              */
       int *);			/* ivector - array in which to look          */

EXTERN int get_type
(char [],			/* string - EXODUS name of parent element    */
       const int,		/* nodes - number of nodes in this element   */
       const int );		/* attrs - number of attributes in element   */

EXTERN int centroid_node
(int );			/* elem_type                                 */

EXTERN int load_surf_st
( int,                   /* ielem_type */
	int,                   /* id_side */
	int,                   /* dim */
	double [DIM],          /* xi  */
	double,                /* s  */
	double );             /* t  */ 

#endif /* GOMA_EL_ELM_INFO_H */
