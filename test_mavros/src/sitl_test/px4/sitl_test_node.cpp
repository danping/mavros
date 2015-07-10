/**
 * @brief SITL test node
 * @file sitl_test_node.cpp
 * @author Nuno Marques <n.marques21@hotmail.com>
 */
/*
 * Copyright 2015 Nuno Marques.
 *
 * This file is part of the mavros package and subject to the license terms
 * in the top-level LICENSE file of the mavros repository.
 * https://github.com/mavlink/mavros/tree/master/LICENSE.md
 */

#include <mavros/mavros.h>
#include <sitl_test/sitl_test.h>

using namespace sitltest;
using namespace mavros;

int main(int argc, char *argv[])
{
	ROS_INFO("SITL Test node started...");
	ROS_INFO(argv[1]);

	SitlTest::spin(argc, argv);

	return 0;
}
