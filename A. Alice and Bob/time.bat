@echo off
setlocal enabledelayedexpansion

rem Record start time in hundredths of a second
for /f "tokens=1-4 delims=:.," %%a in ("%time%") do (
    set /a "start=(((%%a*60)+%%b)*60+%%c)*100+%%d"
)

rem Run the program with input redirected and hide output
main.exe < input.kp >nul 2>&1

rem Record end time in hundredths of a second
for /f "tokens=1-4 delims=:.," %%a in ("%time%") do (
    set /a "end=(((%%a*60)+%%b)*60+%%c)*100+%%d"
)

rem Calculate elapsed time
set /a elapsed=end - start
if !elapsed! lss 0 set /a elapsed+=8640000

rem Convert hundredths of a second to milliseconds and seconds
set /a ms=elapsed*10
set /a sec=ms/1000
set /a ms_remainder=ms %% 1000

echo Execution time: !ms! ms (^!sec!.!ms_remainder! sec^)

endlocal
pause
