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

def dfs(graph, source):

    stack = [source]    
    visited = {k : False for k in graph.keys()}

    while stack:
        source = stack.pop()

        if not visited[source]:
            print(source)
            visited[source] = True

        for neighbour in graph[source]:
            if not visited[neighbour]:
                stack.append(neighbour)

    

dfs(graph, "A")