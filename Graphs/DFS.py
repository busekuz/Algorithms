graph = {
  'A' : ['B','C'],
  'B' : ['D', 'E'],
  'C' : ['F'],
  'D' : [],
  'E' : ['F'],
  'F' : ['B']
}

visited = set()

"""
V is the number of vertices and E is the number of edges in the graph.
Time complexity: O(V + E)
Space Complexity :O(V)
"""

def dfs(graph, node, visited):
    visited.add(node)
    print(node)
    
    for neighbour in graph[node]:
        if neighbour not in visited:
            visited.add(neighbour)
            dfs(graph, neighbour, visited)
    

dfs(graph, "A", visited)