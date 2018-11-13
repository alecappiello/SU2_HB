/*!
 * \file grid_movement_structure.inl
 * \brief In-Line subroutines of the <i>grid_movement_structure.hpp</i> file.
 * \author F. Palacios, T. Economon, S. Padron
 * \version 5.0.0 "Raven"
 *
 * SU2 Original Developers: Dr. Francisco D. Palacios.
 *                          Dr. Thomas D. Economon.
 *
 * SU2 Developers: Prof. Juan J. Alonso's group at Stanford University.
 *                 Prof. Piero Colonna's group at Delft University of Technology.
 *                 Prof. Nicolas R. Gauger's group at Kaiserslautern University of Technology.
 *                 Prof. Alberto Guardone's group at Polytechnic University of Milan.
 *                 Prof. Rafael Palacios' group at Imperial College London.
 *                 Prof. Edwin van der Weide's group at the University of Twente.
 *                 Prof. Vincent Terrapon's group at the University of Liege.
 *
 * Copyright (C) 2012-2017 SU2, the open-source CFD code.
 *
 * SU2 is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * SU2 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with SU2. If not, see <http://www.gnu.org/licenses/>.
 */
 
#pragma once

inline su2double CVolumetricMovement::Determinant_3x3(su2double A00, su2double A01, su2double A02, su2double A10, su2double A11, su2double A12, su2double A20, su2double A21, su2double A22) {
  return A00*(A11*A22-A12*A21) - A01*(A10*A22-A12*A20) + A02*(A10*A21-A11*A20);
}

inline void CVolumetricMovement::Set_nIterMesh(unsigned long val_nIterMesh) { nIterMesh = val_nIterMesh; }

inline unsigned long CVolumetricMovement::Get_nIterMesh() { return nIterMesh; }

inline void CGridMovement::CrossProduct (su2double *v1, su2double *v2, su2double *v3) {
  v3[0] = v1[1]*v2[2]-v1[2]*v2[1];
  v3[1] = v1[2]*v2[0]-v1[0]*v2[2];
  v3[2] = v1[0]*v2[1]-v1[1]*v2[0];
}

inline su2double CGridMovement::DotProduct (su2double *v1, su2double *v2) { su2double scalar = v1[0]*v2[0]+v1[1]*v2[1]+v1[2]*v2[2]; return scalar; }

inline void CVolumetricMovement::SetVolume_Deformation_Elas(CGeometry *geometry, CConfig *config, bool UpdateGeo, bool Derivative) {  }

inline void CVolumetricMovement::Boundary_Dependencies(CGeometry **geometry, CConfig *config) {  }

inline void CElasticityMovement::Set_nIterMesh(unsigned long val_nIterMesh) { nIterMesh = val_nIterMesh; }

inline unsigned long CElasticityMovement::Get_nIterMesh() { return nIterMesh; }
