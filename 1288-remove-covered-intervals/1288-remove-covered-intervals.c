int cmp(const void *a, const void *b) {
    int *x = *(int **)a;
    int *y = *(int **)b;
    if (x[0] == y[0]) {
        return y[1] - x[1];   // sort by end descending if starts equal
    }
    return x[0] - y[0];       // sort by start ascending
}

int removeCoveredIntervals(int** intervals, int intervalsSize, int* intervalsColSize) {
    qsort(intervals, intervalsSize, sizeof(int*), cmp);

    int count = 0;
    int end = 0;
    for (int i = 0; i < intervalsSize; i++) {
        if (intervals[i][1] > end) {
            count++;
            end = intervals[i][1];
        }
        // else: covered, skip
    }
    return count;
}