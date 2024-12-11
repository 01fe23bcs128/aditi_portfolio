## CHITRANAGARI : SMART CITY DESIGN 

### Business Cases identified by Aditi Choudhary (01FE23BCS128)

**1. Industrial Expansion 🏭**  
As Chitranagari grows, it aims to establish itself as a hub for industrial development. The business case for industrial expansion involves the creation of dedicated industrial zones to boost economic growth and job opportunities. These zones will include small-scale, medium-scale, and large-scale industries with adequate infrastructure, such as efficient road networks, power supply, and waste management systems. The motive is twofold: 1. Attract investments from domestic and international companies, and 2. Utilize the revenue generated for further development of the city. Sustainable practices, such as green manufacturing units and carbon-neutral goals, will be incorporated to ensure environmental responsibility.

**2. Healthcare Infrastructure 🏥**  
A smart city must prioritize the well-being of its citizens. This business case focuses on building a robust healthcare ecosystem, including multi-specialty hospitals, community health centers, and digital health facilities for remote consultations. With advanced healthcare systems integrated with AI and IoT, Chitranagari aims to provide efficient and accessible services to its citizens. Preventive healthcare initiatives, like fitness zones, parks, and awareness programs, will also be introduced. Additionally, the plan includes public health monitoring systems and a centralized emergency response mechanism to enhance healthcare delivery.

**3. Education Hub 🎓**  
Chitranagari envisions becoming an educational powerhouse by establishing a network of schools, colleges, and research institutions. This business case focuses on creating a smart education system integrated with cutting-edge technology, including e-learning platforms, virtual labs, and interactive classrooms. Special emphasis will be placed on skill development and vocational training centers to prepare students for future industries. Partnerships with global universities and organizations will be encouraged to foster innovation and knowledge exchange. Scholarships and affordable education programs will be introduced to ensure inclusivity and accessibility for all citizens.

# Chitranagari: Smart City Design  

## Business Cases 🤝 SDG Targets and Indicators  

### 1. Industrial Expansion 🏭  
**SDG Goal 9:** Build resilient infrastructure, promote inclusive and sustainable industrialization, and foster innovation.  
- **Target:** Develop quality, reliable, sustainable, and resilient infrastructure to support economic development and human well-being.  
- **Indicator:** Proportion of industries implementing sustainable practices and increasing resource-use efficiency.  

**Plan:**  
- **Connecting industrial zones:** Utilize **Kruskal's algorithm** to design minimal spanning tree networks for linking industrial zones with transportation hubs, ensuring efficient logistics and supply chain management.  [Kruskal code](https://github.com/01fe23bcs128/aditi_portfolio/blob/main/codes/kruskal.cpp)
- **Prioritizing projects:** Apply **Heap sort** to rank industrial projects based on factors like cost, sustainability impact, and implementation urgency.[Heap sort](https://github.com/01fe23bcs128/aditi_portfolio/blob/main/codes/heap_sort.cpp)  
- **Green manufacturing:** Promote eco-friendly practices and optimize industrial operations using resource-efficient methods.  

---

### 2. Healthcare Infrastructure 🏥  
**SDG Goal 3:** Ensure healthy lives and promote well-being for all at all ages.  
- **Target:** Achieve universal health coverage, including access to quality essential healthcare services.  
- **Indicator:** Coverage of essential health services (e.g., proximity and accessibility of healthcare facilities).  

**Plan:**  
- **Facility placement optimization:** Use **Dijkstra’s algorithm** to determine the shortest paths to healthcare facilities, ensuring they are accessible to all citizens.  [Dijkstra code](https://github.com/01fe23bcs128/aditi_portfolio/blob/main/codes/dijkstra.cpp)
- **Emergency response efficiency:** Leverage **Floyd-Warshall’s algorithm** to compute all-pairs shortest paths for ambulances, improving response times in emergencies.  
- **Resource prioritization:** Use **Heap sort** to rank and distribute medical equipment and resources based on urgency and availability. [Heap sort](https://github.com/01fe23bcs128/aditi_portfolio/blob/main/codes/heap_sort.cpp)

---

### 3. Education Hub 🎓  
**SDG Goal 4:** Ensure inclusive and equitable quality education and promote lifelong learning opportunities for all.  
- **Target:** Build and upgrade education facilities to be child, disability, and gender-sensitive, and provide safe, inclusive, and effective learning environments.  
- **Indicator:** Proportion of schools with access to electricity, internet, computers, and gender-separated sanitation facilities.  

**Plan:**  
- **Network planning:** Utilize **Prim’s algorithm** to design efficient connections between educational institutions across the city, minimizing costs.  
- **Resource allocation:** Apply **Quick sort** to prioritize and distribute resources like teaching tools, technology, and infrastructure upgrades.[Quick sort](https://github.com/01fe23bcs128/aditi_portfolio/blob/main/codes/quick_sort.cpp)  
- **Improved accessibility:** Use **Dijkstra’s algorithm** to optimize routes between residential areas and schools, reducing travel times for students and teachers.  [Dijkstra code](https://github.com/01fe23bcs128/aditi_portfolio/blob/main/codes/dijkstra.cpp)

---

# Course Learning Outcomes  

## 1. What are the kinds of problems we see in nature?  
Nature provides numerous examples of problem-solving approaches:  

- **Iteration:** Tides rise and fall in a regular, repeated pattern.  
- **Recursion:** A cauliflower looks identical at every level, from stem to tip.  
- **Backtracking:** Solving a maze by retracing steps when hitting a dead end.  

These natural patterns inspire solutions to similar problems in algorithm design.  

---

## 2. What is space and time efficiency? Why are they important?  

- **Time efficiency:** Measures how fast an algorithm performs.  
- **Space efficiency:** Measures how much additional memory it requires.  

If an algorithm is slow or consumes excessive memory, it becomes impractical for large-scale problems.  

### Types of Growth in Algorithms:  

- **Constant time (O(1)):** Performance remains the same regardless of input size.  
- **Logarithmic time (O(log n)):** Slows slightly as input grows.  
- **Linear time (O(n)):** Performance slows proportionally with input size.  
- **Linearithmic time (O(n log n)):** Slower than linear, but manageable.  
- **Quadratic time (O(n²)):** Becomes significantly slower with larger inputs.  
- **Cubic time (O(n³)):** Even slower than quadratic.  
- **Exponential (O(2ⁿ)) and Factorial (O(n!)):** Infeasible for large inputs.  

---

## 3. What are the takeaways from different design principles?  
Effective problem-solving relies on various design principles:  

- **Divide and Conquer:** Break a problem into smaller parts, solve them individually, and combine results.  
- **Dynamic Programming:** Store solutions to subproblems to avoid redundant calculations.  
- **Greedy Algorithms:** Choose the optimal solution at each step.  
- **Backtracking:** Explore all possibilities and revert incorrect decisions.  

These principles improve algorithm performance and simplify complex problems.  

---

## 4. How do tree data structures solve problems?  
Trees provide an organized way to store hierarchical data:  

- **Binary Search Tree (BST):** Efficient for searching sorted data but may become unbalanced.  
- **AVL Tree:** A self-balancing BST for optimal performance.  
- **2-3 Tree:** Handles dynamic data effectively.  
- **Red-Black Tree:** A balanced tree with fewer rebalancing operations.  
- **Heap:** Quickly finds the largest or smallest value.  
- **Trie:** Ideal for searching words or prefixes.  

---

## 5. Why do we need array query algorithms?  
Array query algorithms enhance efficiency in answering range-based questions (e.g., finding the sum or maximum).  

### Examples:  
- **Prefix Sums:** Quickly calculate sums over any range.  
- **Segment Trees and Fenwick Trees:** Enable fast updates and queries.  

Applications include gaming, financial systems, and databases.  

---

## 6. What is the difference between trees and graphs?  
### Trees:  
- **Structure:** A strict hierarchy with no loops (e.g., family trees).  
- **Traversals:** Preorder, Inorder, and Postorder for hierarchical analysis.  
- **Applications:** File organization, decision-making systems.  

### Graphs:  
- **Structure:** A collection of nodes and edges, allowing loops (e.g., road maps).  
- **Traversals:** Depth-First Search (DFS) and Breadth-First Search (BFS) for exploring networks.  
- **Applications:** Social networks, routing, and navigation systems.  

---

## 7. What about sorting and searching algorithms?  

### Sorting Algorithms:  
- **Simple Algorithms:** Bubble Sort works well for small datasets.  
- **Efficient Algorithms:** Quick Sort and Merge Sort are suitable for large datasets.  

### Searching Algorithms:  
- **Linear Search:** Scans each element, slower but works with unsorted data.  
- **Binary Search:** Operates on sorted data for faster performance.  

### Real-life Applications:  
- Sorting algorithms rank search results or organize data.  
- Searching algorithms locate contacts or find optimal paths in maps.  
