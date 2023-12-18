extends Node2D

@onready var summator: Summator = Summator.new()
@onready var deez: Deez = Deez.new()

# Called when the node enters the scene tree for the first time.
func _ready():
	summator.add(5)
	summator.add(11)
	summator.add(3)
	print(summator.get_total())
	print(deez.get_deez())
