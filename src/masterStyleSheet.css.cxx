const char* masterStyleSheet = 
":root {\n"
"	--color-dummy: hsl(335, 100%, 40%);\n"
"	--hue-main: 267;\n"
"	--background_0: hsl(var(--hue-main), 2%, 2%);\n"
"	--background_1: hsl(var(--hue-main), 2%, 6%);\n"
"	--background_2: hsl(var(--hue-main), 2%, 10%);\n"
"	--background_3: hsl(var(--hue-main), 2%, 14%);\n"
"	--header-height: 60px;\n"
"	--sidebar-width: 25vw;\n"
"	--content-width: calc(100vw - var(--sidebar-width) - 2px);\n"
"\n"
"	--header-background-sat: 70%;\n"
"	--header-background-lit: 20%;\n"
"\n"
"	--txt-hue: 0;\n"
"	--txt-sat: 0%;\n"
"	--txt-default: hsl(var(--txt-hue),var(--txt-sat),100%);\n"
"	--txt-secondary: hsl(var(--txt-hue),var(--txt-sat),60%);\n"
"\n"
"	--sidebar-entry-type-sat: 80%;\n"
"	--sidebar-entry-type-lit: 60%;\n"
"\n"
"	--important_hue:  40;\n"
"	--important_sat: 100%;\n"
"	--important_lit:  40%;\n"
"\n"
"	--hue-article: 335;\n"
"}\n"
"\n"
"html,body {\n"
"	margin: 0;\n"
"	padding: 0;\n"
"	background: var(--background_0);\n"
"	overflow: hidden;\n"
"}\n"
"\n"
"* {\n"
"	color: var(--txt-default);\n"
"}\n"
"\n"
"#content {\n"
"	margin: 0;\n"
"	padding: 0;\n"
"	min-height: calc(100%);\n"
"	max-height: calc(100%);\n"
"	overflow: auto;\n"
"}\n"
"\n"
".page {\n"
"}\n"
"\n"
".page[type='library'] > .page-header {\n"
"	--header-background-hue: 220;\n"
"}\n"
".page[type='function'] > .page-header {\n"
"	--header-background-hue: var(--hue-function);\n"
"}\n"
".page[type='class'] > .page-header {\n"
"	--header-background-hue: var(--hue-class);\n"
"}\n"
".page[type='article'] > .page-header {\n"
"	--header-background-hue: var(--hue-article);\n"
"}\n"
"\n"
".page-header {\n"
"	padding-left: 100px;\n"
"	padding-right: 100px;\n"
"	padding-top: 50px;\n"
"	padding-bottom: 50px;\n"
"	/*\n"
"	background: linear-gradient(to bottom,\n"
"		hsl(var(--header-background-hue), var(--header-background-sat), calc(var(--header-background-lit) * 1.00)) 0%,\n"
"		hsl(var(--header-background-hue), var(--header-background-sat), calc(var(--header-background-lit) * 0.75)) 50%,\n"
"		hsl(var(--header-background-hue), var(--header-background-sat), calc(var(--header-background-lit) * 0.00)) 100%\n"
"	);\n"
"	*/\n"
"	background: linear-gradient(to bottom,\n"
"		hsl(var(--header-background-hue), var(--header-background-sat), calc(var(--header-background-lit) * 1.00)) 0%,\n"
"		hsl(var(--header-background-hue), var(--header-background-sat), calc(var(--header-background-lit) * 0.75)) 50%,\n"
"		var(--background_0) 100%\n"
"	);\n"
"}\n"
"\n"
".page-header-content {\n"
"	z-index: 0;\n"
"	position: relative;\n"
"}\n"
"\n"
".page-header-type {\n"
"	color: var(--txt-secondary);\n"
"	font-size: 24px;\n"
"	padding-bottom: 20px;\n"
"	font-weight: 600;\n"
"	z-index: 1;\n"
"}\n"
"\n"
".page-header-description {\n"
"	font-size: 18px;\n"
"	padding-bottom: 20px;\n"
"	font-weight: 600;\n"
"	z-index: 1;\n"
"}\n"
"\n"
".page-header-name {\n"
"	font-size: 32px;\n"
"	padding-bottom: 20px;\n"
"	font-weight: 600;\n"
"	z-index: 1;\n"
"}\n"
"\n"
".page-header-platforms > .platform {\n"
"	padding-right: 15px;\n"
"	margin-right:  10px;\n"
"	border-right: 2px solid white;\n"
"	font-weight: 100;\n"
"	z-index: 1;\n"
"}\n"
".page-header-platforms > .platform:last-child {\n"
"	padding-right: 0;\n"
"	margin-right:  0;\n"
"	border-right: none;\n"
"}\n"
"\n"
".page-header-icon {\n"
"	display: none;\n"
"	position: absolute;\n"
"	right: 0;\n"
"	top: 0px;\n"
"	z-index: 0;\n"
"	color: hsl(var(--header-background-hue), var(--header-background-sat), calc(var(--header-background-lit) * 1.20));\n"
"}\n"
"\n"
"body {\n"
"	height: 100vh;\n"
"}\n"
"\n"
"body > table {\n"
"	height: 100%;\n"
"	width: 100%;\n"
"	border-collapse: collapse;\n"
"}\n"
"\n"
"body > table > tbody {\n"
"	height: 100%;\n"
"}\n"
"\n"
"body > table > tbody > tr {\n"
"	height: 100%;\n"
"}\n"
"\n"
"body > table > tbody > tr > td {\n"
"	height: 100%;\n"
"	padding: 0;\n"
"	margin: 0;\n"
"}\n"
"\n"
"body > table > tbody > tr > td:first-child {\n"
"	min-width: var(--sidebar-width);\n"
"	max-width: var(--sidebar-width);\n"
"	min-height: 100%;\n"
"	max-height: 100%;\n"
"}\n"
"body > table > tbody > tr > td:last-child {\n"
"	min-width: var(--content-width);\n"
"	max-width: var(--content-width);\n"
"	min-height: 100%;\n"
"	max-height: 100%;\n"
"	padding-left: 2px;\n"
"}\n"
"\n"
".page-body {\n"
"	padding-left: 100px;\n"
"	padding-right: 100px;\n"
"	padding-top: 50px;\n"
"	padding-bottom: 50px;\n"
"}\n"
"\n"
".page-section {\n"
"	border-bottom: 1px solid white;\n"
"	font-size: 24px;\n"
"	margin-top: 50px;\n"
"	margin-bottom: 10px;\n"
"}\n"
"\n"
".important {\n"
"	border: 2px solid hsl(var(--important_hue),var(--important_sat),var(--important_lit));\n"
"	border-radius: 12px;\n"
"	padding: 20px;\n"
"	background: hsla(var(--important_hue),var(--important_sat),var(--important_lit), 30%);\n"
"	margin-top: 10px;\n"
"	margin-bottom: 10px;\n"
"}\n"
"\n"
".important > .title {\n"
"	margin-bottom: 10px;\n"
"	color: hsl(var(--important_hue),var(--important_sat),var(--important_lit));\n"
"}\n"
".important > .title::before {\n"
"	content: 'Important';\n"
"}\n"
"\n"
"#sidebar {\n"
"	background: var(--background_1);\n"
"	min-width: var(--sidebar-width);\n"
"	max-width: var(--sidebar-width);\n"
"	min-height: 100%;\n"
"	max-height: 100%;\n"
"	border-right: 2px solid white;\n"
"	overflow: auto;\n"
"}\n"
"#sidebar > .entry {\n"
"	margin-left: 10px;\n"
"	font-size: 16px !important;\n"
"	line-height: 100%;\n"
"	height: 24px;\n"
"	padding: 4px;\n"
"	display: flex;\n"
"	align-items: center;\n"
"	font-weight: 600;\n"
"	border-radius: 6px;\n"
"	width: 95%;\n"
"	background: none;\n"
"	border: none;\n"
"	outline: none;\n"
"}\n"
"#sidebar .entry[type='function'] {\n"
"	--sidebar-entry-hue: var(--hue-function);\n"
"}\n"
"#sidebar .entry[type='class'] {\n"
"	--sidebar-entry-hue: var(--hue-class);\n"
"}\n"
"#sidebar .entry[type='article'] {\n"
"	--sidebar-entry-hue: var(--hue-article);\n"
"}\n"
"#sidebar > .entry:hover {\n"
"	background: hsl(var(--sidebar-entry-hue), 60%, 40%);\n"
"}\n"
"#sidebar > .entry.section:hover {\n"
"	background: inherit;\n"
"}\n"
"#sidebar > .section {\n"
"	color: var(--txt-secondary);\n"
"}\n"
"#sidebar .entry > .entry-type {\n"
"	padding-right: 20px;\n"
"	font-weight: normal;\n"
"	font-size: 16px !important;\n"
"}\n"
"#sidebar .entry[type='function'] > .entry-type {\n"
"	--sidebar-entry-hue: var(--hue-function);\n"
"	color: hsl(var(--hue-function),var(--sidebar-entry-type-sat),var(--sidebar-entry-type-lit));\n"
"}\n"
"#sidebar .entry[type='class'] > .entry-type {\n"
"	--sidebar-entry-hue: var(--hue-class);\n"
"	color: hsl(var(--hue-class),var(--sidebar-entry-type-sat),var(--sidebar-entry-type-lit));\n"
"}\n"
"#sidebar .entry[type='article'] > .entry-type {\n"
"	--sidebar-entry-hue: var(--hue-article);\n"
"	color: hsl(var(--hue-article),var(--sidebar-entry-type-sat),var(--sidebar-entry-type-lit));\n"
"}\n"
".overload-container {\n"
"	margin-bottom: 20px;\n"
"}\n"
".overload-content {\n"
"	background: var(--background_2);\n"
"	border-bottom-right-radius: 12px;\n"
"	border-bottom-left-radius: 12px;\n"
"	padding: 4px;\n"
"	padding-left: 12px;\n"
"	padding-right: 12px;\n"
"}\n"
".overload-title {\n"
"	background: var(--background_3);\n"
"	border-top-right-radius: 12px;\n"
"	border-top-left-radius: 12px;\n"
"	padding: 4px;\n"
"	padding-left: 12px;\n"
"	padding-right: 12px;\n"
"}\n"
".overload-expression .code-class\n"
"{\n"
"	margin-right: 10px;\n"
"}\n"
".overload-symbol {\n"
"	margin-left: 40px;\n"
"	color: var(--txt-secondary);\n"
"}\n"
"\n"
":root {\n"
"	--color-dummy: hsl(0, 100%, 70%);\n"
"	--code-sat: 100%;\n"
"	--code-lit: 70%;\n"
"	--hue-parameter: 25;\n"
"	--hue-class: 267;\n"
"	--hue-variable: 304;\n"
"	--hue-function: 220;\n"
"}\n"
".code-class {\n"
"	color: hsl(var(--hue-class),var(--code-sat),var(--code-lit));\n"
"}\n"
".code-parameter {\n"
"	color: hsl(var(--hue-parameter),var(--code-sat),var(--code-lit));\n"
"}\n"
".code-variable {\n"
"	color: hsl(var(--hue-variable),var(--code-sat),var(--code-lit));\n"
"}\n"
".code-function {\n"
"	color: hsl(var(--hue-function),var(--code-sat),var(--code-lit));\n"
"}\n"
"\n"
":root {\n"
"	--class-memory-pixel-height: 20px;\n"
"}\n"
".class-memory-header {\n"
"	padding: 10px;\n"
"	font-size: 32px;\n"
"	text-align: center;\n"
"}\n"
".class-memory-item {\n"
"	padding: 10px;\n"
"	border: 2px solid black;\n"
"	text-align: center;\n"
"	position: relative;\n"
"}\n"
".class-memory .class-memory-item:nth-child(2) {\n"
"	border-top-left-radius: 12px;\n"
"	border-top-right-radius: 12px;\n"
"}\n"
".class-memory .class-memory-item:last-child {\n"
"	border-bottom-left-radius: 12px;\n"
"	border-bottom-right-radius: 12px;\n"
"}\n"
".class-memory-variable {\n"
"	background: hsl(var(--hue-variable),100%,10%);\n"
"}\n"
".class-memory-padding {\n"
"	background: hsl(var(--hue-main),20%,10%);\n"
"}\n"
".class-memory-offset {\n"
"    position: absolute;\n"
"    top: calc(100% - 8.5px);\n"
"    width: 100%;\n"
"    font-size: 16px;\n"
"    height: 20px;\n"
"    line-height: 20px;\n"
"    z-index: 1;\n"
"}\n"
"\n"
".class-member-container {\n"
"	margin-bottom: 20px;\n"
"}\n"
".class-member-content {\n"
"	background: var(--background_2);\n"
"	border-bottom-right-radius: 12px;\n"
"	border-bottom-left-radius: 12px;\n"
"	padding: 4px;\n"
"	padding-left: 12px;\n"
"	padding-right: 12px;\n"
"}\n"
".class-member-title {\n"
"	background: var(--background_3);\n"
"	border-top-right-radius: 12px;\n"
"	border-top-left-radius: 12px;\n"
"	padding: 4px;\n"
"	padding-left: 12px;\n"
"	padding-right: 12px;\n"
"}\n"
"\n"
".function-page-link {\n"
"    font-size: inherit;\n"
"    padding: 0;\n"
"    background: none;\n"
"    outline: none;\n"
"    border: none;\n"
"    cursor: pointer;\n"
"    color: hsl(var(--hue-function),var(--code-sat),var(--code-lit));\n"
"    margin: 0;\n"
"}\n"
;