#ifndef INTERSTITIALS_H
#define INTERSTITIALS_H

#include "xtal_classes.hpp"
//Tools we already have:
//Structrue class
//Lattice class
//Site class
//Cluster class
//SymOp class (includes translation)
//apply symmetry to site
//apply symmetry to a cluster
//bring within unit cell
//read vasp file
//make point group
//make factor group


//Next tools we need:
//Geometric center of mass for cluster
//Find asymetric unit of a basis*
//Find all sites within a radius*

#include <vector>
class Site;
class SymOp;

///TODO: Write out documentation here
//Find asymmetric sites
std::vector<Site> make_asymmetric_unit(const std::vector<Site>& complete_structure_basis, const std::vector<SymOp>& Sym_group);

//Find geometric center for the cluster
Eigen::Vector3d find_geometric_center(const Cluster& test_cluster);


std::vector<Site> find_sites_within_radius(Coordinate& middlepoint, int my_radius, Structure& my_struc);

std::vector<Coordinate> make_grid_points(int in_a, int in_b, int in_c, const Lattice& lattice);
//Arithmetic center of mass -Muna
//TODO: Find sites within a radius. 
// args: Coordinate, radius, Structure

//
//
#endif 
