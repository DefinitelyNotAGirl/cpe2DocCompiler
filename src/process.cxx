#include <JSON.hxx>
#include <HTML.hxx>
#include <util.hxx>
using html::element;
//+
//+ global
//+
std::string out = "./c2docs/out/";
std::string in = "./c2docs/generated/";
extern const char* masterStyleSheet;
extern const char* main_js;
//+
//+ static
//+
static JSON Layout;
//.
//. generate main page
//.
static void GenerateMainPage() {
	element(
		"html",
		{
			element::attribute("lang","en")
		},
		{
			element(
				"head",
				{
				},
				{
					element("meta",{element::attribute("charset","UTF-8")},""),
					element("meta",{element::attribute("name","viewport"),element::attribute("content","width=device-width, initial-scale=1.0")},""),
					element("title",{},"C+=2 Generated Documentation"),
					element("link",{element::attribute("rel","stylesheet"),element::attribute("href","../master.css")},""),
					element("link",{element::attribute("rel","stylesheet"),element::attribute("href","https://fonts.googleapis.com/css2?family=Material+Symbols+Rounded:opsz,wght,FILL,GRAD@20..48,100..700,0..1,-50..200")},""),
					element("style",{},"@import url('https://dev-cats.github.io/code-snippets/JetBrainsMono.css');* {font-family: 'Jetbrains Mono';}.material-symbols-rounded {font-variation-settings:'FILL' 1,'wght' 200,'GRAD' 0,'opsz' 24}"),
					element("style",{},masterStyleSheet)
				}
			),
			element(
				"body",
				{},
				{
					element(
						"table",
						{},
						{
							element(
								"tr",
								{},
								{
									element(
										"td",
										{},
										{([]{
											element SidebarContainer("div",{element::attribute("id","sidebar")},"");
											for(JSON& item : Layout["sidebar"].children) {
												if(item.GetString("type") != "section") {
													SidebarContainer.children.push_back(
														element(
															"button",
															{
																element::attribute("type",item.GetString("type")),
																element::attribute("class","entry"),
																element::attribute("onclick","SwitchPage('"+item.GetString("page-id")+"')")
															},
															{
																element(
																	"span",
																	{
																		element::attribute("class","entry-type")
																	},
																	item.GetString("type")
																),
																element(
																	"span",
																	{},
																	item.name
																)
															}
														)
													);
												} else {
													SidebarContainer.children.push_back(
														element(
															"div",
															{
																element::attribute("type",item.GetString("type")),
																element::attribute("class","entry section"),
															},
															item.name
														)
													);
												}
											}
											return SidebarContainer;
										})()}
									),
									element(
										"td",
										{},
										{([]{
											element ContentContainer("div",{element::attribute("id","content")},"");
											for(JSON& item : Layout["pages"].children) {
												ContentContainer.children.push_back(
													([](JSON& item){
														element content(
															"div",
															{
																element::attribute("type",item.GetString("type")),
																element::attribute("class","page"),
																element::attribute("style","display: none;"),
																element::attribute("id",item.GetString("page-id")),
															},
															""
														);
														//.
														//. construct header
														//.
														element header(
															"div",
															{
																element::attribute("class","page-header"),
															},
															{
																element(
																	"span",
																	{
																		element::attribute("class","page-header-icon material-symbols-rounded"),
																		element::attribute("style","font-variation-settings: 'FILL' 1,'wght' 700,'GRAD' 0,'opsz' 48;font-size: 280px;"),
																	},
																	"stacks"
																),
																element(
																	"div",
																	{
																		element::attribute("class","page-header-content")
																	},
																	{
																		element(
																			"div",
																			{
																				element::attribute("class","page-header-type")
																			},
																			item.GetString("type")
																		),
																		element(
																			"div",
																			{
																				element::attribute("class","page-header-name")
																			},
																			item.name
																		),
																		element(
																			"div",
																			{
																				element::attribute("class","page-header-description")
																			},
																			([](JSON& item) {
																				try {
																					return item.GetString("subtitle");
																				} catch(JSONNoSuchChild) {
																					return std::string("");
																				}
																			})(item)
																		),
																		element(
																			"div",
																			{
																				element::attribute("class","page-header-platforms")
																			},
																			{
																				element(
																					"span",
																					{
																						element::attribute("class","platform")
																					},
																					"macOS 14.5+"
																				),
																				element(
																					"span",
																					{
																						element::attribute("class","platform")
																					},
																					"Linux 6.2+"
																				),
																				element(
																					"span",
																					{
																						element::attribute("class","platform")
																					},
																					"Windows 10, 22H2+"
																				),
																				element(
																					"span",
																					{
																						element::attribute("class","platform")
																					},
																					"Windows 11"
																				),
																				element(
																					"span",
																					{
																						element::attribute("class","platform")
																					},
																					"iOS 15+"
																				),
																				element(
																					"span",
																					{
																						element::attribute("class","platform")
																					},
																					"ipadOS 15+"
																				),
																			}
																		)
																	}
																)
															}
														);
														//.
														//. construct body
														//.
														element body(
															"div",
															{
																element::attribute("class","page-body"),
															},
															""
														);
														{
															if(item.GetString("type") == "function") {
																for(JSON& child : item["overloads"].children) {
																	body.children.push_back(
																		element(
																			"div",
																			{
																			},
																			GetFileContent(child.GetString("page-content"))
																		)
																	); 
																}
															} else if(item.GetString("type") == "class") {
																body.children.push_back(
																	element(
																		"div",
																		{
																		},
																		GetFileContent(item.GetString("page-content"))
																	)
																); 
															} else if(item.GetString("type") == "article") {
																body.children.push_back(
																	element(
																		"div",
																		{
																		},
																		GetFileContent(item.GetString("page-content"))
																	)
																); 
															}
														}
														content.children.push_back(header);
														content.children.push_back(body);
														return content;
													})(item)
												);
											}
											return ContentContainer;
										})()}
									)
								}
							)
						}
					)
				}
			),
			element(
				"script",
				{},
				main_js
			)
		}
	).save(out+"main.html");
}
//.
//. process
//.
void process() {
	Layout.load(in+"layout.json");
	//std::cout << "layout: " << Layout.toString("") << std::endl;
	//for(JSON& child : Layout["pages"].children) {
	//	if(child.GetString("type") == "function") {
	//		GenerateFunctionPage(child);
	//	}
	//}
	GenerateMainPage();
}