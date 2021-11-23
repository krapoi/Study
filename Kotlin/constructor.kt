class constructor(var name:String, var age:Int) {
    init {
        println("이름 : ${this.name}, 나이 : ${this.age}")
    }

    constructor(name: String):this(name,18){
        println()
    }

}

fun main() {
    var a = constructor("a", 17)
    var b = constructor("b", 18)
    var c = constructor("c", 19)

    var d = constructor("d")
    var e = constructor("e")
    var f = constructor("f")


}