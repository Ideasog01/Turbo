

#include "BaseCar.h"

ABaseCar::ABaseCar()
{
	PrimaryActorTick.bCanEverTick = true;

	FR_Wheel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FR_Wheel"));
	FR_Wheel->SetupAttachment(GetMesh());

	FL_Wheel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FL_Wheel"));
	FL_Wheel->SetupAttachment(GetMesh());

	BR_Wheel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BR_Wheel"));
	BR_Wheel->SetupAttachment(GetMesh());

	BL_Wheel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BL_Wheel"));
	BL_Wheel->SetupAttachment(GetMesh());

	DriverMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DriverMesh"));
	DriverMesh->SetupAttachment(GetMesh());

}

void ABaseCar::BeginPlay()
{
	Super::BeginPlay();
	
}


void ABaseCar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseCar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

