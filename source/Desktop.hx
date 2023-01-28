import flixel.util.FlxColor;
import flixel.FlxG;
import openfl.display.BitmapData;
import flixel.FlxSprite;
import flixel.FlxState;

class Desktop extends FlxState {
	var bg:FlxSprite;
	var flashlight:FlxSprite;

	override function create() {
		super.create();
		FlxG.mouse.enabled = true;
		FlxG.mouse.visible = true;

		bg = new FlxSprite(0, 0);
		#if windows
		bg.loadGraphic(BitmapData.fromFile('${Sys.getEnv("AppData")}\\Microsoft\\Windows\\Themes\\TranscodedWallpaper'));
		#else
		bg.makeGraphic(FlxG.height, FlxG.width, FlxColor.WHITE);
		#end
		add(bg);

		flashlight = new FlxSprite(-10, -10);
		flashlight.loadGraphic('assets/images/desktop/flashlight.png');
        flashlight.scale.set(0.5, 0.5);
        add(flashlight);
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		if (FlxG.mouse.overlaps(flashlight) && FlxG.mouse.pressed)
			FlxG.switchState(new FlashLightState());
	}
}
