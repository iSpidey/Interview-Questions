var removeNthFromEnd = function(head, n) {
    const listArr = []
    let pointer = head
    
    while (pointer) {
        listArr.push(pointer)
        pointer = pointer.next
    }

    const removeIndex = listArr.length - n

    const prevIndex = removeIndex - 1;
    const nextIndex = removeIndex + 1;
    
    const nextNode = listArr[nextIndex] || null
    const prevNode = listArr[prevIndex] || null
    
    if (removeIndex === 0) {
        if (nextNode) {
            listArr[0].val = nextNode.val
            listArr[0].next = nextNode.next
        } else {
            return head.next
        }
    
        return head
    }
    
    prevNode.next = nextNode

    return head
};
