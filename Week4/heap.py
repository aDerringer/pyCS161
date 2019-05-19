##########################################################################
# Author: Andrew Derringer
# Object: Heap ADT
# Last Modified: 5/16/2019
# Description:
#       Overview:   Heap holds a list and size variable. Heap adjustments
#                   intentionally omitted from list additions to show the
#                   order of the list as appeneded before calling sort.
##########################################################################
 
class heap:
    def __init__(self, inputList):
        self.numList = inputList
        self.size = len(inputList)

    def printList(self):
        print(self.numList)

    ###
    # Function: Index Swap
    # Param: Parent and child nodes of complete binary tree.
    # Pre: None
    # Post: initial values of passed nodes are swapped.
    ###
    def swap(self, parent, child):
        temp = self.numList[parent]
        self.numList[parent] = self.numList[child]
        self.numList[child] = temp


    ###
    # Function: Return Bigger Value
    # Param: Two child nodes of parent in complete binary tree/sub-tree.
    # Pre: None
    # Post: Index value of node containing a higher value is returned.
    ###
    def biggerValue(self, left, right):
        if self.numList[left] > self.numList[right]:
            return left
        else:
            return right

    ###
    # Function: Adjust Heap
    # Param: A node of a binary tree and the max index accessible of that tree.
    # Pre: None
    # Post: As long as the passed node is a lower value it is continuously compared
    #       to its children nodes and swapped with the highest value child until it
    #       either reaches the bottom of the tree or is greater than all available
    #       children.
    ###
    def adjustHeap(self, pos, max):

        # Values explicitly cast as integers to avoid syntax errors when using
        # these to access specific list indecise.
        parent = int(pos)
        leftChild = int(pos * 2 + 1)
        rightChild = int(pos * 2 + 2)

        # If the right child index is in the scope of accessible list indecise
        if (rightChild < max):
            # Both children are accessible. BiggerValue fxn called to determine
            # highest value child node.
            maxChild = self.biggerValue(leftChild, rightChild)
            # If the max child is greater than the parent node, swap and
            # recursively call again on the original parents new subtree.
            if self.numList[maxChild] > self.numList[parent]:
                self.swap(parent, maxChild)
                parent = maxChild
                self.adjustHeap(parent, max)
        # If the right child wasn't in scope then only consider the left child.
        elif (leftChild < max):
            # If the left child node value is greater then swap and recursively
            # call for the original parent in its new subtree.
            if self.numList[leftChild] > self.numList[parent]:
                self.swap(parent, leftChild)
                parent = leftChild
                self.adjustHeap(parent, max)
        else:
            return


    ###
    # Function: Sort Heap
    # Param: None
    # Pre: None
    # Post: List sorted from low to high.
    ###
    def sortHeap(self):
        # Calculate start for first node with any children nodes.
        start = self.size/2 - 1
        # Adjust heap called on all nodes with children and largest
        # values are swapped to the top.
        while start >= 0:
            self.adjustHeap(start, self.size)
            start -= 1
        
        # loops set to size - 1 so that the last index location can be swapped
        # with the head of the tree each iteration and so that after swapping
        # that index will be out of scope on the adjustheap call.
        loops = int(self.size - 1)
        while loops > 0:
            # After calling each adjustHeap the larger remaining value swaps to
            # the top. this specific swap places it in the last remaining index
            # within scope for each iteration.
            self.swap(0, loops)
            # The loops parameter in the call ensure that after the previous
            # swap call places the largest remaining value at the end, it is
            # no longer accessible to be swappend back to the top.
            self.adjustHeap(0, loops)
            loops -= 1

    def appendList(self, val):
        self.numList.append(val)
        self.size += 1





