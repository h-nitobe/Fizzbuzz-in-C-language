#! /usr/bin/bash
#
#       @file           fizzbuzzRE2.sh
#       @brief          正規表現で FizzBuzz
#       @author         唯物是真 @Scaled_Wurm
#                       https://sucrose.hatenablog.com/entry/2018/02/28/231413
#       @date           2018/02/28
#       @details        2024/01/22 modefied by 新渡戸広明
#                       chmod +x fizzbuzzRE2.sh を忘れずに
#
seq 1 100 | perl -pe 's/^(\d*[05])$/$1Buzz/;s/^(?>([0369]|([147](?1)*)(?:([258](?1)*)|(?2){2})|(?3)(?:(?2)|(?3){2})))+(?=\D)/$1Fizz/;s/^\d+(?=B|F)//;s/\n/ /';echo ""
