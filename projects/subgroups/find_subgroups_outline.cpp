#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>

bool EXPECT_TRUE()
{
}

class SymOp
{
    //Constructs the identity element
    static SymOp identity()
    {
    }
};

class SymGroup
{
}

SymOp operator*(const SymOp& lhs, const SymOp& rhs)
{
}

struct SymOpCompare_f
{
    bool operator()(const SymOp& other) const
    {
    }
};

struct SymGroupCompare_f
{
    bool operator()(const SymGroup& other) const
    {
    }
};

int main()
{
    //Test for SymOp construction
    Eigen::Matrix3d init_mat;
    SymOp op0(init_mat);
    EXPECT_TRUE(init_mat==op0.matrix());
    //Test for SymOp identity construction
    //
    //Test for SymOp multiplication
    //
    //Test for SymOp comaprison
    //
    /////////////////////////////////////
    //
    //Test for SymGroup construction
    //
    //Test for SymGroup comparison
}

//////////////////////////////////////
/*

//Returns true if group is closed.
bool check_for_closure(std::vector<SymOp> group) 
{
    //take every possible product,
    //if it's not in the group, then it's not closed
    //->need comparison
}


//Returns combined group with no duplicate.
std::vector<Eigen::Matrix3d> combine_groups(std::vector<Eigen::Matrix3d> group1, std::vector<Eigen::Matrix3d> group2) 
{
    //Combines two given groups into one group.
    //While combining the groups, removes duplicate elements.
}

//Returns a list of subgroups.
std::vector<std::vector<Eigen::Matrix3d>> generate_subgroups(std::vector<Eigen::Matrix3d> total_group) 
{
    std::vector<std::vector<Eigen::Matrix3d>> list_of_subgroups;

    //Takes an element of the total group, initializes a subgroup with it, and begins multiplying element by itself.
    for (element:total_group) 
    {
        std::vector<Eigen::Matrix3d> temporary_group;
        temporary_group.push_back(element);
        product = multiply_group_elements(element, element);

        //If the product is not present in subgroup, product is added as element of the subgroup and will again be multiplied by initial element.
        //If the product is present in subgroup, subgroup is completed.
        while (is_element_in_group(product, temporary_group) != true) 
        {
            temporary_group.push_back(product);
            product = multiply_group_elements(element, temporary_group.back());
        }

        if (is_group_in_list_of_subgroups(temporary_group, list_of_subgroups) != true) 
        {
            list_of_subgroups.push_back(temporary_group);
        }

        //If the size of the completed subgroup is equal to the size of the total group, the total group is already the smallest possible subgroup.
        if (compare_groups(temporary_group, total_group) == true) 
        {
            break;
        }
    }

    //Combines smaller subgroups into larger subgroups (using combine_groups function) and if the larger subgroup is closed, it is added to the list of subgroups.

}


int main() 
{
    //Total group is given as input.
    //Checks total group for closure and identity. If false, spits out error.
    
    //Generate subgroups using previously outlined functions.
    
    //Maybe print out multiplication table(s)?
    
    return 0;
}
*/
