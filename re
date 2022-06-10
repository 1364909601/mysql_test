-- 检索列prod_name包含文本abc的所有行
select prod_name
from table
where prod_name REGEXP 'abc'
order by prod_name;

-- "."代表任意字符
select prod_name
from table
where prod_name REGEXP '.bc'
order by prod_name;
-- 返回的结果为：任意字符+bc 例如：abc, vbc, Xbc, abndsfbc等

--正则不区分大小写，如果要区分，在REGEXP后添加BINARY关键字

-- OR匹配
select col
from table
where col REGEXP '1000|2000';
-- 匹配文本包含"1000"或者"2000"的字符

-- 匹配多个字符[]，类似OR匹配
select col
from table
where clo REGEXP '[abc]bc';
-- 返回结果为包含'abc'当中任意一个+bc，例如：abc，bbc，cbc

-- 匹配范围[0-9]
select col
from table
where col REGEXP '[1-5]b';

-- 匹配特殊字符\\
select col
from table
where col REGXEP '\\.';
-- 匹配包含'.'的字符

-- 定位符：^：文本的开头  $：文本的结尾  [[:<:]]：词的开始   [[:>:]]：词的结尾






