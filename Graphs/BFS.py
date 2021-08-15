graph = {
  'A' : ['B','C'],
  'B' : ['D', 'E'],
  'C' : ['F'],
  'D' : [],
  'E' : ['F'],
  'F' : ['B']
}

queue = []
visited = set()

"""
V is the number of vertices and E is the number of edges in the graph.
Time Complexity: O(V+E) where V is number of vertices in the graph and E is number of edges in the graph.
"""

def bfs(graph, node, visited):
    visited.add(node)
    queue.append(node)

    while queue:
        current_node = queue.pop(0)
        print(current_node)

        for neighbour in graph[current_node]:
            if neighbour not in visited:
                queue.append(neighbour)
                visited.add(neighbour)
    

bfs(graph, "A", visited)