const puppeteer = require("puppeteer");

async function takeScreenshot(data) {
	const browser = await puppeteer.launch({
		defaultViewport: {
			width: data.viewport.width || 1920,
			height: data.viewport.height || 900,
		},
	});

	const page = await browser.newPage();
	if (!data.url) {
		console.error("No Valid URL Provided");
		return;
	}

	await page.goto(data.url, { waitUntil: "networkidle2" });

	const buffer = await page.screenshot({
		path: "./screenshot.png",
		fullPage: true,
	});

	await page.close();
	await browser.close();
}

function main() {
	const data = {
		url: "https://duckduckgo.com/",
		viewport: {
			width: 1336,
			height: 768,
		},
	};

	takeScreenshot(data)
		.then(() => {
			console.log("Screenshot taken");
		})
		.catch((err) => {
			console.log("Error occured!");
			console.dir(err);
		});
}

main();
