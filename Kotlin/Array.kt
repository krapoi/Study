import kotlin.Array

class Array {
}

fun main() {
    var intArray= arrayOf<Int>(10,3,21,222,5215,23213,1)
    println(intArray[2]) // 출력 : 3
    var array = arrayOfNulls<Int>(5)

    array[1] = 2323
    println(array[1]) //2323
    println(array[2]) //null

    var i : Int = 12
    var long:Long = i.toLong()
    println(long)
    println(i)
}