# Data Collection Module

## Description

The Data Collection module is crucial for gathering real-time metrics from instances within the OpenStack cloud environment. These metrics, including CPU usage, memory usage, and active connections, are essential for load balancing algorithms to make informed decisions about distributing incoming requests effectively. By utilizing system commands (`top` and `ps`) to capture these metrics, administrators can monitor instance performance, optimize resource allocation, and ensure efficient operation of the cloud infrastructure. The collected data is stored in a structured format such as CSV (Comma-Separated Values), enabling easy accessibility and compatibility for further analysis.

### Key Features:

1. **Metric Collection:** Utilizes system commands (`top` and `ps`) to capture real-time metrics including CPU usage (%), memory usage (%), and active connections.
2. **Data Storage:** Stores collected metrics in a CSV file format, ensuring easy accessibility and compatibility for further analysis.
3. **Automation:** Automates the collection process using scripts, maintaining accuracy and efficiency in data gathering.

### Use Case:

The Data Collection module is indispensable in environments where dynamic workload management and resource optimization are critical, such as in cloud computing platforms like OpenStack. It empowers administrators to monitor instance health, identify performance bottlenecks, and implement proactive measures to enhance system reliability and scalability.


### Code

Click [here](codes/data_collection.cpp) to view the code for the Data Collection module.
