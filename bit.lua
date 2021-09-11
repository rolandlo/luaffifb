local bit = {};

local function barg(arg)
	local n = arg + 6755399441055744.0;
	return (0x00000000FFFFFFFF & n);
end

local function bsarg(sarg)
	local n = barg(sarg) & 31;
	return n;
end

function bit.tobit(arg)
	return barg(arg);
end

function bit.bnot(arg)
	local b = barg(arg);
	return (0x00000000FFFFFFFF&(~barg(b)));
end

function bit.band(...)
	local args = {...};
	local b = barg(args[1]);
	local n_args = #args;
	for i = n_args, 2, -1 do
		b = b&barg(args[i]);
	end
	return b;
end

function bit.bor(...)
	local args = {...};
	local b = barg(args[1]);
	local n_args = #args;
	for i = n_args, 2, -1 do
		b = b|barg(args[i]);
	end
	return b;
end

function bit.bxor(...)
	local args = {...};
	local b = barg(args[1]);
	local n_args = #args;
	for i = n_args, 2, -1 do
		b = b~barg(args[i]);
	end
	return b;
end

function bit.lshift(arg, n)
	local b = barg(arg);
	local s = bsarg(n);
	local x = (((b)<<s)&0x00000000FFFFFFFF);
	return x;
end

function bit.rshift(arg, n)
	local b = barg(arg);
	local s = bsarg(n);
	return b >> s;
end

function bit.arshift(arg, n)
	local b = barg(arg);
	local s = bsarg(n);
	local msb_n = b & 0x80000000;
	for i = 1, s, 1 do
		b = ((b >> 1)|msb_n);
	end
	return b;
end

function bit.rol(arg, n)
	local b = barg(arg);
	local s = bsarg(n);
	local l = (b << s) & 0x00000000FFFFFFFF
	local r = (b >> (32-s)) & 0x00000000FFFFFFFF
	return l|r;
end

function bit.ror(arg, n)
	local b = barg(arg);
	local s = bsarg(n);
	local l = (b >> s) & 0x00000000FFFFFFFF
	local r = (b << (32-s)) & 0x00000000FFFFFFFF
	return l|r;
end

function bit.bswap(arg)
	local b = barg(arg);
	local one = (b >> 24) & 0x00000000FFFFFFFF;
	local two = ((b >> 8) & 0xff00) & 0x00000000FFFFFFFF;
	local three = ((b & 0xff00) << 8) & 0x00000000FFFFFFFF;
	local four = (b << 24) & 0x00000000FFFFFFFF;
	return one|two|three|four;
end

function bit.tohex(arg, n)
	local nn = 8;
	if (n ~= nil and type(n) == 'number') then
		nn = n;
	end
	local b = barg(arg);
	local s = bsarg(nn);
	if (s > 8) then
		s = 8;
	elseif (s < 0) then
		s = -s;
	end
	local fmt = '%0'..s..'X';
	local sh = (8 - s)*4;
	local x = ((b << sh) & 0x00000000FFFFFFFF);
	x = ((x >> sh) & 0x00000000FFFFFFFF);
	return string.format(fmt, x);
end

--[[
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "BARG(4294967295)", barg(4294967295));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "BNOT(0XFFFFFFFF)", string.format("%08X", bit.bnot(0XFFFFFFFF)));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "BNOT(0X00000000)", string.format("%08X", bit.bnot(0X00000000)));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "BNOT(-1)", string.format("%08X", bit.bnot(-1)));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "BNOT(0x12345678)", string.format("%08X", bit.bnot(0x12345678)));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "BAND(1)", bit.band(1));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "BOR(1)", bit.bor(1));
print(debug.getinfo(1).source, debug.getinfo(1).currentline,
									"BAND(1, 3, 7, 1, 15, 31, 127, 255, 2)", bit.band(1, 3, 7, 1, 15, 31, 127, 255, 2));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "BOR(1, 2, 255)", bit.bor(1, 2, 255));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "BXOR(3, 4)", bit.bxor(3, 4));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "RSHIFT(0x87654321,12)", string.format("%08X", bit.rshift(0x87654321,12)));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "LSHIFT(0x87654321,12)", string.format("%08X", bit.lshift(0x87654321,12)));
local ar = bit.arshift(0x87654321, 12);
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "ARSHIFT(0x87654321, 12)", string.format("%08X", ar));
ar = bit.arshift(256, 8);
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "ARSHIFT(256, 8)", string.format("%08X", ar));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "ROL(0x12345678,12)", string.format("%08X", bit.rol(0x12345678,12)));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "ROR(0x12345678,12)", string.format("%08X", bit.ror(0x12345678,12)));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "BSWAP(0x12345678)", string.format("%08X", bit.bswap(0x12345678)));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "BSWAP(0x78563412)", string.format("%08X", bit.bswap(0x78563412)));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "TOHEX(1)", bit.tohex(1));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "TOHEX(-1)", bit.tohex(-1));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "TOHEX(0xffffffff)", bit.tohex(0xffffffff));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "TOHEX(-1, -8)", bit.tohex(-1, -8));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "TOHEX(0x21, 4)", bit.tohex(0x21, 4));
print(debug.getinfo(1).source, debug.getinfo(1).currentline, "TOHEX(0x87654321, 4)", bit.tohex(0x87654321, 4));
--]]

return bit;
