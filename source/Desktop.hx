package;

import flixel.util.FlxColor;
import flixel.FlxG;
import openfl.display.BitmapData;
import flixel.FlxSprite;
import flixel.FlxState;

using StringTools;

class Desktop extends FlxState {
	var bg:FlxSprite;
	var flashlight:FlxSprite;
	var cookie:FlxSprite;

	override function create() {
		#if polymod
		polymod.Polymod.init({
			modRoot: "mods",
			dirs: coolStringFile(sys.io.File.getContent('./mods/modList.txt')),
			frameworkParams: {
				assetLibraryPaths: [
					// All my homies hate libraries
					"images" => "assets/images",
					"sounds" => "assets/sounds"
				]
			}
		});
		#end
		super.create();
		FlxG.mouse.enabled = true;
		FlxG.mouse.visible = true;

		bg = new FlxSprite(0, 0);
		#if windows
		bg.loadGraphic(BitmapData.fromFile('${Sys.getEnv("AppData")}\\Microsoft\\Windows\\Themes\\TranscodedWallpaper'));
		#else
		bg.makeGraphic(FlxG.height, FlxG.width, FlxColor.WHITE);
		#end
		bg.screenCenter();
		bg.scrollFactor.set(0, 0);
		bg.antialiasing = true;
		bg.updateHitbox();
		add(bg);

		flashlight = new FlxSprite(-10, -10);
		flashlight.loadGraphic('assets/images/desktop/flashlight.png');
		flashlight.scale.set(0.5, 0.5);
        flashlight.updateHitbox();
		add(flashlight);

		cookie = new FlxSprite(140, -40);
		cookie.loadGraphic('assets/images/desktop/cookie.png');
		cookie.scale.set(0.4, 0.4);
        cookie.updateHitbox();
		add(cookie);
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		if (FlxG.mouse.overlaps(flashlight) && FlxG.mouse.pressed)
			FlxG.switchState(new FlashLightState());

		if (FlxG.mouse.overlaps(cookie) && FlxG.mouse.pressed)
			FlxG.switchState(new CookieClickerState());
	}

	public static function coolStringFile(path:String):Array<String>
		return [for (line in path.trim().split('\n')) line.trim()];
}
