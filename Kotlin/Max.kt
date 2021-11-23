class Max {
}

fun main() {
    val input = readLine()
    var max = 0
    input?.forEach {
        if(max < it.toString().toInt())
            max = it.toString().toInt()
    }
    print(max)

}