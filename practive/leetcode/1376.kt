fun numOfMinutes(n: Int, headID: Int, manager: IntArray, informTime: IntArray): Int {
    val resultList = MutableList(n) { -1 }
    for (index in 0 until n) {
        initManager(index, resultList, manager, informTime)
    }
    return resultList.max() ?: 0
}

private fun initManager(
    index: Int,
    resultList: MutableList<Int>,
    manager: IntArray,
    informTime: IntArray
) {
    if (resultList[index] == -1) {
        if (manager[index] == -1) {
            resultList[index] = 0
        } else {
            if (resultList[manager[index]] == -1) {
                initManager(manager[index], resultList, manager, informTime)
            }
            resultList[index] = resultList[manager[index]] + informTime[manager[index]]
        }
    }
}