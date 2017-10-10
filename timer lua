function timer(n, count) --(period, how many times repeated)
    if count > 0 then
        local iter= os.time()+n
        while iter ~= os.time() do
        end
        ontime(count)
        count = count - 1
        timer(n,count)
    end
end
function ontime(count) --execute on tick
    io.write(count,"\n") --test
end

timer(1,5) --test