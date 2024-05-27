#include "Mover.h"

UMover::UMover()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UMover::BeginPlay()
{
	Super::BeginPlay();
}


void UMover::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	AActor* owner = GetOwner();
	FString name = owner->GetActorNameOrLabel();
	FString location = owner->GetActorLocation().ToCompactString();
	UE_LOG(LogTemp, Log, TEXT("Mover Owner: %s | Location: %s"), *name, *location);
}

