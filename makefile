OBJS	= DemoMain.o Ambush.o Army.o BattleStrategy.o Flanking.o Fortification.o Legion.o LegionFactory.o LegionUnit.o OpenFieldArtillery.o OpenFieldCavalry.o OpenFieldFactory.o OpenFieldInfantry.o RiverbankArtillery.o RiverbankCavalry.o RiverbankFactory.o RiverbankInfantry.o TacticalMemento.o WarArchives.o WoodlandArtillery.o WoodlandCavalry.o WoodlandFactory.o WoodlandInfantry.o
SOURCE	= DemoMain.cpp Ambush.cpp Army.cpp BattleStrategy.cpp Flanking.cpp Fortification.cpp Legion.cpp LegionFactory.cpp LegionUnit.cpp OpenFieldArtillery.cpp OpenFieldCavalry.cpp OpenFieldFactory.cpp OpenFieldInfantry.cpp RiverbankArtillery.cpp RiverbankCavalry.cpp RiverbankFactory.cpp RiverbankInfantry.cpp TacticalMemento.cpp WarArchives.cpp WoodlandArtillery.cpp WoodlandCavalry.cpp WoodlandFactory.cpp WoodlandInfantry.cpp
HEADER	= Ambush.h Army.h Artillery.h BattleStrategy.h Cavalry.h Flanking.h Fortification.h Infantry.h Legion.h LegionFactory.h LegionUnit.h OpenFieldArtillery.h OpenFieldCavalry.h OpenFieldFactory.h OpenFieldInfantry.h RiverbankArtillery.h RiverbankCavalry.h RiverbankFactory.h RiverbankInfantry.h TacticalMemento.h WarArchives.h WoodlandArtillery.h WoodlandCavalry.h WoodlandFactory.h WoodlandInfantry.h
OUT	= a.out
FLAGS	= -g3 -c -Wall
LFLAGS	= 
CC	= g++

all:	a.out

a.out: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

DemoMain.o: DemoMain.cpp
	$(CC) $(FLAGS) DemoMain.cpp -lcppunit

Ambush.o: Ambush.cpp
	$(CC) $(FLAGS) Ambush.cpp -lcppunit

Army.o: Army.cpp
	$(CC) $(FLAGS) Army.cpp -lcppunit

BattleStrategy.o: BattleStrategy.cpp
	$(CC) $(FLAGS) BattleStrategy.cpp -lcppunit

Flanking.o: Flanking.cpp
	$(CC) $(FLAGS) Flanking.cpp -lcppunit

Fortification.o: Fortification.cpp
	$(CC) $(FLAGS) Fortification.cpp -lcppunit

Legion.o: Legion.cpp
	$(CC) $(FLAGS) Legion.cpp -lcppunit

LegionFactory.o: LegionFactory.cpp
	$(CC) $(FLAGS) LegionFactory.cpp -lcppunit

LegionUnit.o: LegionUnit.cpp
	$(CC) $(FLAGS) LegionUnit.cpp -lcppunit

OpenFieldArtillery.o: OpenFieldArtillery.cpp
	$(CC) $(FLAGS) OpenFieldArtillery.cpp -lcppunit

OpenFieldCavalry.o: OpenFieldCavalry.cpp
	$(CC) $(FLAGS) OpenFieldCavalry.cpp -lcppunit

OpenFieldFactory.o: OpenFieldFactory.cpp
	$(CC) $(FLAGS) OpenFieldFactory.cpp -lcppunit

OpenFieldInfantry.o: OpenFieldInfantry.cpp
	$(CC) $(FLAGS) OpenFieldInfantry.cpp -lcppunit

RiverbankArtillery.o: RiverbankArtillery.cpp
	$(CC) $(FLAGS) RiverbankArtillery.cpp -lcppunit

RiverbankCavalry.o: RiverbankCavalry.cpp
	$(CC) $(FLAGS) RiverbankCavalry.cpp -lcppunit

RiverbankFactory.o: RiverbankFactory.cpp
	$(CC) $(FLAGS) RiverbankFactory.cpp -lcppunit

RiverbankInfantry.o: RiverbankInfantry.cpp
	$(CC) $(FLAGS) RiverbankInfantry.cpp -lcppunit

TacticalMemento.o: TacticalMemento.cpp
	$(CC) $(FLAGS) TacticalMemento.cpp -lcppunit

WarArchives.o: WarArchives.cpp
	$(CC) $(FLAGS) WarArchives.cpp -lcppunit

WoodlandArtillery.o: WoodlandArtillery.cpp
	$(CC) $(FLAGS) WoodlandArtillery.cpp -lcppunit

WoodlandCavalry.o: WoodlandCavalry.cpp
	$(CC) $(FLAGS) WoodlandCavalry.cpp -lcppunit

WoodlandFactory.o: WoodlandFactory.cpp
	$(CC) $(FLAGS) WoodlandFactory.cpp -lcppunit

WoodlandInfantry.o: WoodlandInfantry.cpp
	$(CC) $(FLAGS) WoodlandInfantry.cpp -lcppunit

clean:
	rm -f $(OBJS) $(OUT)

run: a.out
	./a.out

valgrind: a.out
	valgrind a.out

valgrind_leakcheck: a.out
	valgrind --leak-check=full a.out

valgrind_extreme: a.out
	valgrind --leak-check=full --show-leak-kinds=all --leak-resolution=high --track-origins=yes --vgdb=yes a.out
