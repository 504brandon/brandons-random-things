package;

import lime.app.Application;
import openfl.Assets;
import flixel.system.FlxSound;
import flixel.FlxG;
import flixel.FlxState;
import flixel.input.keyboard.FlxKeyboard;

class RhythmGameState extends FlxState {
	var curSong:String = 'bopeebo';
	var song:FlxSound;
	var notes:Array<Note>;
	var currentNote:Note;
	var score:Int;

	override public function create():Void {
		song = new FlxSound();
		if (Assets.exists('assets/songs/$curSong.ogg'))
			song.loadEmbedded('assets/songs/$curSong.ogg');
		else{
			FlxG.switchState(new Desktop());
		}
		song.play();

		notes = new Array<Note>();
		// populate the notes array with Note objects representing when the notes will appear in the song
		// this could be done manually, or by parsing a file containing the song's note data

		currentNote = notes.shift();
		score = 0;
	}

	override public function update(elapsed:Float):Void {
		super.update(elapsed);

		if (song.time >= currentNote.time) {
			// note is on screen, wait for player input
			if (FlxG.keys.justPressed.SPACE) {
				// player hit the note
				score++;
				currentNote = notes.shift();
			}
		}
	}
}

class Note {
	public var time:Float;

	public function new(time:Float) {
		this.time = time;
	}
}