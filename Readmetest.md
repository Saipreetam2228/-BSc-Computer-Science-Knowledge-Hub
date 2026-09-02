## Heuristic Functions

### 1. Definition

A **heuristic function \(h(n)\)** estimates the cost of the cheapest path from node \(n\) to a goal state.

It provides **problem-specific knowledge** that helps informed search algorithms such as **Greedy Best-First Search and A*** search more efficiently.

$$
h(n)=\text{estimated cost from }n\text{ to a goal}
$$

For a goal node:

$$
\boxed{h(n)=0}
$$

### 2. Example — 8-Puzzle

Two common heuristic functions are:

#### \(h_1(n)\) — Misplaced Tiles

It counts the number of tiles that are in the wrong position, excluding the blank.

$$
\boxed{h_1(n)=\text{number of misplaced tiles}}
$$

#### \(h_2(n)\) — Manhattan Distance

It calculates the total city-block distance of all tiles from their goal positions.

$$
\boxed{h_2(n)=\sum \text{Manhattan distance of each tile}}
$$

Both are admissible, but \(h_2\) is generally more informative because it usually gives a value closer to the actual remaining cost.

### 3. Admissible Heuristic

A heuristic is **admissible** if it never overestimates the actual minimum cost to reach the goal.

$$
\boxed{h(n)\leq h^*(n)}
$$

where:

* \(h(n)\) = estimated cost
* \(h^*(n)\) = actual minimum cost to the goal

An admissible heuristic is therefore **optimistic**.

Example:

Actual remaining cost = 10

* \(h(n)=7\) ✓ admissible
* \(h(n)=10\) ✓ admissible
* \(h(n)=12\) ✗ not admissible

### 4. Effectiveness of a Heuristic

The quality of a heuristic can be measured using the **effective branching factor \(b^*\)**.

A smaller effective branching factor means fewer nodes need to be expanded.

For example, in the 8-puzzle, \(h_2\) generally produces a smaller effective branching factor than \(h_1\), showing that Manhattan distance is more informative.

### 5. Dominance

If two admissible heuristics satisfy:

$$
h_2(n)\geq h_1(n)
$$

for every node \(n\), then \(h_2\) **dominates** \(h_1\).

A dominating heuristic is generally better because it gives a more accurate estimate and A* will not expand more nodes using \(h_2\) than using \(h_1\), under the corresponding conditions.

### 6. Generating Heuristics from Relaxed Problems

A **relaxed problem** is created by removing restrictions from the original problem.

The optimal cost of solving the relaxed problem provides an **admissible heuristic** for the original problem.

For example, in the 8-puzzle:

* Allowing a tile to move anywhere gives the misplaced-tile heuristic.
* Allowing a tile to move to any adjacent square gives the Manhattan-distance heuristic.

### 7. Combining Heuristics

If several admissible heuristics are available, they can be combined using:

$$
\boxed{h(n)=\max\{h_1(n),h_2(n),\ldots,h_m(n)\}}
$$

The resulting heuristic remains admissible and dominates each component heuristic.

### Conclusion

A heuristic function provides an estimate of the remaining cost to the goal and guides informed search toward promising states. A good heuristic should be accurate while remaining computationally efficient. Admissible and dominating heuristics can significantly reduce the search effort.
