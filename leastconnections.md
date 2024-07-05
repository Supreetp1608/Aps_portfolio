# Least Connections Load Balancing

## Description

The Least Connections Load Balancing algorithm directs incoming requests to the instance that currently has the fewest active connections. This approach ensures that the load is distributed based on the current traffic load on each instance, rather than simply rotating through instances as in Round Robin.

### Key Features:

1. **Dynamic Load Distribution:** Adjusts to the current load on each instance, distributing requests to the least busy instance.
2. **Improved Performance:** Helps to avoid overloading instances, leading to improved overall performance and response times.
3. **Fairness:** Ensures that instances with fewer active connections receive more requests, balancing the load dynamically.

### Use Case:

Least Connections Load Balancing is ideal for scenarios where the processing time for each request can vary significantly, and some instances may become more heavily loaded than others. It is commonly used in environments where the workload is not evenly distributed, such as in application servers handling diverse requests.

## Implementation

Here is the C++ implementation of the Least Connections Load Balancing algorithm. This implementation reads metrics from a CSV file and distributes incoming requests to instances based on the number of active connections.
