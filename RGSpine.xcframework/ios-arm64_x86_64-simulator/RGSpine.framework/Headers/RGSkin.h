//
//  RGSkin.h
//  students
//
//  Created by Wisnu Riyan on 14/10/19.
//  Copyright © 2019 Ruangguru. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RGSkin : NSObject

@property (nonatomic, copy) NSString *skinName;
@property (nonatomic, copy) NSString *skinType;
@property (nonatomic, copy) NSString *skinStatus; // default | custom
@property (nonatomic, copy) NSString *skinPosition; // top | bottom | hair_hat | shoes

- (id)initWithName:(NSString*)name
          skinType:(NSString*)type
        skinStatus:(NSString*)skinStatus
   andSkinPosition:(NSString*)skinPosition;

@end

NS_ASSUME_NONNULL_END
