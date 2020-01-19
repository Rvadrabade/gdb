#
# ptr
#

define pptrTest
        shell rm -rf ptrArray.txt
		set logging file ptrArray.txt
		set logging redirect on
		set logging on
		p **ptr@N
        set logging redirect off
		set logging off
end

document pptrTest
	Print in a file the full array pointed by ptr
end
