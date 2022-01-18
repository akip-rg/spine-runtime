//
//  GLViewManager.h
//  RGSpine
//
//  Created by Nanda Julianda Akbar on 14/01/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "cocos2d.h"

NS_ASSUME_NONNULL_BEGIN

@interface GLViewManager : NSObject

+ (GLViewManager *) shared;

- (CCGLView *) getGLView:(UIView *)parent;

- (void) ejectGLView;

@end

NS_ASSUME_NONNULL_END
