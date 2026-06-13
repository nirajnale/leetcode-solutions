class Solution:
    def destCity(self, paths):

        outgoing = set()

        for src, dst in paths:
            outgoing.add(src)

        for src, dst in paths:
            if dst not in outgoing:
                return dst