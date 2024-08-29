const char* main_js = 
"function SwitchPage(PageID) {\n"
"	let pages = document.getElementsByClassName('page');\n"
"	for (let index = 0; index < pages.length; index++) {\n"
"		const element = pages[index];\n"
"		element.style.display = 'none';\n"
"	}\n"
"	document.getElementById(PageID).style.display = 'block';\n"
"}\n"
;