def set_tag(html_tag):
    tag = html_tag
    
    def enclosed_msg(msg):
        return f'\n<{tag}{msg}></{tag}>'

    return enclosed_msg

div = set_tag('div')
h1 = set_tag('h1')
p = set_tag('p')

html_code = div( h1('This is a heading') + p('This is a simple paragraph') )
print(html_code)
