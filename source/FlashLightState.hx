package;

import lime.graphics.Image;
import lime.app.Application;
import openfl.display.BitmapData;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxG;

class FlashLightState extends FlxState {
	var testobjec:FlxSprite;
	var bg:FlxSprite;
	var flashlightglow:Float = 0.4;

	override public function create() {
		Application.current.window.setIcon(Image.fromFile('assets/images/desktop/flashlight.png'));

		super.create();
		testobjec = new FlxSprite(0, 0);
		testobjec.makeGraphic(70, 120, FlxColor.WHITE);
		testobjec.screenCenter();
		add(testobjec);
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);
		testobjec.setPosition(FlxG.mouse.x - testobjec.width / 2, FlxG.mouse.y - testobjec.height / 2);

		if (FlxG.mouse.pressed)
			flashlightglow += 0.01;
		else
			flashlightglow -= 0.01;

		if (flashlightglow > 1)
			flashlightglow = 1;

		if (flashlightglow < 0.1)
			flashlightglow = 0.1;

		if (FlxG.keys.justPressed.ESCAPE)
			FlxG.switchState(new Desktop());

		testobjec.alpha = flashlightglow;
	}
}