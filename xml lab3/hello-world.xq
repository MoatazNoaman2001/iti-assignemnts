declare function local:absolute-value($num as xs:integer) as xs:integer {
    if ($num lt 0) then -$num else $num
};

declare function local:concat-strings($str1 as xs:string, $str2 as xs:string) as xs:string{
  concat($str1 ,$str2)
};

declare function local:teamSize($team) {
  count($team/Employee)
};

declare function local:checkExperience($team) {
  every $emp in $team/Employee satisfies xs:decimal($emp/@years) > 5
};


local:absolute-value(-5), local:absolute-value(10),
local:concat-strings("hello", "world!"),

for $employee in doc("team.xml")//Employee[@years < 2]
return $employee/Name,

for $employee in doc("team.xml")//Employee
order by $employee/@id descending
return <Sorted Name="{$employee/Name}" ID="{$employee/@id}"/>,



for $team in doc("Team1.xml")//Team
for $emp in $team//Employee
let $size := local:teamSize($emp)
where $size > 0
return 
  <Employee name="{string($emp/Name)}" EmployeeNumbers="{string($size)}"/>,
  
let $team := doc("team.xml")/Team
return 
  if (local:checkExperience($team)) then
    "YES"
  else
    "NO",

let $projects := doc("projects.xml")//Project
let $team := doc("team.xml")//Employee

for $proj in $projects
let $category := $proj/Category
let $assignedEmployees := 
    for $emp in $team
    where some $exp in $emp/Expertise satisfies $exp = $category
    return $emp/Name
return 
  <Assignment proj="{string($proj/Name)}">
    {
      for $emp in $assignedEmployees
      return <Name>{string($emp)}</Name>
    }
  </Assignment>
