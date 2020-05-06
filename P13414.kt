fun main() {
    val q = LinkedHashSet<String>()
    val temp = readLine().toString().split(' ')
    val K = temp[0].toInt()
    val L = temp[1].toInt()

    for(i in 0 until L) {
        val n = readLine().toString()
        if(q.contains(n)) {
            q.remove(n)
        }
        q.add(n)
    }

    var j = 0
    val it = q.iterator()
    while(it.hasNext()) {
        j++
        println(it.next())
        if(j > K-1) break
    }
}