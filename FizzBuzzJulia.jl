#=
	@file		FizzBuzzJulia.jl
	@brief		Julia�����FizzBuzz
	@author		�V�n�ˍL��
	@date		2023/01/07
	@details	FizzBuzz��Julia����Ŏ�������
=#

function fizzbuzz(max)
        for i in 1:max
                msg = "Fizz" ^ (i % 3 == 0) * "Buzz" ^ (i % 5 == 0)
                print(isempty(msg) ? i : msg , " ")
        end
end

fizzbuzz(100)
