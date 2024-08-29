function SwitchPage(PageID) {
	let pages = document.getElementsByClassName('page');
	for (let index = 0; index < pages.length; index++) {
		const element = pages[index];
		element.style.display = 'none';
	}
	document.getElementById(PageID).style.display = 'block';
}
