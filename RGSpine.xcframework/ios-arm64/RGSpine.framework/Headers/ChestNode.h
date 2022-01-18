//
//  ChestNode.h
//  students
//
//  Created by Akip Maulana on 02/06/20.
//  Copyright © 2020 Ruangguru. All rights reserved.
//

#import "cocos2d.h"
#import "spine-cocos2d-objc.h"


NS_ASSUME_NONNULL_BEGIN

@protocol ChestNodeDelegate <NSObject>
@optional
- (void)chestNodeDidCompleteAnimation:(NSString *)animation;
@end

@interface ChestNode : CCNode  {
    SkeletonAnimation *skeletonNode;
}

@property (nonatomic, weak) id <ChestNodeDelegate> delegate;

// Scene initializer for create pets
+ (CCScene*)sceneForCreateChestWithScale:(double)scale
                         withBottomSpace:(int)bottomSpace;

+ (void) stopRenderChest;

- (void) renderAnimationWithName:(NSString*)name;

- (void) changeColorSlot:(NSString *)slotName
                andColor:(spColor *)color;

@end

NS_ASSUME_NONNULL_END

