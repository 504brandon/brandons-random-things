package;

import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.FlxSprite;
import lime.graphics.Image;
import lime.app.Application;
import flixel.FlxState;

class CookieClickerState extends FlxState {
	var cookie:FlxSprite;
	var click_text:FlxText;
	var cookies_clicked:Int;
	var autoclicker:Bool = false;

	override function create() {
		super.create();
		Application.current.window.setIcon(Image.fromFile('assets/images/desktop/cookie.png'));

		var bg:FlxSprite = new FlxSprite(0, 0).loadGraphic("assets/images/cookie clicker/backround v1.png");
		bg.antialiasing = true;
		bg.screenCenter();
		bg.scale.set(1.3, 2);
		add(bg);

		var frames = FlxAtlasFrames.fromSparrow("assets/images/cookie clicker/cookie.png", "assets/images/cookie clicker/cookie.xml");

		cookie = new FlxSprite(0, 0);
		cookie.frames = (frames);
		cookie.animation.addByPrefix('idle', 'cookie static');
		cookie.animation.addByPrefix('press', 'cookie press', 54, false);
		cookie.animation.play('idle');
		cookie.antialiasing = true;
		cookie.screenCenter();
		cookie.pixelPerfectPosition = true;
		add(cookie);

		click_text = new FlxText(601.2, 50, 0, "digga bye bye", 30);
		click_text.pixelPerfectPosition = true;
		click_text.borderColor = FlxColor.BLACK;
		click_text.borderSize = 3;
		click_text.borderStyle = OUTLINE;
		add(click_text);

		if (FlxG.save.data.cookies_clicked != cookies_clicked)
			cookies_clicked = FlxG.save.data.cookies_clicked;
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);
		click_text.text = "" + cookies_clicked;

		if (FlxG.keys.justPressed.TAB){
			if (!autoclicker)
				autoclicker = true;
			else 
				autoclicker = false;
		}

			if (FlxG.keys.justPressed.E || FlxG.mouse.overlaps(cookie) && FlxG.mouse.justPressed || FlxG.mouse.overlaps(cookie) && autoclicker) {
			cookies_clicked++;
			FlxG.save.data.cookies_clicked = cookies_clicked;
			FlxG.save.flush();
			trace("you have pressed " + cookies_clicked + " times");

			cookie.animation.play('press');
		}

    if (FlxG.keys.justPressed.ESCAPE)
        FlxG.switchState(new Desktop());
	}
}