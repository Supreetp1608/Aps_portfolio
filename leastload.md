# Least Load Load Balancing

## Description

Least Load Load Balancing is a dynamic load balancing algorithm that directs incoming requests to the instance with the least current load, typically measured by metrics such as CPU or memory utilization. This approach ensures that each request is routed to the instance that is currently least loaded, optimizing resource usage and improving overall system performance.

### Key Features:

1. **Dynamic Load Monitoring:** Constantly monitors the load on each instance and directs traffic to the least loaded instance.
2. **Real-Time Adjustment:** Adjusts to changes in workload and ensures efficient resource allocation based on current load conditions.
3. **Scalability:** Supports scaling by distributing new requests to underutilized instances, enabling efficient handling of increasing traffic.

### Use Case:

Least Load Load Balancing is ideal for environments where workload distribution can vary significantly over time. It is commonly used in cloud computing and web server environments to optimize resource utilization and ensure consistent performance under varying traffic conditions.

## Implementation

Here is the C++ implementation of the Least Load Load Balancing algorithm. This implementation reads metrics from a CSV file and distributes incoming requests to instances based on their current load metrics.
