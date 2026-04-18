@echo off
echo Compiling files...
g++ -std=c++20 correct.cpp -o correct.exe
g++ -std=c++20 gen.cpp -o gen.exe
g++ -std=c++20 wrong.cpp -o wrong.exe

set /a i=1
:loop
    gen.exe > input.txt
    correct.exe < input.txt > correct_ans.txt
    wrong.exe < input.txt > output.txt
    
    fc /w output.txt correct_ans.txt > nul
    if errorlevel 1 goto fail
    
    echo Passed test: %i%
    set /a i+=1
    goto loop

:fail
echo.
echo ========================================
echo WA FOUND ON TEST %i%!
echo ========================================
echo [THE INPUT THAT BROKE YOUR CODE]:
type ST_input.txt
echo ========================================
echo [YOUR WRONG ANSWER]:
type ST_output.txt
echo ========================================
echo [THE CORRECT ANSWER]:
type correct_ans.txt
echo.