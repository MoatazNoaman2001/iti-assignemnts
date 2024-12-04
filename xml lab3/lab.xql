declare function local:absolute-value($num as xs:integer) as xs:integer {
    if ($num lt 0) then -$num else $num
};

local:absolute-value(-5), local:absolute-value(10)