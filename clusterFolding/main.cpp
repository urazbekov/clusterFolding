//
//  main.cpp
//  clusterFolding
//
//  Created by Bakytzhan on 09/04/2019.
//  Copyright © 2019 Bakytzhan. All rights reserved.
//

#include <iostream>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_sf.h>
#include <gsl/gsl_integration.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_sf.h>
#include <gsl/gsl_sf_pow_int.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    double A=gsl_sf_gamma(1.5);
    std::cout << gsl_sf_gamma(1.5)<< std::endl;
    return 0;
}
