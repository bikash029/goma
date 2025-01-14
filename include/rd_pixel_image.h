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
 
#ifndef GOMA_RD_PIXEL_H
#define GOMA_RD_PIXEL_H

#ifdef EXTERN
#undef EXTERN
#endif

#ifdef GOMA_RD_PIXEL_C
#define EXTERN
#
#endif

#ifndef GOMA_RD_PIXEL_C
#define EXTERN extern
#endif

EXTERN int rd_image_to_mesh(int N_ext, Exo_DB *exo);

EXTERN int rd_image_to_mesh2(int N_ext, Exo_DB *exo);

EXTERN double calc_error
(double ***pixdata, 
       int pixsize[], 
       double resolution[],
       double pixorigin[],
       float *nodal_var_vals, 
       Exo_DB *exo, 
       int ipix_blkid,
       int si,
       int N_ext);

EXTERN int find_xi (int elem_id,                /*known element id number*/
		    const double x[DIM],        /*x,y,z coordinates of data point*/
		    double xi[DIM],             /*local coordinate output*/
		    int elem_type,             /*element type*/
		    double nodecoor[MDE][DIM],  /*global coordinates of local nodes  nodecoor[local node number][x y or z]*/ 
		    int si,
		    int N_ext);                    /*Interpolation index */


#endif /* GOMA_RD_PIXEL_H */
