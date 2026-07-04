// Helper function: check if an ID is in friends
bool isFriend(int* friends, int friendsSize, int id) {
    for (int i = 0; i < friendsSize; i++) {
        if (friends[i] == id) return true;
    }
    return false;
}

// Main required function
int* recoverOrder(int* order, int orderSize, int* friends, int friendsSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * friendsSize);
    int idx = 0;

    for (int i = 0; i < orderSize; i++) {
        if (isFriend(friends, friendsSize, order[i])) {
            result[idx++] = order[i];
        }
    }

    *returnSize = idx;
    return result;
}