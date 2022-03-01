// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.
#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ILiveLinkSource.h"
#include "NeuronLiveLinkBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class NEURONLIVELINK_API UNeuronLiveLinkBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

		/**
		 * ConnectionString is like: "LocalEndpoint, IsUDP, RemoteEndpoint, RotationOrder"
		 * eg: "127.0.0.1:7002, 0, 127.0.0.1:7001, YXZ", YXZ can be lowercase.
		 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Neuron Live Link Source at runtime", Keywords = "create NeuronLiveLink source live link"), Category = "NeuronLiveLink")
		static void CreateSource( const FString& ConnectionString, FLiveLinkSourceHandle& Handle );

	/*UFUNCTION( BlueprintCallable, meta = (DisplayName = "Remove Neuron Live Link Source at runtime", Keywords = "remove NeuronLiveLink souce live link"), Category = "NeuronLiveLink" )
		static void RemoveSource( );*/

	// Generally, LiveLink system is not designed for using in c++, so I comment out this api.
	//static void RegisterNeuronLiveFrameCallback( const TSharedPtr<ILiveLinkSource> LiveSource, Function );

	/*
	 * The JointID is a ENoitomBones_PNS value.
	 */
	UFUNCTION( BlueprintCallable, Category = "NeuronLiveLink" )
		static int32 GetNeuronParentJoint( int32 JointID );

	UFUNCTION( BlueprintCallable, Category = "NeuronLiveLink" )
		static void GetAvatarNames( TArray<FName>& AvatarNames );

	UFUNCTION(BlueprintCallable, Category = "NeuronLiveLink")
		static void GetTrackerNames(TArray<FName>& TrackerNames);

	UFUNCTION(BlueprintCallable, Category = "NeuronLiveLink")
		static void GetRigidBodyNames(TArray<FName>& RigidBodyNames);

	UFUNCTION( BlueprintCallable, Category = "NeuronLiveLink" )
		static void NeuronBoneIndex ( const FName& BoneName, int32& BoneIndex );

	/**
	 * Return the motion data in UE4 coordinate system.
	 * The motion data is designed to be the combination
	 * of the inverse of the world delta transformation of parent
	 * and the world delta transformation of child.
	 * It's (PwΔ).inverse() * (CwΔ), and (CwΔ) is applied first.
	 * And the data recognize the positive x-axis of UE4 as the forward direction.
	 */
	UFUNCTION( BlueprintCallable, Category = "NeuronLiveLink" )
		static void GetNeuronFrameInUE4( const FName& AvatarName, bool& WithDisplacement, TArray<FVector>& Locations, TArray<FQuat>& Rotations );
};
