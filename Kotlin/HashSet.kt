import kotlin.Array

fun main() {
    val input = readLine()?.split(" ")!!
    val set: HashSet<String> = HashSet()

    input.forEach {
        set.add(it)
    }
    for (i in set){
        print("$i ")
    }
}