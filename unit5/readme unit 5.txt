Airport Connectivity Graph Using BFS

📌 Project Overview

This project demonstrates an Airport Connectivity Graph using the Breadth-First Search (BFS) algorithm in C++. It represents airports as vertices (nodes) and flight connections as edges. The program identifies all airports reachable from a selected starting airport through direct and connecting flights.

🎯 Objectives

- To represent airport connectivity using a graph data structure.
- To implement the Breadth-First Search (BFS) algorithm.
- To identify reachable airports from a selected airport.
- To understand graph traversal and queue operations in C++.

🛠️ Technologies Used

- Programming Language: C++
- IDE: Dev-C++ 5.11
- Algorithm: Breadth-First Search (BFS)
- Data Structures: Graph, Queue, Vector

⚙️ Features

- Accepts airport names from the user.
- Allows the user to enter flight connections.
- Creates an airport connectivity graph.
- Accepts a starting airport number.
- Displays all reachable airports using BFS.
- Supports direct and connecting flight paths.

🧠 Algorithm

1. Start the program.
2. Enter the number of airports.
3. Enter the names of all airports.
4. Enter the number of flight connections.
5. Enter the connected airport numbers.
6. Select the starting airport.
7. Mark the starting airport as visited and insert it into the queue.
8. Remove an airport from the queue and visit its unvisited connected airports.
9. Repeat until the queue becomes empty.
10. Display the reachable airports and stop.

💻 Sample Input

Enter number of airports: 4

Enter airport names:
0 - Delhi
1 - Mumbai
2 - Chennai
3 - Bengaluru

Enter number of flight connections: 3

0 1
1 2
2 3

Enter starting airport number: 0

📤 Sample Output

AIRPORT CONNECTIVITY GRAPH USING BFS

Airports reachable from Delhi:
Delhi (Starting Airport)
Mumbai
Chennai
Bengaluru

BFS traversal completed.

⏱️ Time and Space Complexity

- Time Complexity: O(V + E)
- Space Complexity: O(V + E)

Where:

- V = Number of airports (vertices)
- E = Number of flight connections (edges)

▶️ How to Run the Project

1. Download or clone this repository.
2. Open Dev-C++.
3. Open the "airport.cpp" source file.
4. Compile and run the program.
5. Enter the airport names and flight connections when prompted.
6. Select the starting airport to view the BFS traversal.

🌍 Applications

- Airport and airline connectivity analysis.
- Route connectivity in transportation networks.
- Graph traversal and path exploration.
- Network connectivity analysis.
- Learning graph algorithms in computer science.

⚠️ Limitations

- All flight connections are treated as bidirectional.
- The program does not consider flight timings, ticket prices, or distances.
- BFS identifies reachable airports but does not calculate the cheapest or fastest route.

👨‍💻 Author

Sai Ravindra Pawbake

📄 License

This project is available for educational and learning purposes.