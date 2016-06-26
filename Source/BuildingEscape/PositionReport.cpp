// Fill out your copyright notice in the Description page of Project Settings.

#include "BuildingEscape.h"
#include "PositionReport.h"


// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay(); // do whatever happens up the inheritance tree (i.e. ActorComponent) first 

	FString ObjectName = GetOwner()->GetName(); // hover over to see desc. GetOwner() is a method of ActorComponent class and returns a pointer to something of type Actor.  GetName() is a method of ObjectBaseUtility class and returns a string. The * dereferences that.
	FString ObjectPos = GetOwner()->GetTransform().GetLocation().ToString(); // FTransform is a struct that cotains a rotation, translation, and a scale.  GetLocation() is a method of FTransform class and returns a FVector.
	UE_LOG(LogTemp, Warning, TEXT("%s is at %s"), *ObjectName, *ObjectPos)
}


// Called every frame
void UPositionReport::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

