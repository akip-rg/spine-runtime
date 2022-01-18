//
//  PetsNode.h
//  students
//
//  Created by Akip Maulana on 12/05/20.
//  Copyright © 2020 Ruangguru. All rights reserved.
//

#import "cocos2d.h"
#import "spine-cocos2d-objc.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, PetsPlayState) {
    PetsPlayStatePets,
    PetsPlayStateEgg
};

typedef NS_ENUM(NSInteger, PetsNodeMode) {
    PetsNodeModeInteraction,
    PetsNodeModeIdle,
    PetsNodeModeInteractionNoBg,
    PetsNodeModeIdleNoBg
};

typedef NS_ENUM(NSInteger, PetsEggNodeMode) {
    PetsEggNodeModeIdle,
    PetsEggNodeModeInteraction1,
    PetsEggNodeModeInteraction2,
    PetsEggNodeModeInteraction3,
    PetsEggNodeModeHatch
};

typedef NS_ENUM(NSInteger, PetsEventNodeMode) {
    PetsEventNodeModeRevive,
    PetsEventNodeModeReviveNoBg,
    PetsEventNodeModeGeneral
};

@protocol PetsNodeDelegate <NSObject>
@optional
- (void)petsNodeDidCompleteAnimation:(NSString *)animation;
- (void)petsEggNodeDidCompleteAnimation:(PetsEggNodeMode)mode;
- (void)petsEventNodeDidCompleteAnimation:(PetsEventNodeMode)mode;
@end

@interface PetsNode : CCNode  {
    SkeletonAnimation *skeletonNode;
    NSString *spineAsset;
    NSString *emotion;
    PetsNodeMode mode;
}

@property (nonatomic, weak) id <PetsNodeDelegate> delegate;

// Scene initializer for create pets
+ (CCScene*)sceneForCreatePetsWithScale:(CGFloat)scale
                         andBottomSpace:(int)bottomSpace
                          andSpineAsset:(NSString*)spineAsset
                             andEmotion:(NSString*)emotion
                                andMode:(PetsNodeMode)mode
                         andProgressive:(BOOL)progressive;

+ (void) stopBackgroundSoundPets;

+ (void) pauseSoundPets;

+ (void) resumeSoundPets;

- (void) renderAnimationWithMode:(PetsNodeMode)mode
                      andEmotion:(NSString*)emotion;

- (void) renderAnimationWithMode:(PetsEggNodeMode)mode
                         andLoop:(BOOL)loop;

- (void) renderAnimationWithEvent:(PetsEventNodeMode)event
                          andLoop:(BOOL)loop;

@end

NS_ASSUME_NONNULL_END
