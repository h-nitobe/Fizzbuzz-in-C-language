#=
	@file		FizzBuzzJulia.jl
	@brief		JuliaŒ¾Œê‚ÅFizzBuzz
	@author		V“nŒËL–¾
	@date		2023/01/07
	@details	FizzBuzz‚ğJuliaŒ¾Œê‚ÅÀ‘•‚·‚é
=#

function fizzbuzz(max)
        for i in 1:max
                msg = "Fizz" ^ (i % 3 == 0) * "Buzz" ^ (i % 5 == 0)
                print(isempty(msg) ? i : msg , " ")
        end
end

fizzbuzz(100)
