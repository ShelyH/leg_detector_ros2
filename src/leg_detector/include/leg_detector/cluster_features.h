#ifndef CLUSTERFEATURES_HH
#define CLUSTERFEATURES_HH

#include <sensor_msgs/msg/laser_scan.hpp>

#include "laser_processor.h"

/**
 * @brief Function that calculates the geometric features of a cluster of scan points
 */
class ClusterFeatures {
public:
    /**
     * @brief Calculate the geometric features of a cluster of scan points
     * @params cluster Cluster of interest
     * @params scan Scan containing the cluster
     **/
    std::vector<float> calcClusterFeatures(const laser_processor::SampleSet* cluster, const sensor_msgs::msg::LaserScan& scan);
};

#endif
