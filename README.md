# Load Balancing in OpenStack Cloud

## Course Information

- **Course Name:** Algorithmic Problem Solving
- **Course Code:** 23ECSE309
- **Student Name:** Supreet Palankar
- **SRN:** 01fe21bcs068
- **Course Instructor:** Prakash Hegade
- **University:** KLE Technological University, Hubballi-31

## Portfolio Topic/Domain: Load Balancing in OpenStack Cloud

### A Move Towards Enhanced OpenStack Service Management

---

## Table of Contents

- [Introduction](#introduction)
- [Objectives/Need of Portfolio](#objectivesneed-of-portfolio)
- [Visuals](#visuals)
- [Algorithms and Data Structures: Business Use Cases and Applications](#algorithms-and-data-structures-business-use-cases-and-applications)
  - [Data Collection and Monitoring](#data-collection-and-monitoring)
  - [Round Robin Load Balancing](#round-robin-load-balancing)
  - [Least Connections Load Balancing](#least-connections-load-balancing)
  - [Weighted Round Robin Load Balancing](#weighted-round-robin-load-balancing)
  - [Least Load Load Balancing](#least-load-load-balancing)
- [Challenges](#challenges)
- [To-Do](#to-do)
- [Conclusion](#conclusion)

---

## Introduction

Welcome to the Portfolio Project on **Load Balancing in OpenStack Cloud: Investigating Intelligent Data Structures**. This project is a deep dive into the advanced algorithms and data structures that power load balancing in OpenStack, enabling enhanced service management and efficiency.

OpenStack is a prominent open-source cloud computing platform that provides users with a convenient way to manage large-scale cloud environments. It leverages complex algorithms and data structures to ensure efficiency, reliability, and scalability in load balancing.

## Objectives/Need of Portfolio

The main objectives of this portfolio are:

- To understand the significance of advanced algorithms and data structures in efficient load balancing within OpenStack.
- To explore various business use cases and applications of these algorithms and data structures.
- To analyze the impact of these technologies on user experience and system performance.
- To provide insights into data analysis and the role of intelligent data structures in load balancing.

## Visuals

### Complete OpenStack Setup
![OpenStack Setup](images/openstack_setup.png)
*This image shows the complete OpenStack setup used for the project.*

### Networks Created
![Networks](images/networks.png)
*This image displays the networks created within the OpenStack environment.*

### Router
![Router](images/router.png)
*This image shows the router configuration within the OpenStack setup.*

### Instances Launched
![Instances](images/instances.png)
*This image illustrates the instances launched in the OpenStack environment.*

## Algorithms and Data Structures: Business Use Cases and Applications

In this section, we propose to build and explore various algorithms and data structures that can be used to improve load balancing within OpenStack. By implementing these modules, we aim to manage services more efficiently and ensure optimal performance. The key focus areas of our project will include:

### Data Collection and Monitoring

Efficient load balancing starts with accurate data collection and monitoring. We will develop a module that gathers essential metrics such as CPU and memory usage from various instances. This data will be crucial for making informed load balancing decisions.

- **File:** [Data Collection](datacollection.md)

### Round Robin Load Balancing

Round Robin Load Balancing is one of the simplest methods. We will implement this method to distribute incoming requests to instances in a circular order, ensuring a balanced distribution of load. This module will demonstrate how a straightforward algorithm can provide an effective load distribution.

- **File:** [Round Robin Load Balancing](roundrobin.md)

### Least Connections Load Balancing

The Least Connections Load Balancing module will assign incoming requests to the instance with the fewest active connections. This dynamic allocation helps in evenly distributing the load and preventing any single instance from becoming a bottleneck.

- **File:** [Least Connections Load Balancing](leastconnections.md)

### Weighted Round Robin Load Balancing

In the Weighted Round Robin Load Balancing module, we will enhance the Round Robin method by assigning weights to instances. More powerful instances will handle more requests, optimizing resource utilization and improving overall system performance.

- **File:** [Weighted Round Robin Load Balancing](weightedroundrobin.md)

### Least Load Load Balancing

The Least Load Load Balancing module will assign incoming requests to the instance with the least load, considering real-time metrics like CPU and memory usage. This approach ensures that the instance with the lowest load receives the next request, thereby improving response times and system efficiency.

- **File:** [Least Load Load Balancing](leastload.md)

## Why These Methods Are Better

### Round Robin Load Balancing
**Advantages:**
- Simple and easy to implement.
- Ensures equal distribution of traffic across all instances.

**Improvements over existing methods:**
- Provides a fair distribution of requests in a circular manner, avoiding the risk of overloading a single instance.

### Least Connections Load Balancing
**Advantages:**
- Dynamically allocates requests to instances with the fewest active connections.
- Helps in evenly distributing the load and preventing bottlenecks.

**Improvements over existing methods:**
- Unlike static allocation methods, it adapts to real-time traffic conditions, reducing the chances of overloading any single instance.

### Weighted Round Robin Load Balancing
**Advantages:**
- Distributes traffic based on instance capabilities.
- More powerful instances handle more requests, optimizing resource utilization.

**Improvements over existing methods:**
- Provides a more nuanced distribution by considering the differing capacities of instances, leading to better overall performance.

### Least Load Load Balancing
**Advantages:**
- Allocates traffic based on real-time load metrics like CPU and memory usage.
- Ensures that the instance with the lowest load receives the next request.

**Improvements over existing methods:**
- Offers a highly adaptive approach that ensures optimal use of resources by directing traffic to the least loaded instance, improving response times and system efficiency.


## Challenges

- Ensuring real-time data collection and monitoring.
- Implementing efficient algorithms to handle dynamic and unpredictable loads.
- Balancing the trade-off between simplicity and performance in algorithm design.

## To-Do

- Implement additional load balancing algorithms.
- Optimize data collection methods for minimal performance impact.
- Conduct performance testing and analysis under different load conditions.

## Conclusion

This portfolio aims to provide a comprehensive understanding of how OpenStack leverages cutting-edge algorithms and data structures to maintain a competitive edge and deliver exceptional services to its users. By exploring and implementing various load balancing techniques, we can enhance the efficiency and reliability of OpenStack cloud environments.

---

Feel free to explore the different sections of this portfolio to gain insights into the intelligent data structures and algorithms used in load balancing within OpenStack.

