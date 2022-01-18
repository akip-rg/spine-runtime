//
//  RGSpineSpec.h
//  RGSpine
//
//  Created by Akip Maulana on 12/05/20.
//  Copyright © 2020 Ruangguru. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RGSpineSpec : NSObject

@property (nonatomic, copy) NSString *atlas;
@property (nonatomic, copy) NSString *image;
@property (nonatomic, copy) NSString *skeleton;

- (id)initWithAtlas:(NSString*)atlas
           andImage:(NSString*)image
        andSkeleton:(NSString*)skeleton;

@end

NS_ASSUME_NONNULL_END
