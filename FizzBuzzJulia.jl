#=
	@file		FizzBuzzJulia.jl
	@brief		Julia言語でFizzBuzz
	@author		新渡戸広明
	@date		2023/01/07
	@details	FizzBuzzをJulia言語で実装する
=#

function fizzbuzz(max)
        for i in 1:max
                msg = "Fizz" ^ (i % 3 == 0) * "Buzz" ^ (i % 5 == 0)
                print(isempty(msg) ? i : msg , " ")
        end
end

fizzbuzz(100)
